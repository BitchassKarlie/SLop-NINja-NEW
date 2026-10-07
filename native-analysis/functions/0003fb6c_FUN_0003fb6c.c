/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003fb6c FUN_0003fb6c */

void FUN_0003fb6c(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *__src;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 local_bc;
  undefined local_b8;
  undefined local_b7;
  undefined local_b6;
  undefined local_b5;
  undefined4 local_b4;
  int local_b0;
  undefined auStack_ac [128];
  int local_2c;
  
  iVar5 = DAT_0003fe2c;
  iVar2 = DAT_0003fe28;
  iVar11 = DAT_0003fe24 + 0x3fb82;
  local_2c = **(int **)(iVar11 + DAT_0003fe28);
  param_1[0x32] = DAT_0003fe08;
  FUN_00017d64(param_1 + 0x34,0);
  iVar12 = param_1[0x36];
  param_1[0x36] = 0;
  iVar9 = *(int *)(*(int *)(iVar11 + iVar5) + 4);
  if (iVar9 == 2) {
    puVar10 = (undefined4 *)((int)&DAT_0003fe24 + DAT_0003fe40 + 2);
  }
  else if (iVar9 == 3) {
    puVar10 = (undefined4 *)((int)&DAT_0003fe14 + DAT_0003fe44 + 2);
  }
  else {
    puVar10 = (undefined4 *)(DAT_0003fe30 + 0x3fbce);
  }
  FUN_00017d64(param_1 + 0x1a,*puVar10);
  iVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  iVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar9 = DAT_0003fe0c;
  param_1[5] = (int)(float)(ulonglong)(iVar3 + 1);
  param_1[6] = (int)(float)(ulonglong)(iVar4 + 1);
  param_1[7] = iVar9;
  fVar1 = DAT_0003fe10;
  if (*(int *)(*(int *)(iVar11 + iVar5) + 4) == 0) {
    param_1[5] = (int)((float)param_1[5] * DAT_0003fe10);
    param_1[6] = (int)((float)param_1[6] * fVar1);
    param_1[7] = (int)((float)param_1[7] * fVar1);
  }
  param_1[0x35] = -1;
  if (*(int *)(*(int *)(iVar11 + iVar5) + 4) == 3) {
    iVar3 = *(int *)(*(int *)(*(int *)(iVar11 + iVar5) + 0x50) + 0x1b0);
    iVar9 = iVar3;
    if (iVar3 < 3) {
      iVar9 = 0;
    }
    uVar8 = (undefined)iVar9;
    if (2 < iVar3) {
      uVar8 = 1;
    }
  }
  else {
    uVar8 = 0;
  }
  *(undefined *)(param_1 + 0x25) = uVar8;
  iVar3 = DAT_0003fe18;
  iVar9 = DAT_0003fe0c;
  param_1[0x21] = DAT_0003fe14;
  param_1[0x22] = iVar3;
  param_1[0x23] = iVar9;
  if ((*(char *)(param_1 + 0x25) == '\0') &&
     ((*(int *)(*(int *)(iVar11 + iVar5) + 4) != 2 ||
      (*(int *)(*(int *)(*(int *)(iVar11 + iVar5) + 0x50) + 0x1b0) < 3)))) {
    __src = (char *)FUN_00083098(0xa1,0);
    strcpy((char *)(DAT_0003fe34 + 0x3fcdc),__src);
  }
  else {
    uVar6 = FUN_00083098(0x88,0);
    iVar9 = *(int *)(iVar11 + iVar5);
    FUN_0008f060(DAT_0003fe3c + 0x3fda6,0x80,uVar6,*(undefined4 *)(*(int *)(iVar9 + 0x50) + 0x1b0));
    iVar5 = *(int *)(*(int *)(iVar9 + 0x50) + 0x1b0);
    param_1[0x31] = iVar5;
    if (0 < iVar5) {
      iVar3 = 0;
      piVar7 = param_1;
      do {
        iVar4 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        piVar7[0x26] = *(int *)(*(int *)(iVar9 + 0x50) + iVar4 + 0x1b4);
        piVar7 = piVar7 + 1;
      } while (iVar3 < iVar5);
    }
    local_b0 = 0;
    iVar5 = FUN_00076120(param_1 + 0x26,param_1[0x31],&local_b0);
    param_1[0x35] = iVar5;
    FUN_000767b0(&local_b4,iVar5);
    FUN_00017d64(param_1 + 0x34,local_b4);
    FUN_00017d90(&local_b4);
    iVar9 = DAT_0003fe20;
    iVar5 = DAT_0003fe1c;
    if (param_1[0x1e] != local_b0) {
      param_1[0x1e] = local_b0;
    }
    iVar3 = DAT_0003fe0c;
    param_1[0x21] = iVar5;
    param_1[0x22] = iVar9;
    param_1[0x23] = iVar3;
  }
  iVar5 = FUN_0002285c(param_1 + 0x1e,param_1 + 0x1f,param_1[0x1e],param_1[0x1f]);
  param_1[0x1d] = iVar5;
  FUN_00021654(&local_b8,param_1[0x1e]);
  *(undefined *)((int)param_1 + 0x93) = local_b5;
  *(undefined *)((int)param_1 + 0x92) = local_b6;
  *(undefined *)((int)param_1 + 0x91) = local_b7;
  *(undefined *)(param_1 + 0x24) = local_b8;
  uVar6 = FUN_000215f8(param_1[0x1e]);
  FUN_0008f060(auStack_ac,0x80,DAT_0003fe38 + 0x3fce2,uVar6);
  FUN_0002fa48(&local_bc,auStack_ac);
  FUN_00017d64(param_1 + 0x20,local_bc);
  FUN_00017d90(&local_bc);
  param_1[10] = 3;
  *(undefined *)(param_1 + 0x33) = 0;
  iVar5 = DAT_0003fe0c;
  param_1[0x39] = 0;
  param_1[0x3a] = iVar5;
  param_1[0x36] = iVar12;
  (**(code **)(*param_1 + 0x10))(param_1);
  if (local_2c != **(int **)(iVar11 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



