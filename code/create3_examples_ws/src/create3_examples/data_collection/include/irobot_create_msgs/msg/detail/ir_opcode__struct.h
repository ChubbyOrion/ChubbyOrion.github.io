// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/IrOpcode.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CODE_IR_FORCE_FIELD'.
enum
{
  irobot_create_msgs__msg__IrOpcode__CODE_IR_FORCE_FIELD = 161
};

/// Constant 'CODE_IR_VIRTUAL_WALL'.
enum
{
  irobot_create_msgs__msg__IrOpcode__CODE_IR_VIRTUAL_WALL = 162
};

/// Constant 'CODE_IR_BUOY_GREEN'.
enum
{
  irobot_create_msgs__msg__IrOpcode__CODE_IR_BUOY_GREEN = 164
};

/// Constant 'CODE_IR_BUOY_RED'.
enum
{
  irobot_create_msgs__msg__IrOpcode__CODE_IR_BUOY_RED = 168
};

/// Constant 'CODE_IR_BUOY_BOTH'.
enum
{
  irobot_create_msgs__msg__IrOpcode__CODE_IR_BUOY_BOTH = 172
};

/// Constant 'CODE_IR_EVAC_GREEN_FIELD'.
enum
{
  irobot_create_msgs__msg__IrOpcode__CODE_IR_EVAC_GREEN_FIELD = 244
};

/// Constant 'CODE_IR_EVAC_RED_FIELD'.
enum
{
  irobot_create_msgs__msg__IrOpcode__CODE_IR_EVAC_RED_FIELD = 248
};

/// Constant 'CODE_IR_EVAC_BOTH_FIELD'.
enum
{
  irobot_create_msgs__msg__IrOpcode__CODE_IR_EVAC_BOTH_FIELD = 252
};

/// Constant 'SENSOR_OMNI'.
enum
{
  irobot_create_msgs__msg__IrOpcode__SENSOR_OMNI = 0
};

/// Constant 'SENSOR_DIRECTIONAL_FRONT'.
enum
{
  irobot_create_msgs__msg__IrOpcode__SENSOR_DIRECTIONAL_FRONT = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/IrOpcode in the package irobot_create_msgs.
/**
  * This message describes a detected ir opcode.
 */
typedef struct irobot_create_msgs__msg__IrOpcode
{
  /// time when we saw the opcode
  std_msgs__msg__Header header;
  /// opcode
  uint8_t opcode;
  /// the sensor which saw the opcode
  uint8_t sensor;
} irobot_create_msgs__msg__IrOpcode;

// Struct for a sequence of irobot_create_msgs__msg__IrOpcode.
typedef struct irobot_create_msgs__msg__IrOpcode__Sequence
{
  irobot_create_msgs__msg__IrOpcode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__IrOpcode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__IR_OPCODE__STRUCT_H_
