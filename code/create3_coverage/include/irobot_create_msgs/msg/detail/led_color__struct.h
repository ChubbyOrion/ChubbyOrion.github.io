// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/LedColor.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/LedColor in the package irobot_create_msgs.
/**
  * This message is to set RGB values (0-255) for an LED
 */
typedef struct irobot_create_msgs__msg__LedColor
{
  uint8_t red;
  uint8_t green;
  uint8_t blue;
} irobot_create_msgs__msg__LedColor;

// Struct for a sequence of irobot_create_msgs__msg__LedColor.
typedef struct irobot_create_msgs__msg__LedColor__Sequence
{
  irobot_create_msgs__msg__LedColor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__LedColor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__LED_COLOR__STRUCT_H_
