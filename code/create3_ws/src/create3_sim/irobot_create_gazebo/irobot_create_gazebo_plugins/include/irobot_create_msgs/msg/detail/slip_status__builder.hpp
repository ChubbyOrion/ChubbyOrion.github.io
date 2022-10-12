// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/SlipStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/slip_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_SlipStatus_is_slipping
{
public:
  explicit Init_SlipStatus_is_slipping(::irobot_create_msgs::msg::SlipStatus & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::SlipStatus is_slipping(::irobot_create_msgs::msg::SlipStatus::_is_slipping_type arg)
  {
    msg_.is_slipping = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::SlipStatus msg_;
};

class Init_SlipStatus_header
{
public:
  Init_SlipStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SlipStatus_is_slipping header(::irobot_create_msgs::msg::SlipStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SlipStatus_is_slipping(msg_);
  }

private:
  ::irobot_create_msgs::msg::SlipStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::SlipStatus>()
{
  return irobot_create_msgs::msg::builder::Init_SlipStatus_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__BUILDER_HPP_
