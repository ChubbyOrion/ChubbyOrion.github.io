// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/WheelTicks.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__STRUCT_HPP_

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
# define DEPRECATED__irobot_create_msgs__msg__WheelTicks __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__WheelTicks __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelTicks_
{
  using Type = WheelTicks_<ContainerAllocator>;

  explicit WheelTicks_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ticks_left = 0l;
      this->ticks_right = 0l;
    }
  }

  explicit WheelTicks_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ticks_left = 0l;
      this->ticks_right = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _ticks_left_type =
    int32_t;
  _ticks_left_type ticks_left;
  using _ticks_right_type =
    int32_t;
  _ticks_right_type ticks_right;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__ticks_left(
    const int32_t & _arg)
  {
    this->ticks_left = _arg;
    return *this;
  }
  Type & set__ticks_right(
    const int32_t & _arg)
  {
    this->ticks_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::WheelTicks_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::WheelTicks_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::WheelTicks_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::WheelTicks_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::WheelTicks_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::WheelTicks_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::WheelTicks_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::WheelTicks_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::WheelTicks_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::WheelTicks_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__WheelTicks
    std::shared_ptr<irobot_create_msgs::msg::WheelTicks_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__WheelTicks
    std::shared_ptr<irobot_create_msgs::msg::WheelTicks_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelTicks_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->ticks_left != other.ticks_left) {
      return false;
    }
    if (this->ticks_right != other.ticks_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelTicks_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelTicks_

// alias to use template instance with default allocator
using WheelTicks =
  irobot_create_msgs::msg::WheelTicks_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__STRUCT_HPP_
