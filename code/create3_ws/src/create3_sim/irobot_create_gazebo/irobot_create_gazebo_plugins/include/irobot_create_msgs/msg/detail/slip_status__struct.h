// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/SlipStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__STRUCT_H_

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

/// Struct defined in msg/SlipStatus in the package irobot_create_msgs.
/**
  * This message provides the robot slip status
 */
typedef struct irobot_create_msgs__msg__SlipStatus
{
  std_msgs__msg__Header header;
  bool is_slipping;
} irobot_create_msgs__msg__SlipStatus;

// Struct for a sequence of irobot_create_msgs__msg__SlipStatus.
typedef struct irobot_create_msgs__msg__SlipStatus__Sequence
{
  irobot_create_msgs__msg__SlipStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__SlipStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__SLIP_STATUS__STRUCT_H_
