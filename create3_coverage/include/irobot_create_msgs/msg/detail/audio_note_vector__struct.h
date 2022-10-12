// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/AudioNoteVector.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'notes'
#include "irobot_create_msgs/msg/detail/audio_note__struct.h"

/// Struct defined in msg/AudioNoteVector in the package irobot_create_msgs.
/**
  * Play a sequence of audio notes.
 */
typedef struct irobot_create_msgs__msg__AudioNoteVector
{
  std_msgs__msg__Header header;
  irobot_create_msgs__msg__AudioNote__Sequence notes;
  /// If the notes should be appended or overwrite the currently playing notes.
  bool append;
} irobot_create_msgs__msg__AudioNoteVector;

// Struct for a sequence of irobot_create_msgs__msg__AudioNoteVector.
typedef struct irobot_create_msgs__msg__AudioNoteVector__Sequence
{
  irobot_create_msgs__msg__AudioNoteVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__AudioNoteVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__STRUCT_H_
