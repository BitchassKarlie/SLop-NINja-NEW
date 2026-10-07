/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1974 FUN_000a1974 */

void FUN_000a1974(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_d4;
  undefined auStack_d0 [172];
  int local_24;
  
  iVar1 = DAT_000a1a04;
  iVar2 = DAT_000a1a00 + 0xa1982;
  local_24 = **(int **)(iVar2 + DAT_000a1a04);
  FUN_000abca4(param_1,&local_d4,4);
  if ((uint)((*(int *)(param_2 + 0xc) - *(int *)(param_2 + 4) >> 2) * 0x2fa0be83) < local_d4) {
    FUN_000a0d04(param_2,local_d4);
  }
  if (local_d4 != 0) {
    uVar3 = 0;
    do {
      FUN_000a0bf4(auStack_d0,param_1);
      uVar3 = uVar3 + 1;
      FUN_000a18f4(param_2,auStack_d0);
      FUN_0009e858(auStack_d0);
    } while (uVar3 != local_d4);
  }
  if (local_24 == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



