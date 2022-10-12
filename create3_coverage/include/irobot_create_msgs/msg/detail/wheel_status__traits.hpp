// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/WheelStatus.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irobot_create_msgs/msg/detail/wheel_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irobot_create_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: current_ma_left
  {
    out << "current_ma_left: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ma_left, out);
    out << ", ";
  }

  // member: current_ma_right
  {
    out << "current_ma_right: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ma_right, out);
    out << ", ";
  }

  // member: pwm_left
  {
    out << "pwm_left: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_left, out);
    out << ", ";
  }

  // member: pwm_right
  {
    out << "pwm_right: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_right, out);
    out << ", ";
  }

  // member: wheels_enabled
  {
    out << "wheels_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.wheels_enabled, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: current_ma_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_ma_left: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ma_left, out);
    out << "\n";
  }

  // member: current_ma_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_ma_right: ";
    rosidl_generator_traits::value_to_yaml(msg.current_ma_right, out);
    out << "\n";
  }

  // member: pwm_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_left: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_left, out);
    out << "\n";
  }

  // member: pwm_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwm_right: ";
    rosidl_generator_traits::value_to_yaml(msg.pwm_right, out);
    out << "\n";
  }

  // member: wheels_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheels_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.wheels_enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace irobot_create_msgs

namespace rosidl_generator_traits
{

[[deprecated("use irobot_create_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const irobot_create_msgs::msg::WheelStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::msg::WheelStatus & msg)
{
  return irobot_create_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::msg::WheelStatus>()
{
  return "irobot_create_msgs::msg::WheelStatus";
}

template<>
inline const char * name<irobot_create_msgs::msg::WheelStatus>()
{
  return "irobot_create_msgs/msg/WheelStatus";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::WheelStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::WheelStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irobot_create_msgs::msg::WheelStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__WHEEL_STATUS__TRAITS_HPP_
