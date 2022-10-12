// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:action/DriveArc.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__ACTION__DETAIL__DRIVE_ARC__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__ACTION__DETAIL__DRIVE_ARC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irobot_create_msgs/action/detail/drive_arc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveArc_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: translate_direction
  {
    out << "translate_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.translate_direction, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: max_translation_speed
  {
    out << "max_translation_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_translation_speed, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveArc_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: translate_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translate_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.translate_direction, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: max_translation_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_translation_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_translation_speed, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveArc_Goal & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::action::DriveArc_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::DriveArc_Goal & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_Goal>()
{
  return "irobot_create_msgs::action::DriveArc_Goal";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_Goal>()
{
  return "irobot_create_msgs/action/DriveArc_Goal";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::action::DriveArc_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveArc_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveArc_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveArc_Result & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::action::DriveArc_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::DriveArc_Result & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_Result>()
{
  return "irobot_create_msgs::action::DriveArc_Result";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_Result>()
{
  return "irobot_create_msgs/action/DriveArc_Result";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_Result>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_Result>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<irobot_create_msgs::action::DriveArc_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveArc_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: remaining_angle_travel
  {
    out << "remaining_angle_travel: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_angle_travel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DriveArc_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: remaining_angle_travel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_angle_travel: ";
    rosidl_generator_traits::value_to_yaml(msg.remaining_angle_travel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DriveArc_Feedback & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::action::DriveArc_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::DriveArc_Feedback & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_Feedback>()
{
  return "irobot_create_msgs::action::DriveArc_Feedback";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_Feedback>()
{
  return "irobot_create_msgs/action/DriveArc_Feedback";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::action::DriveArc_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "irobot_create_msgs/action/detail/drive_arc__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveArc_SendGoal_Request & msg,
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
  const DriveArc_SendGoal_Request & msg,
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

inline std::string to_yaml(const DriveArc_SendGoal_Request & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::action::DriveArc_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::DriveArc_SendGoal_Request & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_SendGoal_Request>()
{
  return "irobot_create_msgs::action::DriveArc_SendGoal_Request";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_SendGoal_Request>()
{
  return "irobot_create_msgs/action/DriveArc_SendGoal_Request";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<irobot_create_msgs::action::DriveArc_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<irobot_create_msgs::action::DriveArc_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<irobot_create_msgs::action::DriveArc_SendGoal_Request>
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
  const DriveArc_SendGoal_Response & msg,
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
  const DriveArc_SendGoal_Response & msg,
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

inline std::string to_yaml(const DriveArc_SendGoal_Response & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::action::DriveArc_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::DriveArc_SendGoal_Response & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_SendGoal_Response>()
{
  return "irobot_create_msgs::action::DriveArc_SendGoal_Response";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_SendGoal_Response>()
{
  return "irobot_create_msgs/action/DriveArc_SendGoal_Response";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<irobot_create_msgs::action::DriveArc_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_SendGoal>()
{
  return "irobot_create_msgs::action::DriveArc_SendGoal";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_SendGoal>()
{
  return "irobot_create_msgs/action/DriveArc_SendGoal";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<irobot_create_msgs::action::DriveArc_SendGoal_Request>::value &&
    has_fixed_size<irobot_create_msgs::action::DriveArc_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<irobot_create_msgs::action::DriveArc_SendGoal_Request>::value &&
    has_bounded_size<irobot_create_msgs::action::DriveArc_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<irobot_create_msgs::action::DriveArc_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<irobot_create_msgs::action::DriveArc_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irobot_create_msgs::action::DriveArc_SendGoal_Response>
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
  const DriveArc_GetResult_Request & msg,
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
  const DriveArc_GetResult_Request & msg,
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

inline std::string to_yaml(const DriveArc_GetResult_Request & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::action::DriveArc_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::DriveArc_GetResult_Request & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_GetResult_Request>()
{
  return "irobot_create_msgs::action::DriveArc_GetResult_Request";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_GetResult_Request>()
{
  return "irobot_create_msgs/action/DriveArc_GetResult_Request";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<irobot_create_msgs::action::DriveArc_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "irobot_create_msgs/action/detail/drive_arc__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveArc_GetResult_Response & msg,
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
  const DriveArc_GetResult_Response & msg,
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

inline std::string to_yaml(const DriveArc_GetResult_Response & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::action::DriveArc_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::DriveArc_GetResult_Response & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_GetResult_Response>()
{
  return "irobot_create_msgs::action::DriveArc_GetResult_Response";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_GetResult_Response>()
{
  return "irobot_create_msgs/action/DriveArc_GetResult_Response";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<irobot_create_msgs::action::DriveArc_Result>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<irobot_create_msgs::action::DriveArc_Result>::value> {};

template<>
struct is_message<irobot_create_msgs::action::DriveArc_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_GetResult>()
{
  return "irobot_create_msgs::action::DriveArc_GetResult";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_GetResult>()
{
  return "irobot_create_msgs/action/DriveArc_GetResult";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<irobot_create_msgs::action::DriveArc_GetResult_Request>::value &&
    has_fixed_size<irobot_create_msgs::action::DriveArc_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<irobot_create_msgs::action::DriveArc_GetResult_Request>::value &&
    has_bounded_size<irobot_create_msgs::action::DriveArc_GetResult_Response>::value
  >
{
};

template<>
struct is_service<irobot_create_msgs::action::DriveArc_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<irobot_create_msgs::action::DriveArc_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irobot_create_msgs::action::DriveArc_GetResult_Response>
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
// #include "irobot_create_msgs/action/detail/drive_arc__traits.hpp"

namespace irobot_create_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const DriveArc_FeedbackMessage & msg,
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
  const DriveArc_FeedbackMessage & msg,
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

inline std::string to_yaml(const DriveArc_FeedbackMessage & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::action::DriveArc_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::action::DriveArc_FeedbackMessage & msg)
{
  return irobot_create_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::action::DriveArc_FeedbackMessage>()
{
  return "irobot_create_msgs::action::DriveArc_FeedbackMessage";
}

template<>
inline const char * name<irobot_create_msgs::action::DriveArc_FeedbackMessage>()
{
  return "irobot_create_msgs/action/DriveArc_FeedbackMessage";
}

template<>
struct has_fixed_size<irobot_create_msgs::action::DriveArc_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<irobot_create_msgs::action::DriveArc_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::action::DriveArc_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<irobot_create_msgs::action::DriveArc_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<irobot_create_msgs::action::DriveArc_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<irobot_create_msgs::action::DriveArc>
  : std::true_type
{
};

template<>
struct is_action_goal<irobot_create_msgs::action::DriveArc_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<irobot_create_msgs::action::DriveArc_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<irobot_create_msgs::action::DriveArc_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // IROBOT_CREATE_MSGS__ACTION__DETAIL__DRIVE_ARC__TRAITS_HPP_
