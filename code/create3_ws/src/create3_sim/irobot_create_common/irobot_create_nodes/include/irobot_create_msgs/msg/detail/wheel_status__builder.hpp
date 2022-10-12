// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/WheelStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/wheel_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelStatus_wheels_enabled
{
public:
  explicit Init_WheelStatus_wheels_enabled(::irobot_create_msgs::msg::WheelStatus & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::WheelStatus wheels_enabled(::irobot_create_msgs::msg::WheelStatus::_wheels_enabled_type arg)
  {
    msg_.wheels_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelStatus msg_;
};

class Init_WheelStatus_pwm_right
{
public:
  explicit Init_WheelStatus_pwm_right(::irobot_create_msgs::msg::WheelStatus & msg)
  : msg_(msg)
  {}
  Init_WheelStatus_wheels_enabled pwm_right(::irobot_create_msgs::msg::WheelStatus::_pwm_right_type arg)
  {
    msg_.pwm_right = std::move(arg);
    return Init_WheelStatus_wheels_enabled(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelStatus msg_;
};

class Init_WheelStatus_pwm_left
{
public:
  explicit Init_WheelStatus_pwm_left(::irobot_create_msgs::msg::WheelStatus & msg)
  : msg_(msg)
  {}
  Init_WheelStatus_pwm_right pwm_left(::irobot_create_msgs::msg::WheelStatus::_pwm_left_type arg)
  {
    msg_.pwm_left = std::move(arg);
    return Init_WheelStatus_pwm_right(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelStatus msg_;
};

class Init_WheelStatus_current_ma_right
{
public:
  explicit Init_WheelStatus_current_ma_right(::irobot_create_msgs::msg::WheelStatus & msg)
  : msg_(msg)
  {}
  Init_WheelStatus_pwm_left current_ma_right(::irobot_create_msgs::msg::WheelStatus::_current_ma_right_type arg)
  {
    msg_.current_ma_right = std::move(arg);
    return Init_WheelStatus_pwm_left(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelStatus msg_;
};

class Init_WheelStatus_current_ma_left
{
public:
  explicit Init_WheelStatus_current_ma_left(::irobot_create_msgs::msg::WheelStatus & msg)
  : msg_(msg)
  {}
  Init_WheelStatus_current_ma_right current_ma_left(::irobot_create_msgs::msg::WheelStatus::_current_ma_left_type arg)
  {
    msg_.current_ma_left = std::move(arg);
    return Init_WheelStatus_current_ma_right(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelStatus msg_;
};

class Init_WheelStatus_header
{
public:
  Init_WheelStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelStatus_current_ma_left header(::irobot_create_msgs::msg::WheelStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelStatus_current_ma_left(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::WheelStatus>()
{
  return irobot_create_msgs::msg::builder::Init_WheelStatus_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__BUILDER_HPP_
