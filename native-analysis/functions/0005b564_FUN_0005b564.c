/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005b564 FUN_0005b564 */

void FUN_0005b564(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  if (uVar2 < (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + 1U) {
    if (uVar2 == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = uVar2 + (uVar2 >> 1);
      if (uVar1 <= uVar2) {
        return;
      }
    }
    FUN_0005b520(param_1,uVar1);
  }
  return;
}



