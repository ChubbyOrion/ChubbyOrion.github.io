// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irobot_create_msgs:action/AudioNoteSequence.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioNoteSequence_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::action::AudioNoteSequence_Goal(_init);
}

void AudioNoteSequence_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::action::AudioNoteSequence_Goal *>(message_memory);
  typed_message->~AudioNoteSequence_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioNoteSequence_Goal_message_member_array[2] = {
  {
    "iterations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_Goal, iterations),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "note_sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irobot_create_msgs::msg::AudioNoteVector>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_Goal, note_sequence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioNoteSequence_Goal_message_members = {
  "irobot_create_msgs::action",  // message namespace
  "AudioNoteSequence_Goal",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs::action::AudioNoteSequence_Goal),
  AudioNoteSequence_Goal_message_member_array,  // message members
  AudioNoteSequence_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioNoteSequence_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_Goal>()
{
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_Goal)() {
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioNoteSequence_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::action::AudioNoteSequence_Result(_init);
}

void AudioNoteSequence_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::action::AudioNoteSequence_Result *>(message_memory);
  typed_message->~AudioNoteSequence_Result();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioNoteSequence_Result_message_member_array[3] = {
  {
    "complete",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_Result, complete),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "iterations_played",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_Result, iterations_played),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "runtime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_Result, runtime),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioNoteSequence_Result_message_members = {
  "irobot_create_msgs::action",  // message namespace
  "AudioNoteSequence_Result",  // message name
  3,  // number of fields
  sizeof(irobot_create_msgs::action::AudioNoteSequence_Result),
  AudioNoteSequence_Result_message_member_array,  // message members
  AudioNoteSequence_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioNoteSequence_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_Result>()
{
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_Result)() {
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioNoteSequence_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::action::AudioNoteSequence_Feedback(_init);
}

void AudioNoteSequence_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::action::AudioNoteSequence_Feedback *>(message_memory);
  typed_message->~AudioNoteSequence_Feedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioNoteSequence_Feedback_message_member_array[2] = {
  {
    "iterations_played",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_Feedback, iterations_played),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "current_runtime",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_Feedback, current_runtime),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioNoteSequence_Feedback_message_members = {
  "irobot_create_msgs::action",  // message namespace
  "AudioNoteSequence_Feedback",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs::action::AudioNoteSequence_Feedback),
  AudioNoteSequence_Feedback_message_member_array,  // message members
  AudioNoteSequence_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioNoteSequence_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_Feedback>()
{
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_Feedback)() {
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioNoteSequence_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request(_init);
}

void AudioNoteSequence_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request *>(message_memory);
  typed_message->~AudioNoteSequence_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioNoteSequence_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioNoteSequence_SendGoal_Request_message_members = {
  "irobot_create_msgs::action",  // message namespace
  "AudioNoteSequence_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request),
  AudioNoteSequence_SendGoal_Request_message_member_array,  // message members
  AudioNoteSequence_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioNoteSequence_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request>()
{
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_SendGoal_Request)() {
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioNoteSequence_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response(_init);
}

void AudioNoteSequence_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response *>(message_memory);
  typed_message->~AudioNoteSequence_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioNoteSequence_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioNoteSequence_SendGoal_Response_message_members = {
  "irobot_create_msgs::action",  // message namespace
  "AudioNoteSequence_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response),
  AudioNoteSequence_SendGoal_Response_message_member_array,  // message members
  AudioNoteSequence_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioNoteSequence_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response>()
{
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_SendGoal_Response)() {
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AudioNoteSequence_SendGoal_service_members = {
  "irobot_create_msgs::action",  // service namespace
  "AudioNoteSequence_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AudioNoteSequence_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioNoteSequence_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::action::AudioNoteSequence_GetResult_Request(_init);
}

void AudioNoteSequence_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::action::AudioNoteSequence_GetResult_Request *>(message_memory);
  typed_message->~AudioNoteSequence_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioNoteSequence_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioNoteSequence_GetResult_Request_message_members = {
  "irobot_create_msgs::action",  // message namespace
  "AudioNoteSequence_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(irobot_create_msgs::action::AudioNoteSequence_GetResult_Request),
  AudioNoteSequence_GetResult_Request_message_member_array,  // message members
  AudioNoteSequence_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioNoteSequence_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_GetResult_Request>()
{
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_GetResult_Request)() {
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioNoteSequence_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::action::AudioNoteSequence_GetResult_Response(_init);
}

void AudioNoteSequence_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::action::AudioNoteSequence_GetResult_Response *>(message_memory);
  typed_message->~AudioNoteSequence_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioNoteSequence_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioNoteSequence_GetResult_Response_message_members = {
  "irobot_create_msgs::action",  // message namespace
  "AudioNoteSequence_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs::action::AudioNoteSequence_GetResult_Response),
  AudioNoteSequence_GetResult_Response_message_member_array,  // message members
  AudioNoteSequence_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioNoteSequence_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_GetResult_Response>()
{
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_GetResult_Response)() {
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers AudioNoteSequence_GetResult_service_members = {
  "irobot_create_msgs::action",  // service namespace
  "AudioNoteSequence_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t AudioNoteSequence_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::irobot_create_msgs::action::AudioNoteSequence_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::irobot_create_msgs::action::AudioNoteSequence_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void AudioNoteSequence_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage(_init);
}

void AudioNoteSequence_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage *>(message_memory);
  typed_message->~AudioNoteSequence_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AudioNoteSequence_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AudioNoteSequence_FeedbackMessage_message_members = {
  "irobot_create_msgs::action",  // message namespace
  "AudioNoteSequence_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage),
  AudioNoteSequence_FeedbackMessage_message_member_array,  // message members
  AudioNoteSequence_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  AudioNoteSequence_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AudioNoteSequence_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AudioNoteSequence_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage>()
{
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, action, AudioNoteSequence_FeedbackMessage)() {
  return &::irobot_create_msgs::action::rosidl_typesupport_introspection_cpp::AudioNoteSequence_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
