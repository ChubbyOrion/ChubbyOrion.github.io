// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/WheelTicks.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__STRUCT_H_

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

/// Struct defined in msg/WheelTicks in the package irobot_create_msgs.
/**
  * This message contains wheel ticks raw measurements.
  * It can be used both for publishing integrated as well as absolute encoder readings.
 */
typedef struct irobot_create_msgs__msg__WheelTicks
{
  /// Header stamp should be acquisition time of measure.
  std_msgs__msg__Header header;
  /// Count of encoder ticks for left wheel.
  int32_t ticks_left;
  /// Count of encoder ticks for right wheel.
  int32_t ticks_right;
} irobot_create_msgs__msg__WheelTicks;

// Struct for a sequence of irobot_create_msgs__msg__WheelTicks.
typedef struct irobot_create_msgs__msg__WheelTicks__Sequence
{
  irobot_create_msgs__msg__WheelTicks * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__WheelTicks__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_TICKS__STRUCT_H_
