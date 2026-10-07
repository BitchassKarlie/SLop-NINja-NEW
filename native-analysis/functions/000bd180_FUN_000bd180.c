/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bd180 FUN_000bd180 */

uint FUN_000bd180(uint param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    *param_5 = param_4;
  }
  else if (param_3 == 0) {
    *param_5 = param_2;
    param_3 = param_1;
  }
  else {
    if (param_4 < param_2) {
      iVar2 = (int)param_1 >> 1;
      uVar3 = (param_2 - param_4) + 1;
      *param_5 = param_2 + 1;
      if ((int)uVar3 < 0x20) {
        iVar1 = (int)((1 << (param_2 - param_4 & 0xffU)) + param_3) >> (uVar3 & 0xff);
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = (int)param_3 >> 1;
      uVar3 = (param_4 - param_2) + 1;
      *param_5 = param_4 + 1;
      if ((int)uVar3 < 0x20) {
        iVar2 = (int)((1 << (param_4 - param_2 & 0xffU)) + param_1) >> (uVar3 & 0xff);
      }
      else {
        iVar2 = 0;
      }
    }
    param_3 = iVar1 + iVar2;
    if ((param_3 & 0xc0000000) == 0xc0000000 || (param_3 & 0xc0000000) == 0) {
      *param_5 = *param_5 + -1;
      param_3 = param_3 * 2;
    }
  }
  return param_3;
}



