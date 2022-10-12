// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:msg/AudioNoteVector.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__STRUCT_HPP_

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
// Member 'notes'
#include "irobot_create_msgs/msg/detail/audio_note__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__msg__AudioNoteVector __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__msg__AudioNoteVector __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AudioNoteVector_
{
  using Type = AudioNoteVector_<ContainerAllocator>;

  explicit AudioNoteVector_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->append = false;
    }
  }

  explicit AudioNoteVector_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->append = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _notes_type =
    std::vector<irobot_create_msgs::msg::AudioNote_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irobot_create_msgs::msg::AudioNote_<ContainerAllocator>>>;
  _notes_type notes;
  using _append_type =
    bool;
  _append_type append;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__notes(
    const std::vector<irobot_create_msgs::msg::AudioNote_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<irobot_create_msgs::msg::AudioNote_<ContainerAllocator>>> & _arg)
  {
    this->notes = _arg;
    return *this;
  }
  Type & set__append(
    const bool & _arg)
  {
    this->append = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__msg__AudioNoteVector
    std::shared_ptr<irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__msg__AudioNoteVector
    std::shared_ptr<irobot_create_msgs::msg::AudioNoteVector_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AudioNoteVector_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->notes != other.notes) {
      return false;
    }
    if (this->append != other.append) {
      return false;
    }
    return true;
  }
  bool operator!=(const AudioNoteVector_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AudioNoteVector_

// alias to use template instance with default allocator
using AudioNoteVector =
  irobot_create_msgs::msg::AudioNoteVector_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__STRUCT_HPP_
