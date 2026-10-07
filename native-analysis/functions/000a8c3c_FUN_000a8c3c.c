/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8c3c FUN_000a8c3c */

int FUN_000a8c3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 4);
  iVar4 = *(int *)(param_2 + 0xc) - iVar5;
  FUN_00017cb8(param_1,iVar4);
  if (iVar4 != 0) {
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
  }
  FUN_000a8134(param_1 + 0x10,param_2 + 0x10,*(undefined4 *)(param_2 + 0x14),param_2 + 0x10,
               *(undefined4 *)(param_2 + 0x18));
  FUN_000a83ac(param_1 + 0x20,param_2 + 0x20,*(undefined4 *)(param_2 + 0x24),param_2 + 0x20,
               *(undefined4 *)(param_2 + 0x28));
  return param_1;
}



