// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:srv/EStop.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__SRV__DETAIL__E_STOP__STRUCT_H_
#define IROBOT_CREATE_MSGS__SRV__DETAIL__E_STOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/EStop in the package irobot_create_msgs.
typedef struct irobot_create_msgs__srv__EStop_Request
{
  /// true enables e-stop disabling drive motor power, false disables e-stop re-enabling motor power
  bool e_stop_on;
} irobot_create_msgs__srv__EStop_Request;

// Struct for a sequence of irobot_create_msgs__srv__EStop_Request.
typedef struct irobot_create_msgs__srv__EStop_Request__Sequence
{
  irobot_create_msgs__srv__EStop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__srv__EStop_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/EStop in the package irobot_create_msgs.
typedef struct irobot_create_msgs__srv__EStop_Response
{
  /// indicate successful application of command
  bool success;
  /// informational for result
  rosidl_runtime_c__String message;
} irobot_create_msgs__srv__EStop_Response;

// Struct for a sequence of irobot_create_msgs__srv__EStop_Response.
typedef struct irobot_create_msgs__srv__EStop_Response__Sequence
{
  irobot_create_msgs__srv__EStop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__srv__EStop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__SRV__DETAIL__E_STOP__STRUCT_H_
