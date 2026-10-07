/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1e98 FUN_000b1e98 */

void FUN_000b1e98(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined auStack_60 [68];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000b1ee0 + 0xb1ea0 + DAT_000b1ee4);
  local_1c = *piVar1;
  memset(auStack_60,0,0x44);
  FUN_0009e838(auStack_60,0);
  FUN_000b1c88(param_1,param_2,auStack_60);
  FUN_0009e858(auStack_60);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



