// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/Mouse.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__STRUCT_H_

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

/// Struct defined in msg/Mouse in the package irobot_create_msgs.
/**
  * This message contains a mouse raw measurement.
 */
typedef struct irobot_create_msgs__msg__Mouse
{
  /// Header stamp should be acquisition time of mouse measure.
  std_msgs__msg__Header header;
  /// Motions in the X dimension in meters.
  float integrated_x;
  /// Motions in the Y dimension in meters.
  float integrated_y;
  /// Value incremented every time mouse stops tracking
  uint32_t frame_id;
  /// Surface quality level. It's proportional to the number of valid features visible by the sensor.
  uint8_t last_squal;
} irobot_create_msgs__msg__Mouse;

// Struct for a sequence of irobot_create_msgs__msg__Mouse.
typedef struct irobot_create_msgs__msg__Mouse__Sequence
{
  irobot_create_msgs__msg__Mouse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__Mouse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__MOUSE__STRUCT_H_
