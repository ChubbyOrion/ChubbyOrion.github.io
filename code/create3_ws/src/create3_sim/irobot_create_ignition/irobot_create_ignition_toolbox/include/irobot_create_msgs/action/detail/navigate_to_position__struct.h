// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:action/NavigateToPosition.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSITION__STRUCT_H_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/NavigateToPosition in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__NavigateToPosition_Goal
{
  /// Drive to goal position in odometry frame using simple rotate/translate/rotate approach
  geometry_msgs__msg__PoseStamped goal_pose;
  /// Whether to achieve goal heading for final orientation or just use position
  bool achieve_goal_heading;
  /// Max translation speed (positive m/s), will cap negative distance to negative speed
  float max_translation_speed;
  /// Max rotation speed (positive rad/s), will cap negative angle to negative speed
  float max_rotation_speed;
} irobot_create_msgs__action__NavigateToPosition_Goal;

// Struct for a sequence of irobot_create_msgs__action__NavigateToPosition_Goal.
typedef struct irobot_create_msgs__action__NavigateToPosition_Goal__Sequence
{
  irobot_create_msgs__action__NavigateToPosition_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__NavigateToPosition_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'pose'
// already included above
// #include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in action/NavigateToPosition in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__NavigateToPosition_Result
{
  geometry_msgs__msg__PoseStamped pose;
} irobot_create_msgs__action__NavigateToPosition_Result;

// Struct for a sequence of irobot_create_msgs__action__NavigateToPosition_Result.
typedef struct irobot_create_msgs__action__NavigateToPosition_Result__Sequence
{
  irobot_create_msgs__action__NavigateToPosition_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__NavigateToPosition_Result__Sequence;


// Constants defined in the message

/// Constant 'ROTATING_TO_GOAL_POSITION'.
enum
{
  irobot_create_msgs__action__NavigateToPosition_Feedback__ROTATING_TO_GOAL_POSITION = 1
};

/// Constant 'DRIVING_TO_GOAL_POSITION'.
/**
  * Whether robot is in second phase translating to to goal position
 */
enum
{
  irobot_create_msgs__action__NavigateToPosition_Feedback__DRIVING_TO_GOAL_POSITION = 2
};

/// Constant 'ROTATING_TO_GOAL_ORIENTATION'.
/**
  * Whether robot is in third phase rotating to face goal orientation
 */
enum
{
  irobot_create_msgs__action__NavigateToPosition_Feedback__ROTATING_TO_GOAL_ORIENTATION = 3
};

/// Struct defined in action/NavigateToPosition in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__NavigateToPosition_Feedback
{
  /// Which of the 3 phases above that robot is currently in
  int8_t navigate_state;
  /// Remaining radians to rotate when robot is ROTATING_TO_GOAL_POSITION or ROTATING_TO_GOAL_ORIENTATION
  float remaining_angle_travel;
  /// How much distance is left to travel when robot is DRIVING_TO_GOAL_POSITION
  float remaining_travel_distance;
} irobot_create_msgs__action__NavigateToPosition_Feedback;

// Struct for a sequence of irobot_create_msgs__action__NavigateToPosition_Feedback.
typedef struct irobot_create_msgs__action__NavigateToPosition_Feedback__Sequence
{
  irobot_create_msgs__action__NavigateToPosition_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__NavigateToPosition_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "irobot_create_msgs/action/detail/navigate_to_position__struct.h"

/// Struct defined in action/NavigateToPosition in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__NavigateToPosition_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__NavigateToPosition_Goal goal;
} irobot_create_msgs__action__NavigateToPosition_SendGoal_Request;

// Struct for a sequence of irobot_create_msgs__action__NavigateToPosition_SendGoal_Request.
typedef struct irobot_create_msgs__action__NavigateToPosition_SendGoal_Request__Sequence
{
  irobot_create_msgs__action__NavigateToPosition_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__NavigateToPosition_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/NavigateToPosition in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__NavigateToPosition_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} irobot_create_msgs__action__NavigateToPosition_SendGoal_Response;

// Struct for a sequence of irobot_create_msgs__action__NavigateToPosition_SendGoal_Response.
typedef struct irobot_create_msgs__action__NavigateToPosition_SendGoal_Response__Sequence
{
  irobot_create_msgs__action__NavigateToPosition_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__NavigateToPosition_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/NavigateToPosition in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__NavigateToPosition_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} irobot_create_msgs__action__NavigateToPosition_GetResult_Request;

// Struct for a sequence of irobot_create_msgs__action__NavigateToPosition_GetResult_Request.
typedef struct irobot_create_msgs__action__NavigateToPosition_GetResult_Request__Sequence
{
  irobot_create_msgs__action__NavigateToPosition_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__NavigateToPosition_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/navigate_to_position__struct.h"

/// Struct defined in action/NavigateToPosition in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__NavigateToPosition_GetResult_Response
{
  int8_t status;
  irobot_create_msgs__action__NavigateToPosition_Result result;
} irobot_create_msgs__action__NavigateToPosition_GetResult_Response;

// Struct for a sequence of irobot_create_msgs__action__NavigateToPosition_GetResult_Response.
typedef struct irobot_create_msgs__action__NavigateToPosition_GetResult_Response__Sequence
{
  irobot_create_msgs__action__NavigateToPosition_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__NavigateToPosition_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "irobot_create_msgs/action/detail/navigate_to_position__struct.h"

/// Struct defined in action/NavigateToPosition in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__NavigateToPosition_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__NavigateToPosition_Feedback feedback;
} irobot_create_msgs__action__NavigateToPosition_FeedbackMessage;

// Struct for a sequence of irobot_create_msgs__action__NavigateToPosition_FeedbackMessage.
typedef struct irobot_create_msgs__action__NavigateToPosition_FeedbackMessage__Sequence
{
  irobot_create_msgs__action__NavigateToPosition_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__NavigateToPosition_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__NAVIGATE_TO_POSITION__STRUCT_H_
