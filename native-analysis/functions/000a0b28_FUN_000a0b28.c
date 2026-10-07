/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0b28 FUN_000a0b28 */

void FUN_000a0b28(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined auStack_3c [40];
  int local_14;
  
  piVar1 = *(int **)(DAT_000a0b64 + 0xa0b36 + DAT_000a0b68);
  local_14 = *piVar1;
  FUN_000abd0c(auStack_3c,param_1);
  FUN_0009e770(param_2,auStack_3c);
  FUN_0009e858(auStack_3c);
  if (local_14 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



