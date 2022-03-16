/* Sensor types defined by android */
#define SENSOR_TYPE_ACCELEROMETER                    (1)
#define SENSOR_TYPE_GEOMAGNETIC_FIELD                (2)
#define SENSOR_TYPE_ORIENTATION                      (3)
#define SENSOR_TYPE_GYROSCOPE                        (4)
#define SENSOR_TYPE_LIGHT                            (5)
#define SENSOR_TYPE_PRESSURE                         (6)
#define SENSOR_TYPE_TEMPERATURE                      (7) //Deprecated
#define SENSOR_TYPE_PROXIMITY                        (8)
#define SENSOR_TYPE_GRAVITY                          (9)
#define SENSOR_TYPE_LINEAR_ACCELERATION             (10)
#define SENSOR_TYPE_ROTATION_VECTOR                 (11)
#define SENSOR_TYPE_RELATIVE_HUMIDITY               (12)
#define SENSOR_TYPE_AMBIENT_TEMPERATURE             (13)
#define SENSOR_TYPE_MAGNETIC_FIELD_UNCALIBRATED     (14)
#define SENSOR_TYPE_GAME_ROTATION_VECTOR            (15)
#define SENSOR_TYPE_GYROSCOPE_UNCALIBRATED          (16)
#define SENSOR_TYPE_SIGNIFICANT_MOTION              (17)
#define SENSOR_TYPE_STEP_DETECTOR                   (18)
#define SENSOR_TYPE_STEP_COUNTER                    (19)
#define SENSOR_TYPE_GEOMAGNETIC_ROTATION_VECTOR     (20)
#define SENSOR_TYPE_HEART_RATE                      (21)
#define SENSOR_TYPE_TILT_DETECTOR                   (22)
#define SENSOR_TYPE_WAKE_GESTURE                    (23)
#define SENSOR_TYPE_GLANCE_GESTURE                  (24)
#define SENSOR_TYPE_PICK_UP_GESTURE                 (25)
#define SENSOR_TYPE_WRIST_TILT_GESTURE              (26)
#define SENSOR_TYPE_ANDROID_MAX                     (27)
/* Sensor types defined by Samsung but supported via legacy HAL*/
#define SENSOR_TYPE_DEVICE_PRIVATE_BASE             (SENSOR_TYPE_ANDROID_MAX)
#define SENSOR_TYPE_ACCELEROMETER_INT               (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 1)
#define SENSOR_TYPE_PROXIMITY_RAW                   (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 2)
#define SENSOR_TYPE_GEOMAGNETIC_POWER               (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 3)
#define SENSOR_TYPE_INTERRUPT_GYRO                  (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 4)
#define SENSOR_TYPE_SCONTEXT                        (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 5)
//#define SENSOR_TYPE_MOBEAM                          (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 6)
#define SENSOR_TYPE_SENSORHUB                      (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 6)
#define SENSOR_TYPE_LIGHT_CCT                       (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 7)
#define SENSOR_TYPE_CALL_GESTURE                    (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 8)
#define SENSOR_TYPE_WAKE_UP_MOTION                  (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 9)
#define SENSOR_TYPE_LIGHT_AUTOBRIGHTNESS            (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 10)
#define SENSOR_TYPE_VDIS_GYROSCOPE                  (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 11)
#define SENSOR_TYPE_POCKET_MODE_LITE                     (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 12)
#define SENSOR_TYPE_PROXIMITY_CALIBRATION           (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 13)
#define SENSOR_TYPE_MAX                             (SENSOR_TYPE_DEVICE_PRIVATE_BASE + 14)
#define LEGACY_SENSOR_MAX                           (SENSOR_TYPE_MAX)
#define LEGACY_SENSOR_COUNT                         (LEGACY_SENSOR_MAX)

/*****************************
 * Samsung sensor types
******************************/

