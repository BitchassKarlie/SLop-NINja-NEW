/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072374 FUN_00072374 */

void FUN_00072374(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *__dest;
  int iVar4;
  undefined4 local_a4;
  char acStack_a0 [128];
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_000723f0;
  iVar4 = DAT_000723ec + 0x72382;
  local_1c = **(int **)(iVar4 + DAT_000723f0);
  local_a4 = param_3;
  iVar2 = FUN_0006fca8(param_1,param_3);
  if (iVar2 == 0) {
    strcpy(acStack_a0,param_2);
    local_20 = DAT_000723e4;
    if (*(int *)(param_1 + 0x14c) != 0) {
      local_20 = DAT_000723e8;
    }
    __dest = (void *)FUN_000721d0(param_1 + 0x140,&local_a4);
    memcpy(__dest,acStack_a0,0x84);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  if (local_1c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



