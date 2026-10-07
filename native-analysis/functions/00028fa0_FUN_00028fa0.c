/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00028fa0 FUN_00028fa0 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00028fa0(int param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  byte *pbVar13;
  undefined *puVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_2fc;
  float local_2cc [103];
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  
  uVar10 = DAT_000297d8;
  uVar6 = DAT_000290e4;
  iVar9 = DAT_000290e8 + 0x28fbc;
  if ((param_2 == 0.0) &&
     (fVar26 = *(float *)(*(int *)(iVar9 + DAT_000290ec) + 0x14),
     fVar26 != 0.0 && fVar26 < 0.0 == NAN(fVar26))) {
    if (*(char *)(param_1 + 0x4c) != '\0') {
      puVar14 = *(undefined **)(iVar9 + DAT_000290f0);
      local_44 = *puVar14;
      local_43 = puVar14[1];
      local_42 = puVar14[2];
      local_41 = puVar14[3];
      if (0 < *(int *)(param_1 + 0x58)) {
        iVar9 = 0;
        iVar18 = 0;
        do {
          iVar19 = *(int *)(param_1 + 0x5c);
          uVar6 = FUN_0009e880(&local_44);
          iVar18 = iVar18 + 1;
          iVar19 = iVar19 + iVar9;
          iVar9 = iVar9 + 0x24;
          *(undefined4 *)(iVar19 + 0x18) = uVar6;
        } while (iVar18 < *(int *)(param_1 + 0x58));
      }
      iVar9 = 0;
      do {
        uVar6 = FUN_0009e880(&local_44);
        iVar18 = param_1 + iVar9;
        iVar9 = iVar9 + 0x24;
        *(undefined4 *)(iVar18 + 0x78) = uVar6;
      } while (iVar9 != 0xd8);
    }
    *(undefined4 *)(param_1 + 0x150) = DAT_000290e4;
    return;
  }
  iVar18 = *(int *)(param_1 + 0x58);
  if ((((iVar18 < 4) || (*(char *)(param_1 + 0x200) == '\0')) ||
      (iVar19 = *(int *)(param_1 + 0x1f8), iVar19 == -1)) || (*(int *)(param_1 + 0x1fc) == -1)) {
    *(undefined4 *)(param_1 + 0x1fc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x150) = uVar6;
    *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  }
  else {
    pfVar11 = (float *)(*(int *)(param_1 + 0x5c) + (iVar19 + -1) * 0x24);
    pfVar12 = (float *)(*(int *)(param_1 + 0x5c) + iVar19 * 0x24);
    local_70 = *pfVar11 + *pfVar12;
    local_48 = DAT_000297d8;
    local_6c = pfVar11[1] + pfVar12[1];
    local_68 = pfVar11[2] + pfVar12[2];
    FUN_00019f04(&local_64,&local_70,&local_48);
    pfVar11 = (float *)(*(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x1fc) + -1) * 0x24);
    pfVar12 = (float *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x1fc) * 0x24);
    local_84 = pfVar11[1] + pfVar12[1];
    local_4c = uVar10;
    local_80 = pfVar11[2] + pfVar12[2];
    local_88 = *pfVar11 + *pfVar12;
    FUN_00019f04(&local_7c,&local_88,&local_4c);
    local_90 = (local_60 + local_78) * DAT_000297e0;
    local_8c = (local_5c + local_74) * DAT_000297e0;
    local_94 = (local_64 + local_7c) * DAT_000297e0;
    iVar18 = *(int *)(param_1 + 0x38);
    *(float *)(iVar18 + 4) = local_94;
    *(float *)(iVar18 + 8) = local_90;
    *(float *)(iVar18 + 0xc) = local_8c;
    iVar18 = *(int *)(param_1 + 0x38);
    *(float *)(iVar18 + 0x14) = local_7c;
    *(float *)(iVar18 + 0x18) = local_78;
    *(float *)(iVar18 + 0x1c) = local_74;
    iVar18 = *(int *)(param_1 + 0x58);
    *(float *)(param_1 + 0x150) =
         (local_90 - local_78) * (local_90 - local_78) +
         (local_94 - local_7c) * (local_94 - local_7c);
    local_64 = local_94;
    local_60 = local_90;
    local_5c = local_8c;
  }
  if (iVar18 < 4) {
    uVar6 = *(undefined4 *)(DAT_000290f4 + 0x29076);
    uVar10 = *(undefined4 *)(DAT_000290f4 + 0x2907a);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(DAT_000290f4 + 0x29072);
    *(undefined4 *)(param_1 + 0x13c) = uVar6;
    *(undefined4 *)(param_1 + 0x140) = uVar10;
  }
  if (*(int *)(DAT_000290f8 + 0x290c4) == 0) {
    *(float *)(DAT_000290f8 + 0x290c0) = DAT_00029118;
  }
  iVar5 = DAT_00029108;
  iVar4 = DAT_00029104;
  iVar3 = DAT_00029100;
  iVar19 = DAT_000290fc;
  iVar18 = DAT_000290ec;
  if (*(char *)(param_1 + 0x200) == '\0') {
    iVar15 = *(int *)(param_1 + 0x58);
    if (iVar15 < 1) {
      local_2fc = 0;
      goto LAB_0002966c;
    }
  }
  else if (*(int *)(param_1 + 0x58) < 3) {
    return;
  }
  local_2cc[0] = DAT_00029118;
  iVar17 = 0;
  iVar20 = 0;
  iVar22 = 0;
  local_2fc = 0;
  do {
    pfVar11 = (float *)(*(int *)(param_1 + 0x5c) + iVar17);
    fVar30 = *pfVar11;
    uVar2 = *(undefined8 *)(pfVar11 + 1);
    pfVar11 = (float *)(*(int *)(param_1 + 0x5c) + iVar17 + 0x24);
    local_a0 = fVar30 + *pfVar11;
    fVar26 = (float)uVar2;
    local_9c = fVar26 + pfVar11[1];
    fVar7 = (float)((ulonglong)uVar2 >> 0x20);
    local_98 = fVar7 + pfVar11[2];
    local_50 = DAT_00029114;
    FUN_00019f04(&local_ac,&local_a0,&local_50);
    local_b4 = local_a8 - fVar26;
    local_b0 = local_a4 - fVar7;
    local_b8 = local_ac - fVar30;
    local_a0 = local_b8;
    local_9c = local_b4;
    local_98 = local_b0;
    fVar7 = (float)FUN_0001a154(&local_a0);
    fVar26 = param_2;
    if (iVar20 + *(int *)(param_1 + 0x50) * -2 < 0 == SBORROW4(iVar20,*(int *)(param_1 + 0x50) * 2))
    {
      fVar26 = param_2 + param_2;
    }
    iVar15 = FUN_0002f5f4();
    fVar25 = DAT_000297f8;
    fVar30 = DAT_000297f4;
    if ((iVar15 == 0) ||
       (fVar24 = *(float *)(*(int *)(iVar9 + iVar18) + 0x10), fVar24 < 0.0 != NAN(fVar24))) {
      fVar24 = *(float *)(iVar19 + 0x290de);
      fVar27 = *(float *)(iVar3 + 0x29122);
      fVar7 = fVar7 + (fVar26 * DAT_0002910c * (fVar24 - fVar27)) / *(float *)(iVar19 + 0x290da);
      if ((int)((uint)(fVar27 < fVar24) << 0x1f) < 0) goto LAB_0002916a;
LAB_0002926e:
      if ((fVar27 != fVar24 && fVar27 < fVar24 == (NAN(fVar27) || NAN(fVar24))) &&
         (fVar27 * DAT_00029110 <= fVar7)) goto LAB_00029184;
      if ((*(int *)(param_1 + 0x58) < 3) || (*(int *)(param_1 + 0x58) <= iVar20 + 3)) {
        iVar15 = *(int *)(param_1 + 0x5c);
        iVar21 = iVar20 - local_2fc;
        iVar23 = (iVar21 + 1) * 0x24;
        *(float *)(iVar15 + iVar23 + 0x1c) = DAT_000297f8;
        *(float *)(iVar15 + iVar21 * 0x24 + 0x1c) = fVar25;
        local_fc = *(float *)(param_1 + 0x140) * fVar30;
        local_100 = *(float *)(param_1 + 0x13c) - local_fc;
        local_f8 = *(float *)(param_1 + 0x138) * fVar30 - *(float *)(param_1 + 0x13c) * fVar30;
        local_fc = local_fc - *(float *)(param_1 + 0x138);
        FUN_0001a178(&local_100);
        local_100 = fVar7 * local_100;
        local_f8 = fVar7 * local_f8;
        local_fc = fVar7 * local_fc;
        *(float *)(*(int *)(param_1 + 0x5c) + iVar21 * 0x24) = local_ac - local_100;
        *(float *)(*(int *)(param_1 + 0x5c) + iVar21 * 0x24 + 4) = local_a8 - local_fc;
        local_114 = local_a8 + local_fc;
        local_110 = local_a4 + local_f8;
        local_118 = local_ac + local_100;
        *(float *)(*(int *)(param_1 + 0x5c) + (iVar21 + 1) * 0x24) = local_118;
        *(float *)(iVar23 + *(int *)(param_1 + 0x5c) + 4) = local_114;
        local_10c = local_118;
        local_108 = local_114;
        fStack_104 = local_110;
        goto LAB_00029190;
      }
      pfVar11 = (float *)(*(int *)(param_1 + 0x5c) + iVar17 + 0x48);
      pfVar12 = (float *)(*(int *)(param_1 + 0x5c) + iVar17 + 0x6c);
      local_c4 = *pfVar11 + *pfVar12;
      iVar21 = iVar22 + 1;
      local_c0 = pfVar11[1] + pfVar12[1];
      local_bc = pfVar11[2] + pfVar12[2];
      local_54 = DAT_00029114;
      FUN_00019f04(&local_d0,&local_c4,&local_54);
      local_d8 = local_cc - local_a8;
      local_d4 = local_c8 - local_a4;
      local_dc = local_d0 - local_ac;
      fVar30 = (float)FUN_0001a178(&local_dc);
      fVar25 = local_d8 * DAT_00029118;
      fVar26 = local_dc * DAT_00029118;
      local_f4 = fVar7 * (local_d8 - local_d4 * DAT_00029118);
      local_f0 = fVar7 * (local_d4 * DAT_00029118 - local_dc);
      local_2cc[iVar21] = fVar30 + local_2cc[iVar22];
      iVar15 = iVar20 - local_2fc;
      iVar23 = iVar15 * 0x24;
      *(float *)(*(int *)(param_1 + 0x5c) + iVar15 * 0x24) = local_ac - local_f4;
      *(float *)(*(int *)(param_1 + 0x5c) + iVar23 + 4) = local_a8 - local_f0;
      local_f0 = local_f0 + local_a8;
      local_ec = local_a4 + fVar7 * (fVar26 - fVar25);
      local_f4 = local_f4 + local_ac;
      iVar22 = (iVar15 + 1) * 0x24;
      *(float *)(*(int *)(param_1 + 0x5c) + (iVar15 + 1) * 0x24) = local_f4;
      *(float *)(*(int *)(param_1 + 0x5c) + iVar22 + 4) = local_f0;
      iVar15 = *(int *)(param_1 + 0x5c);
      fVar26 = ((float)(longlong)iVar20 / (float)(longlong)*(int *)(param_1 + 0x58)) * DAT_0002911c;
      *(float *)(iVar15 + iVar22 + 0x1c) = fVar26;
      *(float *)(iVar15 + iVar23 + 0x1c) = fVar26;
      local_e8 = local_f4;
      local_e4 = local_f0;
      fStack_e0 = local_ec;
      if (*(int *)(DAT_000297e8 + 0x29464) == 0) {
        FUN_00028688(param_1 + 0x48,DAT_000297fc / (float)(longlong)*(int *)(param_1 + 0x58));
        fVar26 = *(float *)(param_1 + 0x40);
        if (fVar26 == 0.0 || fVar26 < 0.0 != NAN(fVar26)) {
          *(undefined *)(param_1 + 0x47) = *(undefined *)(param_1 + 0x4b);
          *(undefined *)(param_1 + 0x46) = *(undefined *)(param_1 + 0x4a);
          *(undefined *)(param_1 + 0x45) = *(undefined *)(param_1 + 0x49);
          *(undefined *)(param_1 + 0x44) = *(undefined *)(param_1 + 0x48);
        }
        else {
          fVar26 = DAT_000299ec - fVar26;
          pbVar13 = *(byte **)(iVar9 + DAT_000299f0);
          fVar7 = (float)(longlong)(int)(uint)pbVar13[2] +
                  (float)(longlong)(int)((uint)*(byte *)(param_1 + 0x4a) - (uint)pbVar13[2]) *
                  fVar26;
          *(char *)(param_1 + 0x46) = (0.0 < fVar7) * (char)(int)fVar7;
          fVar7 = (float)(longlong)(int)(uint)pbVar13[1] +
                  (float)(longlong)(int)((uint)*(byte *)(param_1 + 0x49) - (uint)pbVar13[1]) *
                  fVar26;
          *(char *)(param_1 + 0x45) = (0.0 < fVar7) * (char)(int)fVar7;
          fVar26 = (float)(longlong)(int)(uint)*pbVar13 +
                   (float)(longlong)(int)((uint)*(byte *)(param_1 + 0x48) - (uint)*pbVar13) * fVar26
          ;
          *(char *)(param_1 + 0x44) = (0.0 < fVar26) * (char)(int)fVar26;
          *(undefined *)(param_1 + 0x47) = 0xff;
        }
      }
      iVar15 = *(int *)(param_1 + 0x5c);
      uVar6 = FUN_0009e880(param_1 + 0x44);
      *(undefined4 *)(iVar23 + iVar15 + 0x18) = uVar6;
      iVar15 = *(int *)(param_1 + 0x5c);
      uVar6 = FUN_0009e880(param_1 + 0x44);
      *(undefined4 *)(iVar15 + iVar22 + 0x18) = uVar6;
      iVar15 = *(int *)(param_1 + 0x58);
      iVar22 = iVar21;
      if (iVar15 <= iVar20 + 2) break;
    }
    else {
      fVar24 = *(float *)((int)&DAT_000290e4 + iVar4);
      fVar27 = *(float *)(iVar5 + 0x29128);
      fVar7 = fVar7 + (fVar26 * DAT_0002910c * (fVar24 - fVar27)) / *(float *)(iVar4 + 0x290e0);
      if (-1 < (int)((uint)(fVar27 < fVar24) << 0x1f)) goto LAB_0002926e;
LAB_0002916a:
      fVar26 = *(float *)(param_1 + 0x154) * DAT_00029110 * fVar27;
      if (fVar26 < fVar7 != (NAN(fVar26) || NAN(fVar7))) goto LAB_0002926e;
LAB_00029184:
      local_2fc = local_2fc + 2;
LAB_00029190:
      iVar15 = *(int *)(param_1 + 0x58);
      if (iVar15 <= iVar20 + 2) break;
    }
    iVar17 = iVar17 + 0x48;
    iVar20 = iVar20 + 2;
  } while( true );
  if (0 < iVar15) {
    fVar26 = local_2cc[iVar22];
    iVar18 = 0;
    iVar9 = 0;
    do {
      iVar19 = iVar9 >> 1;
      iVar9 = iVar9 + 2;
      if (iVar22 <= iVar19) {
        iVar19 = iVar22;
      }
      fVar7 = local_2cc[iVar19];
      *(float *)(*(int *)(param_1 + 0x5c) + iVar18 + 0x1c) = fVar7 / fVar26;
      *(float *)(*(int *)(param_1 + 0x5c) + iVar18 + 0x1c) = fVar7 / fVar26;
      iVar15 = *(int *)(param_1 + 0x58);
      iVar18 = iVar18 + 0x48;
    } while (iVar9 < iVar15);
    if (2 < iVar15) {
      *(int *)(DAT_000297ec + 0x29528) = *(int *)(DAT_000297ec + 0x29528) + 1;
      puVar8 = (undefined8 *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24 + -0x48);
      uVar2 = *puVar8;
      fVar7 = *(float *)(puVar8 + 1);
      pfVar11 = (float *)(*(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x58) + -1) * 0x24);
      fVar31 = *pfVar11;
      fVar28 = (float)uVar2;
      local_124 = fVar28 + fVar31;
      fVar32 = pfVar11[1];
      local_11c = fVar7 + pfVar11[2];
      fVar29 = (float)((ulonglong)uVar2 >> 0x20);
      local_120 = fVar29 + fVar32;
      local_58 = DAT_000297d8;
      FUN_00019f04(&local_130,&local_124,&local_58);
      fVar30 = DAT_000297f4;
      fVar26 = DAT_000297dc;
      iVar9 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x58) * 0x24;
      uVar6 = *(undefined4 *)(iVar9 + -0x44);
      uVar10 = *(undefined4 *)(iVar9 + -0x40);
      uVar16 = *(undefined4 *)(iVar9 + -0x3c);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar9 + -0x48);
      *(undefined4 *)(param_1 + 100) = uVar6;
      *(undefined4 *)(param_1 + 0x68) = uVar10;
      *(undefined4 *)(param_1 + 0x6c) = uVar16;
      uVar6 = *(undefined4 *)(iVar9 + -0x34);
      uVar10 = *(undefined4 *)(iVar9 + -0x30);
      uVar16 = *(undefined4 *)(iVar9 + -0x2c);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar9 + -0x38);
      *(undefined4 *)(param_1 + 0x74) = uVar6;
      *(undefined4 *)(param_1 + 0x78) = uVar10;
      *(undefined4 *)(param_1 + 0x7c) = uVar16;
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar9 + -0x28);
      iVar9 = DAT_000297f0;
      fVar24 = (local_128 - fVar7) * fVar30;
      fVar27 = *(float *)(DAT_000297f0 + 0x2957e);
      fVar25 = local_130 - ((local_12c - fVar29) - fVar24) * fVar26 * fVar27;
      *(float *)(param_1 + 0x60) = fVar25;
      fVar7 = DAT_000297e0;
      fVar24 = local_12c - (fVar24 - (local_130 - fVar28)) * fVar26 * fVar27;
      *(float *)(param_1 + 100) = fVar24;
      cVar1 = *(char *)(iVar9 + 0x29582);
      *(float *)(param_1 + 0xac) = local_12c;
      *(float *)(param_1 + 200) = fVar7;
      *(float *)(param_1 + 0xcc) = fVar25;
      *(float *)(param_1 + 0x84) = fVar28;
      *(float *)(param_1 + 0x88) = fVar29;
      *(float *)(param_1 + 0xa4) = fVar30;
      fVar26 = fVar7;
      if (cVar1 != '\0') {
        fVar26 = fVar30;
      }
      *(float *)(param_1 + 0xd0) = fVar24;
      *(float *)(param_1 + 0xa8) = local_130;
      fVar25 = DAT_000297e4;
      *(float *)(param_1 + 0x80) = fVar26;
      cVar1 = *(char *)(iVar9 + 0x29582);
      *(float *)(param_1 + 0xf4) = local_12c;
      *(float *)(param_1 + 0x110) = fVar7;
      *(float *)(param_1 + 0xf0) = local_130;
      *(float *)(param_1 + 0x114) = fVar31;
      *(float *)(param_1 + 0x118) = fVar32;
      if (cVar1 != '\0') {
        fVar7 = fVar25;
      }
      *(float *)(param_1 + 0x134) = fVar25;
      fVar26 = DAT_000297f8;
      iVar18 = 0;
      iVar19 = *(int *)(param_1 + 0x5c) + (*(int *)(param_1 + 0x58) + -1) * 0x24;
      *(float *)(param_1 + 0xec) = fVar7;
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar19 + 0x18);
      iVar9 = param_1;
      fVar7 = fVar25;
      while( true ) {
        iVar18 = iVar18 + 1;
        *(float *)(iVar9 + 0x7c) = fVar7;
        *(float *)(iVar9 + 0x70) = fVar30;
        *(float *)(iVar9 + 0x6c) = fVar30;
        *(float *)(iVar9 + 0x68) = fVar30;
        *(float *)(iVar9 + 0x74) = fVar25;
        if (iVar18 == 6) break;
        *(undefined4 *)(iVar9 + 0x9c) = *(undefined4 *)(iVar19 + 0x18);
        fVar7 = fVar26;
        if (iVar18 % 3 == 0) {
          fVar7 = fVar25;
        }
        iVar9 = iVar9 + 0x24;
      }
      iVar15 = *(int *)(param_1 + 0x58);
    }
  }
LAB_0002966c:
  *(int *)(param_1 + 0x58) = iVar15 - local_2fc;
  return;
}



