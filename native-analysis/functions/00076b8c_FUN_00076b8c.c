/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00076b8c FUN_00076b8c */

void FUN_00076b8c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined auStack_3c [32];
  int local_1c;
  
  iVar1 = DAT_00076c04;
  iVar5 = DAT_00076c00 + 0x76b98;
  local_1c = **(int **)(iVar5 + DAT_00076c04);
  FUN_000a3a68();
  iVar2 = FUN_00094c30();
  if (iVar2 == 1) {
    FUN_000a3a68();
    uVar4 = FUN_000a5890();
    if (uVar4 != 0) {
      iVar6 = *(int *)(param_1 + 0x40);
      FUN_000a3a68();
      FUN_000a5890();
      iVar2 = FUN_0008f414();
      uVar4 = (uint)(iVar6 == iVar2);
    }
  }
  else {
    uVar3 = FUN_000a3a68();
    FUN_00094f90(uVar3,0,auStack_3c,0x1f);
    iVar6 = *(int *)(param_1 + 0x40);
    iVar2 = FUN_0008f414(auStack_3c);
    if (iVar6 == iVar2) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if (local_1c != **(int **)(iVar5 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}



