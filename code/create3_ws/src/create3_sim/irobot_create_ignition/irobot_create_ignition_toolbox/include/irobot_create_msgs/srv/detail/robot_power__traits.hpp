// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:srv/RobotPower.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__SRV__DETAIL__ROBOT_POWER__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__SRV__DETAIL__ROBOT_POWER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irobot_create_msgs/srv/detail/robot_power__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace irobot_create_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotPower_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotPower_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotPower_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::srv::RobotPower_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::srv::RobotPower_Request & msg)
{
  return irobot_create_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::srv::RobotPower_Request>()
{
  return "irobot_create_msgs::srv::RobotPower_Request";
}

template<>
inline const char * name<irobot_create_msgs::srv::RobotPower_Request>()
{
  return "irobot_create_msgs/srv/RobotPower_Request";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::RobotPower_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<irobot_create_msgs::srv::RobotPower_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<irobot_create_msgs::srv::RobotPower_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace irobot_create_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RobotPower_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotPower_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotPower_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::srv::RobotPower_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::srv::RobotPower_Response & msg)
{
  return irobot_create_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::srv::RobotPower_Response>()
{
  return "irobot_create_msgs::srv::RobotPower_Response";
}

template<>
inline const char * name<irobot_create_msgs::srv::RobotPower_Response>()
{
  return "irobot_create_msgs/srv/RobotPower_Response";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::RobotPower_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irobot_create_msgs::srv::RobotPower_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irobot_create_msgs::srv::RobotPower_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<irobot_create_msgs::srv::RobotPower>()
{
  return "irobot_create_msgs::srv::RobotPower";
}

template<>
inline const char * name<irobot_create_msgs::srv::RobotPower>()
{
  return "irobot_create_msgs/srv/RobotPower";
}

template<>
struct has_fixed_size<irobot_create_msgs::srv::RobotPower>
  : std::integral_constant<
    bool,
    has_fixed_size<irobot_create_msgs::srv::RobotPower_Request>::value &&
    has_fixed_size<irobot_create_msgs::srv::RobotPower_Response>::value
  >
{
};

template<>
struct has_bounded_size<irobot_create_msgs::srv::RobotPower>
  : std::integral_constant<
    bool,
    has_bounded_size<irobot_create_msgs::srv::RobotPower_Request>::value &&
    has_bounded_size<irobot_create_msgs::srv::RobotPower_Response>::value
  >
{
};

template<>
struct is_service<irobot_create_msgs::srv::RobotPower>
  : std::true_type
{
};

template<>
struct is_service_request<irobot_create_msgs::srv::RobotPower_Request>
  : std::true_type
{
};

template<>
struct is_service_response<irobot_create_msgs::srv::RobotPower_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__SRV__DETAIL__ROBOT_POWER__TRAITS_HPP_
