// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:action/LedAnimation.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/action/detail/led_animation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_LedAnimation_Goal_max_runtime
{
public:
  explicit Init_LedAnimation_Goal_max_runtime(::irobot_create_msgs::action::LedAnimation_Goal & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::LedAnimation_Goal max_runtime(::irobot_create_msgs::action::LedAnimation_Goal::_max_runtime_type arg)
  {
    msg_.max_runtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_Goal msg_;
};

class Init_LedAnimation_Goal_lightring
{
public:
  explicit Init_LedAnimation_Goal_lightring(::irobot_create_msgs::action::LedAnimation_Goal & msg)
  : msg_(msg)
  {}
  Init_LedAnimation_Goal_max_runtime lightring(::irobot_create_msgs::action::LedAnimation_Goal::_lightring_type arg)
  {
    msg_.lightring = std::move(arg);
    return Init_LedAnimation_Goal_max_runtime(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_Goal msg_;
};

class Init_LedAnimation_Goal_animation_type
{
public:
  Init_LedAnimation_Goal_animation_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedAnimation_Goal_lightring animation_type(::irobot_create_msgs::action::LedAnimation_Goal::_animation_type_type arg)
  {
    msg_.animation_type = std::move(arg);
    return Init_LedAnimation_Goal_lightring(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::LedAnimation_Goal>()
{
  return irobot_create_msgs::action::builder::Init_LedAnimation_Goal_animation_type();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_LedAnimation_Result_runtime
{
public:
  Init_LedAnimation_Result_runtime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irobot_create_msgs::action::LedAnimation_Result runtime(::irobot_create_msgs::action::LedAnimation_Result::_runtime_type arg)
  {
    msg_.runtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::LedAnimation_Result>()
{
  return irobot_create_msgs::action::builder::Init_LedAnimation_Result_runtime();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_LedAnimation_Feedback_remaining_runtime
{
public:
  Init_LedAnimation_Feedback_remaining_runtime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irobot_create_msgs::action::LedAnimation_Feedback remaining_runtime(::irobot_create_msgs::action::LedAnimation_Feedback::_remaining_runtime_type arg)
  {
    msg_.remaining_runtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::LedAnimation_Feedback>()
{
  return irobot_create_msgs::action::builder::Init_LedAnimation_Feedback_remaining_runtime();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_LedAnimation_SendGoal_Request_goal
{
public:
  explicit Init_LedAnimation_SendGoal_Request_goal(::irobot_create_msgs::action::LedAnimation_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::LedAnimation_SendGoal_Request goal(::irobot_create_msgs::action::LedAnimation_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_SendGoal_Request msg_;
};

class Init_LedAnimation_SendGoal_Request_goal_id
{
public:
  Init_LedAnimation_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedAnimation_SendGoal_Request_goal goal_id(::irobot_create_msgs::action::LedAnimation_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LedAnimation_SendGoal_Request_goal(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::LedAnimation_SendGoal_Request>()
{
  return irobot_create_msgs::action::builder::Init_LedAnimation_SendGoal_Request_goal_id();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_LedAnimation_SendGoal_Response_stamp
{
public:
  explicit Init_LedAnimation_SendGoal_Response_stamp(::irobot_create_msgs::action::LedAnimation_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::LedAnimation_SendGoal_Response stamp(::irobot_create_msgs::action::LedAnimation_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_SendGoal_Response msg_;
};

class Init_LedAnimation_SendGoal_Response_accepted
{
public:
  Init_LedAnimation_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedAnimation_SendGoal_Response_stamp accepted(::irobot_create_msgs::action::LedAnimation_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_LedAnimation_SendGoal_Response_stamp(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::LedAnimation_SendGoal_Response>()
{
  return irobot_create_msgs::action::builder::Init_LedAnimation_SendGoal_Response_accepted();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_LedAnimation_GetResult_Request_goal_id
{
public:
  Init_LedAnimation_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irobot_create_msgs::action::LedAnimation_GetResult_Request goal_id(::irobot_create_msgs::action::LedAnimation_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::LedAnimation_GetResult_Request>()
{
  return irobot_create_msgs::action::builder::Init_LedAnimation_GetResult_Request_goal_id();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_LedAnimation_GetResult_Response_result
{
public:
  explicit Init_LedAnimation_GetResult_Response_result(::irobot_create_msgs::action::LedAnimation_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::LedAnimation_GetResult_Response result(::irobot_create_msgs::action::LedAnimation_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_GetResult_Response msg_;
};

class Init_LedAnimation_GetResult_Response_status
{
public:
  Init_LedAnimation_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedAnimation_GetResult_Response_result status(::irobot_create_msgs::action::LedAnimation_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_LedAnimation_GetResult_Response_result(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::LedAnimation_GetResult_Response>()
{
  return irobot_create_msgs::action::builder::Init_LedAnimation_GetResult_Response_status();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_LedAnimation_FeedbackMessage_feedback
{
public:
  explicit Init_LedAnimation_FeedbackMessage_feedback(::irobot_create_msgs::action::LedAnimation_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::LedAnimation_FeedbackMessage feedback(::irobot_create_msgs::action::LedAnimation_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_FeedbackMessage msg_;
};

class Init_LedAnimation_FeedbackMessage_goal_id
{
public:
  Init_LedAnimation_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LedAnimation_FeedbackMessage_feedback goal_id(::irobot_create_msgs::action::LedAnimation_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_LedAnimation_FeedbackMessage_feedback(msg_);
  }

private:
  ::irobot_create_msgs::action::LedAnimation_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::LedAnimation_FeedbackMessage>()
{
  return irobot_create_msgs::action::builder::Init_LedAnimation_FeedbackMessage_goal_id();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__LED_ANIMATION__BUILDER_HPP_
