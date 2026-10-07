/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0ff4 FUN_000a0ff4 */

void FUN_000a0ff4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar4 = iVar2 - *(int *)(param_1 + 4);
  if (uVar4 < param_2) {
    iVar1 = param_2 - uVar4;
    iVar2 = FUN_00098828(param_1,iVar2,iVar1);
    if (iVar1 != 0) {
      iVar3 = 0;
      do {
        *(undefined *)(iVar2 + iVar3) = 0;
        iVar3 = iVar3 + 1;
      } while (iVar1 != iVar3);
    }
  }
  else if (param_2 < uVar4) {
    iVar1 = *(int *)(param_1 + 4) + param_2;
    if (iVar2 != iVar1) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  return;
}



