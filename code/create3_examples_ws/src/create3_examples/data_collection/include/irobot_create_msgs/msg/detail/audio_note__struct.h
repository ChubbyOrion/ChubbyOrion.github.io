// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/AudioNote.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/AudioNote in the package irobot_create_msgs.
/**
  * Play a note (frequency) for a specific duration
 */
typedef struct irobot_create_msgs__msg__AudioNote
{
  /// Frequency of note in Hz.
  uint16_t frequency;
  /// Time note should play for.
  builtin_interfaces__msg__Duration max_runtime;
} irobot_create_msgs__msg__AudioNote;

// Struct for a sequence of irobot_create_msgs__msg__AudioNote.
typedef struct irobot_create_msgs__msg__AudioNote__Sequence
{
  irobot_create_msgs__msg__AudioNote * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__AudioNote__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__STRUCT_H_
