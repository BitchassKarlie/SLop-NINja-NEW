/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab254 FUN_000ab254 */

void FUN_000ab254(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c [2];
  
  FUN_000a8698(param_1,local_1c);
  iVar1 = local_1c[0];
  iVar5 = *(int *)(param_1 + 4);
  FUN_00017cb8(param_2,local_1c[0]);
  if (iVar1 != 0) {
    iVar3 = *(int *)(param_2 + 4);
    iVar2 = (*(int *)(param_2 + 8) + -1) - iVar3;
    if (iVar2 != 0) {
      iVar4 = 0;
      do {
        iVar2 = iVar2 + -1;
        *(undefined *)(iVar3 + iVar4) = *(undefined *)(iVar5 + iVar4);
        if (iVar2 == 0) break;
        iVar4 = iVar4 + 1;
      } while (iVar1 != iVar4);
      iVar3 = *(int *)(param_2 + 4);
    }
    *(int *)(param_2 + 0xc) = iVar3 + iVar1;
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + local_1c[0];
  return;
}



