/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b570 FUN_0007b570 */

void FUN_0007b570(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 ***local_84;
  undefined4 ***local_80;
  undefined auStack_7c [96];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0007b5c8 + 0x7b57a + DAT_0007b5cc);
  local_1c = *piVar2;
  piVar1 = (int *)operator_new(0x68);
  FUN_0007b468(auStack_7c,param_2);
  *piVar1 = (int)&local_84;
  piVar1[1] = (int)&local_84;
  local_84 = &local_84;
  local_80 = &local_84;
  FUN_0007b468(piVar1 + 2,auStack_7c);
  FUN_00082438(auStack_7c);
  if (local_1c == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar1);
}



