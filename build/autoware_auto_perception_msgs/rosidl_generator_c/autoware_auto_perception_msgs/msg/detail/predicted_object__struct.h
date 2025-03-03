// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from autoware_auto_perception_msgs:msg/PredictedObject.idl
// generated code does not contain a copyright notice

#ifndef AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__STRUCT_H_
#define AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'uuid'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'classification'
#include "autoware_auto_perception_msgs/msg/detail/object_classification__struct.h"
// Member 'kinematics'
#include "autoware_auto_perception_msgs/msg/detail/predicted_object_kinematics__struct.h"
// Member 'shape'
#include "autoware_auto_perception_msgs/msg/detail/shape__struct.h"

// constants for array fields with an upper bound
// shape
enum
{
  autoware_auto_perception_msgs__msg__PredictedObject__shape__MAX_SIZE = 5
};

/// Struct defined in msg/PredictedObject in the package autoware_auto_perception_msgs.
typedef struct autoware_auto_perception_msgs__msg__PredictedObject
{
  unique_identifier_msgs__msg__UUID uuid;
  uint64_t object_id;
  float existence_probability;
  autoware_auto_perception_msgs__msg__ObjectClassification__Sequence classification;
  autoware_auto_perception_msgs__msg__PredictedObjectKinematics kinematics;
  /// If an object is not articulated, only index 0 is populated.
  autoware_auto_perception_msgs__msg__Shape__Sequence shape;
} autoware_auto_perception_msgs__msg__PredictedObject;

// Struct for a sequence of autoware_auto_perception_msgs__msg__PredictedObject.
typedef struct autoware_auto_perception_msgs__msg__PredictedObject__Sequence
{
  autoware_auto_perception_msgs__msg__PredictedObject * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} autoware_auto_perception_msgs__msg__PredictedObject__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTOWARE_AUTO_PERCEPTION_MSGS__MSG__DETAIL__PREDICTED_OBJECT__STRUCT_H_
