/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8aa4 FUN_000a8aa4 */

void FUN_000a8aa4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_1c [2];
  
  iVar3 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) != iVar3) {
    do {
      iVar1 = iVar2 + 0xc;
      FUN_000a08c8(iVar2);
      iVar2 = iVar1;
    } while (iVar3 != iVar1);
    iVar3 = *(int *)(param_2 + 4);
  }
  *(int *)(param_2 + 8) = iVar3;
  FUN_000a8698(param_1,local_1c);
  FUN_000a8234(param_2,local_1c[0]);
  if (local_1c[0] != 0) {
    iVar2 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      iVar3 = *(int *)(param_2 + 4) + iVar2;
      iVar2 = iVar2 + 0xc;
      FUN_000a8a84(param_1,iVar3);
    } while (uVar4 < local_1c[0]);
  }
  return;
}



