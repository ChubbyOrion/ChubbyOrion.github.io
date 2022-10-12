// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irobot_create_msgs:msg/Button.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irobot_create_msgs/msg/detail/button__rosidl_typesupport_introspection_c.h"
#include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irobot_create_msgs/msg/detail/button__functions.h"
#include "irobot_create_msgs/msg/detail/button__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `last_start_pressed_time`
#include "builtin_interfaces/msg/time.h"
// Member `last_start_pressed_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `last_pressed_duration`
#include "builtin_interfaces/msg/duration.h"
// Member `last_pressed_duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__msg__Button__init(message_memory);
}

void irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_fini_function(void * message_memory)
{
  irobot_create_msgs__msg__Button__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__Button, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_pressed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__Button, is_pressed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_start_pressed_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__Button, last_start_pressed_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_pressed_duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__Button, last_pressed_duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_members = {
  "irobot_create_msgs__msg",  // message namespace
  "Button",  // message name
  4,  // number of fields
  sizeof(irobot_create_msgs__msg__Button),
  irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_member_array,  // message members
  irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_type_support_handle = {
  0,
  &irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, msg, Button)() {
  irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__msg__Button__rosidl_typesupport_introspection_c__Button_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
