// Copyright 2021 iRobot Corporation. All Rights Reserved.

#include "create3_coverage/behaviors/wait-behavior.hpp"

namespace create3_coverage {

WaitBehavior::WaitBehavior(
    rclcpp::Logger logger)
: m_logger(logger)
{
	m_buttons_init_done = false;
}

State WaitBehavior::execute(const Data & data)
{
	rclcpp::Time button1LastPressedTime(data.interfaceButtons.button_1.last_start_pressed_time);
	rclcpp::Time button2LastPressedTime(data.interfaceButtons.button_2.last_start_pressed_time);
    if (!m_buttons_init_done) {
		m_buttons_init_done = true;
		m_last_button_1_pressed_time = button1LastPressedTime;
		m_last_button_2_pressed_time = button2LastPressedTime;
	}
	
    if (button1LastPressedTime > m_last_button_1_pressed_time || button2LastPressedTime > m_last_button_2_pressed_time) {
        RCLCPP_INFO(m_logger, "Wait succeeded!");
        return State::SUCCESS;
    }

    return State::RUNNING;
}

void WaitBehavior::cleanup()
{
}

} // namespace create3_coverage
