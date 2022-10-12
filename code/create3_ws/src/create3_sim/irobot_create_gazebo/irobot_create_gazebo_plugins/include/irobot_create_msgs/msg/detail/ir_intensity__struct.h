// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/IrIntensity.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY__STRUCT_H_

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

/// Struct defined in msg/IrIntensity in the package irobot_create_msgs.
/**
  * This message provides the ir intensity readings
 */
typedef struct irobot_create_msgs__msg__IrIntensity
{
  std_msgs__msg__Header header;
  int16_t value;
} irobot_create_msgs__msg__IrIntensity;

// Struct for a sequence of irobot_create_msgs__msg__IrIntensity.
typedef struct irobot_create_msgs__msg__IrIntensity__Sequence
{
  irobot_create_msgs__msg__IrIntensity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__IrIntensity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY__STRUCT_H_
