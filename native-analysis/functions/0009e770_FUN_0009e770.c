/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e770 FUN_0009e770 */

void FUN_0009e770(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  FUN_0009e6e8(param_1,*param_2 - 1);
  uVar1 = *param_1;
  param_1[9] = param_2[9];
  if (uVar1 != 1) {
    if (uVar1 < 0x21) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (uint *)param_1[1];
    }
    if (*param_2 < 0x21) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = (uint *)param_2[1];
    }
    memcpy(param_1,param_2,uVar1 - 1);
  }
  return;
}



