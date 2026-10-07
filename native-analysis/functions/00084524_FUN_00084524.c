/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084524 FUN_00084524 */

int FUN_00084524(byte *param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    if (bVar2 != 0) {
      bVar2 = 1;
    }
    if (param_2 == (char *)0x0) {
      bVar2 = 0;
    }
    else {
      bVar2 = bVar2 & 1;
    }
    if (bVar2 != 0) {
      uVar1 = strcmp((char *)param_1,param_2);
      if (uVar1 < 2) {
        return 1 - uVar1;
      }
      return 0;
    }
  }
  return 0;
}



