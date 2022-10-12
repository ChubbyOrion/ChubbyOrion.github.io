// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from irobot_create_msgs:msg/AudioNoteVector.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "irobot_create_msgs/msg/detail/audio_note_vector__rosidl_typesupport_introspection_c.h"
#include "irobot_create_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "irobot_create_msgs/msg/detail/audio_note_vector__functions.h"
#include "irobot_create_msgs/msg/detail/audio_note_vector__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `notes`
#include "irobot_create_msgs/msg/audio_note.h"
// Member `notes`
#include "irobot_create_msgs/msg/detail/audio_note__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  irobot_create_msgs__msg__AudioNoteVector__init(message_memory);
}

void irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_fini_function(void * message_memory)
{
  irobot_create_msgs__msg__AudioNoteVector__fini(message_memory);
}

size_t irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__size_function__AudioNoteVector__notes(
  const void * untyped_member)
{
  const irobot_create_msgs__msg__AudioNote__Sequence * member =
    (const irobot_create_msgs__msg__AudioNote__Sequence *)(untyped_member);
  return member->size;
}

const void * irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__get_const_function__AudioNoteVector__notes(
  const void * untyped_member, size_t index)
{
  const irobot_create_msgs__msg__AudioNote__Sequence * member =
    (const irobot_create_msgs__msg__AudioNote__Sequence *)(untyped_member);
  return &member->data[index];
}

void * irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__get_function__AudioNoteVector__notes(
  void * untyped_member, size_t index)
{
  irobot_create_msgs__msg__AudioNote__Sequence * member =
    (irobot_create_msgs__msg__AudioNote__Sequence *)(untyped_member);
  return &member->data[index];
}

void irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__fetch_function__AudioNoteVector__notes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const irobot_create_msgs__msg__AudioNote * item =
    ((const irobot_create_msgs__msg__AudioNote *)
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__get_const_function__AudioNoteVector__notes(untyped_member, index));
  irobot_create_msgs__msg__AudioNote * value =
    (irobot_create_msgs__msg__AudioNote *)(untyped_value);
  *value = *item;
}

void irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__assign_function__AudioNoteVector__notes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  irobot_create_msgs__msg__AudioNote * item =
    ((irobot_create_msgs__msg__AudioNote *)
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__get_function__AudioNoteVector__notes(untyped_member, index));
  const irobot_create_msgs__msg__AudioNote * value =
    (const irobot_create_msgs__msg__AudioNote *)(untyped_value);
  *item = *value;
}

bool irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__resize_function__AudioNoteVector__notes(
  void * untyped_member, size_t size)
{
  irobot_create_msgs__msg__AudioNote__Sequence * member =
    (irobot_create_msgs__msg__AudioNote__Sequence *)(untyped_member);
  irobot_create_msgs__msg__AudioNote__Sequence__fini(member);
  return irobot_create_msgs__msg__AudioNote__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__AudioNoteVector, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "notes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__AudioNoteVector, notes),  // bytes offset in struct
    NULL,  // default value
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__size_function__AudioNoteVector__notes,  // size() function pointer
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__get_const_function__AudioNoteVector__notes,  // get_const(index) function pointer
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__get_function__AudioNoteVector__notes,  // get(index) function pointer
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__fetch_function__AudioNoteVector__notes,  // fetch(index, &value) function pointer
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__assign_function__AudioNoteVector__notes,  // assign(index, value) function pointer
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__resize_function__AudioNoteVector__notes  // resize(index) function pointer
  },
  {
    "append",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs__msg__AudioNoteVector, append),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_members = {
  "irobot_create_msgs__msg",  // message namespace
  "AudioNoteVector",  // message name
  3,  // number of fields
  sizeof(irobot_create_msgs__msg__AudioNoteVector),
  irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_member_array,  // message members
  irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_init_function,  // function to initialize message memory (memory has to be allocated)
  irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_type_support_handle = {
  0,
  &irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_irobot_create_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, msg, AudioNoteVector)() {
  irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, irobot_create_msgs, msg, AudioNote)();
  if (!irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_type_support_handle.typesupport_identifier) {
    irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &irobot_create_msgs__msg__AudioNoteVector__rosidl_typesupport_introspection_c__AudioNoteVector_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
