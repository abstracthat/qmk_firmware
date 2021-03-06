
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// .............................................................. CapsLock Layer

  // ,-----------------------------------             -----------------------------------.
  // |   :  |   Y  |   O  |   U  |   Z  |             |   G  |   D  |   N  |   M  |   X  |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |   Q  |   H  |   E  |   A  |   .  |             |   C  |   T  |   R  |   S  |   W  |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |   J  |   -  |   '  |   K  |   ,  |             |   B  |   P  |   L  |   F  |   V  |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |      |      |      |      |      |             |      |      |      |      |      |
  // |------+------+------+------+------+             -----------------------------------|
  // |      |      |      |  I   |  Esc |             | Bksp | Space|      |      |      |
  // `-----------------------------------             -----------------------------------'

  [_TTCAPS] = {
    {KC_COLN, S(KC_Y), S(KC_O), S(KC_U), S(KC_Z),     S(KC_G), S(KC_D), S(KC_N), S(KC_M), _______},
    {S(KC_Q), S(KC_H), S(KC_E), SS_A,    _______,     S(KC_C), SS_T,    S(KC_R), S(KC_S), S(KC_W)},
    {S(KC_J), KC_MINS, KC_QUOT, S(KC_K), S(KC_V),     S(KC_B), S(KC_P), S(KC_L), S(KC_F), S(KC_X)},
    {_______, _______, _______, KC_DOT,  KC_COMM,     _______, _______, _______, _______, _______},
    {_______, _______, _______, S(KC_I), TT_ESC,      KC_BSPC,  TT_SPC, _______, _______, _______},
  },

// ........................................................ Numeric Keypad Layer

  // .-----------------------------------             -----------------------------------.
  // |      |   F  |   E  |   D  |      |             |   /  |   7  |   8  |   9  |   *  |
  // |-----------------------------------             -----------------------------------|
  // |  GUI |   C  |   B  |   A  |      |             |   .  |   4  |   5  |   6  |   -  |
  // |-----------------------------------             -----------------------------------|
  // |      |   X  |   G  |   \  |      |             |   ,  |   1  |   2  |   3  |   +  |
  // |-----------------------------------             -----------------------------------|
  // |      |      |      |   .  |   ,  |             | Enter|  Tab |      |      |      |
  // |------+------+------+------+------+             -----------------------------------|
  // |      |      |      | Space|  Esc |             |   =  |   0  |      |      |      |
  // '-----------------------------------             -----------------------------------'

  [_TTNUMBER] = {
    {_______, KC_F,    MT_E,    KC_D,    _______,     KC_SLSH, KC_7,    KC_8,    KC_9,    KC_ASTR},
    {OS_GUI,  CT_C,    AT_B,    ST_A,    _______,     KC_MINS, KC_4,    KC_5,    KC_6,    _______},
    {_______, KC_X,    SM_G,    KC_BSLS, _______,     KC_PLUS, KC_1,    KC_2,    KC_3,    _______},
    {_______, _______, _______, TD_DOT,  TD_COMM,     KC_ENT,  KC_TAB,  _______, _______, _______},
    {_______, _______, _______, KC_SPC,  TT_ESC,      KC_EQL,  KC_0,    _______, _______, _______},
  },

  // ............................................................ Navigation Layer
  //
  //   .-----------------------------------             -----------------------------------.
  //   |      |      |      |      |      |             | PgUp | Home |      |      |      |
  //   |-----------------------------------             -----------------------------------|
  //   |  GUI | Ctrl |  Alt | Shift|      |             | Left | Down |  Up  | Right|      |
  //   |-----------------------------------             -----------------------------------|
  //   |      |      |      |      |      |             | PgDn |  End |      |      |      |
  //   |-----------------------------------             -----------------------------------|
  //   |      |      |      |      |      |             |      |      |      |      |      |
  //   |-----------------------------------             -----------------------------------|
  //   |      |      |      |      |  f() |             |      |      |      |      |      |
  //   '-----------------------------------             -----------------------------------'

  [_TTCURSOR] = {
    {_______, _______, _______, _______, _______,     KC_PGUP, KC_HOME, _______, _______, _______},
    {OS_CTL,  OS_GUI,  OS_ALT,  OS_SFT,  _______,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______},
    {_______, _______, _______, _______, _______,     KC_PGDN, KC_END,  _______, _______, _______},
    {_______, _______, _______, _______, _______,     _______, _______, _______, _______, _______},
    {_______, _______, _______, _______,  TT_ESC,     ___x___, _______, _______, _______, _______}, // _x_ capslock
  },

