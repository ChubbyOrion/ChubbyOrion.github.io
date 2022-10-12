// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/Button.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/button__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_Button_last_pressed_duration
{
public:
  explicit Init_Button_last_pressed_duration(::irobot_create_msgs::msg::Button & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::Button last_pressed_duration(::irobot_create_msgs::msg::Button::_last_pressed_duration_type arg)
  {
    msg_.last_pressed_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::Button msg_;
};

class Init_Button_last_start_pressed_time
{
public:
  explicit Init_Button_last_start_pressed_time(::irobot_create_msgs::msg::Button & msg)
  : msg_(msg)
  {}
  Init_Button_last_pressed_duration last_start_pressed_time(::irobot_create_msgs::msg::Button::_last_start_pressed_time_type arg)
  {
    msg_.last_start_pressed_time = std::move(arg);
    return Init_Button_last_pressed_duration(msg_);
  }

private:
  ::irobot_create_msgs::msg::Button msg_;
};

class Init_Button_is_pressed
{
public:
  explicit Init_Button_is_pressed(::irobot_create_msgs::msg::Button & msg)
  : msg_(msg)
  {}
  Init_Button_last_start_pressed_time is_pressed(::irobot_create_msgs::msg::Button::_is_pressed_type arg)
  {
    msg_.is_pressed = std::move(arg);
    return Init_Button_last_start_pressed_time(msg_);
  }

private:
  ::irobot_create_msgs::msg::Button msg_;
};

class Init_Button_header
{
public:
  Init_Button_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Button_is_pressed header(::irobot_create_msgs::msg::Button::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Button_is_pressed(msg_);
  }

private:
  ::irobot_create_msgs::msg::Button msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::Button>()
{
  return irobot_create_msgs::msg::builder::Init_Button_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__BUILDER_HPP_
