// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/AudioNote.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irobot_create_msgs/msg/detail/audio_note__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'max_runtime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace irobot_create_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioNote & msg,
  std::ostream & out)
{
  out << "{";
  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: max_runtime
  {
    out << "max_runtime: ";
    to_flow_style_yaml(msg.max_runtime, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioNote & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: max_runtime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_runtime:\n";
    to_block_style_yaml(msg.max_runtime, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioNote & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::msg::AudioNote & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::msg::AudioNote & msg)
{
  return irobot_create_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::msg::AudioNote>()
{
  return "irobot_create_msgs::msg::AudioNote";
}

template<>
inline const char * name<irobot_create_msgs::msg::AudioNote>()
{
  return "irobot_create_msgs/msg/AudioNote";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::AudioNote>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::AudioNote>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value> {};

template<>
struct is_message<irobot_create_msgs::msg::AudioNote>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__TRAITS_HPP_
