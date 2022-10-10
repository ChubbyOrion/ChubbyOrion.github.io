// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/HazardDetection.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irobot_create_msgs/msg/detail/hazard_detection__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace irobot_create_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HazardDetection & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HazardDetection & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HazardDetection & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::msg::HazardDetection & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::msg::HazardDetection & msg)
{
  return irobot_create_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::msg::HazardDetection>()
{
  return "irobot_create_msgs::msg::HazardDetection";
}

template<>
inline const char * name<irobot_create_msgs::msg::HazardDetection>()
{
  return "irobot_create_msgs/msg/HazardDetection";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::HazardDetection>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::HazardDetection>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irobot_create_msgs::msg::HazardDetection>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__HAZARD_DETECTION__TRAITS_HPP_
