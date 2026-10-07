/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008bd0c FUN_0008bd0c */

void FUN_0008bd0c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0007b784();
  if (((*(int *)(param_1 + 0x40) < 10000) && (param_2 == 0)) &&
     (iVar4 = FUN_00086780(), *(int *)(param_1 + 0x40) < *(int *)(iVar4 + 0x250))) {
    uVar1 = FUN_00086780();
    FUN_0008a15c(uVar1,*(undefined4 *)(param_1 + 0x40),0xbf800000,0);
  }
  uVar1 = FUN_00086780();
  iVar2 = FUN_00085528(uVar1,0);
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar5 = iVar3;
  if (iVar3 != *(int *)(param_1 + 0x24)) {
    do {
      iVar5 = iVar4 + 0x7c;
      FUN_00085b7c(iVar4);
      iVar4 = iVar5;
    } while (iVar5 != *(int *)(param_1 + 0x28));
    iVar3 = *(int *)(param_1 + 0x24);
  }
  FUN_0008bcc0(iVar2,iVar2,*(undefined4 *)(iVar2 + 4),param_1 + 0x20,iVar3,param_1 + 0x20,iVar5);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar4 != iVar5) {
    do {
      iVar2 = iVar4 + 0xc;
      iVar4 = iVar4 + 0x7c;
      FUN_000223ec(iVar2);
    } while (iVar5 != iVar4);
    iVar5 = *(int *)(param_1 + 0x24);
  }
  *(int *)(param_1 + 0x28) = iVar5;
  return;
}



