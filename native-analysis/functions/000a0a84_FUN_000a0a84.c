/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0a84 FUN_000a0a84 */

void FUN_000a0a84(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined auStack_68 [76];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000a0ac8 + 0xa0a90 + DAT_000a0acc);
  local_1c = *piVar1;
  FUN_000ac2d4(auStack_68,param_3,param_4);
  (**(code **)*param_2)(param_1,param_2,auStack_68);
  FUN_000abe04(auStack_68);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



