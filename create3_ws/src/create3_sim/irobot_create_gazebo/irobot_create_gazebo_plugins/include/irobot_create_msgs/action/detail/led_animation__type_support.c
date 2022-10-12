// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irobot_create_msgs:action/LedAnimation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
#include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irobot_create_msgs/action/detail/led_animation__functions.h"
#include "irobot_create_msgs/action/detail/led_animation__struct.h"


// Include directives for member types
// Member `lightring`
#include "irobot_create_msgs/msg/lightring_leds.h"
// Member `lightring`
#include "irobot_create_msgs/msg/detail/lightring_leds__rosidl_typesupport_introspection_c.h"
// Member `max_runtime`
#include "builtin_interfaces/msg/duration.h"
// Member `max_runtime`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__LedAnimation_Goal__init(message_memory);
}

void irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_fini_function(void * message_memory)
{
  irobot_create_msgs__action__LedAnimation_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_member_array[3] = {
  {
    "animation_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_Goal, animation_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lightring",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_Goal, lightring),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_runtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_Goal, max_runtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "LedAnimation_Goal",  // message name
  3,  // number of fields
  sizeof(irobot_create_msgs__action__LedAnimation_Goal),
  irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_member_array,  // message members
  irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_type_support_handle = {
  0,
  &irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_Goal)() {
  irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, msg, LightringLeds)();
  irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__action__LedAnimation_Goal__rosidl_typesupport_introspection_c__LedAnimation_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"


// Include directives for member types
// Member `runtime`
// already included above
// #include "builtin_interfaces/msg/duration.h"
// Member `runtime`
// already included above
// #include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__LedAnimation_Result__init(message_memory);
}

void irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_fini_function(void * message_memory)
{
  irobot_create_msgs__action__LedAnimation_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_member_array[1] = {
  {
    "runtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_Result, runtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "LedAnimation_Result",  // message name
  1,  // number of fields
  sizeof(irobot_create_msgs__action__LedAnimation_Result),
  irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_member_array,  // message members
  irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_type_support_handle = {
  0,
  &irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_Result)() {
  irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__action__LedAnimation_Result__rosidl_typesupport_introspection_c__LedAnimation_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"


// Include directives for member types
// Member `remaining_runtime`
// already included above
// #include "builtin_interfaces/msg/duration.h"
// Member `remaining_runtime`
// already included above
// #include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__LedAnimation_Feedback__init(message_memory);
}

void irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_fini_function(void * message_memory)
{
  irobot_create_msgs__action__LedAnimation_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_member_array[1] = {
  {
    "remaining_runtime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_Feedback, remaining_runtime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "LedAnimation_Feedback",  // message name
  1,  // number of fields
  sizeof(irobot_create_msgs__action__LedAnimation_Feedback),
  irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_member_array,  // message members
  irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_type_support_handle = {
  0,
  &irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_Feedback)() {
  irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__action__LedAnimation_Feedback__rosidl_typesupport_introspection_c__LedAnimation_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "irobot_create_msgs/action/led_animation.h"
// Member `goal`
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__LedAnimation_SendGoal_Request__init(message_memory);
}

void irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_fini_function(void * message_memory)
{
  irobot_create_msgs__action__LedAnimation_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "LedAnimation_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__LedAnimation_SendGoal_Request),
  irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_member_array,  // message members
  irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_type_support_handle = {
  0,
  &irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_SendGoal_Request)() {
  irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_Goal)();
  if (!irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__action__LedAnimation_SendGoal_Request__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__LedAnimation_SendGoal_Response__init(message_memory);
}

void irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_fini_function(void * message_memory)
{
  irobot_create_msgs__action__LedAnimation_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "LedAnimation_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__LedAnimation_SendGoal_Response),
  irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_member_array,  // message members
  irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_type_support_handle = {
  0,
  &irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_SendGoal_Response)() {
  irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__action__LedAnimation_SendGoal_Response__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_service_members = {
  "irobot_create_msgs__action",  // service namespace
  "LedAnimation_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_service_type_support_handle = {
  0,
  &irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_SendGoal)() {
  if (!irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_service_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_SendGoal_Response)()->data;
  }

  return &irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__LedAnimation_GetResult_Request__init(message_memory);
}

void irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_fini_function(void * message_memory)
{
  irobot_create_msgs__action__LedAnimation_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "LedAnimation_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(irobot_create_msgs__action__LedAnimation_GetResult_Request),
  irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_member_array,  // message members
  irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_type_support_handle = {
  0,
  &irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_GetResult_Request)() {
  irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__action__LedAnimation_GetResult_Request__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "irobot_create_msgs/action/led_animation.h"
// Member `result`
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__LedAnimation_GetResult_Response__init(message_memory);
}

void irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_fini_function(void * message_memory)
{
  irobot_create_msgs__action__LedAnimation_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "LedAnimation_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__LedAnimation_GetResult_Response),
  irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_member_array,  // message members
  irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_type_support_handle = {
  0,
  &irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_GetResult_Response)() {
  irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_Result)();
  if (!irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__action__LedAnimation_GetResult_Response__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_service_members = {
  "irobot_create_msgs__action",  // service namespace
  "LedAnimation_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_service_type_support_handle = {
  0,
  &irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_GetResult)() {
  if (!irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_service_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_GetResult_Response)()->data;
  }

  return &irobot_create_msgs__action__detail__led_animation__rosidl_typesupport_introspection_c__LedAnimation_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"
// already included above
// #include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__functions.h"
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "irobot_create_msgs/action/led_animation.h"
// Member `feedback`
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__action__LedAnimation_FeedbackMessage__init(message_memory);
}

void irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_fini_function(void * message_memory)
{
  irobot_create_msgs__action__LedAnimation_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__action__LedAnimation_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_members = {
  "irobot_create_msgs__action",  // message namespace
  "LedAnimation_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__action__LedAnimation_FeedbackMessage),
  irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_member_array,  // message members
  irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_type_support_handle = {
  0,
  &irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_FeedbackMessage)() {
  irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, action, LedAnimation_Feedback)();
  if (!irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__action__LedAnimation_FeedbackMessage__rosidl_typesupport_introspection_c__LedAnimation_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
