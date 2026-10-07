/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003dcfc FUN_0003dcfc */

void FUN_0003dcfc(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined auStack_64 [28];
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined auStack_44 [32];
  int local_24;
  
  iVar2 = DAT_0003dda0 + 0x3dd0a;
  piVar3 = *(int **)(iVar2 + DAT_0003dda4);
  local_24 = *piVar3;
  FUN_0008f060(auStack_44,0x20,DAT_0003dda8 + 0x3dd14,
               (int)*(short *)(*(int *)(iVar2 + DAT_0003ddac) + 6));
  uVar4 = *(undefined4 *)(*(int *)(iVar2 + DAT_0003ddb0) + 0x5c);
  FUN_00036320(auStack_64,auStack_44);
  puVar1 = *(undefined **)(iVar2 + DAT_0003ddb4);
  local_48 = *puVar1;
  local_47 = puVar1[1];
  local_46 = puVar1[2];
  local_45 = puVar1[3];
  FUN_00091528(uVar4,auStack_64,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               DAT_0003dd98,&local_48,DAT_0003dd9c,DAT_0003dd98,DAT_0003dd98,1,0);
  if (local_24 == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



