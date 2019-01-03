// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = {
    {KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,        KC_Y,    KC_U,     KC_I,     KC_O,      KC_P    },
    {KC_A,     KC_S,     KC_D,     KC_F,     KC_G,        KC_H,    KC_J,     KC_K,     KC_L,      KC_SCLN },
    {KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,        KC_N,    KC_M,     KC_COMM,  KC_DOT,    KC_QUOT },
    {_______,  KC_MPLY,  KC_LALT,  KC_LGUI,  KC_LSFT,     KC_ENT,  KC_TAB,   KC_MEH,   KC_VOLU,   _______ },
    {_______,  KC_MNXT,  KC_LCTL,  LOWER,    RAISE,       KC_ESC,  KC_SPC,   KC_HYPR,  KC_VOLD,   _______ }
  },

  [_LOWER] = {
    {___x___,  KC_AT,    KC_LCBR,  KC_RCBR,  KC_PERC,     KC_UNDS,  KC_PIPE,  KC_AMPR,  KC_ASTR,  ___x___ },
    {KC_HASH,  KC_DLR,   KC_LPRN,  KC_RPRN,  KC_GRV,      KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_MINS },
    {KC_BSLS,  KC_CIRC,  KC_LBRC,  KC_RBRC,  KC_TILD,     KC_PLUS,  KC_EQL,   KC_EXLM,  KC_QUES,  KC_SLSH },
    {_______,  KC_MUTE,  ___x___,  ___x___,  ___x___,     KC_INS,   KC_DEL,   ___x___,  ___x___,  _______ },
    {_______,  KC_MNXT,  ___x___,  ___x___,  ___x___,     ___x___,  KC_BSPC,  ___x___,  ___x___,  _______ }
  },

  [_RAISE] = {
    {KC_PGUP,  KC_BTN1,  KC_MS_U,  KC_BTN2,  KC_END,      KC_SLSH,  KC_7,     KC_8,     KC_9,     KC_PLUS },
    {KC_PGDN,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_HOME,     KC_ASTR,  KC_4,     KC_5,     KC_6,     KC_MINS },
    {___x___,  ___x___,  KC_WH_D,  KC_WH_U,  ___x___,     KC_DOT,   KC_1,     KC_2,     KC_3,     KC_EQL  },
    {_______,  ___x___,  ___x___,  ___x___,  ___x___,     KC_BTN1,  ___x___,  ___x___,  ___x___,  _______ },
    {_______,  ___x___,  ___x___,  ___x___,  ___x___,     KC_SPC,   KC_0,     ___x___,  ___x___,  _______ }
  },

  [_ADJUST] = {
    {RESET,    ___x___,  ___x___,  ___x___,  SLEEP,       KC_F13,   KC_F7,    KC_F8,    KC_F9,    KC_F10  },
    {___x___,  ___x___,  ___x___,  ___x___,  BASE,        KC_F14,   KC_F4,    KC_F5,    KC_F6,    KC_F11  },
    {___x___,  ___x___,  ___x___,  ___x___,  ___x___,     KC_F15,   KC_F1,    KC_F2,    KC_F3,    KC_F12  },
    {_______,  ___x___,  ___x___,  ___x___,  ___x___,     ___x___,  ___x___,  ___x___,  ___x___,  _______ },
    {_______,  ___x___,  ___x___,  ___x___,  ___x___,     ___x___,  ___x___,  ___x___,  ___x___,  _______ }
  },
