// Copyright 2021 iRobot Corporation. All Rights Reserved.

#pragma once

#include "create3_coverage/behaviors/behavior.hpp"
#include "create3_coverage/behaviors/dock-behavior.hpp"
#include "create3_coverage/behaviors/wall-follow-behavior.hpp"
#include "create3_coverage/behaviors/wait-behavior.hpp"
#include "create3_coverage/behaviors/drive-straight-behavior.hpp"
#include "create3_coverage/behaviors/rotate-behavior.hpp"
#include "create3_coverage/behaviors/spiral-behavior.hpp"
#include "create3_coverage/behaviors/undock-behavior.hpp"
#include "create3_coverage/state.hpp"
#include "create3_examples_msgs/action/rotate.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "irobot_create_msgs/action/dock.hpp"
#include "irobot_create_msgs/action/undock.hpp"
#include "irobot_create_msgs/action/wall_follow.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

namespace create3_coverage {

class RotateStateMachine
{
public:
    using WallFollowAction = irobot_create_msgs::action::WallFollow;
    using TwistMsg = geometry_msgs::msg::Twist;

    struct RotateOutput
    {
        int32_t current_behavior;
        State state;
    };

    RotateStateMachine(
        create3_examples_msgs::action::Rotate::Goal goal,
        rclcpp::Clock::SharedPtr clock,
        rclcpp::Logger logger,
        rclcpp_action::Client<WallFollowAction>::SharedPtr wall_follow_action_client,
        rclcpp::Publisher<TwistMsg>::SharedPtr cmd_vel_publisher,
        bool has_reflexes);

    ~RotateStateMachine();

	void print_state(const Behavior::Data& data);

    RotateOutput execute(const Behavior::Data& data);

    void cancel();

private:
    using FeedbackMsg = create3_examples_msgs::action::Rotate::Feedback;

    void select_start_behavior(const Behavior::Data& data);

    void select_next_behavior(const Behavior::Data& data);

    void goto_wall_follow(const WallFollowBehavior::Config& config);

	void goto_wait();

    void goto_drive_straight(const DriveStraightBehavior::Config& config = DriveStraightBehavior::Config());

    void goto_rotate(const RotateBehavior::Config& config = RotateBehavior::Config());

    void goto_spiral(const SpiralBehavior::Config& config = SpiralBehavior::Config());

	double compute_rotation(const geometry_msgs::msg::Pose& pose, double angleDegrees);
	
    double compute_evade_rotation(const geometry_msgs::msg::Pose& pose, double resolution);

    std::shared_ptr<Behavior> m_current_behavior;
    State m_behavior_state;

    rclcpp::Time m_last_spiral_time;
    bool m_preparing_spiral;
    std::vector<double> m_evade_attempts;

    RotateOutput m_coverage_output;
    create3_examples_msgs::action::Rotate::Goal m_goal;
    rclcpp::Time m_start_time;
    bool m_has_reflexes;

    rclcpp_action::Client<WallFollowAction>::SharedPtr m_wall_follow_action_client;
    rclcpp::Publisher<TwistMsg>::SharedPtr m_cmd_vel_publisher;
    rclcpp::Logger m_logger;
    rclcpp::Clock::SharedPtr m_clock;

	rclcpp::Time m_last_time_printed;
};

} // namespace create3_coverage
