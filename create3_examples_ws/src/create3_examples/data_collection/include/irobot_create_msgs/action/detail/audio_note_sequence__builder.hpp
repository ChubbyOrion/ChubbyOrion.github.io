// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:action/AudioNoteSequence.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__AUDIO_NOTE_SEQUENCE__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__AUDIO_NOTE_SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/action/detail/audio_note_sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_AudioNoteSequence_Goal_note_sequence
{
public:
  explicit Init_AudioNoteSequence_Goal_note_sequence(::irobot_create_msgs::action::AudioNoteSequence_Goal & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::AudioNoteSequence_Goal note_sequence(::irobot_create_msgs::action::AudioNoteSequence_Goal::_note_sequence_type arg)
  {
    msg_.note_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_Goal msg_;
};

class Init_AudioNoteSequence_Goal_iterations
{
public:
  Init_AudioNoteSequence_Goal_iterations()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNoteSequence_Goal_note_sequence iterations(::irobot_create_msgs::action::AudioNoteSequence_Goal::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return Init_AudioNoteSequence_Goal_note_sequence(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::AudioNoteSequence_Goal>()
{
  return irobot_create_msgs::action::builder::Init_AudioNoteSequence_Goal_iterations();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_AudioNoteSequence_Result_runtime
{
public:
  explicit Init_AudioNoteSequence_Result_runtime(::irobot_create_msgs::action::AudioNoteSequence_Result & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::AudioNoteSequence_Result runtime(::irobot_create_msgs::action::AudioNoteSequence_Result::_runtime_type arg)
  {
    msg_.runtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_Result msg_;
};

class Init_AudioNoteSequence_Result_iterations_played
{
public:
  explicit Init_AudioNoteSequence_Result_iterations_played(::irobot_create_msgs::action::AudioNoteSequence_Result & msg)
  : msg_(msg)
  {}
  Init_AudioNoteSequence_Result_runtime iterations_played(::irobot_create_msgs::action::AudioNoteSequence_Result::_iterations_played_type arg)
  {
    msg_.iterations_played = std::move(arg);
    return Init_AudioNoteSequence_Result_runtime(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_Result msg_;
};

class Init_AudioNoteSequence_Result_complete
{
public:
  Init_AudioNoteSequence_Result_complete()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNoteSequence_Result_iterations_played complete(::irobot_create_msgs::action::AudioNoteSequence_Result::_complete_type arg)
  {
    msg_.complete = std::move(arg);
    return Init_AudioNoteSequence_Result_iterations_played(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::AudioNoteSequence_Result>()
{
  return irobot_create_msgs::action::builder::Init_AudioNoteSequence_Result_complete();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_AudioNoteSequence_Feedback_current_runtime
{
public:
  explicit Init_AudioNoteSequence_Feedback_current_runtime(::irobot_create_msgs::action::AudioNoteSequence_Feedback & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::AudioNoteSequence_Feedback current_runtime(::irobot_create_msgs::action::AudioNoteSequence_Feedback::_current_runtime_type arg)
  {
    msg_.current_runtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_Feedback msg_;
};

class Init_AudioNoteSequence_Feedback_iterations_played
{
public:
  Init_AudioNoteSequence_Feedback_iterations_played()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNoteSequence_Feedback_current_runtime iterations_played(::irobot_create_msgs::action::AudioNoteSequence_Feedback::_iterations_played_type arg)
  {
    msg_.iterations_played = std::move(arg);
    return Init_AudioNoteSequence_Feedback_current_runtime(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::AudioNoteSequence_Feedback>()
{
  return irobot_create_msgs::action::builder::Init_AudioNoteSequence_Feedback_iterations_played();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_AudioNoteSequence_SendGoal_Request_goal
{
public:
  explicit Init_AudioNoteSequence_SendGoal_Request_goal(::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request goal(::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request msg_;
};

class Init_AudioNoteSequence_SendGoal_Request_goal_id
{
public:
  Init_AudioNoteSequence_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNoteSequence_SendGoal_Request_goal goal_id(::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AudioNoteSequence_SendGoal_Request_goal(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Request>()
{
  return irobot_create_msgs::action::builder::Init_AudioNoteSequence_SendGoal_Request_goal_id();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_AudioNoteSequence_SendGoal_Response_stamp
{
public:
  explicit Init_AudioNoteSequence_SendGoal_Response_stamp(::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response stamp(::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response msg_;
};

class Init_AudioNoteSequence_SendGoal_Response_accepted
{
public:
  Init_AudioNoteSequence_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNoteSequence_SendGoal_Response_stamp accepted(::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_AudioNoteSequence_SendGoal_Response_stamp(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::AudioNoteSequence_SendGoal_Response>()
{
  return irobot_create_msgs::action::builder::Init_AudioNoteSequence_SendGoal_Response_accepted();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_AudioNoteSequence_GetResult_Request_goal_id
{
public:
  Init_AudioNoteSequence_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irobot_create_msgs::action::AudioNoteSequence_GetResult_Request goal_id(::irobot_create_msgs::action::AudioNoteSequence_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::AudioNoteSequence_GetResult_Request>()
{
  return irobot_create_msgs::action::builder::Init_AudioNoteSequence_GetResult_Request_goal_id();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_AudioNoteSequence_GetResult_Response_result
{
public:
  explicit Init_AudioNoteSequence_GetResult_Response_result(::irobot_create_msgs::action::AudioNoteSequence_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::AudioNoteSequence_GetResult_Response result(::irobot_create_msgs::action::AudioNoteSequence_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_GetResult_Response msg_;
};

class Init_AudioNoteSequence_GetResult_Response_status
{
public:
  Init_AudioNoteSequence_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNoteSequence_GetResult_Response_result status(::irobot_create_msgs::action::AudioNoteSequence_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_AudioNoteSequence_GetResult_Response_result(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::AudioNoteSequence_GetResult_Response>()
{
  return irobot_create_msgs::action::builder::Init_AudioNoteSequence_GetResult_Response_status();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_AudioNoteSequence_FeedbackMessage_feedback
{
public:
  explicit Init_AudioNoteSequence_FeedbackMessage_feedback(::irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage feedback(::irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage msg_;
};

class Init_AudioNoteSequence_FeedbackMessage_goal_id
{
public:
  Init_AudioNoteSequence_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNoteSequence_FeedbackMessage_feedback goal_id(::irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_AudioNoteSequence_FeedbackMessage_feedback(msg_);
  }

private:
  ::irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::AudioNoteSequence_FeedbackMessage>()
{
  return irobot_create_msgs::action::builder::Init_AudioNoteSequence_FeedbackMessage_goal_id();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__AUDIO_NOTE_SEQUENCE__BUILDER_HPP_
