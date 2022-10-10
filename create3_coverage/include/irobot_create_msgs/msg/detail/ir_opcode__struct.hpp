// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/IrOpcode.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__STRUCT_HPP_

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
# define DEPRECATED__irobot_create_msgs__msg__IrOpcode __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__IrOpcode __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IrOpcode_
{
  using Type = IrOpcode_<ContainerAllocator>;

  explicit IrOpcode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opcode = 0;
      this->sensor = 0;
    }
  }

  explicit IrOpcode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->opcode = 0;
      this->sensor = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _opcode_type =
    uint8_t;
  _opcode_type opcode;
  using _sensor_type =
    uint8_t;
  _sensor_type sensor;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__opcode(
    const uint8_t & _arg)
  {
    this->opcode = _arg;
    return *this;
  }
  Type & set__sensor(
    const uint8_t & _arg)
  {
    this->sensor = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CODE_IR_FORCE_FIELD =
    161u;
  static constexpr uint8_t CODE_IR_VIRTUAL_WALL =
    162u;
  static constexpr uint8_t CODE_IR_BUOY_GREEN =
    164u;
  static constexpr uint8_t CODE_IR_BUOY_RED =
    168u;
  static constexpr uint8_t CODE_IR_BUOY_BOTH =
    172u;
  static constexpr uint8_t CODE_IR_EVAC_GREEN_FIELD =
    244u;
  static constexpr uint8_t CODE_IR_EVAC_RED_FIELD =
    248u;
  static constexpr uint8_t CODE_IR_EVAC_BOTH_FIELD =
    252u;
  static constexpr uint8_t SENSOR_OMNI =
    0u;
  static constexpr uint8_t SENSOR_DIRECTIONAL_FRONT =
    1u;

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::IrOpcode_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::IrOpcode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::IrOpcode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::IrOpcode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::IrOpcode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::IrOpcode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::IrOpcode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::IrOpcode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::IrOpcode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::IrOpcode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__IrOpcode
    std::shared_ptr<irobot_create_msgs::msg::IrOpcode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__IrOpcode
    std::shared_ptr<irobot_create_msgs::msg::IrOpcode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IrOpcode_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->opcode != other.opcode) {
      return false;
    }
    if (this->sensor != other.sensor) {
      return false;
    }
    return true;
  }
  bool operator!=(const IrOpcode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IrOpcode_

// alias to use template instance with default allocator
using IrOpcode =
  irobot_create_msgs::msg::IrOpcode_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::CODE_IR_FORCE_FIELD;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::CODE_IR_VIRTUAL_WALL;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::CODE_IR_BUOY_GREEN;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::CODE_IR_BUOY_RED;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::CODE_IR_BUOY_BOTH;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::CODE_IR_EVAC_GREEN_FIELD;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::CODE_IR_EVAC_RED_FIELD;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::CODE_IR_EVAC_BOTH_FIELD;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::SENSOR_OMNI;
template<typename ContainerAllocator>
constexpr uint8_t IrOpcode_<ContainerAllocator>::SENSOR_DIRECTIONAL_FRONT;

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__STRUCT_HPP_
