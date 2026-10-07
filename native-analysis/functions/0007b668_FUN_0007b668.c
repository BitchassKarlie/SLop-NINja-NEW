/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007b668 FUN_0007b668 */

void FUN_0007b668(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 local_7c;
  undefined4 local_78;
  undefined auStack_74 [96];
  int local_14;
  
  piVar2 = *(int **)(DAT_0007b6b8 + 0x7b672 + DAT_0007b6bc);
  local_14 = *piVar2;
  puVar1 = (undefined4 *)operator_new(0x68);
  FUN_00080ea8(auStack_74);
  *puVar1 = local_7c;
  puVar1[1] = local_78;
  FUN_0007b468(puVar1 + 2,auStack_74);
  FUN_00082438(auStack_74);
  *puVar1 = puVar1;
  puVar1[1] = puVar1;
  if (local_14 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar1);
}



