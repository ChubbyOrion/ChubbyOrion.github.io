// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:action/RotateAngle.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/action/detail/rotate_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_RotateAngle_Goal_max_rotation_speed
{
public:
  explicit Init_RotateAngle_Goal_max_rotation_speed(::irobot_create_msgs::action::RotateAngle_Goal & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::RotateAngle_Goal max_rotation_speed(::irobot_create_msgs::action::RotateAngle_Goal::_max_rotation_speed_type arg)
  {
    msg_.max_rotation_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_Goal msg_;
};

class Init_RotateAngle_Goal_angle
{
public:
  Init_RotateAngle_Goal_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAngle_Goal_max_rotation_speed angle(::irobot_create_msgs::action::RotateAngle_Goal::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_RotateAngle_Goal_max_rotation_speed(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::RotateAngle_Goal>()
{
  return irobot_create_msgs::action::builder::Init_RotateAngle_Goal_angle();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_RotateAngle_Result_pose
{
public:
  Init_RotateAngle_Result_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irobot_create_msgs::action::RotateAngle_Result pose(::irobot_create_msgs::action::RotateAngle_Result::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::RotateAngle_Result>()
{
  return irobot_create_msgs::action::builder::Init_RotateAngle_Result_pose();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_RotateAngle_Feedback_remaining_angle_travel
{
public:
  Init_RotateAngle_Feedback_remaining_angle_travel()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irobot_create_msgs::action::RotateAngle_Feedback remaining_angle_travel(::irobot_create_msgs::action::RotateAngle_Feedback::_remaining_angle_travel_type arg)
  {
    msg_.remaining_angle_travel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::RotateAngle_Feedback>()
{
  return irobot_create_msgs::action::builder::Init_RotateAngle_Feedback_remaining_angle_travel();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_RotateAngle_SendGoal_Request_goal
{
public:
  explicit Init_RotateAngle_SendGoal_Request_goal(::irobot_create_msgs::action::RotateAngle_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::RotateAngle_SendGoal_Request goal(::irobot_create_msgs::action::RotateAngle_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_SendGoal_Request msg_;
};

class Init_RotateAngle_SendGoal_Request_goal_id
{
public:
  Init_RotateAngle_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAngle_SendGoal_Request_goal goal_id(::irobot_create_msgs::action::RotateAngle_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RotateAngle_SendGoal_Request_goal(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::RotateAngle_SendGoal_Request>()
{
  return irobot_create_msgs::action::builder::Init_RotateAngle_SendGoal_Request_goal_id();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_RotateAngle_SendGoal_Response_stamp
{
public:
  explicit Init_RotateAngle_SendGoal_Response_stamp(::irobot_create_msgs::action::RotateAngle_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::RotateAngle_SendGoal_Response stamp(::irobot_create_msgs::action::RotateAngle_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_SendGoal_Response msg_;
};

class Init_RotateAngle_SendGoal_Response_accepted
{
public:
  Init_RotateAngle_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAngle_SendGoal_Response_stamp accepted(::irobot_create_msgs::action::RotateAngle_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RotateAngle_SendGoal_Response_stamp(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::RotateAngle_SendGoal_Response>()
{
  return irobot_create_msgs::action::builder::Init_RotateAngle_SendGoal_Response_accepted();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_RotateAngle_GetResult_Request_goal_id
{
public:
  Init_RotateAngle_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::irobot_create_msgs::action::RotateAngle_GetResult_Request goal_id(::irobot_create_msgs::action::RotateAngle_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::RotateAngle_GetResult_Request>()
{
  return irobot_create_msgs::action::builder::Init_RotateAngle_GetResult_Request_goal_id();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_RotateAngle_GetResult_Response_result
{
public:
  explicit Init_RotateAngle_GetResult_Response_result(::irobot_create_msgs::action::RotateAngle_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::RotateAngle_GetResult_Response result(::irobot_create_msgs::action::RotateAngle_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_GetResult_Response msg_;
};

class Init_RotateAngle_GetResult_Response_status
{
public:
  Init_RotateAngle_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAngle_GetResult_Response_result status(::irobot_create_msgs::action::RotateAngle_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RotateAngle_GetResult_Response_result(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::RotateAngle_GetResult_Response>()
{
  return irobot_create_msgs::action::builder::Init_RotateAngle_GetResult_Response_status();
}

}  // namespace irobot_create_msgs


namespace irobot_create_msgs
{

namespace action
{

namespace builder
{

class Init_RotateAngle_FeedbackMessage_feedback
{
public:
  explicit Init_RotateAngle_FeedbackMessage_feedback(::irobot_create_msgs::action::RotateAngle_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::action::RotateAngle_FeedbackMessage feedback(::irobot_create_msgs::action::RotateAngle_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_FeedbackMessage msg_;
};

class Init_RotateAngle_FeedbackMessage_goal_id
{
public:
  Init_RotateAngle_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotateAngle_FeedbackMessage_feedback goal_id(::irobot_create_msgs::action::RotateAngle_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RotateAngle_FeedbackMessage_feedback(msg_);
  }

private:
  ::irobot_create_msgs::action::RotateAngle_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::action::RotateAngle_FeedbackMessage>()
{
  return irobot_create_msgs::action::builder::Init_RotateAngle_FeedbackMessage_goal_id();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__ROTATE_ANGLE__BUILDER_HPP_
