// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/AudioNote.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__msg__AudioNote __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__AudioNote __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioNote_
{
  using Type = AudioNote_<ContainerAllocator>;

  explicit AudioNote_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : max_runtime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0;
    }
  }

  explicit AudioNote_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : max_runtime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->frequency = 0;
    }
  }

  // field types and members
  using _frequency_type =
    uint16_t;
  _frequency_type frequency;
  using _max_runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _max_runtime_type max_runtime;

  // setters for named parameter idiom
  Type & set__frequency(
    const uint16_t & _arg)
  {
    this->frequency = _arg;
    return *this;
  }
  Type & set__max_runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->max_runtime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::AudioNote_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::AudioNote_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::AudioNote_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::AudioNote_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::AudioNote_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::AudioNote_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::AudioNote_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::AudioNote_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::AudioNote_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::AudioNote_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__AudioNote
    std::shared_ptr<irobot_create_msgs::msg::AudioNote_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__AudioNote
    std::shared_ptr<irobot_create_msgs::msg::AudioNote_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioNote_ & other) const
  {
    if (this->frequency != other.frequency) {
      return false;
    }
    if (this->max_runtime != other.max_runtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioNote_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioNote_

// alias to use template instance with default allocator
using AudioNote =
  irobot_create_msgs::msg::AudioNote_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__STRUCT_HPP_
