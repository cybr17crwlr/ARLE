// Generated by gencpp from file motor_mgr/command_mgrResponse.msg
// DO NOT EDIT!


#ifndef MOTOR_MGR_MESSAGE_COMMAND_MGRRESPONSE_H
#define MOTOR_MGR_MESSAGE_COMMAND_MGRRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace motor_mgr
{
template <class ContainerAllocator>
struct command_mgrResponse_
{
  typedef command_mgrResponse_<ContainerAllocator> Type;

  command_mgrResponse_()
    : status(0)  {
    }
  command_mgrResponse_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::motor_mgr::command_mgrResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motor_mgr::command_mgrResponse_<ContainerAllocator> const> ConstPtr;

}; // struct command_mgrResponse_

typedef ::motor_mgr::command_mgrResponse_<std::allocator<void> > command_mgrResponse;

typedef boost::shared_ptr< ::motor_mgr::command_mgrResponse > command_mgrResponsePtr;
typedef boost::shared_ptr< ::motor_mgr::command_mgrResponse const> command_mgrResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motor_mgr::command_mgrResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace motor_mgr

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/lunar/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motor_mgr::command_mgrResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motor_mgr::command_mgrResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motor_mgr::command_mgrResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "86791dcf1de997ec7de5a0de7e4dcfcc";
  }

  static const char* value(const ::motor_mgr::command_mgrResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x86791dcf1de997ecULL;
  static const uint64_t static_value2 = 0x7de5a0de7e4dcfccULL;
};

template<class ContainerAllocator>
struct DataType< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motor_mgr/command_mgrResponse";
  }

  static const char* value(const ::motor_mgr::command_mgrResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 status\n\
\n\
";
  }

  static const char* value(const ::motor_mgr::command_mgrResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct command_mgrResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motor_mgr::command_mgrResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motor_mgr::command_mgrResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTOR_MGR_MESSAGE_COMMAND_MGRRESPONSE_H
