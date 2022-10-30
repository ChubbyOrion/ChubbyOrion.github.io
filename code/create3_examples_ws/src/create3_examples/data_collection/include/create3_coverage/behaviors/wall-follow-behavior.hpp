// Copyright 2021 iRobot Corporation. All Rights Reserved.

#pragma once

#include "create3_coverage/behaviors/behavior.hpp"
#include "create3_examples_msgs/action/wall_follow.hpp"
#include "irobot_create_msgs/action/wall_follow.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

namespace create3_coverage {

class WallFollowBehavior : public Behavior
{
public:
    using WallFollowAction = irobot_create_msgs::action::WallFollow;
    using GoalHandleWallFollow = rclcpp_action::ClientGoalHandle<WallFollowAction>;

	struct Config
	{
		int8_t follow_side;
		int32_t sec{1};
		uint32_t nanosec{0};
	};

    WallFollowBehavior(
        Config config,
        rclcpp_action::Client<WallFollowAction>::SharedPtr wall_follow_action_client,
        rclcpp::Logger logger);

    ~WallFollowBehavior() = default;

    State execute(const Data & data) override;

    int32_t get_id() const override { return create3_examples_msgs::action::WallFollow::Feedback::WALL_FOLLOW; }

    void cleanup() override;

private:
	Config m_config;
	
    bool m_wall_follow_action_sent {false};
    GoalHandleWallFollow::SharedPtr m_wall_follow_goal_handle;
    bool m_wall_follow_goal_handle_ready {false};
    GoalHandleWallFollow::WrappedResult m_wall_follow_result;
    bool m_wall_follow_result_ready {false};

    rclcpp_action::Client<WallFollowAction>::SharedPtr m_wall_follow_action_client;
    rclcpp::Logger m_logger;
};

} // namespace create3_coverage
