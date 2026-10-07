/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006cce4 FUN_0006cce4 */

void FUN_0006cce4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0006cd68 + 0x6ccee;
  FUN_000a3a68();
  iVar1 = FUN_00094cac();
  iVar3 = DAT_0006cd6c;
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(iVar4 + DAT_0006cd6c) + 0x50);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar4 + DAT_0006cd6c) + 0x50);
    if (*(char *)(iVar1 + 0x30) == '\0') {
      FUN_0006fea4();
      iVar1 = *(int *)(*(int *)(iVar4 + iVar3) + 0x50);
    }
    else if (param_2 == 0) {
      FUN_0006fea4();
      iVar1 = *(int *)(*(int *)(iVar4 + iVar3) + 0x50);
    }
  }
  *(char *)(iVar1 + 0x30) = (char)param_2;
  uVar2 = FUN_000a3a68();
  iVar1 = *(int *)(iVar4 + iVar3);
  FUN_00094cb4(uVar2,*(byte *)(*(int *)(iVar1 + 0x50) + 0x30) ^ 1);
  *(undefined *)(iVar1 + 0x19c) = 0;
  FUN_000a3a68();
  iVar3 = FUN_00094cac();
  if ((iVar3 != 0) && (iVar3 = *(int *)(iVar1 + 0x50), iVar3 != 0)) {
    uVar2 = FUN_0008f414(DAT_0006cd70 + 0x6cd30);
    iVar3 = FUN_0006fbdc(iVar3,uVar2);
    if (iVar3 == 0) {
      FUN_000331cc();
    }
  }
  return;
}



