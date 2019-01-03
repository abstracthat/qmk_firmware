#ifndef CONFIG_USER_H
  #define CONFIG_USER_H
  #include "../../config.h"
  #define PREVENT_STUCK_MODIFIERS
  // fix dual function timing
  #define PERMISSIVE_HOLD
  #define IGNORE_MOD_TAP_INTERRUPT
  // enable for toggle layers
  #define TAPPING_TOGGLE 1

  // tap dance key press termination interval
  #define TAPPING_TERM 200

  // smooth mouse motion
  #define MOUSEKEY_INTERVAL 40
  #define MOUSEKEY_DELAY 0
  #define MOUSEKEY_TIME_TO_MAX 8
  #define MOUSEKEY_MAX_SPEED 5
  #define MOUSEKEY_WHEEL_DELAY 0
  #define MOUSEKEY_WHEEL_MAX_SPEED 4
  #define MOUSEKEY_WHEEL_TIME_TO_MAX 0

  // thumb key tap-shift() double tap: one shot shift (0) off (1) on
  #define DT_SHIFT 1
  // thumb capslock toggle on and off (default on only to preseve bspc auto-repeat)
  #define CAPS_ONOFF
#endif
