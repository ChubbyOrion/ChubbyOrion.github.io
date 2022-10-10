// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__srv__ResetPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__srv__ResetPose_Request __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetPose_Request_
{
  using Type = ResetPose_Request_<ContainerAllocator>;

  explicit ResetPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit ResetPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__srv__ResetPose_Request
    std::shared_ptr<irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__srv__ResetPose_Request
    std::shared_ptr<irobot_create_msgs::srv::ResetPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetPose_Request_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetPose_Request_

// alias to use template instance with default allocator
using ResetPose_Request =
  irobot_create_msgs::srv::ResetPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace irobot_create_msgs


#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__srv__ResetPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__srv__ResetPose_Response __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ResetPose_Response_
{
  using Type = ResetPose_Response_<ContainerAllocator>;

  explicit ResetPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ResetPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__srv__ResetPose_Response
    std::shared_ptr<irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__srv__ResetPose_Response
    std::shared_ptr<irobot_create_msgs::srv::ResetPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ResetPose_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ResetPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ResetPose_Response_

// alias to use template instance with default allocator
using ResetPose_Response =
  irobot_create_msgs::srv::ResetPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace irobot_create_msgs

namespace irobot_create_msgs
{

namespace srv
{

struct ResetPose
{
  using Request = irobot_create_msgs::srv::ResetPose_Request;
  using Response = irobot_create_msgs::srv::ResetPose_Response;
};

}  // namespace srv

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_HPP_
