/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000751dc FUN_000751dc */

void FUN_000751dc(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 ***local_ec;
  undefined4 ***local_e8;
  undefined auStack_e4 [200];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00075234 + 0x751e6 + DAT_00075238);
  local_1c = *piVar2;
  piVar1 = (int *)operator_new(0xd0);
  FUN_000750d4(auStack_e4,param_2);
  *piVar1 = (int)&local_ec;
  piVar1[1] = (int)&local_ec;
  local_ec = &local_ec;
  local_e8 = &local_ec;
  FUN_000750d4(piVar1 + 2,auStack_e4);
  FUN_0007489c(auStack_e4);
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar1);
}



