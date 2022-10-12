// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:action/LedAnimation.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__STRUCT_H_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLINK_LIGHTS'.
enum
{
  irobot_create_msgs__action__LedAnimation_Goal__BLINK_LIGHTS = 1
};

/// Constant 'SPIN_LIGHTS'.
enum
{
  irobot_create_msgs__action__LedAnimation_Goal__SPIN_LIGHTS = 2
};

// Include directives for member types
// Member 'lightring'
#include "irobot_create_msgs/msg/detail/lightring_leds__struct.h"
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/LedAnimation in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__LedAnimation_Goal
{
  /// Animation to apply
  int8_t animation_type;
  /// LED values to apply to animation
  irobot_create_msgs__msg__LightringLeds lightring;
  /// Time to apply animation
  builtin_interfaces__msg__Duration max_runtime;
} irobot_create_msgs__action__LedAnimation_Goal;

// Struct for a sequence of irobot_create_msgs__action__LedAnimation_Goal.
typedef struct irobot_create_msgs__action__LedAnimation_Goal__Sequence
{
  irobot_create_msgs__action__LedAnimation_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__LedAnimation_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'runtime'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/LedAnimation in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__LedAnimation_Result
{
  builtin_interfaces__msg__Duration runtime;
} irobot_create_msgs__action__LedAnimation_Result;

// Struct for a sequence of irobot_create_msgs__action__LedAnimation_Result.
typedef struct irobot_create_msgs__action__LedAnimation_Result__Sequence
{
  irobot_create_msgs__action__LedAnimation_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__LedAnimation_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'remaining_runtime'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/LedAnimation in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__LedAnimation_Feedback
{
  builtin_interfaces__msg__Duration remaining_runtime;
} irobot_create_msgs__action__LedAnimation_Feedback;

// Struct for a sequence of irobot_create_msgs__action__LedAnimation_Feedback.
typedef struct irobot_create_msgs__action__LedAnimation_Feedback__Sequence
{
  irobot_create_msgs__action__LedAnimation_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__LedAnimation_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "irobot_create_msgs/action/detail/led_animation__struct.h"

/// Struct defined in action/LedAnimation in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__LedAnimation_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__LedAnimation_Goal goal;
} irobot_create_msgs__action__LedAnimation_SendGoal_Request;

// Struct for a sequence of irobot_create_msgs__action__LedAnimation_SendGoal_Request.
typedef struct irobot_create_msgs__action__LedAnimation_SendGoal_Request__Sequence
{
  irobot_create_msgs__action__LedAnimation_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__LedAnimation_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/LedAnimation in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__LedAnimation_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} irobot_create_msgs__action__LedAnimation_SendGoal_Response;

// Struct for a sequence of irobot_create_msgs__action__LedAnimation_SendGoal_Response.
typedef struct irobot_create_msgs__action__LedAnimation_SendGoal_Response__Sequence
{
  irobot_create_msgs__action__LedAnimation_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__LedAnimation_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/LedAnimation in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__LedAnimation_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} irobot_create_msgs__action__LedAnimation_GetResult_Request;

// Struct for a sequence of irobot_create_msgs__action__LedAnimation_GetResult_Request.
typedef struct irobot_create_msgs__action__LedAnimation_GetResult_Request__Sequence
{
  irobot_create_msgs__action__LedAnimation_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__LedAnimation_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"

/// Struct defined in action/LedAnimation in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__LedAnimation_GetResult_Response
{
  int8_t status;
  irobot_create_msgs__action__LedAnimation_Result result;
} irobot_create_msgs__action__LedAnimation_GetResult_Response;

// Struct for a sequence of irobot_create_msgs__action__LedAnimation_GetResult_Response.
typedef struct irobot_create_msgs__action__LedAnimation_GetResult_Response__Sequence
{
  irobot_create_msgs__action__LedAnimation_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__LedAnimation_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "irobot_create_msgs/action/detail/led_animation__struct.h"

/// Struct defined in action/LedAnimation in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__LedAnimation_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__LedAnimation_Feedback feedback;
} irobot_create_msgs__action__LedAnimation_FeedbackMessage;

// Struct for a sequence of irobot_create_msgs__action__LedAnimation_FeedbackMessage.
typedef struct irobot_create_msgs__action__LedAnimation_FeedbackMessage__Sequence
{
  irobot_create_msgs__action__LedAnimation_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__LedAnimation_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__STRUCT_H_
