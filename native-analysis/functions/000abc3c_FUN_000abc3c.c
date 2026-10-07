/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abc3c FUN_000abc3c */

void FUN_000abc3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined auStack_6c [40];
  undefined auStack_44 [40];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000abc9c + 0xabc4a + DAT_000abca0);
  local_1c = *piVar1;
  FUN_0009e7a4(auStack_44);
  FUN_0009e750(auStack_44,0x2f);
  FUN_0009e7a4(auStack_6c,auStack_44);
  FUN_0009e714(auStack_6c,param_3);
  FUN_000ab8a8(param_1,auStack_6c);
  FUN_0009e858(auStack_6c);
  FUN_0009e858(auStack_44);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



