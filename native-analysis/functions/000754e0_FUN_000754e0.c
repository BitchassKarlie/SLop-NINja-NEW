/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000754e0 FUN_000754e0 */

void FUN_000754e0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined auStack_dc [200];
  int local_14;
  
  piVar2 = *(int **)(DAT_00075530 + 0x754ea + DAT_00075534);
  local_14 = *piVar2;
  puVar1 = (undefined4 *)operator_new(0xd0);
  FUN_0007481c(auStack_dc);
  *puVar1 = local_e4;
  puVar1[1] = local_e0;
  FUN_000750d4(puVar1 + 2,auStack_dc);
  FUN_0007489c(auStack_dc);
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar1);
}



