// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/InterfaceButtons.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__STRUCT_HPP_

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
// Member 'button_1'
// Member 'button_power'
// Member 'button_2'
#include "irobot_create_msgs/msg/detail/button__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__msg__InterfaceButtons __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__InterfaceButtons __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InterfaceButtons_
{
  using Type = InterfaceButtons_<ContainerAllocator>;

  explicit InterfaceButtons_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    button_1(_init),
    button_power(_init),
    button_2(_init)
  {
    (void)_init;
  }

  explicit InterfaceButtons_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    button_1(_alloc, _init),
    button_power(_alloc, _init),
    button_2(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _button_1_type =
    irobot_create_msgs::msg::Button_<ContainerAllocator>;
  _button_1_type button_1;
  using _button_power_type =
    irobot_create_msgs::msg::Button_<ContainerAllocator>;
  _button_power_type button_power;
  using _button_2_type =
    irobot_create_msgs::msg::Button_<ContainerAllocator>;
  _button_2_type button_2;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__button_1(
    const irobot_create_msgs::msg::Button_<ContainerAllocator> & _arg)
  {
    this->button_1 = _arg;
    return *this;
  }
  Type & set__button_power(
    const irobot_create_msgs::msg::Button_<ContainerAllocator> & _arg)
  {
    this->button_power = _arg;
    return *this;
  }
  Type & set__button_2(
    const irobot_create_msgs::msg::Button_<ContainerAllocator> & _arg)
  {
    this->button_2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__InterfaceButtons
    std::shared_ptr<irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__InterfaceButtons
    std::shared_ptr<irobot_create_msgs::msg::InterfaceButtons_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InterfaceButtons_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->button_1 != other.button_1) {
      return false;
    }
    if (this->button_power != other.button_power) {
      return false;
    }
    if (this->button_2 != other.button_2) {
      return false;
    }
    return true;
  }
  bool operator!=(const InterfaceButtons_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InterfaceButtons_

// alias to use template instance with default allocator
using InterfaceButtons =
  irobot_create_msgs::msg::InterfaceButtons_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__INTERFACE_BUTTONS__STRUCT_HPP_
