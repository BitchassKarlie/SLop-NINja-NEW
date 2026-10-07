/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003d2a4 FUN_0003d2a4 */

void FUN_0003d2a4(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined auStack_dc [200];
  int local_14;
  
  piVar2 = *(int **)(DAT_0003d2f4 + 0x3d2ae + DAT_0003d2f8);
  local_14 = *piVar2;
  puVar1 = (undefined4 *)operator_new(0xd0);
  FUN_0003d160(auStack_dc);
  *puVar1 = local_e4;
  puVar1[1] = local_e0;
  FUN_0003c764(puVar1 + 2,auStack_dc);
  FUN_00038540(auStack_dc);
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar1);
}



