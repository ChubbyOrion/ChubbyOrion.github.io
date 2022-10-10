// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from irobot_create_msgs:action/LedAnimation.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__STRUCT_HPP_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'lightring'
#include "irobot_create_msgs/msg/detail/lightring_leds__struct.hpp"
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_Goal __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_Goal __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LedAnimation_Goal_
{
  using Type = LedAnimation_Goal_<ContainerAllocator>;

  explicit LedAnimation_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lightring(_init),
    max_runtime(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->animation_type = 0;
    }
  }

  explicit LedAnimation_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : lightring(_alloc, _init),
    max_runtime(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->animation_type = 0;
    }
  }

  // field types and members
  using _animation_type_type =
    int8_t;
  _animation_type_type animation_type;
  using _lightring_type =
    irobot_create_msgs::msg::LightringLeds_<ContainerAllocator>;
  _lightring_type lightring;
  using _max_runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _max_runtime_type max_runtime;

  // setters for named parameter idiom
  Type & set__animation_type(
    const int8_t & _arg)
  {
    this->animation_type = _arg;
    return *this;
  }
  Type & set__lightring(
    const irobot_create_msgs::msg::LightringLeds_<ContainerAllocator> & _arg)
  {
    this->lightring = _arg;
    return *this;
  }
  Type & set__max_runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->max_runtime = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t BLINK_LIGHTS =
    1;
  static constexpr int8_t SPIN_LIGHTS =
    2;

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_Goal
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_Goal
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedAnimation_Goal_ & other) const
  {
    if (this->animation_type != other.animation_type) {
      return false;
    }
    if (this->lightring != other.lightring) {
      return false;
    }
    if (this->max_runtime != other.max_runtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedAnimation_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedAnimation_Goal_

// alias to use template instance with default allocator
using LedAnimation_Goal =
  irobot_create_msgs::action::LedAnimation_Goal_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t LedAnimation_Goal_<ContainerAllocator>::BLINK_LIGHTS;
template<typename ContainerAllocator>
constexpr int8_t LedAnimation_Goal_<ContainerAllocator>::SPIN_LIGHTS;

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'runtime'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_Result __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_Result __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LedAnimation_Result_
{
  using Type = LedAnimation_Result_<ContainerAllocator>;

  explicit LedAnimation_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : runtime(_init)
  {
    (void)_init;
  }

  explicit LedAnimation_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : runtime(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _runtime_type runtime;

  // setters for named parameter idiom
  Type & set__runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->runtime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_Result
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_Result
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedAnimation_Result_ & other) const
  {
    if (this->runtime != other.runtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedAnimation_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedAnimation_Result_

// alias to use template instance with default allocator
using LedAnimation_Result =
  irobot_create_msgs::action::LedAnimation_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'remaining_runtime'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_Feedback __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LedAnimation_Feedback_
{
  using Type = LedAnimation_Feedback_<ContainerAllocator>;

  explicit LedAnimation_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remaining_runtime(_init)
  {
    (void)_init;
  }

  explicit LedAnimation_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remaining_runtime(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _remaining_runtime_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _remaining_runtime_type remaining_runtime;

  // setters for named parameter idiom
  Type & set__remaining_runtime(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->remaining_runtime = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_Feedback
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_Feedback
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedAnimation_Feedback_ & other) const
  {
    if (this->remaining_runtime != other.remaining_runtime) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedAnimation_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedAnimation_Feedback_

// alias to use template instance with default allocator
using LedAnimation_Feedback =
  irobot_create_msgs::action::LedAnimation_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "irobot_create_msgs/action/detail/led_animation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_SendGoal_Request __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LedAnimation_SendGoal_Request_
{
  using Type = LedAnimation_SendGoal_Request_<ContainerAllocator>;

  explicit LedAnimation_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit LedAnimation_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const irobot_create_msgs::action::LedAnimation_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_SendGoal_Request
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_SendGoal_Request
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedAnimation_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedAnimation_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedAnimation_SendGoal_Request_

// alias to use template instance with default allocator
using LedAnimation_SendGoal_Request =
  irobot_create_msgs::action::LedAnimation_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_SendGoal_Response __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LedAnimation_SendGoal_Response_
{
  using Type = LedAnimation_SendGoal_Response_<ContainerAllocator>;

  explicit LedAnimation_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit LedAnimation_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_SendGoal_Response
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_SendGoal_Response
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedAnimation_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedAnimation_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedAnimation_SendGoal_Response_

// alias to use template instance with default allocator
using LedAnimation_SendGoal_Response =
  irobot_create_msgs::action::LedAnimation_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs

namespace irobot_create_msgs
{

namespace action
{

struct LedAnimation_SendGoal
{
  using Request = irobot_create_msgs::action::LedAnimation_SendGoal_Request;
  using Response = irobot_create_msgs::action::LedAnimation_SendGoal_Response;
};

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_GetResult_Request __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LedAnimation_GetResult_Request_
{
  using Type = LedAnimation_GetResult_Request_<ContainerAllocator>;

  explicit LedAnimation_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit LedAnimation_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_GetResult_Request
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_GetResult_Request
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedAnimation_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedAnimation_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedAnimation_GetResult_Request_

// alias to use template instance with default allocator
using LedAnimation_GetResult_Request =
  irobot_create_msgs::action::LedAnimation_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_GetResult_Response __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LedAnimation_GetResult_Response_
{
  using Type = LedAnimation_GetResult_Response_<ContainerAllocator>;

  explicit LedAnimation_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit LedAnimation_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const irobot_create_msgs::action::LedAnimation_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_GetResult_Response
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_GetResult_Response
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedAnimation_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedAnimation_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedAnimation_GetResult_Response_

// alias to use template instance with default allocator
using LedAnimation_GetResult_Response =
  irobot_create_msgs::action::LedAnimation_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace irobot_create_msgs

namespace irobot_create_msgs
{

namespace action
{

struct LedAnimation_GetResult
{
  using Request = irobot_create_msgs::action::LedAnimation_GetResult_Request;
  using Response = irobot_create_msgs::action::LedAnimation_GetResult_Response;
};

}  // namespace action

}  // namespace irobot_create_msgs


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__irobot_create_msgs__action__LedAnimation_FeedbackMessage __declspec(deprecated)
#endif

namespace irobot_create_msgs
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct LedAnimation_FeedbackMessage_
{
  using Type = LedAnimation_FeedbackMessage_<ContainerAllocator>;

  explicit LedAnimation_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit LedAnimation_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const irobot_create_msgs::action::LedAnimation_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_FeedbackMessage
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__irobot_create_msgs__action__LedAnimation_FeedbackMessage
    std::shared_ptr<irobot_create_msgs::action::LedAnimation_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LedAnimation_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const LedAnimation_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LedAnimation_FeedbackMessage_

// alias to use template instance with default allocator
using LedAnimation_FeedbackMessage =
  irobot_create_msgs::action::LedAnimation_FeedbackMessage_<std::allocator<void>>;

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

struct LedAnimation
{
  /// The goal message defined in the action definition.
  using Goal = irobot_create_msgs::action::LedAnimation_Goal;
  /// The result message defined in the action definition.
  using Result = irobot_create_msgs::action::LedAnimation_Result;
  /// The feedback message defined in the action definition.
  using Feedback = irobot_create_msgs::action::LedAnimation_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = irobot_create_msgs::action::LedAnimation_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = irobot_create_msgs::action::LedAnimation_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = irobot_create_msgs::action::LedAnimation_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct LedAnimation LedAnimation;

}  // namespace action

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__STRUCT_HPP_
