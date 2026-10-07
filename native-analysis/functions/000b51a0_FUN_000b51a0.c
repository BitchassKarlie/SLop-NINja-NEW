/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b51a0 FUN_000b51a0 */

int FUN_000b51a0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 0xc) - iVar5;
  if (iVar4 == -1) {
    FUN_00017cb8(param_1,0xffffffff);
  }
  else {
    FUN_00017cb8(param_1,iVar4);
    if (iVar4 == 0) {
      return param_1;
    }
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = (*(int *)(param_1 + 8) + -1) - iVar2;
  if (iVar1 != 0) {
    iVar3 = 0;
    do {
      iVar1 = iVar1 + -1;
      *(undefined *)(iVar2 + iVar3) = *(undefined *)(iVar5 + iVar3);
      if (iVar1 == 0) break;
      iVar3 = iVar3 + 1;
    } while (iVar4 != iVar3);
    iVar2 = *(int *)(param_1 + 4);
  }
  *(int *)(param_1 + 0xc) = iVar2 + iVar4;
  return param_1;
}



