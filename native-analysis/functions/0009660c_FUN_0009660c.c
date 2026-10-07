/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009660c FUN_0009660c */

undefined4 FUN_0009660c(int param_1,uint param_2)

{
  if ((0x19 < (param_2 - 0x41 & 0xff) && 9 < (param_2 - 0x30 & 0xff)) &&
     ((*(char *)(param_1 + 0x14) != '\0' || (0x7a < param_2 || param_2 < 0x61)))) {
    switch(param_2) {
    case 10:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x3a:
    case 0x3b:
    case 0x3d:
    case 0x3f:
    case 0x40:
    case 0x5b:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x7c:
    case 0x7e:
      break;
    default:
      return 0;
    }
  }
  return 1;
}



