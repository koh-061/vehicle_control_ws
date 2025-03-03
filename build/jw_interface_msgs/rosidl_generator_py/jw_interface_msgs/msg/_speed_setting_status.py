# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jw_interface_msgs:msg/SpeedSettingStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SpeedSettingStatus(type):
    """Metaclass of message 'SpeedSettingStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FIRST_SPEED': 1,
        'SECOND_SPEED': 2,
        'THIRD_SPEED': 3,
        'FOURTH_SPEED': 4,
        'FIFTH_SPEED': 5,
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
                'jw_interface_msgs.msg.SpeedSettingStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__speed_setting_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__speed_setting_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__speed_setting_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__speed_setting_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__speed_setting_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FIRST_SPEED': cls.__constants['FIRST_SPEED'],
            'SECOND_SPEED': cls.__constants['SECOND_SPEED'],
            'THIRD_SPEED': cls.__constants['THIRD_SPEED'],
            'FOURTH_SPEED': cls.__constants['FOURTH_SPEED'],
            'FIFTH_SPEED': cls.__constants['FIFTH_SPEED'],
        }

    @property
    def FIRST_SPEED(self):
        """Message constant 'FIRST_SPEED'."""
        return Metaclass_SpeedSettingStatus.__constants['FIRST_SPEED']

    @property
    def SECOND_SPEED(self):
        """Message constant 'SECOND_SPEED'."""
        return Metaclass_SpeedSettingStatus.__constants['SECOND_SPEED']

    @property
    def THIRD_SPEED(self):
        """Message constant 'THIRD_SPEED'."""
        return Metaclass_SpeedSettingStatus.__constants['THIRD_SPEED']

    @property
    def FOURTH_SPEED(self):
        """Message constant 'FOURTH_SPEED'."""
        return Metaclass_SpeedSettingStatus.__constants['FOURTH_SPEED']

    @property
    def FIFTH_SPEED(self):
        """Message constant 'FIFTH_SPEED'."""
        return Metaclass_SpeedSettingStatus.__constants['FIFTH_SPEED']


class SpeedSettingStatus(metaclass=Metaclass_SpeedSettingStatus):
    """
    Message class 'SpeedSettingStatus'.

    Constants:
      FIRST_SPEED
      SECOND_SPEED
      THIRD_SPEED
      FOURTH_SPEED
      FIFTH_SPEED
    """

    __slots__ = [
        '_speed_setting',
    ]

    _fields_and_field_types = {
        'speed_setting': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.speed_setting = kwargs.get('speed_setting', int())

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
        if self.speed_setting != other.speed_setting:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def speed_setting(self):
        """Message field 'speed_setting'."""
        return self._speed_setting

    @speed_setting.setter
    def speed_setting(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'speed_setting' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'speed_setting' field must be an unsigned integer in [0, 255]"
        self._speed_setting = value