// ............ .................................................. Function Keys

  // .-----------------------------------------------------------------------------------.
  // |      |      |      |      |      |      |      |      |  F7  |  F8  |  F9  |  F12 |
  // |-----------------------------------------------------------------------------------|
  // |  GUI | Ctrl |  Alt | Shift|      |      |      |      |  F4  |  F5  |  F6  |  F11 |
  // |-----------------------------------------------------------------------------------|
  // |      |      |      |      |      |      |      |      |  F1  |  F2  |  F3  |  F10 |
  // |-----------------------------------------------------------------------------------|
  // |                           |  f() |      |      |      |                           |
  // |      |      |      |  f() |      |      |      |      |      |      |      |      |
  // '-----------------------------------------------------------------------------------'

//   [_TTFNCKEY] = {
//     {_______, _______, _______, _______, _______, ___x___, ___x___, _______, KC_F7,   KC_F8,   KC_F9,   KC_F12 },
//     {OS_GUI,  OS_CTL,  OS_ALT,  OS_SFT,  _______, ___x___, ___x___, _______, KC_F4,   KC_F5,   KC_F6,   KC_F11 },
//     {_______, _______, _______, _______, _______, ___x___, ___x___, _______, KC_F1,   KC_F2,   KC_F3,   KC_F10 },
//     {_______, _______, _______, _______, TT_ESC,  _______, _______, _______, _______, _______, _______, _______},
//   },

// ....................................................................... Regex

  // ,-----------------------------------------------------------------------------------.
  // |   :  |   .  |   *  |   &  |      |      |      |   `  |   [  |   ^  |   ]  |      |
  // |------+------+------+------+------+-------------+------+------+------+------+------|
  // |   ~  |   <  |   %  |   >  |   ?  |      |      |   |  |   (  |   $  |   )  |      |
  // |------+------+------+------+------+-------------+------+------+------+------+------|
  // |      |   +  |   @  |   !  |   /  |      |      |   \  |   {  |   #  |   }  |      |
  // |------+------+------+------+------+------+------+------+------+------+------+------|
  // |                           |  f() |   =  | Space| Bksp |                           |
  // |      |      |      |  f() |   =  |      |      | Space| Bksp |      |      |      |
  // `-----------------------------------------------------------------------------------'

  // [_TTREGEX] = {
  //   {KC_COLN, KC_DOT,  KC_ASTR, KC_AMPR, _______, ___x___, ___x___, KC_GRV,  KC_LBRC, KC_CIRC, KC_RBRC, _______},
  //   {KC_TILD, KC_LT,   KC_PERC, KC_GT,   KC_QUES, ___x___, ___x___, KC_PIPE, KC_LPRN, KC_DLR,  KC_RPRN, _______},
  //   {_______, KC_PLUS, KC_AT,   KC_EXLM, KC_SLSH, ___x___, ___x___, KC_BSLS, KC_LCBR, KC_HASH, KC_RCBR, _______},
  //   {_______, _______, _______, _______, TT_ESC,  KC_EQL,  KC_SPC,  KC_BSPC, _______, _______, _______, _______},
  // },

// ............................................................... Mouse Actions

  // .-----------------------------------------------------------------------------------.
  // |      |      |      |      |      |      |      |      | Left |  Up  | Right|  Up  |
  // |-----------------------------------------------------------------------------------|
  // |      | Btn3 | Btn2 | Btn1 |      |      |      |      | Left | Down | Right| Down |
  // |-----------------------------------------------------------------------------------|
  // |      |      |      |      |      |      |      |      |      |      |      |      |
  // |-----------------------------------------------------------------------------------|
  // |                           |  f() |      |      |      |                           |
  // |      |      |      |  f() |      |      |      |      |      |      |      |      |
  // '-----------------------------------------------------------------------------------'

  // [_TTMOUSE] = {
  //   {_______, _______, _______, _______, _______, ___x___, ___x___, _______, KC_WH_L, KC_MS_U, KC_WH_R, KC_WH_U},
  //   {_______, KC_BTN3, KC_BTN2, KC_BTN1, _______, ___x___, ___x___, _______, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D},
  //   {_______, _______, _______, _______, _______, ___x___, ___x___, _______, _______, _______, _______, _______},
  //   {_______, _______, _______, _______, TT_ESC,  _______, _______, _______, _______, _______, _______, _______},
  // },
