// Generated by gencpp from file mini_ros/IMUdata.msg
// DO NOT EDIT!


#ifndef MINI_ROS_MESSAGE_IMUDATA_H
#define MINI_ROS_MESSAGE_IMUDATA_H


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
struct IMUdata_
{
  typedef IMUdata_<ContainerAllocator> Type;

  IMUdata_()
    : roll(0.0)
    , pitch(0.0)
    , acc_x(0.0)
    , acc_y(0.0)
    , acc_z(0.0)
    , gyro_x(0.0)
    , gyro_y(0.0)
    , gyro_z(0.0)  {
    }
  IMUdata_(const ContainerAllocator& _alloc)
    : roll(0.0)
    , pitch(0.0)
    , acc_x(0.0)
    , acc_y(0.0)
    , acc_z(0.0)
    , gyro_x(0.0)
    , gyro_y(0.0)
    , gyro_z(0.0)  {
  (void)_alloc;
    }



   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _acc_x_type;
  _acc_x_type acc_x;

   typedef float _acc_y_type;
  _acc_y_type acc_y;

   typedef float _acc_z_type;
  _acc_z_type acc_z;

   typedef float _gyro_x_type;
  _gyro_x_type gyro_x;

   typedef float _gyro_y_type;
  _gyro_y_type gyro_y;

   typedef float _gyro_z_type;
  _gyro_z_type gyro_z;





  typedef boost::shared_ptr< ::mini_ros::IMUdata_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mini_ros::IMUdata_<ContainerAllocator> const> ConstPtr;

}; // struct IMUdata_

typedef ::mini_ros::IMUdata_<std::allocator<void> > IMUdata;

typedef boost::shared_ptr< ::mini_ros::IMUdata > IMUdataPtr;
typedef boost::shared_ptr< ::mini_ros::IMUdata const> IMUdataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mini_ros::IMUdata_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mini_ros::IMUdata_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mini_ros::IMUdata_<ContainerAllocator1> & lhs, const ::mini_ros::IMUdata_<ContainerAllocator2> & rhs)
{
  return lhs.roll == rhs.roll &&
    lhs.pitch == rhs.pitch &&
    lhs.acc_x == rhs.acc_x &&
    lhs.acc_y == rhs.acc_y &&
    lhs.acc_z == rhs.acc_z &&
    lhs.gyro_x == rhs.gyro_x &&
    lhs.gyro_y == rhs.gyro_y &&
    lhs.gyro_z == rhs.gyro_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mini_ros::IMUdata_<ContainerAllocator1> & lhs, const ::mini_ros::IMUdata_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mini_ros

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mini_ros::IMUdata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mini_ros::IMUdata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mini_ros::IMUdata_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mini_ros::IMUdata_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mini_ros::IMUdata_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mini_ros::IMUdata_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mini_ros::IMUdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a27cb61fd87ce5110e1d6a4a68a0126";
  }

  static const char* value(const ::mini_ros::IMUdata_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a27cb61fd87ce51ULL;
  static const uint64_t static_value2 = 0x10e1d6a4a68a0126ULL;
};

template<class ContainerAllocator>
struct DataType< ::mini_ros::IMUdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mini_ros/IMUdata";
  }

  static const char* value(const ::mini_ros::IMUdata_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mini_ros::IMUdata_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 roll\n"
"float32 pitch\n"
"float32 acc_x\n"
"float32 acc_y\n"
"float32 acc_z\n"
"float32 gyro_x\n"
"float32 gyro_y\n"
"float32 gyro_z\n"
;
  }

  static const char* value(const ::mini_ros::IMUdata_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mini_ros::IMUdata_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.acc_x);
      stream.next(m.acc_y);
      stream.next(m.acc_z);
      stream.next(m.gyro_x);
      stream.next(m.gyro_y);
      stream.next(m.gyro_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IMUdata_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mini_ros::IMUdata_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mini_ros::IMUdata_<ContainerAllocator>& v)
  {
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "acc_x: ";
    Printer<float>::stream(s, indent + "  ", v.acc_x);
    s << indent << "acc_y: ";
    Printer<float>::stream(s, indent + "  ", v.acc_y);
    s << indent << "acc_z: ";
    Printer<float>::stream(s, indent + "  ", v.acc_z);
    s << indent << "gyro_x: ";
    Printer<float>::stream(s, indent + "  ", v.gyro_x);
    s << indent << "gyro_y: ";
    Printer<float>::stream(s, indent + "  ", v.gyro_y);
    s << indent << "gyro_z: ";
    Printer<float>::stream(s, indent + "  ", v.gyro_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MINI_ROS_MESSAGE_IMUDATA_H
