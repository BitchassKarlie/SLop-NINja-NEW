/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003f78c FUN_0003f78c */

void FUN_0003f78c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_a4;
  undefined local_a0;
  undefined local_9f;
  undefined local_9e;
  undefined local_9d;
  undefined auStack_9c [128];
  int local_1c;
  
  iVar2 = DAT_0003f858;
  iVar1 = DAT_0003f854;
  iVar5 = DAT_0003f850 + 0x3f79a;
  local_1c = **(int **)(iVar5 + DAT_0003f854);
  do {
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x78) + -1;
      *(int *)(param_1 + 0x78) = iVar3;
      if (-1 < iVar3) break;
      *(int *)(param_1 + 0x78) = **(int **)(iVar5 + iVar2) + -1;
      iVar3 = FUN_00021680();
      if (0 < *(int *)(iVar3 + 0x22c)) goto LAB_0003f7ce;
    }
    iVar3 = FUN_00021680();
  } while (*(int *)(iVar3 + 0x22c) < 1);
LAB_0003f7ce:
  uVar4 = FUN_0002285c(0,param_1 + 0x7c,*(undefined4 *)(param_1 + 0x78),0xffffffff);
  *(undefined4 *)(param_1 + 0x74) = uVar4;
  FUN_00021654(&local_a0,*(undefined4 *)(param_1 + 0x78));
  *(undefined *)(param_1 + 0x93) = local_9d;
  *(undefined *)(param_1 + 0x92) = local_9e;
  *(undefined *)(param_1 + 0x91) = local_9f;
  *(undefined *)(param_1 + 0x90) = local_a0;
  uVar4 = FUN_000215f8(*(undefined4 *)(param_1 + 0x78));
  FUN_0008f060(auStack_9c,0x80,DAT_0003f85c + 0x3f81c,uVar4);
  FUN_0002fa48(&local_a4,auStack_9c);
  FUN_00017d64(param_1 + 0x80,local_a4);
  FUN_00017d90(&local_a4);
  if (local_1c == **(int **)(iVar5 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}



