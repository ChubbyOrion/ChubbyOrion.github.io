// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/LedColor.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/led_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_LedColor_blue
{
public:
  explicit Init_LedColor_blue(::irobot_create_msgs::msg::LedColor & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::LedColor blue(::irobot_create_msgs::msg::LedColor::_blue_type arg)
  {
    msg_.blue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::LedColor msg_;
};

class Init_LedColor_green
{
public:
  explicit Init_LedColor_green(::irobot_create_msgs::msg::LedColor & msg)
  : msg_(msg)
  {}
  Init_LedColor_blue green(::irobot_create_msgs::msg::LedColor::_green_type arg)
  {
    msg_.green = std::move(arg);
    return Init_LedColor_blue(msg_);
  }

private:
  ::irobot_create_msgs::msg::LedColor msg_;
};

class Init_LedColor_red
{
public:
  Init_LedColor_red()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedColor_green red(::irobot_create_msgs::msg::LedColor::_red_type arg)
  {
    msg_.red = std::move(arg);
    return Init_LedColor_green(msg_);
  }

private:
  ::irobot_create_msgs::msg::LedColor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::LedColor>()
{
  return irobot_create_msgs::msg::builder::Init_LedColor_red();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__BUILDER_HPP_
