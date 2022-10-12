// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:srv/ResetPose.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_H_
#define IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/ResetPose in the package irobot_create_msgs.
typedef struct irobot_create_msgs__srv__ResetPose_Request
{
  geometry_msgs__msg__Pose pose;
} irobot_create_msgs__srv__ResetPose_Request;

// Struct for a sequence of irobot_create_msgs__srv__ResetPose_Request.
typedef struct irobot_create_msgs__srv__ResetPose_Request__Sequence
{
  irobot_create_msgs__srv__ResetPose_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__srv__ResetPose_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ResetPose in the package irobot_create_msgs.
typedef struct irobot_create_msgs__srv__ResetPose_Response
{
  uint8_t structure_needs_at_least_one_member;
} irobot_create_msgs__srv__ResetPose_Response;

// Struct for a sequence of irobot_create_msgs__srv__ResetPose_Response.
typedef struct irobot_create_msgs__srv__ResetPose_Response__Sequence
{
  irobot_create_msgs__srv__ResetPose_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__srv__ResetPose_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__SRV__DETAIL__RESET_POSE__STRUCT_H_
