// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/KidnapStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__KIDNAP_STATUS__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__KIDNAP_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/kidnap_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_KidnapStatus_is_kidnapped
{
public:
  explicit Init_KidnapStatus_is_kidnapped(::irobot_create_msgs::msg::KidnapStatus & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::KidnapStatus is_kidnapped(::irobot_create_msgs::msg::KidnapStatus::_is_kidnapped_type arg)
  {
    msg_.is_kidnapped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::KidnapStatus msg_;
};

class Init_KidnapStatus_header
{
public:
  Init_KidnapStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KidnapStatus_is_kidnapped header(::irobot_create_msgs::msg::KidnapStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_KidnapStatus_is_kidnapped(msg_);
  }

private:
  ::irobot_create_msgs::msg::KidnapStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::KidnapStatus>()
{
  return irobot_create_msgs::msg::builder::Init_KidnapStatus_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__KIDNAP_STATUS__BUILDER_HPP_
