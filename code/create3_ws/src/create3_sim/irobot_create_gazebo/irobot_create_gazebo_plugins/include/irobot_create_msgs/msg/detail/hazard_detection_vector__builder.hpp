// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/HazardDetectionVector.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/hazard_detection_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_HazardDetectionVector_detections
{
public:
  explicit Init_HazardDetectionVector_detections(::irobot_create_msgs::msg::HazardDetectionVector & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::HazardDetectionVector detections(::irobot_create_msgs::msg::HazardDetectionVector::_detections_type arg)
  {
    msg_.detections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::HazardDetectionVector msg_;
};

class Init_HazardDetectionVector_header
{
public:
  Init_HazardDetectionVector_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HazardDetectionVector_detections header(::irobot_create_msgs::msg::HazardDetectionVector::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_HazardDetectionVector_detections(msg_);
  }

private:
  ::irobot_create_msgs::msg::HazardDetectionVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::HazardDetectionVector>()
{
  return irobot_create_msgs::msg::builder::Init_HazardDetectionVector_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION_VECTOR__BUILDER_HPP_
