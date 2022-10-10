// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/WheelVels.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__STRUCT_H_

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

/// Struct defined in msg/WheelVels in the package irobot_create_msgs.
/**
  * This message contains wheel velocity measurements.
 */
typedef struct irobot_create_msgs__msg__WheelVels
{
  /// Header stamp should be acquisition time of measure.
  std_msgs__msg__Header header;
  /// Velocity measure for left wheel in rad/sec.
  float velocity_left;
  /// Velocity measure for right wheel in rad/sec.
  float velocity_right;
} irobot_create_msgs__msg__WheelVels;

// Struct for a sequence of irobot_create_msgs__msg__WheelVels.
typedef struct irobot_create_msgs__msg__WheelVels__Sequence
{
  irobot_create_msgs__msg__WheelVels * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__WheelVels__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_VELS__STRUCT_H_
