// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/LightringLeds.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/lightring_leds__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_LightringLeds_override_system
{
public:
  explicit Init_LightringLeds_override_system(::irobot_create_msgs::msg::LightringLeds & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::LightringLeds override_system(::irobot_create_msgs::msg::LightringLeds::_override_system_type arg)
  {
    msg_.override_system = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::LightringLeds msg_;
};

class Init_LightringLeds_leds
{
public:
  explicit Init_LightringLeds_leds(::irobot_create_msgs::msg::LightringLeds & msg)
  : msg_(msg)
  {}
  Init_LightringLeds_override_system leds(::irobot_create_msgs::msg::LightringLeds::_leds_type arg)
  {
    msg_.leds = std::move(arg);
    return Init_LightringLeds_override_system(msg_);
  }

private:
  ::irobot_create_msgs::msg::LightringLeds msg_;
};

class Init_LightringLeds_header
{
public:
  Init_LightringLeds_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LightringLeds_leds header(::irobot_create_msgs::msg::LightringLeds::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LightringLeds_leds(msg_);
  }

private:
  ::irobot_create_msgs::msg::LightringLeds msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::LightringLeds>()
{
  return irobot_create_msgs::msg::builder::Init_LightringLeds_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__BUILDER_HPP_
