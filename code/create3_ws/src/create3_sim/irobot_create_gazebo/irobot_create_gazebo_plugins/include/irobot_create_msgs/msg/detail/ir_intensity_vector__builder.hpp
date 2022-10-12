// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/IrIntensityVector.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/ir_intensity_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_IrIntensityVector_readings
{
public:
  explicit Init_IrIntensityVector_readings(::irobot_create_msgs::msg::IrIntensityVector & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::IrIntensityVector readings(::irobot_create_msgs::msg::IrIntensityVector::_readings_type arg)
  {
    msg_.readings = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::IrIntensityVector msg_;
};

class Init_IrIntensityVector_header
{
public:
  Init_IrIntensityVector_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrIntensityVector_readings header(::irobot_create_msgs::msg::IrIntensityVector::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IrIntensityVector_readings(msg_);
  }

private:
  ::irobot_create_msgs::msg::IrIntensityVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::IrIntensityVector>()
{
  return irobot_create_msgs::msg::builder::Init_IrIntensityVector_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__BUILDER_HPP_
