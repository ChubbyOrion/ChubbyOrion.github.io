// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:action/Dock.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__DOCK__STRUCT_H_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__DOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Dock in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__Dock_Goal
{
  uint8_t structure_needs_at_least_one_member;
} irobot_create_msgs__action__Dock_Goal;

// Struct for a sequence of irobot_create_msgs__action__Dock_Goal.
typedef struct irobot_create_msgs__action__Dock_Goal__Sequence
{
  irobot_create_msgs__action__Dock_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__Dock_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Dock in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__Dock_Result
{
  bool is_docked;
} irobot_create_msgs__action__Dock_Result;

// Struct for a sequence of irobot_create_msgs__action__Dock_Result.
typedef struct irobot_create_msgs__action__Dock_Result__Sequence
{
  irobot_create_msgs__action__Dock_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__Dock_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Dock in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__Dock_Feedback
{
  bool sees_dock;
} irobot_create_msgs__action__Dock_Feedback;

// Struct for a sequence of irobot_create_msgs__action__Dock_Feedback.
typedef struct irobot_create_msgs__action__Dock_Feedback__Sequence
{
  irobot_create_msgs__action__Dock_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__Dock_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "irobot_create_msgs/action/detail/dock__struct.h"

/// Struct defined in action/Dock in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__Dock_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__Dock_Goal goal;
} irobot_create_msgs__action__Dock_SendGoal_Request;

// Struct for a sequence of irobot_create_msgs__action__Dock_SendGoal_Request.
typedef struct irobot_create_msgs__action__Dock_SendGoal_Request__Sequence
{
  irobot_create_msgs__action__Dock_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__Dock_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Dock in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__Dock_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} irobot_create_msgs__action__Dock_SendGoal_Response;

// Struct for a sequence of irobot_create_msgs__action__Dock_SendGoal_Response.
typedef struct irobot_create_msgs__action__Dock_SendGoal_Response__Sequence
{
  irobot_create_msgs__action__Dock_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__Dock_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Dock in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__Dock_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} irobot_create_msgs__action__Dock_GetResult_Request;

// Struct for a sequence of irobot_create_msgs__action__Dock_GetResult_Request.
typedef struct irobot_create_msgs__action__Dock_GetResult_Request__Sequence
{
  irobot_create_msgs__action__Dock_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__Dock_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/dock__struct.h"

/// Struct defined in action/Dock in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__Dock_GetResult_Response
{
  int8_t status;
  irobot_create_msgs__action__Dock_Result result;
} irobot_create_msgs__action__Dock_GetResult_Response;

// Struct for a sequence of irobot_create_msgs__action__Dock_GetResult_Response.
typedef struct irobot_create_msgs__action__Dock_GetResult_Response__Sequence
{
  irobot_create_msgs__action__Dock_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__Dock_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "irobot_create_msgs/action/detail/dock__struct.h"

/// Struct defined in action/Dock in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__Dock_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__Dock_Feedback feedback;
} irobot_create_msgs__action__Dock_FeedbackMessage;

// Struct for a sequence of irobot_create_msgs__action__Dock_FeedbackMessage.
typedef struct irobot_create_msgs__action__Dock_FeedbackMessage__Sequence
{
  irobot_create_msgs__action__Dock_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__Dock_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__DOCK__STRUCT_H_