/* sensor types defined by samsung */
#define SS_SENSOR_TYPE_BASE                       (128)
#define SS_SENSOR_TYPE_CALL_POSE                  (SS_SENSOR_TYPE_BASE + 2)
#define SS_SENSOR_TYPE_PEDOMETER                  (SS_SENSOR_TYPE_BASE + 3)
#define SS_SENSOR_TYPE_MOTION                     (SS_SENSOR_TYPE_BASE + 4)
#define SS_SENSOR_TYPE_GESTURE_APPROACH           (SS_SENSOR_TYPE_BASE + 5)
#define SS_SENSOR_TYPE_STEP_COUNT_ALERT           (SS_SENSOR_TYPE_BASE + 6)
#define SS_SENSOR_TYPE_AUTO_ROTATION              (SS_SENSOR_TYPE_BASE + 7)
#define SS_SENSOR_TYPE_MOVEMENT                   (SS_SENSOR_TYPE_BASE + 8)
#define SS_SENSOR_TYPE_MOVEMENT_FOR_POSITIONING   (SS_SENSOR_TYPE_BASE + 9)
#define SS_SENSOR_TYPE_DIRECT_CALL                (SS_SENSOR_TYPE_BASE + 10)
#define SS_SENSOR_TYPE_STOP_ALERT                 (SS_SENSOR_TYPE_BASE + 11)
#define SS_SENSOR_TYPE_ENVIRONMENT_SENSOR         (SS_SENSOR_TYPE_BASE + 12)
#define SS_SENSOR_TYPE_SHAKE_MOTION               (SS_SENSOR_TYPE_BASE + 13)
#define SS_SENSOR_TYPE_FLIP_COVER_ACTION          (SS_SENSOR_TYPE_BASE + 14)
#define SS_SENSOR_TYPE_GYRO_TEMPERATURE           (SS_SENSOR_TYPE_BASE + 15)
#define SS_SENSOR_TYPE_PUT_DOWN_MOTION            (SS_SENSOR_TYPE_BASE + 16)
#define SS_SENSOR_TYPE_BOUNCE_SHORT_MOTION        (SS_SENSOR_TYPE_BASE + 18)
#define SS_SENSOR_TYPE_BOUNCE_LONG_MOTION         (SS_SENSOR_TYPE_BASE + 20)
#define SS_SENSOR_TYPE_WRIST_UP_MOTION            (SS_SENSOR_TYPE_BASE + 19)
#define SS_SENSOR_TYPE_FLAT_MOTION                (SS_SENSOR_TYPE_BASE + 21)
#define SS_SENSOR_TYPE_MOVEMENT_ALERT             (SS_SENSOR_TYPE_BASE + 22)
#define SS_SENSOR_TYPE_DEVICE_POSITION            (SS_SENSOR_TYPE_BASE + 23)
#define SS_SENSOR_TYPE_TEMPERATURE_ALERT          (SS_SENSOR_TYPE_BASE + 24)
#define SS_SENSOR_TYPE_SPECIFIC_POSE_ALERT        (SS_SENSOR_TYPE_BASE + 25)
#define SS_SENSOR_TYPE_ACTIVITY_TRACKER           (SS_SENSOR_TYPE_BASE + 26)
#define SS_SENSOR_TYPE_STAYING_ALERT              (SS_SENSOR_TYPE_BASE + 27)
#define SS_SENSOR_TYPE_APDR                       (SS_SENSOR_TYPE_BASE + 28)
#define SS_SENSOR_TYPE_LIFE_LOG_COMPONENT         (SS_SENSOR_TYPE_BASE + 29)
#define SS_SENSOR_TYPE_CARE_GIVER                 (SS_SENSOR_TYPE_BASE + 30)
#define SS_SENSOR_TYPE_STEP_DETECTOR              (SS_SENSOR_TYPE_BASE + 31) //MR2 sensors are not defined in SContext. But this must be implemented as Library Type. [6-July-2016]
#define SS_SENSOR_TYPE_SIGNIFICANT_MOTION         (SS_SENSOR_TYPE_BASE + 32)
#define SS_SENSOR_TYPE_UNCALIBRATED_GYRO          (SS_SENSOR_TYPE_BASE + 33)
#define SS_SENSOR_TYPE_ROTATION_VECTOR            (SS_SENSOR_TYPE_BASE + 35)
#define SS_SENSOR_TYPE_STEP_COUNTER               (SS_SENSOR_TYPE_BASE + 36)
#define SS_SENSOR_TYPE_SLEEP_MONITOR              (SS_SENSOR_TYPE_BASE + 37)
#define SS_SENSOR_TYPE_ABNORMAL_SHOCK             (SS_SENSOR_TYPE_BASE + 38)
#define SS_SENSOR_TYPE_CAPTURE_MOTION             (SS_SENSOR_TYPE_BASE + 39)
#define SS_SENSOR_TYPE_CALL_MOTION                (SS_SENSOR_TYPE_BASE + 41)
#define SS_SENSOR_TYPE_STEP_LEVEL_MONITOR         (SS_SENSOR_TYPE_BASE + 44)
#define SS_SENSOR_TYPE_FLAT_MOTION_FOR_TABLE_MODE (SS_SENSOR_TYPE_BASE + 45)
#define SS_SENSOR_TYPE_EXERCISE                   (SS_SENSOR_TYPE_BASE + 46)
#define SS_SENSOR_TYPE_PHONE_STATE_MONITOR        (SS_SENSOR_TYPE_BASE + 47)
#define SS_SENSOR_TYPE_AUTO_BRIGHTNESS            (SS_SENSOR_TYPE_BASE + 48)
#define SS_SENSOR_TYPE_ABNORMAL_PRESSURE_MONITOR  (SS_SENSOR_TYPE_BASE + 49)
#define SS_SENSOR_TYPE_HALL_SENSOR                (SS_SENSOR_TYPE_BASE + 50)
#define SS_SENSOR_TYPE_EAD                        (SS_SENSOR_TYPE_BASE + 52)
#define SS_SENSOR_TYPE_DUAL_DISPLAY_ANGLE         (SS_SENSOR_TYPE_BASE + 53)
#define SS_SENSOR_TYPE_WIRELESS_CHARGING_MONITOR  (SS_SENSOR_TYPE_BASE + 54)
#define SS_SENSOR_TYPE_SLOCATION                  (SS_SENSOR_TYPE_BASE + 55)
#define SS_SENSOR_TYPE_DPCM                       (SS_SENSOR_TYPE_BASE + 56)
#define SS_SENSOR_TYPE_MAIN_SCREEN_DETECTION      (SS_SENSOR_TYPE_BASE + 57)
#define SS_SENSOR_TYPE_ANY_MOTION_DETECTOR        (SS_SENSOR_TYPE_BASE + 58)
#define SS_SENSOR_TYPE_SENSOR_STATUS_CHECK        (SS_SENSOR_TYPE_BASE + 59)
#define SS_SENSOR_TYPE_ACTIVITY_CALIBRATION       (SS_SENSOR_TYPE_BASE + 60)
#define SS_SENSOR_TYPE_CHANGE_LOCATION_TRIGGER    (SS_SENSOR_TYPE_BASE + 61)
#define SS_SENSOR_TYPE_FREE_FALL_DETECTION        (SS_SENSOR_TYPE_BASE + 62)
#define SS_SENSOR_TYPE_GPS                        (SS_SENSOR_TYPE_BASE + 63)
#define SS_SENSOR_TYPE_SLC_CURRENTLOCATION        (SS_SENSOR_TYPE_BASE + 75)
#define SS_SENSOR_TYPE_MAX                        (SS_SENSOR_TYPE_BASE + 76)
#define SS_SENSOR_TYPE_COUNT                      (SS_SENSOR_TYPE_MAX - SS_SENSOR_TYPE_BASE)

#define TYPE_MCU                                  (255)

#define BIG_DATA_SENSOR_TYPE_MAX        31
#define BIG_DATA_SENSOR_TYPE_ACCELEROMETER                      (0)
#define BIG_DATA_SENSOR_TYPE_GYROSCOPE                          (1)
#define BIG_DATA_SENSOR_TYPE_MAGNETIC_FIELD_UNCALIBRATED        (2)
#define BIG_DATA_SENSOR_TYPE_GEOMAGNETIC_POWER                  (3)
#define BIG_DATA_SENSOR_TYPE_GEOMAGNETIC_FIELD                  (4)
#define BIG_DATA_SENSOR_TYPE_PRESSURE                           (5)
#define BIG_DATA_SENSOR_TYPE_PROXIMITY                          (7)
#define BIG_DATA_SENSOR_TYPE_LIGHT                              (9)
#define BIG_DATA_SENSOR_TYPE_PROXIMITY_RAW                      (10)
