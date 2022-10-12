// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irobot_create_msgs:msg/LedColor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irobot_create_msgs/msg/detail/led_color__rosidl_typesupport_introspection_c.h"
#include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irobot_create_msgs/msg/detail/led_color__functions.h"
#include "irobot_create_msgs/msg/detail/led_color__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__msg__LedColor__init(message_memory);
}

void irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_fini_function(void * message_memory)
{
  irobot_create_msgs__msg__LedColor__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_message_member_array[3] = {
  {
    "red",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__LedColor, red),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "green",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__LedColor, green),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__LedColor, blue),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_message_members = {
  "irobot_create_msgs__msg",  // message namespace
  "LedColor",  // message name
  3,  // number of fields
  sizeof(irobot_create_msgs__msg__LedColor),
  irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_message_member_array,  // message members
  irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_message_type_support_handle = {
  0,
  &irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, msg, LedColor)() {
  if (!irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__msg__LedColor__rosidl_typesupport_introspection_c__LedColor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
