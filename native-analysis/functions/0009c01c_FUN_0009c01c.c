/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c01c FUN_0009c01c */

void FUN_0009c01c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  char acStack_5c [64];
  int local_1c;
  
  piVar1 = *(int **)(DAT_0009c05c + 0x9c028 + DAT_0009c060);
  local_1c = *piVar1;
  snprintf(acStack_5c,0x40,(char *)(DAT_0009c064 + 0x9c03e),param_3);
  FUN_0009bf5c(param_1,param_2,acStack_5c);
  if (local_1c == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



