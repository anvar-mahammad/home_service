// Generated by gencpp from file ball_chaser/GoToTargetRequest.msg
// DO NOT EDIT!


#ifndef BALL_CHASER_MESSAGE_GOTOTARGETREQUEST_H
#define BALL_CHASER_MESSAGE_GOTOTARGETREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ball_chaser
{
template <class ContainerAllocator>
struct GoToTargetRequest_
{
  typedef GoToTargetRequest_<ContainerAllocator> Type;

  GoToTargetRequest_()
    : linear_x(0.0)
    , angular_z(0.0)  {
    }
  GoToTargetRequest_(const ContainerAllocator& _alloc)
    : linear_x(0.0)
    , angular_z(0.0)  {
  (void)_alloc;
    }



   typedef double _linear_x_type;
  _linear_x_type linear_x;

   typedef double _angular_z_type;
  _angular_z_type angular_z;





  typedef boost::shared_ptr< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GoToTargetRequest_

typedef ::ball_chaser::GoToTargetRequest_<std::allocator<void> > GoToTargetRequest;

typedef boost::shared_ptr< ::ball_chaser::GoToTargetRequest > GoToTargetRequestPtr;
typedef boost::shared_ptr< ::ball_chaser::GoToTargetRequest const> GoToTargetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ball_chaser::GoToTargetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ball_chaser

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6aa08055c0c4aea51799f3f7164796a8";
  }

  static const char* value(const ::ball_chaser::GoToTargetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6aa08055c0c4aea5ULL;
  static const uint64_t static_value2 = 0x1799f3f7164796a8ULL;
};

template<class ContainerAllocator>
struct DataType< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ball_chaser/GoToTargetRequest";
  }

  static const char* value(const ::ball_chaser::GoToTargetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 linear_x\n\
float64 angular_z\n\
";
  }

  static const char* value(const ::ball_chaser::GoToTargetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear_x);
      stream.next(m.angular_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GoToTargetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ball_chaser::GoToTargetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ball_chaser::GoToTargetRequest_<ContainerAllocator>& v)
  {
    s << indent << "linear_x: ";
    Printer<double>::stream(s, indent + "  ", v.linear_x);
    s << indent << "angular_z: ";
    Printer<double>::stream(s, indent + "  ", v.angular_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BALL_CHASER_MESSAGE_GOTOTARGETREQUEST_H