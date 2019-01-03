
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// .................................................................... BEAKL TI

  // ,-----------------------------------             -----------------------------------.
  // |   :  |   Y  |   O  |   U  |   Z  |             |   G  |   D  |   N  |   M  |   X  |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |   Q  |   H  |   E  |   A  |   .  |             |   C  |   T  |   R  |   S  |   W  |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |   J  |   -  |   '  |   K  |   ,  |             |   B  |   P  |   L  |   F  |   V  |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |      | Play |  Alt |  Cmd | Shift|             | Enter|  Tab | CAPS | Vol +|      |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |      | Next |  Ctl |   I  |  Esc |             | Bksp | Space|  NUM | Vol -|      |
  // `-----------------------------------             -----------------------------------'

  [_BASE] = {
    {TD_EMOJ, KC_Y,    KC_O,    KC_U,    KC_Z,        KC_G,    KC_D,    KC_N,    KC_M,    KC_X    },
    {HOME_Q,  HOME_H,  HOME_E,  HOME_A,  TD_TILD,     KC_C,    HOME_T,  HOME_R,  HOME_S,  HOME_W  },
    {KC_J,    KC_MINS, KC_QUOT, KC_K,    KC_COMM,     KC_B,    KC_P,    KC_L,    KC_F,    KC_V    },
    {_______, KC_MPLY, KC_LALT, KC_LGUI, KC_LSFT,     KC_ENT,  KC_TAB,  CNTR_TR, KC_VOLU, _______ },
    {_______, KC_MNXT, KC_LCTL, LT_I,    LT_ESC,      TD_BSPC, TD_SPC,  CNTR_BL, KC_VOLD, _______ }
  },

  [_SHIFT] = {
    {KC_COLN, S(KC_Y), S(KC_O), S(KC_U), S(KC_Z),     S(KC_G), S(KC_D), S(KC_N), S(KC_M), S(KC_X)},
    {S(KC_Q), S(KC_H), S(KC_E), S(KC_A), KC_QUES,     S(KC_C), S(KC_T), S(KC_R), S(KC_S), S(KC_W)},
    {S(KC_J), KC_UNDS, KC_DQT,  S(KC_K), KC_EXLM,     S(KC_B), S(KC_P), S(KC_L), S(KC_F), S(KC_V)},
    {_______, KC_MPLY, KC_LALT, KC_LGUI, KC_LSFT,     KC_ENT,  KC_TAB,  KC_MEH,  KC_VOLU, _______ },
    {_______, KC_MNXT, KC_LCTL, S(KC_I), KC_ESC,      KC_BSPC, KC_SPC,  KC_HYPR, KC_VOLD, _______ }
  },
