// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from irobot_create_msgs:msg/AudioNoteVector.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__TRAITS_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "irobot_create_msgs/msg/detail/audio_note_vector__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'notes'
#include "irobot_create_msgs/msg/detail/audio_note__traits.hpp"

namespace irobot_create_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AudioNoteVector & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: notes
  {
    if (msg.notes.size() == 0) {
      out << "notes: []";
    } else {
      out << "notes: [";
      size_t pending_items = msg.notes.size();
      for (auto item : msg.notes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: append
  {
    out << "append: ";
    rosidl_generator_traits::value_to_yaml(msg.append, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const AudioNoteVector & msg,
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

  // member: notes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.notes.size() == 0) {
      out << "notes: []\n";
    } else {
      out << "notes:\n";
      for (auto item : msg.notes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: append
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "append: ";
    rosidl_generator_traits::value_to_yaml(msg.append, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AudioNoteVector & msg, bool use_flow_style = false)
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
  const irobot_create_msgs::msg::AudioNoteVector & msg,
  std::ostream & out, size_t indentation = 0)
{
  irobot_create_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use irobot_create_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const irobot_create_msgs::msg::AudioNoteVector & msg)
{
  return irobot_create_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<irobot_create_msgs::msg::AudioNoteVector>()
{
  return "irobot_create_msgs::msg::AudioNoteVector";
}

template<>
inline const char * name<irobot_create_msgs::msg::AudioNoteVector>()
{
  return "irobot_create_msgs/msg/AudioNoteVector";
}

template<>
struct has_fixed_size<irobot_create_msgs::msg::AudioNoteVector>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<irobot_create_msgs::msg::AudioNoteVector>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<irobot_create_msgs::msg::AudioNoteVector>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__TRAITS_HPP_
