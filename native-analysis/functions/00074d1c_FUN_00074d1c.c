/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00074d1c FUN_00074d1c */

void FUN_00074d1c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(int *)(param_1 + 8) - iVar1 >> 2) * 0x38e38e39 != 0) {
    uVar2 = 0;
    do {
      uVar3 = uVar2 + 1;
      FUN_00074c40(iVar1 + uVar2 * 0x24);
      iVar1 = *(int *)(param_1 + 4);
      uVar2 = uVar3;
    } while (uVar3 < (uint)((*(int *)(param_1 + 8) - iVar1 >> 2) * 0x38e38e39));
  }
  return;
}



