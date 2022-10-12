// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/DockStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_HPP_

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
# define DEPRECATED__irobot_create_msgs__msg__DockStatus __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__DockStatus __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DockStatus_
{
  using Type = DockStatus_<ContainerAllocator>;

  explicit DockStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_visible = false;
      this->is_docked = false;
    }
  }

  explicit DockStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dock_visible = false;
      this->is_docked = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dock_visible_type =
    bool;
  _dock_visible_type dock_visible;
  using _is_docked_type =
    bool;
  _is_docked_type is_docked;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dock_visible(
    const bool & _arg)
  {
    this->dock_visible = _arg;
    return *this;
  }
  Type & set__is_docked(
    const bool & _arg)
  {
    this->is_docked = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::DockStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::DockStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::DockStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::DockStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::DockStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::DockStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::DockStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::DockStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::DockStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::DockStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__DockStatus
    std::shared_ptr<irobot_create_msgs::msg::DockStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__DockStatus
    std::shared_ptr<irobot_create_msgs::msg::DockStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DockStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dock_visible != other.dock_visible) {
      return false;
    }
    if (this->is_docked != other.is_docked) {
      return false;
    }
    return true;
  }
  bool operator!=(const DockStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DockStatus_

// alias to use template instance with default allocator
using DockStatus =
  irobot_create_msgs::msg::DockStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__DOCK_STATUS__STRUCT_HPP_
