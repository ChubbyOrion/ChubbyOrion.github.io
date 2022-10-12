// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/Button.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'last_start_pressed_time'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'last_pressed_duration'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__msg__Button __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__Button __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Button_
{
  using Type = Button_<ContainerAllocator>;

  explicit Button_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    last_start_pressed_time(_init),
    last_pressed_duration(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_pressed = false;
    }
  }

  explicit Button_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    last_start_pressed_time(_alloc, _init),
    last_pressed_duration(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->is_pressed = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _is_pressed_type =
    bool;
  _is_pressed_type is_pressed;
  using _last_start_pressed_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _last_start_pressed_time_type last_start_pressed_time;
  using _last_pressed_duration_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _last_pressed_duration_type last_pressed_duration;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__is_pressed(
    const bool & _arg)
  {
    this->is_pressed = _arg;
    return *this;
  }
  Type & set__last_start_pressed_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->last_start_pressed_time = _arg;
    return *this;
  }
  Type & set__last_pressed_duration(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->last_pressed_duration = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::Button_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::Button_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::Button_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::Button_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::Button_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::Button_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::Button_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::Button_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::Button_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::Button_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__Button
    std::shared_ptr<irobot_create_msgs::msg::Button_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__Button
    std::shared_ptr<irobot_create_msgs::msg::Button_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Button_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->is_pressed != other.is_pressed) {
      return false;
    }
    if (this->last_start_pressed_time != other.last_start_pressed_time) {
      return false;
    }
    if (this->last_pressed_duration != other.last_pressed_duration) {
      return false;
    }
    return true;
  }
  bool operator!=(const Button_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Button_

// alias to use template instance with default allocator
using Button =
  irobot_create_msgs::msg::Button_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__BUTTON__STRUCT_HPP_
