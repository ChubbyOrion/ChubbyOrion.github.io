// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/IrOpcode.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/ir_opcode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_IrOpcode_sensor
{
public:
  explicit Init_IrOpcode_sensor(::irobot_create_msgs::msg::IrOpcode & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::IrOpcode sensor(::irobot_create_msgs::msg::IrOpcode::_sensor_type arg)
  {
    msg_.sensor = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::IrOpcode msg_;
};

class Init_IrOpcode_opcode
{
public:
  explicit Init_IrOpcode_opcode(::irobot_create_msgs::msg::IrOpcode & msg)
  : msg_(msg)
  {}
  Init_IrOpcode_sensor opcode(::irobot_create_msgs::msg::IrOpcode::_opcode_type arg)
  {
    msg_.opcode = std::move(arg);
    return Init_IrOpcode_sensor(msg_);
  }

private:
  ::irobot_create_msgs::msg::IrOpcode msg_;
};

class Init_IrOpcode_header
{
public:
  Init_IrOpcode_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrOpcode_opcode header(::irobot_create_msgs::msg::IrOpcode::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IrOpcode_opcode(msg_);
  }

private:
  ::irobot_create_msgs::msg::IrOpcode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::IrOpcode>()
{
  return irobot_create_msgs::msg::builder::Init_IrOpcode_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__BUILDER_HPP_
