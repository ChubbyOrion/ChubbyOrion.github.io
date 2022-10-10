// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/WheelTicks.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/wheel_ticks__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelTicks_ticks_right
{
public:
  explicit Init_WheelTicks_ticks_right(::irobot_create_msgs::msg::WheelTicks & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::WheelTicks ticks_right(::irobot_create_msgs::msg::WheelTicks::_ticks_right_type arg)
  {
    msg_.ticks_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelTicks msg_;
};

class Init_WheelTicks_ticks_left
{
public:
  explicit Init_WheelTicks_ticks_left(::irobot_create_msgs::msg::WheelTicks & msg)
  : msg_(msg)
  {}
  Init_WheelTicks_ticks_right ticks_left(::irobot_create_msgs::msg::WheelTicks::_ticks_left_type arg)
  {
    msg_.ticks_left = std::move(arg);
    return Init_WheelTicks_ticks_right(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelTicks msg_;
};

class Init_WheelTicks_header
{
public:
  Init_WheelTicks_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelTicks_ticks_left header(::irobot_create_msgs::msg::WheelTicks::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelTicks_ticks_left(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelTicks msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::WheelTicks>()
{
  return irobot_create_msgs::msg::builder::Init_WheelTicks_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__BUILDER_HPP_
