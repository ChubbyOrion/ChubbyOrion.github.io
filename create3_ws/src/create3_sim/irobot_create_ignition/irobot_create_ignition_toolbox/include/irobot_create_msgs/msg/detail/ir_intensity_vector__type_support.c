// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irobot_create_msgs:msg/IrIntensityVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irobot_create_msgs/msg/detail/ir_intensity_vector__rosidl_typesupport_introspection_c.h"
#include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irobot_create_msgs/msg/detail/ir_intensity_vector__functions.h"
#include "irobot_create_msgs/msg/detail/ir_intensity_vector__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `readings`
#include "irobot_create_msgs/msg/ir_intensity.h"
// Member `readings`
#include "irobot_create_msgs/msg/detail/ir_intensity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__msg__IrIntensityVector__init(message_memory);
}

void irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_fini_function(void * message_memory)
{
  irobot_create_msgs__msg__IrIntensityVector__fini(message_memory);
}

size_t irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__size_function__IrIntensityVector__readings(
  const void * untyped_member)
{
  const irobot_create_msgs__msg__IrIntensity__Sequence * member =
    (const irobot_create_msgs__msg__IrIntensity__Sequence *)(untyped_member);
  return member->size;
}

const void * irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__get_const_function__IrIntensityVector__readings(
  const void * untyped_member, size_t index)
{
  const irobot_create_msgs__msg__IrIntensity__Sequence * member =
    (const irobot_create_msgs__msg__IrIntensity__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__get_function__IrIntensityVector__readings(
  void * untyped_member, size_t index)
{
  irobot_create_msgs__msg__IrIntensity__Sequence * member =
    (irobot_create_msgs__msg__IrIntensity__Sequence *)(untyped_member);
  return &member->data[index];
}

void irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__fetch_function__IrIntensityVector__readings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irobot_create_msgs__msg__IrIntensity * item =
    ((const irobot_create_msgs__msg__IrIntensity *)
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__get_const_function__IrIntensityVector__readings(untyped_member, index));
  irobot_create_msgs__msg__IrIntensity * value =
    (irobot_create_msgs__msg__IrIntensity *)(untyped_value);
  *value = *item;
}

void irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__assign_function__IrIntensityVector__readings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irobot_create_msgs__msg__IrIntensity * item =
    ((irobot_create_msgs__msg__IrIntensity *)
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__get_function__IrIntensityVector__readings(untyped_member, index));
  const irobot_create_msgs__msg__IrIntensity * value =
    (const irobot_create_msgs__msg__IrIntensity *)(untyped_value);
  *item = *value;
}

bool irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__resize_function__IrIntensityVector__readings(
  void * untyped_member, size_t size)
{
  irobot_create_msgs__msg__IrIntensity__Sequence * member =
    (irobot_create_msgs__msg__IrIntensity__Sequence *)(untyped_member);
  irobot_create_msgs__msg__IrIntensity__Sequence__fini(member);
  return irobot_create_msgs__msg__IrIntensity__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__IrIntensityVector, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "readings",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__IrIntensityVector, readings),  // bytes offset in struct
    NULL,  // default value
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__size_function__IrIntensityVector__readings,  // size() function pointer
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__get_const_function__IrIntensityVector__readings,  // get_const(index) function pointer
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__get_function__IrIntensityVector__readings,  // get(index) function pointer
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__fetch_function__IrIntensityVector__readings,  // fetch(index, &value) function pointer
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__assign_function__IrIntensityVector__readings,  // assign(index, value) function pointer
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__resize_function__IrIntensityVector__readings  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_members = {
  "irobot_create_msgs__msg",  // message namespace
  "IrIntensityVector",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs__msg__IrIntensityVector),
  irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_member_array,  // message members
  irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_type_support_handle = {
  0,
  &irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, msg, IrIntensityVector)() {
  irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, msg, IrIntensity)();
  if (!irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__msg__IrIntensityVector__rosidl_typesupport_introspection_c__IrIntensityVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
