/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000460d4 FUN_000460d4 */

void FUN_000460d4(int param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  float fVar12;
  int local_138;
  int local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  undefined auStack_118 [128];
  undefined auStack_98 [36];
  undefined auStack_74 [36];
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar8 = DAT_000463e8;
  iVar2 = DAT_000463e4;
  iVar10 = DAT_000463e0 + 0x460e2;
  local_2c = **(int **)(iVar10 + DAT_000463e4);
  uVar7 = *(uint *)(param_1 + 0x74);
  uVar5 = 1 - uVar7;
  if (1 < uVar7) {
    uVar5 = 0;
  }
  if (uVar7 == 6) {
    uVar5 = uVar5 | 1;
  }
  if ((uVar5 == 0) ||
     (fVar12 = *(float *)(*(int *)(iVar10 + DAT_000463e8) + 0x10),
     fVar12 == DAT_000463dc || fVar12 < DAT_000463dc != (NAN(fVar12) || NAN(DAT_000463dc))))
  goto LAB_00046118;
  FUN_000a3a68();
  iVar3 = FUN_000a5274();
  if (iVar3 == 0) {
LAB_000462ce:
    uVar4 = FUN_000a3a68();
    FUN_000a44e0(uVar4,4);
  }
  else {
    if (*(char *)(param_1 + 200) != '\0') goto LAB_00046118;
    FUN_000a3a68();
    iVar3 = FUN_000a3748();
    if (iVar3 == 0) {
      FUN_000a3a68();
      FUN_00094b68();
      uVar4 = FUN_000a3a68();
      uVar11 = FUN_00083098(0x2c3,0);
      local_128 = DAT_00046424 + 0x46308;
      local_124 = *(undefined4 *)(iVar10 + DAT_00046414);
      FUN_0003c0b0(auStack_98,&local_128);
      FUN_000951d0(uVar4,0,uVar11,auStack_98);
      FUN_0001d358(auStack_98);
      local_128 = DAT_00046428 + 0x46332;
      uVar4 = FUN_000a3a68();
      FUN_000a3724(uVar4,DAT_0004642c + 0x4633e,DAT_00046430 + 0x46342,0x3e800000,0);
      uVar4 = FUN_000a3a68();
      FUN_000a44e0(uVar4,4);
      goto LAB_00046118;
    }
    FUN_000a3a68();
    iVar3 = FUN_000a374c();
    if (iVar3 == 0) {
      FUN_000a3a68();
      iVar3 = FUN_000a3750();
      if (iVar3 != 0) {
        FUN_000a3a68();
        FUN_00094b68();
        uVar4 = FUN_000a3a68();
        uVar11 = FUN_00083098(0x2c3,0);
        local_120 = DAT_00046410 + 0x46296;
        local_11c = *(undefined4 *)(iVar10 + DAT_00046414);
        FUN_0003c0b0(auStack_74,&local_120);
        FUN_000951d0(uVar4,0,uVar11,auStack_74);
        FUN_0001d358(auStack_74);
        local_120 = DAT_00046418 + 0x462be;
        uVar4 = FUN_000a3a68();
        FUN_000a3724(uVar4,DAT_0004641c + 0x462c8,DAT_00046420 + 0x462cc,0x3e800000,0);
        goto LAB_000462ce;
      }
    }
    uVar4 = FUN_0002f60c(0);
    iVar8 = *(int *)(*(int *)(iVar10 + iVar8) + 4);
    if (iVar8 - 2U < 2) {
      if (iVar8 == 2) {
        iVar8 = DAT_00046490 + 0x46474;
      }
      else {
        iVar8 = DAT_00046434 + 0x4635c;
      }
      iVar3 = *(int *)(param_1 + 0xb8);
      if ((iVar3 == 0) || (*(int *)(iVar3 + 0xc4) < 3)) {
        FUN_0008f060(auStack_118,0x80,DAT_0004648c + 0x46466,uVar4,iVar8);
      }
      else {
        if (*(int *)(iVar3 + 0xd4) - 6U < 0xd) {
          iVar3 = FUN_00021680(*(undefined4 *)(iVar3 + 0x98));
          iVar3 = iVar3 + 0x40;
        }
        else {
          iVar3 = DAT_00046438 + 0x4637c;
        }
        puVar9 = *(uint **)(iVar10 + DAT_000463f4);
        iVar6 = DAT_0004643c + 0x4639a;
        lVar1 = (ulonglong)*puVar9 * (ulonglong)puVar9[2] +
                CONCAT44(puVar9[2] * puVar9[1] + *puVar9 * puVar9[3],puVar9[4]);
        uVar5 = puVar9[5] + (int)((ulonglong)lVar1 >> 0x20);
        *puVar9 = (uint)lVar1;
        puVar9[1] = uVar5;
        FUN_0008f060(auStack_118,0x80,iVar6,uVar4,iVar8,
                     *(undefined4 *)
                      (DAT_00046440 + 0x463bc + (int)((ulonglong)uVar5 * 6 >> 0x20) * 4),
                     *(undefined4 *)(*(int *)(param_1 + 0xb8) + 0xc4),iVar3);
      }
    }
    else if (*(int *)(param_1 + 0x114) < 2) {
      FUN_0008f060(auStack_118,0x80,DAT_00046488 + 0x46452,uVar4);
    }
    else {
      iVar8 = FUN_00021680(*(undefined4 *)(param_1 + 0x110));
      iVar3 = DAT_000463ec + 0x46194;
      FUN_0008f060(iVar3,0x40,DAT_000463f0 + 0x46194,iVar8 + 0x80);
      uVar11 = *(undefined4 *)(param_1 + 0x114);
      puVar9 = *(uint **)(iVar10 + DAT_000463f4);
      iVar8 = DAT_000463f8 + 0x461c0;
      lVar1 = (ulonglong)*puVar9 * (ulonglong)puVar9[2] +
              CONCAT44(puVar9[2] * puVar9[1] + *puVar9 * puVar9[3],puVar9[4]);
      uVar5 = puVar9[5] + (int)((ulonglong)lVar1 >> 0x20);
      *puVar9 = (uint)lVar1;
      puVar9[1] = uVar5;
      FUN_0008f060(auStack_118,0x80,iVar8,uVar4,uVar11,
                   *(undefined4 *)(DAT_000463fc + 0x461e6 + (int)((ulonglong)uVar5 * 6 >> 0x20) * 4)
                   ,iVar3);
    }
    uVar4 = FUN_000a3a68();
    local_138 = DAT_00046400 + 0x4620e;
    local_50[0] = 0;
    local_130 = DAT_00046404 + 0x4621e;
    local_12c = 0;
    local_30 = 1;
    local_134 = param_1;
    (**(code **)(DAT_00046400 + 0x46216))(&local_138,local_50);
    FUN_000a3744(uVar4,auStack_118,DAT_00046408 + 0x46244,local_50,0);
    FUN_00045eb0(local_50);
    local_138 = DAT_0004640c + 0x4625e;
    *(undefined *)(param_1 + 0xc9) = 1;
  }
LAB_00046118:
  if (local_2c == **(int **)(iVar10 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



