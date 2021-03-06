
// const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// ............................................. Symbol Pairs / Navigation Layer

  // ,-----------------------------------             -----------------------------------.
  // |      |   |  |   *  |   &  |      |             |      |      | Home | PgUp |      |
  // |------+------+------+------+------+             -----------------------------------|
  // |   ~  |   <  |   %  |   >  |   @  |             | Left | Down |  Up  | Right|      |
  // |------+------+------+------+------+             -----------------------------------|
  // |      |   +  |   `  |   /  |      |             |      |      |  End | PgDn |      |
  // |------+------+------+------+------+             -----------------------------------|
  // |      |      |      |      |      |             |      |      |      |      |      |
  // |------+------+------+------+------+             -----------------------------------|
  // |      |      |      |   =  |      |             | Bksp |  f() |      |      |      |
  // `-----------------------------------             -----------------------------------'

  [_GUIFN] = {
    {_______, KC_PIPE, KC_ASTR, KC_AMPR, _______,     _______, _______, KC_HOME, KC_PGUP, _______},
    {SG_TILD, HS_LT,   TD_PERC, HS_GT,   KC_AT,       KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______},
    {_______, KC_PLUS, KC_GRV,  KC_SLSH, _______,     _______, _______, KC_END,  KC_PGDN, _______},
    {_______, _______, _______, _______, _______,     _______, _______, _______, _______, _______},
    {_______, _______, _______, ML_EQL,  _______,     ___x___, ___fn__, _______, _______, _______}, // _x_ capslock
  },

// ................................................................ Symbol Layer

  // ,-----------------------------------             -----------------------------------.
  // |      |      |      |      |      |             |      |   [  |   ^  |   ]  |      |
  // |--------------------+--------------             +------+------+------+------+------|
  // |  Ctl |  Cmd |  Alt | Shift|      |             |   |  |   (  |   $  |   )  |   /  |
  // |------|-------------+------|------|             +------+------+------+------+------|
  // |      |      |      |      |      |             |      |   {  |   #  |   }  |   \  |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |      |      |      |   !  |   ?  |             |      |      |      |      |      |
  // |------+------+------+------+------+             +------+------+------+------+------|
  // |      |      |      |  f() |  Esc |             |  Del |   \  |      |      |      |
  // `-----------------------------------             -----------------------------------'

  [_SYMBOL] = {
    {_______, _______, _______, _______, _______,     _______, KC_LBRC, KC_CIRC, KC_RBRC, _______},
    {OS_CTL,  OS_GUI,  OS_ALT,  OS_SFT,  _______,     KC_PIPE, KC_LPRN, KC_DLR,  KC_RPRN, KC_SLSH},
    {_______, _______, _______, _______, _______,     _______, KC_LCBR, KC_HASH, KC_RCBR, KC_BSLS},
    {_______, _______, _______, KC_EXLM, KC_QUES,     _______, _______, _______, _______, _______},
    {_______, _______, _______, ___fn__, ___x___,     KC_DEL,  ML_BSLS, _______, _______, _______},
  },

// ......................................................... Mouse Pointer Layer

  // .-----------------------------------             -----------------------------------.
  // |      |      |      |      |      |             | Left | Down |  Up  | Right|      |
  // |-----------------------------------             -----------------------------------|
  // |      | Btn3 | Btn2 | Btn1 |      |             | Left | Down |  Up  | Right|      |
  // |-----------------------------------             -----------------------------------|
  // |      |      |      |      |      |             |      |      |      |      |      |
  // |-----------------------------------             -----------------------------------|
  // |      |      |      |      |      |             |      |      |      |      |      |
  // |-----------------------------------             -----------------------------------|
  // |      |      |      |      |  f() |             |  f() |      |      |      |      |
  // '-----------------------------------             -----------------------------------'

  [_MOUSE] = {
    {_______, _______, _______, _______, _______,     KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, _______},
    {_______, KC_BTN3, KC_BTN2, KC_BTN1, _______,     KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______},
    {_______, _______, _______, _______, _______,     _______, _______, _______, _______, _______},
    {_______, _______, _______, _______, _______,     _______, _______, _______, _______, _______},
    {_______, _______, _______, ___x___, ___fn__,     ___fn__, ___x___, _______, _______, _______},
  },
