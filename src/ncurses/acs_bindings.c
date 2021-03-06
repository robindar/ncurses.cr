#include <ncurses.h>

void fun_getyx(WINDOW *w, int *y, int *x) {
  getyx(w, *y, *x);
}

chtype acs_ulcorner() { return ACS_ULCORNER; }
chtype acs_llcorner() { return ACS_LLCORNER; }
chtype acs_urcorner() { return ACS_URCORNER; }
chtype acs_lrcorner() { return ACS_LRCORNER; }
chtype acs_ltee() { return ACS_LTEE; }
chtype acs_rtee() { return ACS_RTEE; }
chtype acs_btee() { return ACS_BTEE; }
chtype acs_ttee() { return ACS_TTEE; }
chtype acs_hline() { return ACS_HLINE; }
chtype acs_vline() { return ACS_VLINE; }
chtype acs_plus() { return ACS_PLUS; }
chtype acs_s1() { return ACS_S1; }
chtype acs_s3() { return ACS_S3; }
chtype acs_s7() { return ACS_S7; }
chtype acs_s9() { return ACS_S9; }
chtype acs_diamond() { return ACS_DIAMOND; }
chtype acs_ckboard() { return ACS_CKBOARD; }
chtype acs_degree() { return ACS_DEGREE; }
chtype acs_plminus() { return ACS_PLMINUS; }
chtype acs_bullet() { return ACS_BULLET; }
chtype acs_larrow() { return ACS_LARROW; }
chtype acs_rarrow() { return ACS_RARROW; }
chtype acs_darrow() { return ACS_DARROW; }
chtype acs_uarrow() { return ACS_UARROW; }
chtype acs_board() { return ACS_BOARD; }
chtype acs_lantern() { return ACS_LANTERN; }
chtype acs_block() { return ACS_BLOCK; }
chtype acs_lequal() { return ACS_LEQUAL; }
chtype acs_gequal() { return ACS_GEQUAL; }
chtype acs_pi() { return ACS_PI; }
chtype acs_nequal() { return ACS_NEQUAL; }
chtype acs_sterling() { return ACS_STERLING; }
