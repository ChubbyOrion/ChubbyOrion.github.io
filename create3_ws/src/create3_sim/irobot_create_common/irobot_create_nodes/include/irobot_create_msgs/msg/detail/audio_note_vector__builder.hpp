// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/AudioNoteVector.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/audio_note_vector__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioNoteVector_append
{
public:
  explicit Init_AudioNoteVector_append(::irobot_create_msgs::msg::AudioNoteVector & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::AudioNoteVector append(::irobot_create_msgs::msg::AudioNoteVector::_append_type arg)
  {
    msg_.append = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::AudioNoteVector msg_;
};

class Init_AudioNoteVector_notes
{
public:
  explicit Init_AudioNoteVector_notes(::irobot_create_msgs::msg::AudioNoteVector & msg)
  : msg_(msg)
  {}
  Init_AudioNoteVector_append notes(::irobot_create_msgs::msg::AudioNoteVector::_notes_type arg)
  {
    msg_.notes = std::move(arg);
    return Init_AudioNoteVector_append(msg_);
  }

private:
  ::irobot_create_msgs::msg::AudioNoteVector msg_;
};

class Init_AudioNoteVector_header
{
public:
  Init_AudioNoteVector_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNoteVector_notes header(::irobot_create_msgs::msg::AudioNoteVector::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AudioNoteVector_notes(msg_);
  }

private:
  ::irobot_create_msgs::msg::AudioNoteVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::AudioNoteVector>()
{
  return irobot_create_msgs::msg::builder::Init_AudioNoteVector_header();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE_VECTOR__BUILDER_HPP_
