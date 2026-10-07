/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a305c FUN_000a305c */

void FUN_000a305c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int local_94;
  undefined auStack_90 [64];
  char local_50;
  undefined auStack_4c [40];
  int local_24;
  
  iVar1 = DAT_000a30d8;
  iVar2 = DAT_000a30d4 + 0xa306a;
  local_24 = **(int **)(iVar2 + DAT_000a30d8);
  FUN_000a0a50(&local_94);
  if (local_50 == '\0') {
    FUN_000a0670(param_1);
  }
  else {
    FUN_000ab824(auStack_4c,param_2);
    FUN_000a2fe0(param_1,&local_94,auStack_4c);
    FUN_0009e858(auStack_4c);
  }
  local_94 = DAT_000a30dc + 0xa30b0;
  FUN_0009f378(auStack_90);
  FUN_000ab448(auStack_90);
  if (local_24 == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



