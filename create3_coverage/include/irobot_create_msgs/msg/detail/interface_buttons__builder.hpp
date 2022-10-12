// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/InterfaceButtons.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/interface_buttons__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_InterfaceButtons_button_2
{
public:
  explicit Init_InterfaceButtons_button_2(::irobot_create_msgs::msg::InterfaceButtons & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::InterfaceButtons button_2(::irobot_create_msgs::msg::InterfaceButtons::_button_2_type arg)
  {
    msg_.button_2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::InterfaceButtons msg_;
};

class Init_InterfaceButtons_button_power
{
public:
  explicit Init_InterfaceButtons_button_power(::irobot_create_msgs::msg::InterfaceButtons & msg)
  : msg_(msg)
  {}
  Init_InterfaceButtons_button_2 button_power(::irobot_create_msgs::msg::InterfaceButtons::_button_power_type arg)
  {
    msg_.button_power = std::move(arg);
    return Init_InterfaceButtons_button_2(msg_);
  }

private:
  ::irobot_create_msgs::msg::InterfaceButtons msg_;
};

class Init_InterfaceButtons_button_1
{
public:
  explicit Init_InterfaceButtons_button_1(::irobot_create_msgs::msg::InterfaceButtons & msg)
  : msg_(msg)
  {}
  Init_InterfaceButtons_button_power button_1(::irobot_create_msgs::msg::InterfaceButtons::_button_1_type arg)
  {
    msg_.button_1 = std::move(arg);
    return Init_InterfaceButtons_button_power(msg_);
  }

private:
  ::irobot_create_msgs::msg::InterfaceButtons msg_;
};

class Init_InterfaceButtons_header
{
public:
  Init_InterfaceButtons_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InterfaceButtons_button_1 header(::irobot_create_msgs::msg::InterfaceButtons::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InterfaceButtons_button_1(msg_);
  }

private:
  ::irobot_create_msgs::msg::InterfaceButtons msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::InterfaceButtons>()
{
  return irobot_create_msgs::msg::builder::Init_InterfaceButtons_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__BUILDER_HPP_
