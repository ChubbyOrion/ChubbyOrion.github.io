// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from irobot_create_msgs:action/AudioNoteSequence.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__AUDIO_NOTE_SEQUENCE__STRUCT_H_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__AUDIO_NOTE_SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INFINITE'.
enum
{
  irobot_create_msgs__action__AudioNoteSequence_Goal__INFINITE = -1l
};

// Include directives for member types
// Member 'note_sequence'
#include "irobot_create_msgs/msg/detail/audio_note_vector__struct.h"

/// Struct defined in action/AudioNoteSequence in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__AudioNoteSequence_Goal
{
  /// Number of note_sequence iterations to play, defaults to 1
  int32_t iterations;
  /// Sequence of notes to play per iteration
  irobot_create_msgs__msg__AudioNoteVector note_sequence;
} irobot_create_msgs__action__AudioNoteSequence_Goal;

// Struct for a sequence of irobot_create_msgs__action__AudioNoteSequence_Goal.
typedef struct irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence
{
  irobot_create_msgs__action__AudioNoteSequence_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__AudioNoteSequence_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'runtime'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/AudioNoteSequence in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__AudioNoteSequence_Result
{
  bool complete;
  /// Number of iterations of note sequence that were played
  int32_t iterations_played;
  /// Runtime of audio playback
  builtin_interfaces__msg__Duration runtime;
} irobot_create_msgs__action__AudioNoteSequence_Result;

// Struct for a sequence of irobot_create_msgs__action__AudioNoteSequence_Result.
typedef struct irobot_create_msgs__action__AudioNoteSequence_Result__Sequence
{
  irobot_create_msgs__action__AudioNoteSequence_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__AudioNoteSequence_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'current_runtime'
// already included above
// #include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in action/AudioNoteSequence in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__AudioNoteSequence_Feedback
{
  int32_t iterations_played;
  /// Runtime of audio playback so far
  builtin_interfaces__msg__Duration current_runtime;
} irobot_create_msgs__action__AudioNoteSequence_Feedback;

// Struct for a sequence of irobot_create_msgs__action__AudioNoteSequence_Feedback.
typedef struct irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence
{
  irobot_create_msgs__action__AudioNoteSequence_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__AudioNoteSequence_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"

/// Struct defined in action/AudioNoteSequence in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__AudioNoteSequence_Goal goal;
} irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request;

// Struct for a sequence of irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request.
typedef struct irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence
{
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__AudioNoteSequence_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/AudioNoteSequence in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response;

// Struct for a sequence of irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response.
typedef struct irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence
{
  irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__AudioNoteSequence_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/AudioNoteSequence in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__AudioNoteSequence_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} irobot_create_msgs__action__AudioNoteSequence_GetResult_Request;

// Struct for a sequence of irobot_create_msgs__action__AudioNoteSequence_GetResult_Request.
typedef struct irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence
{
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__AudioNoteSequence_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"

/// Struct defined in action/AudioNoteSequence in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__AudioNoteSequence_GetResult_Response
{
  int8_t status;
  irobot_create_msgs__action__AudioNoteSequence_Result result;
} irobot_create_msgs__action__AudioNoteSequence_GetResult_Response;

// Struct for a sequence of irobot_create_msgs__action__AudioNoteSequence_GetResult_Response.
typedef struct irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence
{
  irobot_create_msgs__action__AudioNoteSequence_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__AudioNoteSequence_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "irobot_create_msgs/action/detail/audio_note_sequence__struct.h"

/// Struct defined in action/AudioNoteSequence in the package irobot_create_msgs.
typedef struct irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  irobot_create_msgs__action__AudioNoteSequence_Feedback feedback;
} irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage;

// Struct for a sequence of irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage.
typedef struct irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence
{
  irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} irobot_create_msgs__action__AudioNoteSequence_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__AUDIO_NOTE_SEQUENCE__STRUCT_H_
