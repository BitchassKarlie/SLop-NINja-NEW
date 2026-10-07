/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004c64c FUN_0004c64c */

void FUN_0004c64c(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined auStack_13c [28];
  int local_120 [7];
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined local_cc;
  undefined local_cb;
  undefined local_ca;
  undefined local_c9;
  undefined local_c8;
  undefined local_c7;
  undefined local_c6;
  undefined local_c5;
  undefined auStack_c4 [128];
  int local_44;
  
  iVar4 = DAT_0004c864;
  fVar1 = DAT_0004c848;
  iVar10 = DAT_0004c860 + 0x4c65e;
  local_44 = **(int **)(iVar10 + DAT_0004c864);
  iVar8 = *(int *)(param_1 + 0x54);
  if (iVar8 != 0) {
    pfVar6 = *(float **)(param_1 + 0x10);
    fVar14 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0x1c);
    if (pfVar6 != (float *)0x0) {
      fVar9 = *pfVar6;
      fVar15 = pfVar6[3];
      pfVar6 = &local_104;
      fVar7 = (float)(**(code **)((int)fVar9 + 0x3c))();
      fVar9 = DAT_0004c84c;
      local_100 = fVar15 + fVar7 * fVar1;
      fVar15 = (float)(*(int **)(param_1 + 0x10))[3];
      fVar7 = (float)(**(code **)(**(int **)(param_1 + 0x10) + 0x3c))();
      local_f8 = fVar15 + fVar7 * fVar9;
      fVar15 = (float)(*(int **)(param_1 + 0x10))[2];
      fVar7 = (float)(**(code **)(**(int **)(param_1 + 0x10) + 0x40))();
      local_104 = fVar15 + fVar7 * fVar9;
      fVar7 = (float)(*(int **)(param_1 + 0x10))[2];
      fVar9 = (float)(**(code **)(**(int **)(param_1 + 0x10) + 0x40))();
      iVar8 = *(int *)(param_1 + 0x54);
      local_fc = fVar7 + fVar9 * fVar1;
    }
    iVar5 = DAT_0004c86c;
    uVar3 = DAT_0004c858;
    uVar2 = DAT_0004c854;
    fVar1 = DAT_0004c850;
    iVar12 = *(int *)(iVar10 + DAT_0004c868);
    puVar11 = (undefined4 *)(DAT_0004c86c + 0x4c70a);
    uVar13 = *(undefined4 *)(iVar12 + 0x58);
    FUN_00036320(local_120,iVar8);
    local_c8 = *(undefined *)(param_1 + 0x14);
    local_e0 = *(float *)(param_1 + 0x20) + fVar1;
    local_c7 = *(undefined *)(param_1 + 0x15);
    local_c6 = *(undefined *)(param_1 + 0x16);
    local_e4 = fVar14 + *(float *)(param_1 + 0x1c);
    local_c5 = *(undefined *)(param_1 + 0x17);
    local_d4 = *puVar11;
    local_d0 = *(undefined4 *)(iVar5 + 0x4c70e);
    local_e8 = local_104 + *(float *)(param_1 + 0x18);
    FUN_000909a4(uVar13,local_120,&local_e8,&local_c8,uVar2,&local_d4,0xd,uVar3,pfVar6);
    local_120[0] = *(int *)(iVar10 + DAT_0004c870) + 8;
    FUN_0008f060(auStack_c4,0x80,DAT_0004c874 + 0x4c792,*(undefined4 *)(param_1 + 0x58));
    uVar13 = *(undefined4 *)(iVar12 + 0x58);
    FUN_00036320(auStack_13c,auStack_c4);
    fVar9 = local_fc;
    fVar7 = (float)(**(code **)(**(int **)(param_1 + 0x10) + 0x40))();
    local_cc = *(undefined *)(param_1 + 0x14);
    local_cb = *(undefined *)(param_1 + 0x15);
    local_ca = *(undefined *)(param_1 + 0x16);
    local_c9 = *(undefined *)(param_1 + 0x17);
    local_f0 = fVar14 + *(float *)(param_1 + 0x1c);
    local_ec = *(float *)(param_1 + 0x20) + fVar1;
    local_f4 = fVar9 + fVar7 * DAT_0004c85c + *(float *)(param_1 + 0x18);
    local_dc = *puVar11;
    local_d8 = *(undefined4 *)(iVar5 + 0x4c70e);
    FUN_000909a4(uVar13,auStack_13c,&local_f4,&local_cc,uVar2,&local_dc,0xe,uVar3,pfVar6);
  }
  if (local_44 == **(int **)(iVar10 + iVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



