/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017adc FUN_00017adc */

undefined4 FUN_00017adc(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (param_1[iVar3 * 0xb + 1] == 0) {
LAB_00017b10:
    if ((iVar3 < 1) || (param_1[1] == 0)) {
LAB_00017b32:
      *param_1 = 0;
      return 0;
    }
    if (param_1[2] != param_2) {
      uVar2 = 1;
      do {
        if ((uint)param_1[1] < uVar2 + 1) goto LAB_00017b32;
        iVar3 = uVar2 + 2;
        uVar2 = uVar2 + 1;
      } while (param_1[iVar3] != param_2);
    }
    *param_1 = 1;
    if (param_1[0x6f] == 1) {
      *param_1 = 0;
      return 1;
    }
  }
  else {
    if (param_1[iVar3 * 0xb + 2] != param_2) {
      uVar2 = 1;
      do {
        if ((uint)param_1[iVar3 * 0xb + 1] < uVar2 + 1) goto LAB_00017b10;
        iVar1 = uVar2 + 2;
        uVar2 = uVar2 + 1;
      } while (param_1[iVar3 * 0xb + iVar1] != param_2);
    }
    *param_1 = iVar3 + 1;
    if (iVar3 + 1 == param_1[0x6f]) {
      *param_1 = 0;
      return 1;
    }
  }
  return 0;
}



