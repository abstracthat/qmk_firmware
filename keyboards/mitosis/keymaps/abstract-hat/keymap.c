#include "mitosis.h"
#include "eeconfig.h"

enum mitosis_layers {
  _QWERTY,
  _TARMAK1,
  _TARMAK2,
  _TARMAK3,
  _TARMAK4,
  _COLEMAK,
  _RAISE,
  _LOWER,
  _ADJUST,
};

enum mitosis_keycodes {
  MACSLEEP = SAFE_RANGE,
  RAISE,
  LOWER,
  QWERTY,
  TARMAK1,
  TARMAK2,
  TARMAK3,
  TARMAK4,
  COLEMAK
};

#define MOUSEKEY_INTERVAL 40
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_TIME_TO_MAX 8
#define MOUSEKEY_MAX_SPEED 5
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_MAX_SPEED 4
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0

// Fillers to make layering more clear
#define _______ KC_TRNS
#define __MOD__ KC_TRNS
#define XXXXXXX KC_NO
#define SFT_CMD LSFT(KC_LGUI)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = {
    {KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,    KC_U,     KC_I,     KC_O,      KC_P    },
    {KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,    KC_J,     KC_K,     KC_L,      KC_SCLN },
    {KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_N,    KC_M,     KC_COMM,  KC_DOT,    KC_QUOT },
    {XXXXXXX,  KC_MPLY,  KC_LALT,  KC_LGUI,  KC_LSFT,     KC_ENT,  KC_TAB,   KC_MEH,   KC_VOLU,   XXXXXXX },
    {XXXXXXX,  KC_MNXT,  KC_LCTL,  LOWER,    RAISE,       KC_ESC,  KC_SPC,   KC_HYPR,  KC_VOLD,   XXXXXXX }
  },

  [_TARMAK1] = {
    {KC_Q,     KC_W,     KC_J,     KC_R,     KC_T,        KC_Y,     KC_U,     KC_I,     KC_O,     KC_P    },
    {KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_M,     KC_N,     KC_E,     KC_L,     KC_SCLN },
    {KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_QUOT },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX }
  },

  [_TARMAK2] = {
    {KC_Q,     KC_W,     KC_F,     KC_R,     KC_B,        KC_Y,     KC_U,     KC_I,     KC_O,     KC_P    },
    {KC_A,     KC_S,     KC_D,     KC_T,     KC_G,        KC_M,     KC_N,     KC_E,     KC_L,     KC_SCLN },
    {KC_Z,     KC_X,     KC_C,     KC_J,     KC_V,        KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_QUOT },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX }
  },

  [_TARMAK3] = {
    {KC_Q,     KC_W,     KC_F,     KC_J,     KC_B,        KC_Y,     KC_U,     KC_I,     KC_O,     KC_P    },
    {KC_A,     KC_S,     KC_D,     KC_T,     KC_G,        KC_M,     KC_N,     KC_E,     KC_L,     KC_SCLN },
    {KC_Z,     KC_X,     KC_C,     KC_J,     KC_V,        KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_QUOT },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX }
  },

  [_TARMAK4] = {
    {KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,        KC_J,     KC_U,     KC_I,     KC_Y,     KC_SCLN },
    {KC_A,     KC_R,     KC_S,     KC_T,     KC_G,        KC_M,     KC_N,     KC_E,     KC_L,     KC_O    },
    {KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,        KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_QUOT },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX }
  },

  [_COLEMAK] = {
    {KC_Q,     KC_W,     KC_F,     KC_P,     KC_B,        KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN },
    {KC_A,     KC_R,     KC_S,     KC_T,     KC_G,        KC_M,     KC_N,     KC_E,     KC_I,     KC_O    },
    {KC_Z,     KC_X,     KC_C,     KC_D,     KC_V,        KC_K,     KC_H,     KC_COMM,  KC_DOT,   KC_QUOT },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX }
  },

  [_LOWER] = {
    {_______,  KC_AT,    KC_LCBR,  KC_RCBR,  KC_PERC,     KC_UNDS,  KC_PIPE,  KC_AMPR,  KC_ASTR,  _______ },
    {KC_HASH,  KC_DLR,   KC_LPRN,  KC_RPRN,  KC_GRV,      KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_MINS },
    {KC_BSLS,  KC_CIRC,  KC_LBRC,  KC_RBRC,  KC_TILD,     KC_PLUS,  KC_EQL,   KC_EXLM,  KC_QUES,  KC_SLSH },
    {XXXXXXX,  KC_MUTE,  _______,  _______,  _______,     KC_INS,   KC_DEL,   _______,  _______,  XXXXXXX },
    {XXXXXXX,  KC_MNXT,  _______,  _______,  _______,     _______,  KC_BSPC,  _______,  _______,  XXXXXXX }
  },

  [_RAISE] = {
    {KC_PGUP,  KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_END,      KC_SLSH,  KC_7,     KC_8,     KC_9,     KC_PLUS },
    {KC_PGDN,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_HOME,     KC_ASTR,  KC_4,     KC_5,     KC_6,     KC_MINS },
    {_______,  _______,  KC_WH_D,  KC_WH_U,  _______,     KC_DOT,   KC_1,     KC_2,     KC_3,     KC_EQL  },
    {XXXXXXX,  _______,  _______,  _______,  _______,     KC_BTN1,  _______,  _______,  _______,  XXXXXXX },
    {XXXXXXX,  _______,  _______,  _______,  _______,     KC_SPC,   KC_0,     _______,  _______,  XXXXXXX }
  },

  [_ADJUST] = {
    {RESET,    _______,  _______,  _______,  MACSLEEP,    KC_F13,   KC_F7,    KC_F8,    KC_F9,    KC_F10  },
    {_______,  _______,  _______,  _______,  QWERTY,      KC_F14,   KC_F4,    KC_F5,    KC_F6,    KC_F11  },
    {TARMAK1,  TARMAK2,  TARMAK3,  TARMAK4,  COLEMAK,     KC_F15,   KC_F1,    KC_F2,    KC_F3,    KC_F12  },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX },
    {XXXXXXX,  _______,  _______,  _______,  _______,     _______,  _______,  _______,  _______,  XXXXXXX }
  },
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
      break;

    case TARMAK1:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_TARMAK1);
      }
      return false;
      break;

    case TARMAK2:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_TARMAK2);
      }
      return false;
      break;

    case TARMAK3:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_TARMAK3);
      }
      return false;
      break;

    case TARMAK4:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_TARMAK4);
      }
      return false;
      break;

    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
      break;

    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
      } else {
        layer_off(_LOWER);
      }
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
      return false;
      break;

    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
      } else {
        layer_off(_RAISE);
      }
      update_tri_layer(_LOWER, _RAISE, _ADJUST);
      return false;
      break;

    case MACSLEEP:
      if (record->event.pressed) {
        register_code(KC_RSFT);
        register_code(KC_RCTL);
        register_code(KC_POWER);
        unregister_code(KC_POWER);
        unregister_code(KC_RCTL);
        unregister_code(KC_RSFT);
      }
      return false;
      break;

    default:
      return true;
  }
};

void matrix_scan_user(void) {
  uint8_t layer = biton32(layer_state);

  switch (layer) {
    case _QWERTY:
      set_led_off;
      break;
    case _RAISE:
      set_led_blue;
      break;
    case _LOWER:
      set_led_red;
      break;
    case _ADJUST:
      set_led_green;
      break;
    default:
      break;
  }
};
