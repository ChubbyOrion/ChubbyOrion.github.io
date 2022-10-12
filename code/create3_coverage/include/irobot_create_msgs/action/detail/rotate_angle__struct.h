// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:action/RotateAngle.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__STRUCT_H_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RotateAngle in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__RotateAngle_Goal
{
  /// Rotate for relative angle (radians) from current robot position.  Angles greater than 2 PI will cause the robot to rotate in multiple circles
  float angle;
  /// Max rotation speed (positive rad/s), will cap negative angle to negative speed
  float max_rotation_speed;
} irobot_create_msgs__action__RotateAngle_Goal;

// Struct for a sequence of irobot_create_msgs__action__RotateAngle_Goal.
typedef struct irobot_create_msgs__action__RotateAngle_Goal__Sequence
{
  irobot_create_msgs__action__RotateAngle_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__RotateAngle_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/RotateAngle in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__RotateAngle_Result
{
  geometry_msgs__msg__PoseStamped pose;
} irobot_create_msgs__action__RotateAngle_Result;

// Struct for a sequence of irobot_create_msgs__action__RotateAngle_Result.
typedef struct irobot_create_msgs__action__RotateAngle_Result__Sequence
{
  irobot_create_msgs__action__RotateAngle_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__RotateAngle_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/RotateAngle in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__RotateAngle_Feedback
{
  float remaining_angle_travel;
} irobot_create_msgs__action__RotateAngle_Feedback;

// Struct for a sequence of irobot_create_msgs__action__RotateAngle_Feedback.
typedef struct irobot_create_msgs__action__RotateAngle_Feedback__Sequence
{
  irobot_create_msgs__action__RotateAngle_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__RotateAngle_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "irobot_create_msgs/action/detail/rotate_angle__struct.h"

/// Struct defined in action/RotateAngle in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__RotateAngle_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__RotateAngle_Goal goal;
} irobot_create_msgs__action__RotateAngle_SendGoal_Request;

// Struct for a sequence of irobot_create_msgs__action__RotateAngle_SendGoal_Request.
typedef struct irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence
{
  irobot_create_msgs__action__RotateAngle_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__RotateAngle_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RotateAngle in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__RotateAngle_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} irobot_create_msgs__action__RotateAngle_SendGoal_Response;

// Struct for a sequence of irobot_create_msgs__action__RotateAngle_SendGoal_Response.
typedef struct irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence
{
  irobot_create_msgs__action__RotateAngle_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__RotateAngle_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RotateAngle in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__RotateAngle_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} irobot_create_msgs__action__RotateAngle_GetResult_Request;

// Struct for a sequence of irobot_create_msgs__action__RotateAngle_GetResult_Request.
typedef struct irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence
{
  irobot_create_msgs__action__RotateAngle_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__RotateAngle_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/rotate_angle__struct.h"

/// Struct defined in action/RotateAngle in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__RotateAngle_GetResult_Response
{
  int8_t status;
  irobot_create_msgs__action__RotateAngle_Result result;
} irobot_create_msgs__action__RotateAngle_GetResult_Response;

// Struct for a sequence of irobot_create_msgs__action__RotateAngle_GetResult_Response.
typedef struct irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence
{
  irobot_create_msgs__action__RotateAngle_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__RotateAngle_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "irobot_create_msgs/action/detail/rotate_angle__struct.h"

/// Struct defined in action/RotateAngle in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__RotateAngle_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__RotateAngle_Feedback feedback;
} irobot_create_msgs__action__RotateAngle_FeedbackMessage;

// Struct for a sequence of irobot_create_msgs__action__RotateAngle_FeedbackMessage.
typedef struct irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence
{
  irobot_create_msgs__action__RotateAngle_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__RotateAngle_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__STRUCT_H_
