// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from irobot_create_msgs:msg/AudioNote.idl
// generated code does not contain a copyright notice

#ifndef IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__BUILDER_HPP_
#define IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "irobot_create_msgs/msg/detail/audio_note__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace irobot_create_msgs
{

namespace msg
{

namespace builder
{

class Init_AudioNote_max_runtime
{
public:
  explicit Init_AudioNote_max_runtime(::irobot_create_msgs::msg::AudioNote & msg)
  : msg_(msg)
  {}
  ::irobot_create_msgs::msg::AudioNote max_runtime(::irobot_create_msgs::msg::AudioNote::_max_runtime_type arg)
  {
    msg_.max_runtime = std::move(arg);
    return std::move(msg_);
  }

private:
  ::irobot_create_msgs::msg::AudioNote msg_;
};

class Init_AudioNote_frequency
{
public:
  Init_AudioNote_frequency()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AudioNote_max_runtime frequency(::irobot_create_msgs::msg::AudioNote::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_AudioNote_max_runtime(msg_);
  }

private:
  ::irobot_create_msgs::msg::AudioNote msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::irobot_create_msgs::msg::AudioNote>()
{
  return irobot_create_msgs::msg::builder::Init_AudioNote_frequency();
}

}  // namespace irobot_create_msgs

#endif  // IROBOT_CREATE_MSGS__MSG__DETAIL__AUDIO_NOTE__BUILDER_HPP_
