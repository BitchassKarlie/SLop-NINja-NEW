/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e750 FUN_0009e750 */

void FUN_0009e750(uint *param_1,undefined param_2)

{
  uint uVar1;
  
  uVar1 = *param_1;
  param_1[9] = 0;
  FUN_0009e6e8();
  if (*param_1 < 0x21) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = (uint *)param_1[1];
  }
  *(undefined *)((int)param_1 + (uVar1 - 1)) = param_2;
  return;
}



