// Generated by gencpp from file mini_ros/JointPulse.msg
// DO NOT EDIT!


#ifndef MINI_ROS_MESSAGE_JOINTPULSE_H
#define MINI_ROS_MESSAGE_JOINTPULSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mini_ros
{
template <class ContainerAllocator>
struct JointPulse_
{
  typedef JointPulse_<ContainerAllocator> Type;

  JointPulse_()
    : servo_num(0)
    , servo_pulse(0)  {
    }
  JointPulse_(const ContainerAllocator& _alloc)
    : servo_num(0)
    , servo_pulse(0)  {
  (void)_alloc;
    }



   typedef int8_t _servo_num_type;
  _servo_num_type servo_num;

   typedef int32_t _servo_pulse_type;
  _servo_pulse_type servo_pulse;





  typedef boost::shared_ptr< ::mini_ros::JointPulse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mini_ros::JointPulse_<ContainerAllocator> const> ConstPtr;

}; // struct JointPulse_

typedef ::mini_ros::JointPulse_<std::allocator<void> > JointPulse;

typedef boost::shared_ptr< ::mini_ros::JointPulse > JointPulsePtr;
typedef boost::shared_ptr< ::mini_ros::JointPulse const> JointPulseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mini_ros::JointPulse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mini_ros::JointPulse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mini_ros::JointPulse_<ContainerAllocator1> & lhs, const ::mini_ros::JointPulse_<ContainerAllocator2> & rhs)
{
  return lhs.servo_num == rhs.servo_num &&
    lhs.servo_pulse == rhs.servo_pulse;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mini_ros::JointPulse_<ContainerAllocator1> & lhs, const ::mini_ros::JointPulse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mini_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mini_ros::JointPulse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mini_ros::JointPulse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mini_ros::JointPulse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mini_ros::JointPulse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mini_ros::JointPulse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mini_ros::JointPulse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mini_ros::JointPulse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "372c64510294fc8eec78b728b048d2c9";
  }

  static const char* value(const ::mini_ros::JointPulse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x372c64510294fc8eULL;
  static const uint64_t static_value2 = 0xec78b728b048d2c9ULL;
};

template<class ContainerAllocator>
struct DataType< ::mini_ros::JointPulse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mini_ros/JointPulse";
  }

  static const char* value(const ::mini_ros::JointPulse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mini_ros::JointPulse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 servo_num\n"
"int32 servo_pulse\n"
;
  }

  static const char* value(const ::mini_ros::JointPulse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mini_ros::JointPulse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.servo_num);
      stream.next(m.servo_pulse);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointPulse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mini_ros::JointPulse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mini_ros::JointPulse_<ContainerAllocator>& v)
  {
    s << indent << "servo_num: ";
    Printer<int8_t>::stream(s, indent + "  ", v.servo_num);
    s << indent << "servo_pulse: ";
    Printer<int32_t>::stream(s, indent + "  ", v.servo_pulse);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MINI_ROS_MESSAGE_JOINTPULSE_H
