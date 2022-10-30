// Copyright 2021 iRobot Corporation. All Rights Reserved.

#include <chrono>
#include <math.h>
#include <sstream>

#include "create3_coverage/rotate_state_machine.hpp"
#include "tf2/utils.h"

namespace create3_coverage {

RotateStateMachine::RotateStateMachine(
    create3_examples_msgs::action::Rotate::Goal goal,
    rclcpp::Clock::SharedPtr clock,
    rclcpp::Logger logger,
    rclcpp_action::Client<WallFollowAction>::SharedPtr wall_follow_action_client,
    rclcpp::Publisher<TwistMsg>::SharedPtr cmd_vel_publisher,
    bool has_reflexes)
    : m_logger(logger)
{
    m_goal = goal;

    m_clock = clock;
    m_start_time = m_clock->now();
    m_has_reflexes = has_reflexes;

    m_wall_follow_action_client = wall_follow_action_client;
    m_cmd_vel_publisher = cmd_vel_publisher;
	
    m_preparing_spiral = false;

	m_last_time_printed = m_clock->now();
}

RotateStateMachine::~RotateStateMachine()
{
    this->cancel();
}

RotateStateMachine::RotateOutput RotateStateMachine::execute(const Behavior::Data& data)
{
	if (!m_current_behavior) {
        this->select_start_behavior(data);
    } else {
        this->select_next_behavior(data);
    }

    // Handle failure and success
    if (m_coverage_output.state != State::RUNNING) {
        return m_coverage_output;
    }

    m_behavior_state = m_current_behavior->execute(data);
    m_coverage_output.current_behavior = m_current_behavior->get_id();

    return m_coverage_output;
}

void RotateStateMachine::cancel()
{
    if (m_current_behavior) {
        m_current_behavior->cleanup();
        m_current_behavior.reset();
    }
}

void RotateStateMachine::select_start_behavior(const Behavior::Data& data)
{
    auto rotate_config = RotateBehavior::Config();
	rotate_config.target_rotation = m_goal.angle;
	rotate_config.angular_vel = m_goal.max_rotation_speed;
	this->goto_rotate(rotate_config);
}

void RotateStateMachine::print_state(const Behavior::Data& data) {
	auto readings = data.irIntensityVector.readings;
	std::stringstream ss;

	ss << "Irintensityvector,";
	ss << "header {sec, nanosec, frame_id},value,[";
	bool first = true;
	for (auto& reading : readings) {
		if (first) {
			first = false;
		} else {
			ss << ",";
		}
		ss << reading.header.stamp.sec;
		ss << "," << reading.header.stamp.nanosec;
		ss << "," << reading.header.frame_id;
		ss << "," << reading.value;
	}
	ss << "]";
	ss << ",Odom" << ",pose,position";
	ss << ",x," << data.pose.position.x << ",y," << data.pose.position.y << ",z," << data.pose.position.z;
	ss << ",orientation";
	ss << ",x," << data.pose.orientation.x << ",y" << data.pose.orientation.y << ",z," << data.pose.orientation.z << ",w," << data.pose.orientation.w;
	ss << ",Twist";
	ss << ",linear";
	ss << ",x," << data.twist.linear.x << ",y," << data.twist.linear.y << ",z," << data.twist.linear.z;
	ss << ",angular";
	ss << ",x," << data.twist.angular.x << ",y," << data.twist.angular.y << ",z," << data.twist.angular.z;
	ss << ",Hazards";
	bool firstHazard = true;
	ss << ",[";
	for (auto& detection : data.hazards.detections) {
		if (firstHazard) {
			firstHazard = false;
		} else {
			ss << ",";
		}
		ss << detection.header.frame_id;
	}
	ss << "]";
	
	RCLCPP_INFO(m_logger, "%s\n", ss.str().c_str());
	return;
}

void RotateStateMachine::select_next_behavior(const Behavior::Data& data)
{
	auto now = m_clock->now();
	auto duration = now - m_last_time_printed;
	bool print_duration_elapsed = duration >= m_goal.print_duration;
	if (print_duration_elapsed) {
		//this->print_state(data);
		m_last_time_printed = now;
	}
	
    // Keep going with the current behavior if it's still running
    if (m_behavior_state == State::RUNNING) {
        m_coverage_output.state = State::RUNNING;
        return;
    }

    // Check if it's time to wrap up the behavior
    bool max_runtime_elapsed = m_clock->now() - m_start_time >= m_goal.max_runtime;
    if (max_runtime_elapsed) {
        m_coverage_output.state = State::SUCCESS;
        return;
    }

    switch (m_current_behavior->get_id())
    {
        case FeedbackMsg::DRIVE_STRAIGHT:
        {
            auto rotate_config = RotateBehavior::Config();
			rotate_config.target_rotation = compute_rotation(data.pose, 90);
            rotate_config.robot_has_reflexes = m_has_reflexes;
            this->goto_rotate(rotate_config);
            break;
        }
        case FeedbackMsg::ROTATE:
        {
			this->goto_wait();
            break;
        }
        case FeedbackMsg::SPIRAL:
        {
            if (m_behavior_state == State::SUCCESS) {
                this->goto_drive_straight(DriveStraightBehavior::Config());
            } else {
                auto rotate_config = RotateBehavior::Config();
                rotate_config.robot_has_reflexes = m_has_reflexes;
                this->goto_rotate(rotate_config);
            }
            break;
        }
	case FeedbackMsg::WALL_FOLLOW:
		{
			this->goto_wait();
			break;
		}
    case FeedbackMsg::WAIT:
		{
     		this->goto_wait();
			break;
		}
    }
}

double RotateStateMachine::compute_rotation(const geometry_msgs::msg::Pose& pose, double angleDegrees)
{
    tf2::Quaternion current_orientation;
    tf2::convert(pose.orientation, current_orientation);
    
    tf2::Quaternion target_orientation;
	double angleRadians = angleDegrees * M_PI/180;
    target_orientation.setRPY(0.0, 0.0, angleRadians);

    tf2::Quaternion relative_orientation = target_orientation;// * current_orientation.inverse();
    double relative_yaw_rotation = tf2::getYaw(relative_orientation);
    return relative_yaw_rotation;
}

double RotateStateMachine::compute_evade_rotation(const geometry_msgs::msg::Pose& pose, double resolution)
{
    tf2::Quaternion current_orientation;
    tf2::convert(pose.orientation, current_orientation);

    // Add current orientation to the list of failed attempts
    double current_yaw = tf2::getYaw(current_orientation);
    m_evade_attempts.push_back(current_yaw);

    tf2::Quaternion target_orientation;
    size_t i = 0;
    // We don't want this loop to search forever.
    // Eventually, if we failed too many times, return an orientation regardless of how different it is
    // from previous attempts.
    while (i < 100) {
        // Generate a new, random, target orientation
        double random_num = static_cast<double>(rand()) / static_cast<double>(RAND_MAX);
        double random_angle = random_num * 2 * M_PI - M_PI;
        target_orientation.setRPY(0.0, 0.0, random_angle);

        // Check if the random orientation is different enough from past evade attempts
        bool valid_target = true;
        for (double angle : m_evade_attempts) {
            tf2::Quaternion attempt_orientation;
            attempt_orientation.setRPY(0.0, 0.0, angle);

            tf2::Quaternion relative_orientation = target_orientation * attempt_orientation.inverse();
            double relative_yaw = tf2::getYaw(relative_orientation);
            if (std::abs(relative_yaw) < std::abs(resolution)) {
                valid_target = false;
                break;
            }
        }

        // Exit as soon as we find a valid target orientation
        if (valid_target) {
            break;
        }
        i++;
    }

    tf2::Quaternion relative_orientation = target_orientation * current_orientation.inverse();
    double relative_yaw_rotation = tf2::getYaw(relative_orientation);
    return relative_yaw_rotation;
}

void RotateStateMachine::goto_wall_follow(const WallFollowBehavior::Config& config)
{
    m_current_behavior = std::make_unique<WallFollowBehavior>(config, m_wall_follow_action_client, m_logger); 
    m_coverage_output.state = State::RUNNING;
}

void RotateStateMachine::goto_wait()
{
	m_current_behavior = std::make_unique<WaitBehavior>(m_logger);
	m_coverage_output.state = State::RUNNING;
}

void RotateStateMachine::goto_drive_straight(const DriveStraightBehavior::Config& config)
{
    m_current_behavior = std::make_shared<DriveStraightBehavior>(config, m_cmd_vel_publisher, m_logger, m_clock);
    m_coverage_output.state = State::RUNNING;
}

void RotateStateMachine::goto_rotate(const RotateBehavior::Config& config)
{
    m_current_behavior = std::make_shared<RotateBehavior>(config, m_cmd_vel_publisher, m_logger, m_clock);
    m_coverage_output.state = State::RUNNING;
}

void RotateStateMachine::goto_spiral(const SpiralBehavior::Config& config)
{
    m_last_spiral_time = m_clock->now();
    m_current_behavior = std::make_shared<SpiralBehavior>(config, m_cmd_vel_publisher, m_logger, m_clock);
    m_coverage_output.state = State::RUNNING;
}

} // namespace create3_coverage
