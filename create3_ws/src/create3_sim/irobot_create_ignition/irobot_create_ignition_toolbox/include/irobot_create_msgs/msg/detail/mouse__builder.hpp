// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/Mouse.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/mouse__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_Mouse_last_squal
{
public:
  explicit Init_Mouse_last_squal(::irobot_create_msgs::msg::Mouse & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::Mouse last_squal(::irobot_create_msgs::msg::Mouse::_last_squal_type arg)
  {
    msg_.last_squal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::Mouse msg_;
};

class Init_Mouse_frame_id
{
public:
  explicit Init_Mouse_frame_id(::irobot_create_msgs::msg::Mouse & msg)
  : msg_(msg)
  {}
  Init_Mouse_last_squal frame_id(::irobot_create_msgs::msg::Mouse::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_Mouse_last_squal(msg_);
  }

private:
  ::irobot_create_msgs::msg::Mouse msg_;
};

class Init_Mouse_integrated_y
{
public:
  explicit Init_Mouse_integrated_y(::irobot_create_msgs::msg::Mouse & msg)
  : msg_(msg)
  {}
  Init_Mouse_frame_id integrated_y(::irobot_create_msgs::msg::Mouse::_integrated_y_type arg)
  {
    msg_.integrated_y = std::move(arg);
    return Init_Mouse_frame_id(msg_);
  }

private:
  ::irobot_create_msgs::msg::Mouse msg_;
};

class Init_Mouse_integrated_x
{
public:
  explicit Init_Mouse_integrated_x(::irobot_create_msgs::msg::Mouse & msg)
  : msg_(msg)
  {}
  Init_Mouse_integrated_y integrated_x(::irobot_create_msgs::msg::Mouse::_integrated_x_type arg)
  {
    msg_.integrated_x = std::move(arg);
    return Init_Mouse_integrated_y(msg_);
  }

private:
  ::irobot_create_msgs::msg::Mouse msg_;
};

class Init_Mouse_header
{
public:
  Init_Mouse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Mouse_integrated_x header(::irobot_create_msgs::msg::Mouse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Mouse_integrated_x(msg_);
  }

private:
  ::irobot_create_msgs::msg::Mouse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::Mouse>()
{
  return irobot_create_msgs::msg::builder::Init_Mouse_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__BUILDER_HPP_
