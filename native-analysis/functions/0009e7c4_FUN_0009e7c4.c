/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009e7c4 FUN_0009e7c4 */

void FUN_0009e7c4(uint *param_1,void *param_2,undefined4 param_3)

{
  uint uVar1;
  
  param_1[9] = 0;
  if (param_2 == (void *)0x0) {
    FUN_0009e6e8();
  }
  else {
    FUN_0009e6e8(param_1,param_3);
    uVar1 = *param_1;
    if (uVar1 != 1) {
      if (uVar1 < 0x21) {
        param_1 = param_1 + 1;
      }
      else {
        param_1 = (uint *)param_1[1];
      }
      memcpy(param_1,param_2,uVar1 - 1);
    }
  }
  return;
}



