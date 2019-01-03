// tap dance keys
enum tap_dance {
  _ASTR = 0
 ,_BSPC
 ,_EMOJ
 ,_COMM
 ,_DOT
 ,_PASTE
 ,_PERC
 ,_SPC
 ,_TILD
};

#define TD_ASTR   TD(_ASTR)
#define TD_BSPC   TD(_BSPC)
#define TD_EMOJ   TD(_EMOJ)
#define TD_COMM   TD(_COMM)
#define TD_DOT    TD(_DOT)
#define TD_PASTE  TD(_PASTE)
#define TD_PERC   TD(_PERC)
#define TD_SPC    TD(_SPC)                  // see process_record_user() for extended handling of Spc
#define TD_TILD   TD(_TILD)
