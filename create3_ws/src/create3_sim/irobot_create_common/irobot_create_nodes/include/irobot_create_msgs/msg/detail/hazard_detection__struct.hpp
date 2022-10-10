// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/HazardDetection.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__STRUCT_HPP_

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
# define DEPRECATED__irobot_create_msgs__msg__HazardDetection __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__HazardDetection __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HazardDetection_
{
  using Type = HazardDetection_<ContainerAllocator>;

  explicit HazardDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  explicit HazardDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BACKUP_LIMIT =
    0u;
  static constexpr uint8_t BUMP =
    1u;
  static constexpr uint8_t CLIFF =
    2u;
  static constexpr uint8_t STALL =
    3u;
  static constexpr uint8_t WHEEL_DROP =
    4u;
  static constexpr uint8_t OBJECT_PROXIMITY =
    5u;

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::HazardDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::HazardDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::HazardDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::HazardDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::HazardDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::HazardDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::HazardDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::HazardDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::HazardDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::HazardDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__HazardDetection
    std::shared_ptr<irobot_create_msgs::msg::HazardDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__HazardDetection
    std::shared_ptr<irobot_create_msgs::msg::HazardDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HazardDetection_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const HazardDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HazardDetection_

// alias to use template instance with default allocator
using HazardDetection =
  irobot_create_msgs::msg::HazardDetection_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t HazardDetection_<ContainerAllocator>::BACKUP_LIMIT;
template<typename ContainerAllocator>
constexpr uint8_t HazardDetection_<ContainerAllocator>::BUMP;
template<typename ContainerAllocator>
constexpr uint8_t HazardDetection_<ContainerAllocator>::CLIFF;
template<typename ContainerAllocator>
constexpr uint8_t HazardDetection_<ContainerAllocator>::STALL;
template<typename ContainerAllocator>
constexpr uint8_t HazardDetection_<ContainerAllocator>::WHEEL_DROP;
template<typename ContainerAllocator>
constexpr uint8_t HazardDetection_<ContainerAllocator>::OBJECT_PROXIMITY;

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__STRUCT_HPP_
