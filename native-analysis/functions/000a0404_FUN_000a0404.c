/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0404 FUN_000a0404 */

/* WARNING: Removing unreachable block (ram,0x000a0444) */

void FUN_000a0404(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar1 = DAT_000a0474;
  iVar4 = DAT_000a0470 + 0xa0410;
  local_1c = **(int **)(iVar4 + DAT_000a0474);
  puVar2 = (undefined4 *)operator_new(0x2c);
  local_40[0] = 0;
  local_20 = 1;
  *puVar2 = local_48;
  *(undefined *)(puVar2 + 10) = 1;
  puVar2[2] = 0;
  puVar2[1] = local_44;
  local_20 = 1;
  local_40[0] = 0;
  FUN_0009fd54(local_40);
  piVar3 = *(int **)(iVar4 + iVar1);
  *puVar2 = puVar2;
  puVar2[1] = puVar2;
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar2);
}



