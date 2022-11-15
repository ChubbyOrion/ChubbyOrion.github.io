// Copyright 2021 iRobot Corporation. All Rights Reserved.

#pragma once

#include "create3_coverage/behaviors/behavior.hpp"
#include "create3_examples_msgs/action/wall_follow.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "rclcpp/rclcpp.hpp"

namespace create3_coverage {

class WaitBehavior : public Behavior
{
public:
    WaitBehavior(
        rclcpp::Logger logger);

    ~WaitBehavior() = default;

    State execute(const Data & data) override;

    int32_t get_id() const override { return create3_examples_msgs::action::WallFollow::Feedback::WAIT; }

    void cleanup() override;

private:
    rclcpp::Logger m_logger;

	bool m_buttons_init_done;
	rclcpp::Time m_last_button_1_pressed_time;
	rclcpp::Time m_last_button_2_pressed_time;
};

} // namespace create3_coverage
