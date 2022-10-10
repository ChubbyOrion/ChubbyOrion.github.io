// Copyright 2021 iRobot Corporation. All Rights Reserved.

#include "create3_coverage/behaviors/wall-follow-behavior.hpp"

namespace create3_coverage {

WallFollowBehavior::WallFollowBehavior(
    Config config,								   
    rclcpp_action::Client<WallFollowAction>::SharedPtr wall_follow_action_client,
    rclcpp::Logger logger)
: m_wall_follow_action_client(wall_follow_action_client), m_logger(logger)
{
	m_config = config;
}

State WallFollowBehavior::execute(const Data & data)
{
    // We can't wall follow until we discover the wall following action server
    if (!m_wall_follow_action_client->action_server_is_ready()) {
        RCLCPP_DEBUG(m_logger, "Waiting for wall follow action server");
        return State::RUNNING;
    }

    // Send wall follow command if not already sent and if we are not waiting for result
    if (!m_wall_follow_action_sent) {
        RCLCPP_INFO(m_logger, "Sending wall following goal with args: sec %d, nanosec %u", m_config.sec, m_config.nanosec);
        auto goal_msg = WallFollowAction::Goal();
        goal_msg.follow_side = m_config.follow_side;
        goal_msg.max_runtime.sec = m_config.sec;
        goal_msg.max_runtime.nanosec = m_config.nanosec;

        auto send_goal_options = rclcpp_action::Client<WallFollowAction>::SendGoalOptions();
        send_goal_options.goal_response_callback = [this](const GoalHandleWallFollow::SharedPtr & goal_handle){
            m_wall_follow_goal_handle_ready = true;
            m_wall_follow_goal_handle = goal_handle;
        };
        send_goal_options.result_callback = [this](const GoalHandleWallFollow::WrappedResult & result){
            m_wall_follow_result_ready = true;
            m_wall_follow_result = result;
        };

        m_wall_follow_action_client->async_send_goal(goal_msg, send_goal_options);
        m_wall_follow_action_sent = true;

        return State::RUNNING;
    }

    if (m_wall_follow_goal_handle_ready && !m_wall_follow_goal_handle) {
        RCLCPP_ERROR(m_logger, "Wall following goal was rejected by server");
        return State::FAILURE;
    }

    if (m_wall_follow_result_ready) {
        if (m_wall_follow_result.code == rclcpp_action::ResultCode::SUCCEEDED) {
            RCLCPP_INFO(m_logger, "Wall following succeeded!");
            return State::SUCCESS;
        } else {
            RCLCPP_ERROR(m_logger, "Wall following failed!");
            return State::FAILURE;
        }
    }

    return State::RUNNING;
}

void WallFollowBehavior::cleanup()
{
    // This behavior is being cancelled, so send a cancel request to wall follow action server if it's running
    if (!m_wall_follow_result_ready && m_wall_follow_goal_handle_ready && m_wall_follow_goal_handle) {
        m_wall_follow_action_client->async_cancel_goal(m_wall_follow_goal_handle);
    }
}

} // namespace create3_coverage
