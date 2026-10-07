/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a60c FUN_0009a60c */

uint * FUN_0009a60c(uint *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_2 != 0) {
    uVar1 = FUN_0009a5d8(*param_2,param_3);
    if (uVar1 != 0 && 0 < param_4) {
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        uVar1 = FUN_0009a4f0(uVar1,param_3);
        uVar2 = uVar1;
        if (uVar1 != 0) {
          uVar2 = 1;
        }
        if (iVar3 < param_4) {
          uVar2 = uVar2 & 1;
        }
        else {
          uVar2 = 0;
        }
      } while (uVar2 != 0);
    }
    if (uVar1 != 0) {
      *param_1 = uVar1;
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}



