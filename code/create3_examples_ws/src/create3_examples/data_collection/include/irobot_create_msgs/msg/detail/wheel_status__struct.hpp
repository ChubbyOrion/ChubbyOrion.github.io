// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/WheelStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__msg__WheelStatus __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__WheelStatus __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelStatus_
{
  using Type = WheelStatus_<ContainerAllocator>;

  explicit WheelStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_ma_left = 0;
      this->current_ma_right = 0;
      this->pwm_left = 0;
      this->pwm_right = 0;
      this->wheels_enabled = false;
    }
  }

  explicit WheelStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->current_ma_left = 0;
      this->current_ma_right = 0;
      this->pwm_left = 0;
      this->pwm_right = 0;
      this->wheels_enabled = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _current_ma_left_type =
    int16_t;
  _current_ma_left_type current_ma_left;
  using _current_ma_right_type =
    int16_t;
  _current_ma_right_type current_ma_right;
  using _pwm_left_type =
    int16_t;
  _pwm_left_type pwm_left;
  using _pwm_right_type =
    int16_t;
  _pwm_right_type pwm_right;
  using _wheels_enabled_type =
    bool;
  _wheels_enabled_type wheels_enabled;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__current_ma_left(
    const int16_t & _arg)
  {
    this->current_ma_left = _arg;
    return *this;
  }
  Type & set__current_ma_right(
    const int16_t & _arg)
  {
    this->current_ma_right = _arg;
    return *this;
  }
  Type & set__pwm_left(
    const int16_t & _arg)
  {
    this->pwm_left = _arg;
    return *this;
  }
  Type & set__pwm_right(
    const int16_t & _arg)
  {
    this->pwm_right = _arg;
    return *this;
  }
  Type & set__wheels_enabled(
    const bool & _arg)
  {
    this->wheels_enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::WheelStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::WheelStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::WheelStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::WheelStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::WheelStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::WheelStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::WheelStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::WheelStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::WheelStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::WheelStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__WheelStatus
    std::shared_ptr<irobot_create_msgs::msg::WheelStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__WheelStatus
    std::shared_ptr<irobot_create_msgs::msg::WheelStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->current_ma_left != other.current_ma_left) {
      return false;
    }
    if (this->current_ma_right != other.current_ma_right) {
      return false;
    }
    if (this->pwm_left != other.pwm_left) {
      return false;
    }
    if (this->pwm_right != other.pwm_right) {
      return false;
    }
    if (this->wheels_enabled != other.wheels_enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelStatus_

// alias to use template instance with default allocator
using WheelStatus =
  irobot_create_msgs::msg::WheelStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__STRUCT_HPP_
