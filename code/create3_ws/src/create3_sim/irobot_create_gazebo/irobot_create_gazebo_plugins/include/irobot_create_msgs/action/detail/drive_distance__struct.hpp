// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:action/DriveDistance.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__DRIVE_DISTANCE__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__DRIVE_DISTANCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_Goal __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_Goal __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DriveDistance_Goal_
{
  using Type = DriveDistance_Goal_<ContainerAllocator>;

  explicit DriveDistance_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->max_translation_speed = 0.3f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->distance = 0.0f;
      this->max_translation_speed = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  explicit DriveDistance_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::DEFAULTS_ONLY == _init)
    {
      this->max_translation_speed = 0.3f;
    } else if (rosidl_runtime_cpp::MessageInitialization::ZERO == _init) {
      this->distance = 0.0f;
      this->max_translation_speed = 0.0f;
    }
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;
  using _max_translation_speed_type =
    float;
  _max_translation_speed_type max_translation_speed;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__max_translation_speed(
    const float & _arg)
  {
    this->max_translation_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_Goal
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_Goal
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveDistance_Goal_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->max_translation_speed != other.max_translation_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveDistance_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveDistance_Goal_

// alias to use template instance with default allocator
using DriveDistance_Goal =
  irobot_create_msgs::action::DriveDistance_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_Result __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_Result __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DriveDistance_Result_
{
  using Type = DriveDistance_Result_<ContainerAllocator>;

  explicit DriveDistance_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    (void)_init;
  }

  explicit DriveDistance_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _pose_type =
    geometry_msgs::msg::PoseStamped_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__pose(
    const geometry_msgs::msg::PoseStamped_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_Result
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_Result
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveDistance_Result_ & other) const
  {
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveDistance_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveDistance_Result_

// alias to use template instance with default allocator
using DriveDistance_Result =
  irobot_create_msgs::action::DriveDistance_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_Feedback __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DriveDistance_Feedback_
{
  using Type = DriveDistance_Feedback_<ContainerAllocator>;

  explicit DriveDistance_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_travel_distance = 0.0f;
    }
  }

  explicit DriveDistance_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remaining_travel_distance = 0.0f;
    }
  }

  // field types and members
  using _remaining_travel_distance_type =
    float;
  _remaining_travel_distance_type remaining_travel_distance;

  // setters for named parameter idiom
  Type & set__remaining_travel_distance(
    const float & _arg)
  {
    this->remaining_travel_distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_Feedback
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_Feedback
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveDistance_Feedback_ & other) const
  {
    if (this->remaining_travel_distance != other.remaining_travel_distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveDistance_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveDistance_Feedback_

// alias to use template instance with default allocator
using DriveDistance_Feedback =
  irobot_create_msgs::action::DriveDistance_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "irobot_create_msgs/action/detail/drive_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_SendGoal_Request __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DriveDistance_SendGoal_Request_
{
  using Type = DriveDistance_SendGoal_Request_<ContainerAllocator>;

  explicit DriveDistance_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit DriveDistance_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const irobot_create_msgs::action::DriveDistance_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_SendGoal_Request
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_SendGoal_Request
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveDistance_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveDistance_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveDistance_SendGoal_Request_

// alias to use template instance with default allocator
using DriveDistance_SendGoal_Request =
  irobot_create_msgs::action::DriveDistance_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_SendGoal_Response __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DriveDistance_SendGoal_Response_
{
  using Type = DriveDistance_SendGoal_Response_<ContainerAllocator>;

  explicit DriveDistance_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit DriveDistance_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_SendGoal_Response
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_SendGoal_Response
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveDistance_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveDistance_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveDistance_SendGoal_Response_

// alias to use template instance with default allocator
using DriveDistance_SendGoal_Response =
  irobot_create_msgs::action::DriveDistance_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs

namespace irobot_create_msgs
{

namespace action
{

struct DriveDistance_SendGoal
{
  using Request = irobot_create_msgs::action::DriveDistance_SendGoal_Request;
  using Response = irobot_create_msgs::action::DriveDistance_SendGoal_Response;
};

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_GetResult_Request __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DriveDistance_GetResult_Request_
{
  using Type = DriveDistance_GetResult_Request_<ContainerAllocator>;

  explicit DriveDistance_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit DriveDistance_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_GetResult_Request
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_GetResult_Request
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveDistance_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveDistance_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveDistance_GetResult_Request_

// alias to use template instance with default allocator
using DriveDistance_GetResult_Request =
  irobot_create_msgs::action::DriveDistance_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/drive_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_GetResult_Response __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DriveDistance_GetResult_Response_
{
  using Type = DriveDistance_GetResult_Response_<ContainerAllocator>;

  explicit DriveDistance_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit DriveDistance_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const irobot_create_msgs::action::DriveDistance_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_GetResult_Response
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_GetResult_Response
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveDistance_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveDistance_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveDistance_GetResult_Response_

// alias to use template instance with default allocator
using DriveDistance_GetResult_Response =
  irobot_create_msgs::action::DriveDistance_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs

namespace irobot_create_msgs
{

namespace action
{

struct DriveDistance_GetResult
{
  using Request = irobot_create_msgs::action::DriveDistance_GetResult_Request;
  using Response = irobot_create_msgs::action::DriveDistance_GetResult_Response;
};

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "irobot_create_msgs/action/detail/drive_distance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__DriveDistance_FeedbackMessage __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct DriveDistance_FeedbackMessage_
{
  using Type = DriveDistance_FeedbackMessage_<ContainerAllocator>;

  explicit DriveDistance_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit DriveDistance_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const irobot_create_msgs::action::DriveDistance_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_FeedbackMessage
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__DriveDistance_FeedbackMessage
    std::shared_ptr<irobot_create_msgs::action::DriveDistance_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DriveDistance_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const DriveDistance_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DriveDistance_FeedbackMessage_

// alias to use template instance with default allocator
using DriveDistance_FeedbackMessage =
  irobot_create_msgs::action::DriveDistance_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace irobot_create_msgs
{

namespace action
{

struct DriveDistance
{
  /// The goal message defined in the action definition.
  using Goal = irobot_create_msgs::action::DriveDistance_Goal;
  /// The result message defined in the action definition.
  using Result = irobot_create_msgs::action::DriveDistance_Result;
  /// The feedback message defined in the action definition.
  using Feedback = irobot_create_msgs::action::DriveDistance_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = irobot_create_msgs::action::DriveDistance_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = irobot_create_msgs::action::DriveDistance_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = irobot_create_msgs::action::DriveDistance_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct DriveDistance DriveDistance;

}  // namespace action

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__DRIVE_DISTANCE__STRUCT_HPP_
