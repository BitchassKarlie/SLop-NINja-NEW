/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084e9c FUN_00084e9c */

void FUN_00084e9c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
  if (uVar2 < (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4) + 1U) {
    if (uVar2 == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = uVar2 + (uVar2 >> 1);
      if (uVar1 <= uVar2) {
        return;
      }
    }
    FUN_00084e64(param_1,uVar1);
  }
  return;
}



