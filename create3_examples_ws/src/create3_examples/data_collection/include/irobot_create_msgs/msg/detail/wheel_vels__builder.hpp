// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/WheelVels.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/wheel_vels__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelVels_velocity_right
{
public:
  explicit Init_WheelVels_velocity_right(::irobot_create_msgs::msg::WheelVels & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::WheelVels velocity_right(::irobot_create_msgs::msg::WheelVels::_velocity_right_type arg)
  {
    msg_.velocity_right = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelVels msg_;
};

class Init_WheelVels_velocity_left
{
public:
  explicit Init_WheelVels_velocity_left(::irobot_create_msgs::msg::WheelVels & msg)
  : msg_(msg)
  {}
  Init_WheelVels_velocity_right velocity_left(::irobot_create_msgs::msg::WheelVels::_velocity_left_type arg)
  {
    msg_.velocity_left = std::move(arg);
    return Init_WheelVels_velocity_right(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelVels msg_;
};

class Init_WheelVels_header
{
public:
  Init_WheelVels_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelVels_velocity_left header(::irobot_create_msgs::msg::WheelVels::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WheelVels_velocity_left(msg_);
  }

private:
  ::irobot_create_msgs::msg::WheelVels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::WheelVels>()
{
  return irobot_create_msgs::msg::builder::Init_WheelVels_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__BUILDER_HPP_
