/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab654 FUN_000ab654 */

void FUN_000ab654(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 3) * -0x33333333;
  if (uVar1 < (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 3) * -0x33333333 + 1U) {
    if (uVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = uVar1 + (uVar1 >> 1);
      if (uVar2 <= uVar1) {
        return;
      }
    }
    FUN_000ab59c(param_1,uVar2);
  }
  return;
}



