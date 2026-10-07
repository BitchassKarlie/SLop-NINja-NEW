/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1a34 FUN_000a1a34 */

void FUN_000a1a34(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2) * -0x33333333;
  if (uVar1 < (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * -0x33333333 + 1U) {
    if (uVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = uVar1 + (uVar1 >> 1);
      if (uVar2 <= uVar1) {
        return;
      }
    }
    FUN_000a0874(param_1,uVar2);
  }
  return;
}



