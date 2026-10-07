/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000af44c FUN_000af44c */

void FUN_000af44c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined auStack_5c [18];
  undefined2 local_4a;
  undefined auStack_44 [40];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000af4ac + 0xaf454 + DAT_000af4b0);
  local_1c = *piVar1;
  memset(auStack_5c,0,0x40);
  local_4a = 1;
  FUN_0009e838(auStack_44,0);
  FUN_000af3f8(param_1,param_2,auStack_5c);
  FUN_0009e858(auStack_44);
  FUN_00093a84(auStack_5c);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



