// Copyright 2021 iRobot Corporation. All Rights Reserved.

#pragma once

#include <atomic>
#include <memory>
#include <mutex>

#include "create3_coverage/behaviors/behavior.hpp"
#include "create3_examples_msgs/action/wall_follow.hpp"
#include "create3_examples_msgs/action/rotate.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "irobot_create_msgs/action/dock.hpp"
#include "irobot_create_msgs/action/undock.hpp"
#include "irobot_create_msgs/action/wall_follow.hpp"
#include "irobot_create_msgs/msg/dock_status.hpp"
#include "irobot_create_msgs/msg/hazard_detection_vector.hpp"
#include "irobot_create_msgs/msg/ir_opcode.hpp"
#include "irobot_create_msgs/msg/kidnap_status.hpp"
#include "irobot_create_msgs/msg/ir_intensity_vector.hpp"
#include "irobot_create_msgs/msg/interface_buttons.hpp"
#include "irobot_create_msgs/srv/reset_pose.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

namespace create3_coverage {

class Create3CoverageNode : public rclcpp::Node
{
public:
    /** @brief Node constructor, initializes ROS 2 entities */
    Create3CoverageNode();

private:
    using InternalWallFollowAction = create3_examples_msgs::action::WallFollow;
	using InternalRotateAction = create3_examples_msgs::action::Rotate;
    using GoalHandleWallFollow = rclcpp_action::ServerGoalHandle<InternalWallFollowAction>;

    using WallFollowAction = irobot_create_msgs::action::WallFollow;
    using HazardMsg = irobot_create_msgs::msg::HazardDetectionVector;
    using KidnapMsg = irobot_create_msgs::msg::KidnapStatus;
    using OdometryMsg = nav_msgs::msg::Odometry;
    using OpCodeMsg = irobot_create_msgs::msg::IrOpcode;
    using TwistMsg = geometry_msgs::msg::Twist;
    using IrIntensityVectorMsg = irobot_create_msgs::msg::IrIntensityVector;
    using InterfaceButtonsMsg = irobot_create_msgs::msg::InterfaceButtons;

	using ResetPosSrv = irobot_create_msgs::srv::ResetPose;

    bool reflexes_setup();

    bool ready_to_start();

    rclcpp_action::GoalResponse
    handle_goal(
        const rclcpp_action::GoalUUID& uuid,
        std::shared_ptr<const InternalWallFollowAction::Goal> goal);

    rclcpp_action::CancelResponse
    handle_cancel(
        const std::shared_ptr<GoalHandleWallFollow> goal_handle);

    void handle_accepted(const std::shared_ptr<GoalHandleWallFollow> goal_handle);

    void execute(const std::shared_ptr<GoalHandleWallFollow> goal_handle);

    void hazards_callback(HazardMsg::ConstSharedPtr msg);

    void ir_opcode_callback(OpCodeMsg::ConstSharedPtr msg);

    void kidnap_callback(KidnapMsg::ConstSharedPtr msg);

    void odom_callback(OdometryMsg::ConstSharedPtr msg);

    void ir_intensity_vector_callback(IrIntensityVectorMsg::ConstSharedPtr msg);

	void interface_buttons_callback(InterfaceButtonsMsg::ConstSharedPtr msg);
	void reset_pose_callback(const rclcpp::Client<ResetPosSrv>::SharedFuture future);

    int32_t m_last_behavior;

    double m_rate_hz;
    int m_opcodes_buffer_ms;

    std::atomic<bool> m_is_running;
    std::mutex m_mutex;

    HazardMsg m_last_hazards;
    KidnapMsg m_last_kidnap;
    OdometryMsg m_last_odom;
    IrIntensityVectorMsg m_last_intensity_vector;
	InterfaceButtonsMsg m_last_interface_buttons;
    std::vector<OpCodeMsg> m_last_opcodes;
    rclcpp::Time m_last_opcodes_cleared_time;

    rclcpp_action::Server<InternalWallFollowAction>::SharedPtr m_coverage_action_server;

    rclcpp_action::Client<WallFollowAction>::SharedPtr m_wall_follow_action_client;

	rclcpp::Client<ResetPosSrv>::SharedPtr m_reset_pos_client;

    rclcpp::Publisher<TwistMsg>::SharedPtr m_cmd_vel_publisher;

    rclcpp::AsyncParametersClient::SharedPtr m_reflexes_param_client;

    rclcpp::Subscription<HazardMsg>::SharedPtr m_hazards_subscription;
    rclcpp::Subscription<KidnapMsg>::SharedPtr m_kidnap_subscription;
    rclcpp::Subscription<OdometryMsg>::SharedPtr m_odom_subscription;
    rclcpp::Subscription<OpCodeMsg>::SharedPtr m_ir_opcode_subscription;
    rclcpp::Subscription<IrIntensityVectorMsg>::SharedPtr m_ir_intensity_vector_subscription;
	rclcpp::Subscription<InterfaceButtonsMsg>::SharedPtr m_interface_buttons_subscription;

	bool m_pose_reset;
};

} // namespace create3_coverage
