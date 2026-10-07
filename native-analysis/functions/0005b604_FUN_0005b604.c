/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005b604 FUN_0005b604 */

void FUN_0005b604(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2) * -0x55555555;
  if (uVar1 < (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * -0x55555555 + 1U) {
    if (uVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = uVar1 + (uVar1 >> 1);
      if (uVar2 <= uVar1) {
        return;
      }
    }
    FUN_0005b590(param_1,uVar2);
  }
  return;
}



