/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e714 FUN_0009e714 */

void FUN_0009e714(uint *param_1,uint *param_2)

{
  uint *__src;
  uint uVar1;
  
  if (*param_2 != 1) {
    uVar1 = *param_1;
    param_1[9] = 0;
    FUN_0009e6e8(param_1,(*param_2 - 1) + (uVar1 - 1));
    if (*param_1 < 0x21) {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (uint *)param_1[1];
    }
    if (*param_2 < 0x21) {
      __src = param_2 + 1;
    }
    else {
      __src = (uint *)param_2[1];
    }
    memcpy((void *)((int)param_1 + (uVar1 - 1)),__src,*param_2 - 1);
  }
  return;
}



