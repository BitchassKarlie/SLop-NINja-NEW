/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bdd34 FUN_000bdd34 */

int FUN_000bdd34(int param_1,int param_2)

{
  if (param_1 == 0) {
    if (param_2 == 0x100) {
      return DAT_000bddc0 + 0xbe0f6;
    }
    if (param_2 < 0x101) {
      if (param_2 == 0x40) {
        return DAT_000bddc4 + 0xbdd80;
      }
      if (param_2 == 0x80) {
        return DAT_000bddd4 + 0xbdf34;
      }
      if (param_2 == 0x20) {
        return DAT_000bddb8 + 0xbde54;
      }
    }
    else {
      if (param_2 == 0x400) {
        return DAT_000bddc8 + 0xbed06;
      }
      if (param_2 < 0x401) {
        if (param_2 == 0x200) {
          return DAT_000bddbc + 0xbe4ec;
        }
      }
      else {
        if (param_2 == 0x800) {
          return DAT_000bddd0 + 0xbec30;
        }
        if (param_2 == 0x1000) {
          return DAT_000bddcc + 0xbea34;
        }
      }
    }
  }
  return 0;
}



