// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:msg/LightringLeds.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_H_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_H_

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
// Member 'leds'
#include "irobot_create_msgs/msg/detail/led_color__struct.h"

/// Struct defined in msg/LightringLeds in the package irobot_create_msgs.
/**
  * This message sets the RGB values of the lightright LEDs
 */
typedef struct irobot_create_msgs__msg__LightringLeds
{
  std_msgs__msg__Header header;
  /// If you look at the lightring as an analog clock with 12 at the front
  /// of the robot
  /// led index 0 is 4 o'clock,
  /// led index 1 is 2 o'clock,
  /// led index 2 is 12 o'clock,
  /// led index 3 is 10 o'clock,
  /// led index 4 is 8 o'clock,
  /// led index 5 is 6 o'clock
  irobot_create_msgs__msg__LedColor leds[6];
  /// Whether to override system's default light patterns with given command
  /// Set to false to return control of lights to system
  bool override_system;
} irobot_create_msgs__msg__LightringLeds;

// Struct for a sequence of irobot_create_msgs__msg__LightringLeds.
typedef struct irobot_create_msgs__msg__LightringLeds__Sequence
{
  irobot_create_msgs__msg__LightringLeds * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__msg__LightringLeds__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__STRUCT_H_
