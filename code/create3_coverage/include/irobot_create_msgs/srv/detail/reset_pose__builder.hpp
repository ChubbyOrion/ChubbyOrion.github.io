// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/srv/detail/reset_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace srv
{

namespace builder
{

class Init_ResetPose_Request_pose
{
public:
  Init_ResetPose_Request_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irobot_create_msgs::srv::ResetPose_Request pose(::irobot_create_msgs::srv::ResetPose_Request::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::srv::ResetPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::srv::ResetPose_Request>()
{
  return irobot_create_msgs::srv::builder::Init_ResetPose_Request_pose();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::srv::ResetPose_Response>()
{
  return ::irobot_create_msgs::srv::ResetPose_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__BUILDER_HPP_
