// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from irobot_create_msgs:msg/IrIntensityVector.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "irobot_create_msgs/msg/detail/ir_intensity_vector__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace irobot_create_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IrIntensityVector_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) irobot_create_msgs::msg::IrIntensityVector(_init);
}

void IrIntensityVector_fini_function(void * message_memory)
{
  auto typed_message = static_cast<irobot_create_msgs::msg::IrIntensityVector *>(message_memory);
  typed_message->~IrIntensityVector();
}

size_t size_function__IrIntensityVector__readings(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<irobot_create_msgs::msg::IrIntensity> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IrIntensityVector__readings(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<irobot_create_msgs::msg::IrIntensity> *>(untyped_member);
  return &member[index];
}

void * get_function__IrIntensityVector__readings(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<irobot_create_msgs::msg::IrIntensity> *>(untyped_member);
  return &member[index];
}

void fetch_function__IrIntensityVector__readings(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const irobot_create_msgs::msg::IrIntensity *>(
    get_const_function__IrIntensityVector__readings(untyped_member, index));
  auto & value = *reinterpret_cast<irobot_create_msgs::msg::IrIntensity *>(untyped_value);
  value = item;
}

void assign_function__IrIntensityVector__readings(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<irobot_create_msgs::msg::IrIntensity *>(
    get_function__IrIntensityVector__readings(untyped_member, index));
  const auto & value = *reinterpret_cast<const irobot_create_msgs::msg::IrIntensity *>(untyped_value);
  item = value;
}

void resize_function__IrIntensityVector__readings(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<irobot_create_msgs::msg::IrIntensity> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IrIntensityVector_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::msg::IrIntensityVector, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "readings",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<irobot_create_msgs::msg::IrIntensity>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(irobot_create_msgs::msg::IrIntensityVector, readings),  // bytes offset in struct
    nullptr,  // default value
    size_function__IrIntensityVector__readings,  // size() function pointer
    get_const_function__IrIntensityVector__readings,  // get_const(index) function pointer
    get_function__IrIntensityVector__readings,  // get(index) function pointer
    fetch_function__IrIntensityVector__readings,  // fetch(index, &value) function pointer
    assign_function__IrIntensityVector__readings,  // assign(index, value) function pointer
    resize_function__IrIntensityVector__readings  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IrIntensityVector_message_members = {
  "irobot_create_msgs::msg",  // message namespace
  "IrIntensityVector",  // message name
  2,  // number of fields
  sizeof(irobot_create_msgs::msg::IrIntensityVector),
  IrIntensityVector_message_member_array,  // message members
  IrIntensityVector_init_function,  // function to initialize message memory (memory has to be allocated)
  IrIntensityVector_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IrIntensityVector_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IrIntensityVector_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace irobot_create_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<irobot_create_msgs::msg::IrIntensityVector>()
{
  return &::irobot_create_msgs::msg::rosidl_typesupport_introspection_cpp::IrIntensityVector_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, irobot_create_msgs, msg, IrIntensityVector)() {
  return &::irobot_create_msgs::msg::rosidl_typesupport_introspection_cpp::IrIntensityVector_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
