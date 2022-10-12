// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/IrIntensity.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/ir_intensity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_IrIntensity_value
{
public:
  explicit Init_IrIntensity_value(::irobot_create_msgs::msg::IrIntensity & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::IrIntensity value(::irobot_create_msgs::msg::IrIntensity::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::IrIntensity msg_;
};

class Init_IrIntensity_header
{
public:
  Init_IrIntensity_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrIntensity_value header(::irobot_create_msgs::msg::IrIntensity::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IrIntensity_value(msg_);
  }

private:
  ::irobot_create_msgs::msg::IrIntensity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::IrIntensity>()
{
  return irobot_create_msgs::msg::builder::Init_IrIntensity_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY__BUILDER_HPP_
