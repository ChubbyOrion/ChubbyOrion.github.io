// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/IrIntensityVector.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__STRUCT_HPP_

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
// Member 'readings'
#include "irobot_create_msgs/msg/detail/ir_intensity__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__msg__IrIntensityVector __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__IrIntensityVector __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrIntensityVector_
{
  using Type = IrIntensityVector_<ContainerAllocator>;

  explicit IrIntensityVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit IrIntensityVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _readings_type =
    std::vector<irobot_create_msgs::msg::IrIntensity_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irobot_create_msgs::msg::IrIntensity_<ContainerAllocator>>>;
  _readings_type readings;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__readings(
    const std::vector<irobot_create_msgs::msg::IrIntensity_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irobot_create_msgs::msg::IrIntensity_<ContainerAllocator>>> & _arg)
  {
    this->readings = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__IrIntensityVector
    std::shared_ptr<irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__IrIntensityVector
    std::shared_ptr<irobot_create_msgs::msg::IrIntensityVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrIntensityVector_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->readings != other.readings) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrIntensityVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrIntensityVector_

// alias to use template instance with default allocator
using IrIntensityVector =
  irobot_create_msgs::msg::IrIntensityVector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__STRUCT_HPP_
