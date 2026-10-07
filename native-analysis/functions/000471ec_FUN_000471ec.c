/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000471ec FUN_000471ec */

void FUN_000471ec(int *param_1,undefined4 param_2,int param_3,float param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  
  iVar12 = DAT_000474b4 + 0x47206;
  if (*(char *)(DAT_000474b0 + 0x472a6) == '\0') {
    FUN_00046fe4();
  }
  iVar2 = DAT_000474b8;
  iVar7 = DAT_00047498;
  param_1[0x44] = 0;
  param_1[0x1c] = iVar7;
  param_1[0x45] = 0;
  param_1[0x49] = param_7;
  param_1[0x31] = 0;
  iVar7 = *(int *)(iVar12 + iVar2);
  param_1[0x4a] = param_8;
  iVar7 = *(int *)(iVar7 + 4);
  if (iVar7 == 2) {
    FUN_00017d64(param_1 + 0x1a,*(undefined4 *)((int)&DAT_00047498 + DAT_000474d0 + 2));
  }
  else if (iVar7 == 3) {
    FUN_00017d64(param_1 + 0x1a,*(undefined4 *)(DAT_000474cc + 0x47486));
  }
  else {
    FUN_00017d64(param_1 + 0x1a,*(undefined4 *)(DAT_000474bc + 0x4729e));
  }
  uVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  uVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar7 = DAT_00047498;
  param_1[0x1f] = (int)(float)(ulonglong)uVar3;
  param_1[0x20] = (int)(float)(ulonglong)uVar4;
  param_1[0x21] = iVar7;
  param_1[0x1e] = iVar7;
  iVar7 = DAT_000474c0;
  param_1[0x1d] = 0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_00017d64(iVar7 + 0x47328,0);
  iVar8 = 0;
  iVar7 = *(int *)(iVar12 + iVar2);
  param_1[0x47] = param_5;
  param_1[0x2a] = 0;
  param_1[0x25] = 0;
  *(undefined *)(param_1 + 0x46) = 0;
  *(undefined *)(param_1 + 0x22) = 0;
  param_1[0x30] = 0;
  param_1[0x48] = param_6;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  uVar4 = *(int *)(iVar7 + 4) - 2;
  uVar3 = uVar4;
  if (uVar4 < 2) {
    uVar3 = 0;
  }
  uVar6 = (undefined)uVar3;
  if (1 < uVar4) {
    uVar6 = 1;
  }
  *(undefined *)(param_1 + 0x4b) = uVar6;
  param_1[0x4c] = *(int *)(iVar7 + 0x10);
  iVar9 = DAT_00047580;
  if (param_5 < 1) {
    param_1[0x47] = 1;
    param_1[0x44] = -1;
    piVar10 = *(int **)(iVar12 + iVar9);
    param_1[0x45] = 0;
    if (1 < *piVar10) {
      do {
        uVar15 = *(undefined4 *)(iVar7 + 0x50);
        uVar5 = FUN_000215e0(iVar8);
        iVar13 = FUN_0006fbdc(uVar15,uVar5);
        iVar14 = param_1[0x45];
        piVar10 = *(int **)(iVar12 + iVar9);
        if (iVar14 < iVar13) {
          param_1[0x45] = iVar13;
        }
        if (iVar14 < iVar13) {
          param_1[0x44] = iVar8;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *piVar10 + -1);
    }
    iVar7 = FUN_0002f60c(0);
    iVar8 = FUN_0002f508();
    if (iVar8 / 2 < iVar7) {
      puVar11 = *(uint **)(iVar12 + DAT_00047584);
      lVar1 = (ulonglong)*puVar11 * (ulonglong)puVar11[2] +
              CONCAT44(puVar11[2] * puVar11[1] + *puVar11 * puVar11[3],puVar11[4]);
      uVar3 = puVar11[5] + (int)((ulonglong)lVar1 >> 0x20);
      *puVar11 = (uint)lVar1;
      puVar11[1] = uVar3;
      param_1[0x47] = CARRY4(uVar3,uVar3) + 2;
    }
    param_6 = param_1[0x48];
  }
  if (param_6 < 1) {
    puVar11 = *(uint **)(iVar12 + DAT_000474d4);
    lVar1 = (ulonglong)*puVar11 * (ulonglong)puVar11[2] +
            CONCAT44(puVar11[2] * puVar11[1] + *puVar11 * puVar11[3],puVar11[4]);
    uVar3 = puVar11[5] + (int)((ulonglong)lVar1 >> 0x20);
    *puVar11 = (uint)lVar1;
    puVar11[1] = uVar3;
    param_1[0x48] = (uint)CARRY4(uVar3,uVar3) + (uint)CARRY4(uVar3 * 2,uVar3) + 1;
  }
  iVar8 = DAT_0004749c;
  iVar7 = DAT_00047498;
  iVar14 = *(int *)(iVar12 + iVar2);
  iVar13 = 0;
  param_1[2] = DAT_00047498;
  param_1[3] = iVar7;
  param_1[4] = iVar7;
  iVar9 = DAT_000474a0;
  param_1[0x2b] = iVar8;
  param_1[0x2c] = iVar9;
  param_1[0x2d] = iVar7;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined *)(param_1 + 0x32) = 0;
  *(undefined *)((int)param_1 + 0xc9) = 0;
  param_1[0x43] = 0;
  FUN_0008f060((int)param_1 + 0xca,0x40,DAT_000474c4 + 0x47376);
  iVar7 = DAT_000474c8;
  if (-1 < param_3 && param_4 < 0.0 == NAN(param_4)) {
    param_1[0x44] = -1;
    param_1[0x45] = 0;
    if (1 < **(int **)(iVar12 + iVar7)) {
      do {
        uVar15 = *(undefined4 *)(iVar14 + 0x50);
        uVar5 = FUN_000215e0(iVar13);
        iVar8 = FUN_0006fbdc(uVar15,uVar5);
        iVar9 = param_1[0x45];
        piVar10 = *(int **)(iVar12 + iVar7);
        if (iVar9 < iVar8) {
          param_1[0x45] = iVar8;
        }
        if (iVar9 < iVar8) {
          param_1[0x44] = iVar13;
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < *piVar10 + -1);
    }
    if (5 < param_3) {
      fVar16 = *(float *)(*(int *)(iVar12 + iVar2) + 0x10);
      if (fVar16 != DAT_000474a4 && fVar16 < DAT_000474a4 == (NAN(fVar16) || NAN(DAT_000474a4))) {
        *(undefined4 *)(*(int *)(iVar12 + iVar2) + 0x10) = DAT_000474a8;
        param_1[0x1d] = 6;
        *(undefined *)(param_1 + 0x46) = 1;
        param_1[0x4c] = DAT_000474ac;
        (**(code **)(*param_1 + 0x20))(param_1,0);
      }
    }
    param_1[0x1e] = (int)param_4;
    param_1[0x1d] = param_3;
  }
  return;
}



