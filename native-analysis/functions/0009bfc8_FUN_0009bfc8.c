/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009bfc8 FUN_0009bfc8 */

void FUN_0009bfc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char acStack_11c [256];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0009c010 + 0x9bfd6 + DAT_0009c014);
  local_1c = *piVar1;
  snprintf(acStack_11c,0x100,(char *)(DAT_0009c018 + 0x9bfe4),local_1c,param_3,param_4);
  FUN_0009bf5c(param_1,param_2,acStack_11c);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



