/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00082614 FUN_00082614 */

void FUN_00082614(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2) * -0x42108421;
  if (uVar2 < (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * -0x42108421 + 1U) {
    if (uVar2 == 0) {
      uVar1 = 0x10;
    }
    else {
      uVar1 = uVar2 + (uVar2 >> 1);
      if (uVar1 <= uVar2) {
        return;
      }
    }
    FUN_00082598(param_1,uVar1);
  }
  return;
}



