/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003a000 FUN_0003a000 */

void FUN_0003a000(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined *local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_c4 [8];
  undefined local_a4;
  undefined4 local_a0 [8];
  undefined local_80;
  undefined4 local_7c [8];
  undefined local_5c;
  undefined4 local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar3 = DAT_0003a458;
  iVar2 = DAT_0003a348;
  iVar1 = DAT_0003a344;
  uVar4 = DAT_0003a334;
  iVar7 = DAT_0003a340 + 0x3a014;
  local_34 = **(int **)(iVar7 + DAT_0003a344);
  iVar9 = *(int *)(param_1 + 0x74);
  if (iVar9 < 6) {
    local_dc = (undefined *)(DAT_0003a45c + 0x3a3a6);
    local_104 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0x9c)
                + *(float *)(DAT_0003a458 + 0x3a3aa);
    local_100 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xa0)
                + *(float *)(DAT_0003a458 + 0x3a3ae);
    local_a0[0] = 0;
    local_d8 = DAT_0003a460 + 0x3a3ea;
    local_80 = 1;
    local_108 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0x98) +
                *(float *)(DAT_0003a458 + 0x3a3a6);
    (**(code **)(DAT_0003a45c + 0x3a3ae))(&local_dc,local_a0);
    FUN_00020034(iVar9,6,&local_108,0,0xff3a,iVar3 + 0x3a3de,DAT_0003a450,DAT_0003a454,
                 DAT_0003a464 + 0x3a41e,DAT_0003a468 + 0x3a42e,local_a0,0);
    FUN_0001f694(local_a0);
    local_dc = &UNK_0003a44e + DAT_0003a46c;
  }
  else {
    iVar11 = DAT_0003a34c + 0x3a056;
    pcVar6 = *(code **)(DAT_0003a34c + 0x3a05e);
    iVar8 = DAT_0003a350 + 0x3a062;
    iVar10 = DAT_0003a354 + 0x3a074;
    local_ec = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0x9c) +
               *(float *)(DAT_0003a348 + 0x3a058);
    local_e8 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xa0)
               + *(float *)(DAT_0003a348 + 0x3a05c);
    local_38 = 1;
    local_58[0] = 0;
    local_f0 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0x98) +
               *(float *)(DAT_0003a348 + 0x3a054);
    local_cc = iVar11;
    local_c8 = iVar8;
    (*pcVar6)(&local_cc,local_58);
    FUN_00020034(6,6,&local_f0,0,0xff3a,iVar2 + 0x3a08c,uVar4,DAT_0003a338,iVar10,
                 DAT_0003a358 + 0x3a0e2,local_58,0);
    iVar3 = DAT_0003a35c;
    FUN_0001f694(local_58);
    iVar9 = *(int *)(param_1 + 0x74);
    local_f8 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0x9c) +
               *(float *)(iVar2 + 0x3a058);
    local_f4 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xa0)
               + *(float *)(iVar2 + 0x3a05c);
    local_5c = 1;
    local_7c[0] = 0;
    local_fc = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0x98) +
               *(float *)(iVar2 + 0x3a054);
    local_d4 = iVar11;
    local_d0 = iVar8;
    local_cc = iVar3 + 0x3a11a;
    (*pcVar6)(&local_d4,local_7c);
    FUN_00020034(iVar9 + -6,6,&local_fc,0,0xff3a,iVar2 + 0x3a08c,uVar4,DAT_0003a33c,iVar10,0,
                 local_7c,0);
    FUN_0001f694(local_7c);
    local_d4 = iVar3 + 0x3a11a;
  }
  iVar3 = DAT_0003a364;
  iVar2 = DAT_0003a360;
  *(undefined4 *)(DAT_0003a360 + 0x3a230) = 3;
  local_110 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0x9c) +
              *(float *)(iVar2 + 0x3a1f0);
  local_10c = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0xbc) + *(float *)(param_1 + 0xa0) +
              *(float *)(iVar2 + 0x3a1f4);
  local_114 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0x98) +
              *(float *)(iVar2 + 0x3a1ec);
  FUN_0001ae1c(*(undefined4 *)(*(int *)(iVar7 + iVar3) + 0x4c),&local_114,0x3e99999a,0x3f800000);
  uVar4 = FUN_0007e454();
  uVar5 = FUN_0008f414(DAT_0003a368 + 0x3a25e);
  iVar9 = FUN_0007da40(uVar4,uVar5,0);
  if (iVar9 != 0) {
    fVar16 = *(float *)(param_1 + 0xb8);
    fVar15 = *(float *)(param_1 + 0xc);
    fVar17 = *(float *)(param_1 + 0x9c);
    fVar12 = *(float *)(param_1 + 0x10);
    fVar18 = *(float *)(iVar2 + 0x3a1f0);
    fVar19 = *(float *)(param_1 + 0xbc);
    fVar13 = *(float *)(param_1 + 0xa0);
    fVar14 = *(float *)(iVar2 + 0x3a1f4);
    *(float *)(iVar9 + 8) =
         *(float *)(param_1 + 8) + *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0x98) +
         *(float *)(iVar2 + 0x3a1ec);
    *(float *)(iVar9 + 0xc) = fVar15 + fVar16 + fVar17 + fVar18;
    *(float *)(iVar9 + 0x10) = fVar12 + fVar19 + fVar13 + fVar14;
  }
  FUN_0002f60c(0);
  uVar4 = *(undefined4 *)(*(int *)(iVar7 + iVar3) + 0x18c);
  local_e4 = DAT_0003a36c + 0x3a2f8;
  local_e0 = *(undefined4 *)(iVar7 + DAT_0003a370);
  local_a4 = 1;
  local_c4[0] = 0;
  (**(code **)(DAT_0003a36c + 0x3a300))(&local_e4,local_c4);
  FUN_00073a7c(uVar4,DAT_0003a374 + 0x3a312,0,local_c4);
  FUN_0001d388(local_c4);
  if (local_34 == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



