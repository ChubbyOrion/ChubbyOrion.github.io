// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/LightringLeds.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irobot_create_msgs/msg/detail/lightring_leds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'leds'
#include "irobot_create_msgs/msg/detail/led_color__traits.hpp"

namespace irobot_create_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LightringLeds & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: leds
  {
    if (msg.leds.size() == 0) {
      out << "leds: []";
    } else {
      out << "leds: [";
      size_t pending_items = msg.leds.size();
      for (auto item : msg.leds) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: override_system
  {
    out << "override_system: ";
    rosidl_generator_traits::value_to_yaml(msg.override_system, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LightringLeds & msg,
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

  // member: leds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.leds.size() == 0) {
      out << "leds: []\n";
    } else {
      out << "leds:\n";
      for (auto item : msg.leds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: override_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "override_system: ";
    rosidl_generator_traits::value_to_yaml(msg.override_system, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LightringLeds & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::msg::LightringLeds & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::msg::LightringLeds & msg)
{
  return irobot_create_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::msg::LightringLeds>()
{
  return "irobot_create_msgs::msg::LightringLeds";
}

template<>
inline const char * name<irobot_create_msgs::msg::LightringLeds>()
{
  return "irobot_create_msgs/msg/LightringLeds";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::LightringLeds>
  : std::integral_constant<bool, has_fixed_size<irobot_create_msgs::msg::LedColor>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::LightringLeds>
  : std::integral_constant<bool, has_bounded_size<irobot_create_msgs::msg::LedColor>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<irobot_create_msgs::msg::LightringLeds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__LIGHTRING_LEDS__TRAITS_HPP_
