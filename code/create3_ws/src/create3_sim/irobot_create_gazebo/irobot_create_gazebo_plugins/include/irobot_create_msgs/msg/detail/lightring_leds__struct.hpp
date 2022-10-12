// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/LightringLeds.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_HPP_

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
// Member 'leds'
#include "irobot_create_msgs/msg/detail/led_color__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__msg__LightringLeds __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__LightringLeds __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LightringLeds_
{
  using Type = LightringLeds_<ContainerAllocator>;

  explicit LightringLeds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leds.fill(irobot_create_msgs::msg::LedColor_<ContainerAllocator>{_init});
      this->override_system = false;
    }
  }

  explicit LightringLeds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    leds(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leds.fill(irobot_create_msgs::msg::LedColor_<ContainerAllocator>{_alloc, _init});
      this->override_system = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _leds_type =
    std::array<irobot_create_msgs::msg::LedColor_<ContainerAllocator>, 6>;
  _leds_type leds;
  using _override_system_type =
    bool;
  _override_system_type override_system;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__leds(
    const std::array<irobot_create_msgs::msg::LedColor_<ContainerAllocator>, 6> & _arg)
  {
    this->leds = _arg;
    return *this;
  }
  Type & set__override_system(
    const bool & _arg)
  {
    this->override_system = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::LightringLeds_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::LightringLeds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::LightringLeds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::LightringLeds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::LightringLeds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::LightringLeds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::LightringLeds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::LightringLeds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::LightringLeds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::LightringLeds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__LightringLeds
    std::shared_ptr<irobot_create_msgs::msg::LightringLeds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__LightringLeds
    std::shared_ptr<irobot_create_msgs::msg::LightringLeds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LightringLeds_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->leds != other.leds) {
      return false;
    }
    if (this->override_system != other.override_system) {
      return false;
    }
    return true;
  }
  bool operator!=(const LightringLeds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LightringLeds_

// alias to use template instance with default allocator
using LightringLeds =
  irobot_create_msgs::msg::LightringLeds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_HPP_
