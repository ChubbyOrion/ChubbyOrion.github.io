// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/Mouse.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__STRUCT_HPP_

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
# define DEPRECATED__irobot_create_msgs__msg__Mouse __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__Mouse __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mouse_
{
  using Type = Mouse_<ContainerAllocator>;

  explicit Mouse_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->integrated_x = 0.0f;
      this->integrated_y = 0.0f;
      this->frame_id = 0ul;
      this->last_squal = 0;
    }
  }

  explicit Mouse_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->integrated_x = 0.0f;
      this->integrated_y = 0.0f;
      this->frame_id = 0ul;
      this->last_squal = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _integrated_x_type =
    float;
  _integrated_x_type integrated_x;
  using _integrated_y_type =
    float;
  _integrated_y_type integrated_y;
  using _frame_id_type =
    uint32_t;
  _frame_id_type frame_id;
  using _last_squal_type =
    uint8_t;
  _last_squal_type last_squal;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__integrated_x(
    const float & _arg)
  {
    this->integrated_x = _arg;
    return *this;
  }
  Type & set__integrated_y(
    const float & _arg)
  {
    this->integrated_y = _arg;
    return *this;
  }
  Type & set__frame_id(
    const uint32_t & _arg)
  {
    this->frame_id = _arg;
    return *this;
  }
  Type & set__last_squal(
    const uint8_t & _arg)
  {
    this->last_squal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::Mouse_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::Mouse_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::Mouse_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::Mouse_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::Mouse_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::Mouse_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::Mouse_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::Mouse_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::Mouse_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::Mouse_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__Mouse
    std::shared_ptr<irobot_create_msgs::msg::Mouse_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__Mouse
    std::shared_ptr<irobot_create_msgs::msg::Mouse_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mouse_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->integrated_x != other.integrated_x) {
      return false;
    }
    if (this->integrated_y != other.integrated_y) {
      return false;
    }
    if (this->frame_id != other.frame_id) {
      return false;
    }
    if (this->last_squal != other.last_squal) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mouse_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mouse_

// alias to use template instance with default allocator
using Mouse =
  irobot_create_msgs::msg::Mouse_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__STRUCT_HPP_
