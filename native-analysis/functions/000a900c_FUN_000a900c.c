/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a900c FUN_000a900c */

void FUN_000a900c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_20;
  uint local_1c [2];
  
  iVar3 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) != iVar3) {
    do {
      iVar2 = iVar1 + 4;
      FUN_000a7d7c(iVar1);
      iVar1 = iVar2;
    } while (iVar3 != iVar2);
    iVar3 = *(int *)(param_2 + 4);
  }
  *(int *)(param_2 + 8) = iVar3;
  FUN_000a8698(param_1,local_1c);
  uVar4 = 0;
  local_20 = 0;
  FUN_000a8628(param_2,local_1c[0],&local_20);
  FUN_000a7d7c(&local_20);
  if (local_1c[0] != 0) {
    do {
      iVar1 = uVar4 * 4;
      uVar4 = uVar4 + 1;
      FUN_000a8f58(param_1,*(int *)(param_2 + 4) + iVar1);
    } while (uVar4 < local_1c[0]);
  }
  return;
}



