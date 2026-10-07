/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003f860 FUN_0003f860 */

void FUN_0003f860(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_a4;
  undefined local_a0;
  undefined local_9f;
  undefined local_9e;
  undefined local_9d;
  undefined auStack_9c [128];
  int local_1c;
  
  iVar1 = DAT_0003f920;
  iVar4 = DAT_0003f91c + 0x3f86e;
  local_1c = **(int **)(iVar4 + DAT_0003f920);
  piVar5 = *(int **)(iVar4 + DAT_0003f924);
  do {
    iVar2 = *(int *)(param_1 + 0x78) + 1;
    *(int *)(param_1 + 0x78) = iVar2;
    if (*piVar5 <= iVar2) {
      *(undefined4 *)(param_1 + 0x78) = 0;
      iVar2 = 0;
    }
    iVar2 = FUN_00021680(iVar2);
  } while (*(int *)(iVar2 + 0x22c) < 1);
  uVar3 = FUN_0002285c(0,param_1 + 0x7c,*(undefined4 *)(param_1 + 0x78),0xffffffff);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  FUN_00021654(&local_a0,*(undefined4 *)(param_1 + 0x78));
  *(undefined *)(param_1 + 0x93) = local_9d;
  *(undefined *)(param_1 + 0x92) = local_9e;
  *(undefined *)(param_1 + 0x91) = local_9f;
  *(undefined *)(param_1 + 0x90) = local_a0;
  uVar3 = FUN_000215f8(*(undefined4 *)(param_1 + 0x78));
  FUN_0008f060(auStack_9c,0x80,DAT_0003f928 + 0x3f8e8,uVar3);
  FUN_0002fa48(&local_a4,auStack_9c);
  FUN_00017d64(param_1 + 0x80,local_a4);
  FUN_00017d90(&local_a4);
  if (local_1c != **(int **)(iVar4 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}



