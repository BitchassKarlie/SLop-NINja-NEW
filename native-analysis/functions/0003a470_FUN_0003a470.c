/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003a470 FUN_0003a470 */

void FUN_0003a470(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar4 = DAT_0003a6dc;
  iVar11 = DAT_0003a6d8 + 0x3a47e;
  local_2c = **(int **)(iVar11 + DAT_0003a6dc);
  iVar7 = *(int *)(DAT_0003a6e0 + 0x3a4da) + 1;
  *(int *)(DAT_0003a6e0 + 0x3a4da) = iVar7;
  iVar5 = DAT_0003a6e8;
  if ((iVar7 == 6 || iVar7 == 3) || (8 < iVar7)) {
    iVar7 = *(int *)(iVar11 + DAT_0003a6e4);
    local_64 = *(undefined4 *)(DAT_0003a6e8 + 0x3a506);
    local_60 = *(undefined4 *)(DAT_0003a6e8 + 0x3a50a);
    local_5c = *(undefined4 *)(DAT_0003a6e8 + 0x3a50e);
    FUN_0001ae1c(*(undefined4 *)(iVar7 + 0x4c),&local_64,0x3e19999a,0x3f400000);
    uVar13 = *(undefined4 *)(iVar7 + 0x18c);
    local_58 = DAT_0003a6ec + 0x3a4f6;
    local_50[0] = 0;
    local_54 = *(undefined4 *)(iVar11 + DAT_0003a6f0);
    local_30 = 1;
    (**(code **)(DAT_0003a6ec + 0x3a4fe))(&local_58,local_50);
    FUN_00073a7c(uVar13,DAT_0003a6f4 + 0x3a514,0,local_50);
    FUN_0001d388(local_50);
    local_58 = DAT_0003a6f8 + 0x3a52c;
    uVar13 = FUN_0007e454();
    uVar6 = FUN_0008f414(DAT_0003a6fc + 0x3a532);
    iVar7 = FUN_0007da40(uVar13,uVar6,0);
    if (iVar7 != 0) {
      uVar13 = *(undefined4 *)(iVar5 + 0x3a50a);
      uVar6 = *(undefined4 *)(iVar5 + 0x3a50e);
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(iVar5 + 0x3a506);
      *(undefined4 *)(iVar7 + 0xc) = uVar13;
      *(undefined4 *)(iVar7 + 0x10) = uVar6;
    }
    uVar13 = FUN_0007e454();
    uVar6 = FUN_0008f414(DAT_0003a700 + 0x3a55a);
    iVar7 = FUN_0007da40(uVar13,uVar6,0);
    iVar5 = DAT_0003a704;
    if (iVar7 == 0) {
      iVar10 = *(int *)((int)&DAT_0003a6fc + DAT_0003a710);
    }
    else {
      puVar9 = *(uint **)(iVar11 + DAT_0003a704);
      uVar1 = (ulonglong)*puVar9 * (ulonglong)puVar9[2] +
              CONCAT44(puVar9[2] * puVar9[1] + *puVar9 * puVar9[3],puVar9[4]);
      uVar12 = puVar9[5] + (int)(uVar1 >> 0x20);
      *puVar9 = (uint)uVar1;
      puVar9[1] = uVar12;
      iVar10 = *(int *)(DAT_0003a708 + 0x3a616);
      fVar15 = ((float)(ulonglong)((uVar12 >> 0xd) - (uint)(uVar12 * 0x80000 < uVar12)) /
               DAT_0003a6b4) * DAT_0003a6bc - DAT_0003a6b8;
      fVar14 = DAT_0003a6d4;
      if ((iVar10 != 3) && (fVar14 = DAT_0003a6c0, iVar10 != 6)) {
        fVar14 = DAT_0003a6c4;
      }
      puVar8 = *(undefined4 **)(iVar11 + iVar5);
      lVar2 = (ulonglong)(uint)puVar8[2] * (uVar1 & 0xffffffff) +
              CONCAT44(puVar8[2] * uVar12 + (uint)uVar1 * puVar8[3],puVar8[4]);
      uVar12 = puVar8[5] + (int)((ulonglong)lVar2 >> 0x20);
      *puVar8 = (int)lVar2;
      puVar8[1] = uVar12;
      fVar3 = DAT_0003a6d4;
      fVar16 = DAT_0003a6cc +
               ((float)(ulonglong)((uVar12 >> 0xd) - (uint)(uVar12 * 0x80000 < uVar12)) /
               DAT_0003a6b4) * DAT_0003a6c8 + DAT_0003a6d0;
      *(float *)(iVar7 + 8) = fVar15 + fVar14;
      *(float *)(iVar7 + 0xc) = fVar16;
      *(float *)(iVar7 + 0x10) = fVar3;
    }
    if (8 < iVar10) {
      *(undefined4 *)((int)&DAT_0003a6cc + DAT_0003a70c) = 0;
    }
  }
  FUN_0002f6fc(*(undefined4 *)(param_1 + 0x3c),0,0,0);
  if (local_2c != **(int **)(iVar11 + iVar4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



