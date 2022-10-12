// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:action/Dock.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__DOCK__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__DOCK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irobot_create_msgs/action/detail/dock__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Dock_Goal & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::action::Dock_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::Dock_Goal & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_Goal>()
{
  return "irobot_create_msgs::action::Dock_Goal";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_Goal>()
{
  return "irobot_create_msgs/action/Dock_Goal";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::action::Dock_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Dock_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: is_docked
  {
    out << "is_docked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_docked, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: is_docked
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_docked: ";
    rosidl_generator_traits::value_to_yaml(msg.is_docked, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::action::Dock_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::Dock_Result & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_Result>()
{
  return "irobot_create_msgs::action::Dock_Result";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_Result>()
{
  return "irobot_create_msgs/action/Dock_Result";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::action::Dock_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Dock_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: sees_dock
  {
    out << "sees_dock: ";
    rosidl_generator_traits::value_to_yaml(msg.sees_dock, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: sees_dock
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sees_dock: ";
    rosidl_generator_traits::value_to_yaml(msg.sees_dock, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::action::Dock_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::Dock_Feedback & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_Feedback>()
{
  return "irobot_create_msgs::action::Dock_Feedback";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_Feedback>()
{
  return "irobot_create_msgs/action/Dock_Feedback";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::action::Dock_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "irobot_create_msgs/action/detail/dock__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Dock_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::action::Dock_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::Dock_SendGoal_Request & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_SendGoal_Request>()
{
  return "irobot_create_msgs::action::Dock_SendGoal_Request";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_SendGoal_Request>()
{
  return "irobot_create_msgs/action/Dock_SendGoal_Request";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<irobot_create_msgs::action::Dock_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<irobot_create_msgs::action::Dock_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<irobot_create_msgs::action::Dock_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Dock_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::action::Dock_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::Dock_SendGoal_Response & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_SendGoal_Response>()
{
  return "irobot_create_msgs::action::Dock_SendGoal_Response";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_SendGoal_Response>()
{
  return "irobot_create_msgs/action/Dock_SendGoal_Response";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<irobot_create_msgs::action::Dock_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_SendGoal>()
{
  return "irobot_create_msgs::action::Dock_SendGoal";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_SendGoal>()
{
  return "irobot_create_msgs/action/Dock_SendGoal";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<irobot_create_msgs::action::Dock_SendGoal_Request>::value &&
    has_fixed_size<irobot_create_msgs::action::Dock_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<irobot_create_msgs::action::Dock_SendGoal_Request>::value &&
    has_bounded_size<irobot_create_msgs::action::Dock_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<irobot_create_msgs::action::Dock_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<irobot_create_msgs::action::Dock_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irobot_create_msgs::action::Dock_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Dock_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::action::Dock_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::Dock_GetResult_Request & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_GetResult_Request>()
{
  return "irobot_create_msgs::action::Dock_GetResult_Request";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_GetResult_Request>()
{
  return "irobot_create_msgs/action/Dock_GetResult_Request";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<irobot_create_msgs::action::Dock_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/dock__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Dock_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::action::Dock_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::Dock_GetResult_Response & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_GetResult_Response>()
{
  return "irobot_create_msgs::action::Dock_GetResult_Response";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_GetResult_Response>()
{
  return "irobot_create_msgs/action/Dock_GetResult_Response";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<irobot_create_msgs::action::Dock_Result>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<irobot_create_msgs::action::Dock_Result>::value> {};

template<>
struct is_message<irobot_create_msgs::action::Dock_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_GetResult>()
{
  return "irobot_create_msgs::action::Dock_GetResult";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_GetResult>()
{
  return "irobot_create_msgs/action/Dock_GetResult";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<irobot_create_msgs::action::Dock_GetResult_Request>::value &&
    has_fixed_size<irobot_create_msgs::action::Dock_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<irobot_create_msgs::action::Dock_GetResult_Request>::value &&
    has_bounded_size<irobot_create_msgs::action::Dock_GetResult_Response>::value
  >
{
};

template<>
struct is_service<irobot_create_msgs::action::Dock_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<irobot_create_msgs::action::Dock_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irobot_create_msgs::action::Dock_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "irobot_create_msgs/action/detail/dock__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const Dock_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Dock_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Dock_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::action::Dock_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::Dock_FeedbackMessage & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::Dock_FeedbackMessage>()
{
  return "irobot_create_msgs::action::Dock_FeedbackMessage";
}

template<>
inline const char * name<irobot_create_msgs::action::Dock_FeedbackMessage>()
{
  return "irobot_create_msgs/action/Dock_FeedbackMessage";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::Dock_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<irobot_create_msgs::action::Dock_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::Dock_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<irobot_create_msgs::action::Dock_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<irobot_create_msgs::action::Dock_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<irobot_create_msgs::action::Dock>
  : std::true_type
{
};

template<>
struct is_action_goal<irobot_create_msgs::action::Dock_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<irobot_create_msgs::action::Dock_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<irobot_create_msgs::action::Dock_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__DOCK__TRAITS_HPP_
