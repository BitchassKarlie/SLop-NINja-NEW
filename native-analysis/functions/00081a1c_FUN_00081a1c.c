/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00081a1c FUN_00081a1c */

void FUN_00081a1c(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2) * -0x45d1745d;
  if (uVar2 < (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * -0x45d1745d + 1U) {
    if (uVar2 == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = uVar2 + (uVar2 >> 1);
      if (uVar1 <= uVar2) {
        return;
      }
    }
    FUN_0008198c(param_1,uVar1);
  }
  return;
}



