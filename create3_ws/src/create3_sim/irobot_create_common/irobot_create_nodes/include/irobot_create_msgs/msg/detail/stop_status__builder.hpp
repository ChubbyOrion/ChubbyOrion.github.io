// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/StopStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__STOP_STATUS__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__STOP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/stop_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_StopStatus_is_stopped
{
public:
  explicit Init_StopStatus_is_stopped(::irobot_create_msgs::msg::StopStatus & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::StopStatus is_stopped(::irobot_create_msgs::msg::StopStatus::_is_stopped_type arg)
  {
    msg_.is_stopped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::StopStatus msg_;
};

class Init_StopStatus_header
{
public:
  Init_StopStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StopStatus_is_stopped header(::irobot_create_msgs::msg::StopStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StopStatus_is_stopped(msg_);
  }

private:
  ::irobot_create_msgs::msg::StopStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::StopStatus>()
{
  return irobot_create_msgs::msg::builder::Init_StopStatus_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__STOP_STATUS__BUILDER_HPP_
