# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jw_interface_msgs:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('jw_interface_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jw_interface_msgs.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

            from jw_interface_msgs.msg import BatteryStatus
            if BatteryStatus.__class__._TYPE_SUPPORT is None:
                BatteryStatus.__class__.__import_type_support__()

            from jw_interface_msgs.msg import JSADStatus
            if JSADStatus.__class__._TYPE_SUPPORT is None:
                JSADStatus.__class__.__import_type_support__()

            from jw_interface_msgs.msg import MotorRPMStatus
            if MotorRPMStatus.__class__._TYPE_SUPPORT is None:
                MotorRPMStatus.__class__.__import_type_support__()

            from jw_interface_msgs.msg import SpeedSettingStatus
            if SpeedSettingStatus.__class__._TYPE_SUPPORT is None:
                SpeedSettingStatus.__class__.__import_type_support__()

            from jw_interface_msgs.msg import TimeStampStatus
            if TimeStampStatus.__class__._TYPE_SUPPORT is None:
                TimeStampStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Status(metaclass=Metaclass_Status):
    """Message class 'Status'."""

    __slots__ = [
        '_time_stamp',
        '_motor_rpm',
        '_battery',
        '_speed_setting',
        '_js_ad',
    ]

    _fields_and_field_types = {
        'time_stamp': 'jw_interface_msgs/TimeStampStatus',
        'motor_rpm': 'jw_interface_msgs/MotorRPMStatus',
        'battery': 'jw_interface_msgs/BatteryStatus',
        'speed_setting': 'jw_interface_msgs/SpeedSettingStatus',
        'js_ad': 'jw_interface_msgs/JSADStatus',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['jw_interface_msgs', 'msg'], 'TimeStampStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jw_interface_msgs', 'msg'], 'MotorRPMStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jw_interface_msgs', 'msg'], 'BatteryStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jw_interface_msgs', 'msg'], 'SpeedSettingStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jw_interface_msgs', 'msg'], 'JSADStatus'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from jw_interface_msgs.msg import TimeStampStatus
        self.time_stamp = kwargs.get('time_stamp', TimeStampStatus())
        from jw_interface_msgs.msg import MotorRPMStatus
        self.motor_rpm = kwargs.get('motor_rpm', MotorRPMStatus())
        from jw_interface_msgs.msg import BatteryStatus
        self.battery = kwargs.get('battery', BatteryStatus())
        from jw_interface_msgs.msg import SpeedSettingStatus
        self.speed_setting = kwargs.get('speed_setting', SpeedSettingStatus())
        from jw_interface_msgs.msg import JSADStatus
        self.js_ad = kwargs.get('js_ad', JSADStatus())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.motor_rpm != other.motor_rpm:
            return False
        if self.battery != other.battery:
            return False
        if self.speed_setting != other.speed_setting:
            return False
        if self.js_ad != other.js_ad:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            from jw_interface_msgs.msg import TimeStampStatus
            assert \
                isinstance(value, TimeStampStatus), \
                "The 'time_stamp' field must be a sub message of type 'TimeStampStatus'"
        self._time_stamp = value

    @builtins.property
    def motor_rpm(self):
        """Message field 'motor_rpm'."""
        return self._motor_rpm

    @motor_rpm.setter
    def motor_rpm(self, value):
        if __debug__:
            from jw_interface_msgs.msg import MotorRPMStatus
            assert \
                isinstance(value, MotorRPMStatus), \
                "The 'motor_rpm' field must be a sub message of type 'MotorRPMStatus'"
        self._motor_rpm = value

    @builtins.property
    def battery(self):
        """Message field 'battery'."""
        return self._battery

    @battery.setter
    def battery(self, value):
        if __debug__:
            from jw_interface_msgs.msg import BatteryStatus
            assert \
                isinstance(value, BatteryStatus), \
                "The 'battery' field must be a sub message of type 'BatteryStatus'"
        self._battery = value

    @builtins.property
    def speed_setting(self):
        """Message field 'speed_setting'."""
        return self._speed_setting

    @speed_setting.setter
    def speed_setting(self, value):
        if __debug__:
            from jw_interface_msgs.msg import SpeedSettingStatus
            assert \
                isinstance(value, SpeedSettingStatus), \
                "The 'speed_setting' field must be a sub message of type 'SpeedSettingStatus'"
        self._speed_setting = value

    @builtins.property
    def js_ad(self):
        """Message field 'js_ad'."""
        return self._js_ad

    @js_ad.setter
    def js_ad(self, value):
        if __debug__:
            from jw_interface_msgs.msg import JSADStatus
            assert \
                isinstance(value, JSADStatus), \
                "The 'js_ad' field must be a sub message of type 'JSADStatus'"
        self._js_ad = value
