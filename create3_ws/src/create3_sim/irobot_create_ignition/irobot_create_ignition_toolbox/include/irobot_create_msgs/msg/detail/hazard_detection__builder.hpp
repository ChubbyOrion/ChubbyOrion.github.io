// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/HazardDetection.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/hazard_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_HazardDetection_type
{
public:
  explicit Init_HazardDetection_type(::irobot_create_msgs::msg::HazardDetection & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::HazardDetection type(::irobot_create_msgs::msg::HazardDetection::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::HazardDetection msg_;
};

class Init_HazardDetection_header
{
public:
  Init_HazardDetection_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HazardDetection_type header(::irobot_create_msgs::msg::HazardDetection::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HazardDetection_type(msg_);
  }

private:
  ::irobot_create_msgs::msg::HazardDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::HazardDetection>()
{
  return irobot_create_msgs::msg::builder::Init_HazardDetection_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__BUILDER_HPP_
