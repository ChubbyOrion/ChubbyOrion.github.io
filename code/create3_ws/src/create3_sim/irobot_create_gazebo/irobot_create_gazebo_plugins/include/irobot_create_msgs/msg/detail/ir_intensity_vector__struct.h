// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/IrIntensityVector.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__STRUCT_H_

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
// Member 'readings'
#include "irobot_create_msgs/msg/detail/ir_intensity__struct.h"

/// Struct defined in msg/IrIntensityVector in the package irobot_create_msgs.
/**
  * This message provides the ir intensity readings
 */
typedef struct irobot_create_msgs__msg__IrIntensityVector
{
  std_msgs__msg__Header header;
  irobot_create_msgs__msg__IrIntensity__Sequence readings;
} irobot_create_msgs__msg__IrIntensityVector;

// Struct for a sequence of irobot_create_msgs__msg__IrIntensityVector.
typedef struct irobot_create_msgs__msg__IrIntensityVector__Sequence
{
  irobot_create_msgs__msg__IrIntensityVector * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__IrIntensityVector__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__IR_INTENSITY_VECTOR__STRUCT_H_
