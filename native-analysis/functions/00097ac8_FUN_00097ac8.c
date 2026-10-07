/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00097ac8 FUN_00097ac8 */

void FUN_00097ac8(int param_1)

{
  int iVar1;
  undefined uVar2;
  undefined uVar3;
  undefined uVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  int local_108;
  char local_100;
  int local_fc;
  int local_f8;
  int local_e4 [7];
  int local_c8 [7];
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
  undefined local_64;
  undefined local_63;
  undefined local_62;
  char local_61;
  undefined local_60;
  undefined local_5f;
  undefined local_5e;
  char local_5d;
  undefined local_5c;
  undefined local_5b;
  undefined local_5a;
  char local_59;
  undefined local_58;
  undefined local_57;
  undefined local_56;
  undefined local_55;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  undefined local_51;
  
  iVar9 = DAT_00097d24 + 0x97ae0;
  if (*(float *)(param_1 + 0x10b4) == DAT_00097d08) {
    uVar10 = *(undefined4 *)(param_1 + 0x10);
    FUN_00036320(local_c8);
    uVar10 = FUN_000906c0(uVar10,local_c8,(float)(ulonglong)*(uint *)(param_1 + 0x1c),
                          (float)(ulonglong)*(uint *)(param_1 + 0x38));
    iVar12 = DAT_000986b8;
    local_fc = DAT_000986b8;
    *(undefined4 *)(param_1 + 0x10b4) = uVar10;
    local_c8[0] = *(int *)(iVar9 + iVar12) + 8;
  }
  else {
    iVar12 = param_1 + 0xb0;
    local_fc = DAT_00097d28;
  }
  local_f8 = param_1 + 0xb0;
  local_a4 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x5c);
  fVar21 = local_a4 * DAT_00097d0c;
  fVar22 = *(float *)(param_1 + 0x60);
  local_a0 = *(float *)(param_1 + 0x68) - fVar22;
  fVar26 = local_a0 * DAT_00097d0c;
  if ((int)((uint)(local_a4 < 0.0) << 0x1f) < 0) {
    local_a4 = -local_a4;
  }
  local_ac = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x2c)) +
             *(float *)(param_1 + 0x5c) + fVar21 + local_a4 * DAT_00097d10;
  local_a4 = local_a4 + local_ac;
  if ((int)((uint)(local_a0 < 0.0) << 0x1f) < 0) {
    local_a0 = -local_a0;
  }
  local_a8 = (*(float *)(param_1 + 0x74) - *(float *)(param_1 + 0x30)) + fVar22 + fVar26 +
             local_a0 * DAT_00097d0c;
  local_a0 = local_a8 - local_a0;
  if ((((*(int *)(param_1 + 0xac) == 2) &&
       (fVar21 = *(float *)(param_1 + 0x10d0),
       fVar21 != DAT_000986a4 && fVar21 < DAT_000986a4 == (NAN(fVar21) || NAN(DAT_000986a4)))) ||
      (*(float *)(param_1 + 0x10b8) != 0.0)) ||
     ((int)((uint)(*(float *)(param_1 + 0xa8) < 0.0) << 0x1f) < 0)) {
LAB_00097ba8:
    local_108 = *(int *)(param_1 + 8);
    if (local_108 != 0) {
      local_108 = 1;
    }
  }
  else {
    fVar22 = *(float *)(param_1 + 0x68) - fVar22;
    fVar21 = *(float *)(param_1 + 0x10b4);
    iVar1 = (uint)(fVar22 < 0.0) << 0x1f;
    if (-1 < iVar1) {
      iVar12 = 0;
    }
    if (iVar1 < 0) {
      iVar12 = 1;
    }
    fVar26 = DAT_000980ac;
    if (iVar12 == 0) {
      fVar23 = fVar21 - fVar22;
      if (fVar23 != 0.0 && fVar23 < 0.0 == NAN(fVar23)) {
LAB_0009868e:
        if (iVar12 != 0) {
          fVar22 = -fVar22;
        }
        fVar26 = fVar21 - fVar22;
      }
    }
    else {
      fVar23 = fVar21 - -fVar22;
      if (fVar23 != 0.0 && fVar23 < 0.0 == NAN(fVar23)) goto LAB_0009868e;
    }
    if ((int)((uint)(fVar26 < *(float *)(param_1 + 0xa8)) << 0x1f) < 0) goto LAB_00097ba8;
    local_108 = 0;
  }
  local_74 = *(float *)(DAT_00097d2c + 0x97bb8);
  local_70 = *(float *)(DAT_00097d2c + 0x97bbc);
  if (local_108 == 0) {
    local_6c = local_74;
    local_68 = local_70;
    if (*(byte *)(param_1 + 0x10c9) < 0x21) {
      *(undefined *)(param_1 + 0x10c9) = 0;
      local_100 = '\0';
      goto LAB_00097d42;
    }
    local_100 = *(byte *)(param_1 + 0x10c9) - 0x20;
    *(char *)(param_1 + 0x10c9) = local_100;
    if (local_100 == '\0') goto LAB_00097d42;
  }
  else {
    if (*(byte *)(param_1 + 0x10c9) < 0xdf) {
      local_100 = *(byte *)(param_1 + 0x10c9) + 0x20;
    }
    else {
      local_100 = -1;
    }
    *(char *)(param_1 + 0x10c9) = local_100;
  }
  fVar26 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x60);
  fVar21 = *(float *)(param_1 + 0x10b4);
  if ((int)((uint)(fVar26 < 0.0) << 0x1f) < 0) {
    fVar26 = -fVar26;
  }
  fVar26 = *(float *)(param_1 + 0xa8) / (fVar21 - fVar26);
  fVar22 = local_a0 - local_a8;
  iVar12 = (uint)(fVar22 < 0.0) << 0x1f;
  if (-1 < iVar12) {
    local_100 = '\0';
  }
  if (iVar12 < 0) {
    local_100 = '\x01';
  }
  fVar23 = fVar22;
  if (local_100 != '\0') {
    fVar23 = -fVar22;
  }
  fVar24 = DAT_00097d14;
  if ((int)((uint)(fVar23 / fVar21 < DAT_00097d14) << 0x1f) < 0) {
    fVar24 = fVar22;
    if (local_100 != '\0') {
      fVar24 = -fVar22;
    }
    fVar24 = fVar24 / fVar21;
  }
  local_7c = local_a4 + DAT_00097d18;
  local_78 = local_a8 + fVar22 * DAT_00097d0c;
  if (fVar26 != DAT_00097d14 && fVar26 < DAT_00097d14 == (NAN(fVar26) || NAN(DAT_00097d14))) {
    fVar24 = fVar24 / fVar26;
  }
  if ((fVar26 == DAT_00097d14 || fVar26 < DAT_00097d14 != (NAN(fVar26) || NAN(DAT_00097d14))) &&
     ((int)((uint)(fVar26 < 0.0) << 0x1f) < 0)) {
    iVar12 = (uint)(fVar26 * DAT_000986a4 < 0.0) << 0x1f;
    fVar23 = DAT_00097d14;
    fVar21 = fVar26 * DAT_000986a4;
    if (iVar12 < 0) {
      fVar23 = DAT_00097d14 + fVar26 * DAT_000986b4;
      fVar21 = DAT_000986b4;
    }
    if (-1 < iVar12) {
      fVar23 = fVar21 + fVar23;
    }
    fVar24 = fVar24 / fVar23;
  }
  fVar21 = fVar22;
  if (local_100 != '\0') {
    fVar21 = -fVar22;
  }
  fVar21 = fVar21 * fVar24 - DAT_00097d1c;
  local_80 = DAT_00097d30;
  if (fVar21 != 0.0 && fVar21 < 0.0 == NAN(fVar21)) {
    if (local_100 == '\0') {
      local_80 = fVar22 * fVar24 - DAT_000986b0;
    }
    else {
      local_80 = -fVar22 * fVar24 - DAT_000986b0;
    }
  }
  local_84 = DAT_00097d20;
  local_74 = DAT_00097d20;
  fVar21 = DAT_00097d0c;
  if ((0.0 < fVar26) &&
     (fVar21 = DAT_000986a0, fVar26 < DAT_000986a8 != (NAN(fVar26) || NAN(DAT_000986a8)))) {
    fVar21 = -(fVar26 - DAT_000986ac);
  }
  if (local_100 != '\0') {
    fVar22 = -fVar22;
  }
  local_68 = local_78 + fVar22 * (DAT_00097d14 - fVar24) * fVar21;
  local_100 = *(char *)(param_1 + 0x10c9);
  local_108 = 1;
  local_70 = local_80;
  local_6c = local_7c;
LAB_00097d42:
  iVar1 = DAT_000980a4;
  iVar12 = DAT_000980a0;
  fVar26 = DAT_0009808c;
  fVar21 = DAT_00097d30;
  puVar18 = *(undefined **)(iVar9 + DAT_0009809c);
  puVar19 = (undefined4 *)(DAT_000980a0 + 0x97d5a);
  uVar2 = *puVar18;
  iVar16 = *(int *)(iVar9 + DAT_000980a4);
  uVar3 = puVar18[1];
  uVar4 = puVar18[2];
  *(undefined4 *)(iVar16 + 0x94c) = *(undefined4 *)(iVar16 + 0x104c);
  *(undefined4 *)(iVar16 + 0x950) = *(undefined4 *)(iVar16 + 0x1050);
  *(undefined4 *)(iVar16 + 0x954) = *(undefined4 *)(iVar16 + 0x1054);
  *(undefined4 *)(iVar16 + 0x958) = *(undefined4 *)(iVar16 + 0x1058);
  *(undefined4 *)(iVar16 + 0x95c) = *(undefined4 *)(iVar16 + 0x105c);
  *(undefined4 *)(iVar16 + 0x960) = *(undefined4 *)(iVar16 + 0x1060);
  *(undefined4 *)(iVar16 + 0x964) = *(undefined4 *)(iVar16 + 0x1064);
  *(undefined4 *)(iVar16 + 0x968) = *(undefined4 *)(iVar16 + 0x1068);
  *(undefined4 *)(iVar16 + 0x96c) = *(undefined4 *)(iVar16 + 0x106c);
  *(undefined4 *)(iVar16 + 0x970) = *(undefined4 *)(iVar16 + 0x1070);
  *(undefined4 *)(iVar16 + 0x974) = *(undefined4 *)(iVar16 + 0x1074);
  *(undefined4 *)(iVar16 + 0x978) = *(undefined4 *)(iVar16 + 0x1078);
  *(undefined4 *)(iVar16 + 0x97c) = *(undefined4 *)(iVar16 + 0x107c);
  *(undefined4 *)(iVar16 + 0x980) = *(undefined4 *)(iVar16 + 0x1080);
  *(undefined4 *)(iVar16 + 0x984) = *(undefined4 *)(iVar16 + 0x1084);
  *(undefined4 *)(iVar16 + 0x988) = *(undefined4 *)(iVar16 + 0x1088);
  *(undefined4 *)(iVar16 + 0x104) = *(undefined4 *)(iVar16 + 0x804);
  *(undefined4 *)(iVar16 + 0x108) = *(undefined4 *)(iVar16 + 0x808);
  *(undefined4 *)(iVar16 + 0x10c) = *(undefined4 *)(iVar16 + 0x80c);
  *(undefined4 *)(iVar16 + 0x110) = *(undefined4 *)(iVar16 + 0x810);
  *(undefined4 *)(iVar16 + 0x114) = *(undefined4 *)(iVar16 + 0x814);
  *(undefined4 *)(iVar16 + 0x118) = *(undefined4 *)(iVar16 + 0x818);
  *(undefined4 *)(iVar16 + 0x11c) = *(undefined4 *)(iVar16 + 0x81c);
  *(undefined4 *)(iVar16 + 0x120) = *(undefined4 *)(iVar16 + 0x820);
  *(undefined4 *)(iVar16 + 0x124) = *(undefined4 *)(iVar16 + 0x824);
  *(undefined4 *)(iVar16 + 0x128) = *(undefined4 *)(iVar16 + 0x828);
  *(undefined4 *)(iVar16 + 300) = *(undefined4 *)(iVar16 + 0x82c);
  *(undefined4 *)(iVar16 + 0x130) = *(undefined4 *)(iVar16 + 0x830);
  puVar17 = (undefined4 *)(iVar16 + 0x1094);
  *(undefined4 *)(iVar16 + 0x134) = *(undefined4 *)(iVar16 + 0x834);
  *(undefined4 *)(iVar16 + 0x138) = *(undefined4 *)(iVar16 + 0x838);
  *(undefined4 *)(iVar16 + 0x13c) = *(undefined4 *)(iVar16 + 0x83c);
  *(undefined4 *)(iVar16 + 0x140) = *(undefined4 *)(iVar16 + 0x840);
  local_90 = fVar21;
  local_8c = fVar21;
  local_88 = fVar26;
  local_9c = fVar21;
  local_98 = fVar26;
  local_94 = fVar21;
  FUN_0008d6f0(iVar16,&local_90,&local_9c,DAT_000980a8 + 0x97dca,0);
  FUN_0008d514(iVar16,0x43200000,0xc3200000,0xc3700000,DAT_00098090,DAT_00098094,DAT_00098098,0);
  *(undefined *)(iVar16 + 0x18d4) = 0;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
  *puVar17 = *puVar19;
  *(undefined4 *)(iVar16 + 0x1098) = uVar10;
  *(undefined4 *)(iVar16 + 0x109c) = uVar13;
  *(undefined4 *)(iVar16 + 0x10a0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
  *(undefined4 *)(iVar16 + 0x10a4) = *(undefined4 *)(iVar12 + 0x97d6a);
  *(undefined4 *)(iVar16 + 0x10a8) = uVar10;
  *(undefined4 *)(iVar16 + 0x10ac) = uVar13;
  *(undefined4 *)(iVar16 + 0x10b0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
  puVar20 = (undefined4 *)(iVar12 + 0x97d8a);
  *(undefined4 *)(iVar16 + 0x10b4) = *(undefined4 *)(iVar12 + 0x97d7a);
  *(undefined4 *)(iVar16 + 0x10b8) = uVar10;
  *(undefined4 *)(iVar16 + 0x10bc) = uVar13;
  *(undefined4 *)(iVar16 + 0x10c0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
  *(undefined4 *)(iVar16 + 0x10c4) = *puVar20;
  *(undefined4 *)(iVar16 + 0x10c8) = uVar10;
  *(undefined4 *)(iVar16 + 0x10cc) = uVar13;
  *(undefined4 *)(iVar16 + 0x10d0) = uVar14;
  puVar11 = (undefined4 *)(iVar16 + 0x1894);
  uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
  *puVar11 = *puVar19;
  *(undefined4 *)(iVar16 + 0x1898) = uVar10;
  *(undefined4 *)(iVar16 + 0x189c) = uVar13;
  *(undefined4 *)(iVar16 + 0x18a0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
  *(undefined4 *)(iVar16 + 0x18a4) = *(undefined4 *)(iVar12 + 0x97d6a);
  *(undefined4 *)(iVar16 + 0x18a8) = uVar10;
  *(undefined4 *)(iVar16 + 0x18ac) = uVar13;
  *(undefined4 *)(iVar16 + 0x18b0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
  *(undefined4 *)(iVar16 + 0x18b4) = *(undefined4 *)(iVar12 + 0x97d7a);
  *(undefined4 *)(iVar16 + 0x18b8) = uVar10;
  *(undefined4 *)(iVar16 + 0x18bc) = uVar13;
  *(undefined4 *)(iVar16 + 0x18c0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
  *(undefined4 *)(iVar16 + 0x18c4) = *puVar20;
  *(undefined4 *)(iVar16 + 0x18c8) = uVar10;
  *(undefined4 *)(iVar16 + 0x18cc) = uVar13;
  *(undefined4 *)(iVar16 + 0x18d0) = uVar14;
  *(int *)(iVar16 + 0x18d8) = *(int *)(iVar16 + 0x18d8) + 1;
  FUN_000995e4(*(undefined4 *)(param_1 + 4));
  *(undefined *)(iVar16 + 0x18d4) = 0;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
  *puVar17 = *puVar19;
  *(undefined4 *)(iVar16 + 0x1098) = uVar10;
  *(undefined4 *)(iVar16 + 0x109c) = uVar13;
  *(undefined4 *)(iVar16 + 0x10a0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
  *(undefined4 *)(iVar16 + 0x10a4) = *(undefined4 *)(iVar12 + 0x97d6a);
  *(undefined4 *)(iVar16 + 0x10a8) = uVar10;
  *(undefined4 *)(iVar16 + 0x10ac) = uVar13;
  *(undefined4 *)(iVar16 + 0x10b0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
  *(undefined4 *)(iVar16 + 0x10b4) = *(undefined4 *)(iVar12 + 0x97d7a);
  *(undefined4 *)(iVar16 + 0x10b8) = uVar10;
  *(undefined4 *)(iVar16 + 0x10bc) = uVar13;
  *(undefined4 *)(iVar16 + 0x10c0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
  *(undefined4 *)(iVar16 + 0x10c4) = *puVar20;
  *(undefined4 *)(iVar16 + 0x10c8) = uVar10;
  *(undefined4 *)(iVar16 + 0x10cc) = uVar13;
  *(undefined4 *)(iVar16 + 0x10d0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
  *puVar11 = *puVar19;
  *(undefined4 *)(iVar16 + 0x1898) = uVar10;
  *(undefined4 *)(iVar16 + 0x189c) = uVar13;
  *(undefined4 *)(iVar16 + 0x18a0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
  *(undefined4 *)(iVar16 + 0x18a4) = *(undefined4 *)(iVar12 + 0x97d6a);
  *(undefined4 *)(iVar16 + 0x18a8) = uVar10;
  *(undefined4 *)(iVar16 + 0x18ac) = uVar13;
  *(undefined4 *)(iVar16 + 0x18b0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
  *(undefined4 *)(iVar16 + 0x18b4) = *(undefined4 *)(iVar12 + 0x97d7a);
  *(undefined4 *)(iVar16 + 0x18b8) = uVar10;
  *(undefined4 *)(iVar16 + 0x18bc) = uVar13;
  *(undefined4 *)(iVar16 + 0x18c0) = uVar14;
  uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
  uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
  uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
  *(undefined4 *)(iVar16 + 0x18c4) = *puVar20;
  *(undefined4 *)(iVar16 + 0x18c8) = uVar10;
  *(undefined4 *)(iVar16 + 0x18cc) = uVar13;
  *(undefined4 *)(iVar16 + 0x18d0) = uVar14;
  *(int *)(iVar16 + 0x18d8) = *(int *)(iVar16 + 0x18d8) + 1;
  uVar7 = (**(code **)(**(int **)(param_1 + 4) + 0x14))();
  uVar8 = (**(code **)(**(int **)(param_1 + 4) + 0x18))();
  fVar27 = *(float *)(param_1 + 0x6c);
  fVar24 = (float)(ulonglong)uVar7 * fVar27;
  *(float *)(iVar16 + 0x1894) = fVar24 * *(float *)(iVar16 + 0x1894);
  *(float *)(iVar16 + 0x18a4) = fVar24 * *(float *)(iVar16 + 0x18a4);
  *(float *)(iVar16 + 0x18b4) = fVar24 * *(float *)(iVar16 + 0x18b4);
  fVar25 = (float)(ulonglong)uVar8 * fVar27;
  fVar24 = fVar24 * *(float *)(iVar16 + 0x18c4);
  *(float *)(iVar16 + 0x18c4) = fVar24;
  *(float *)(iVar16 + 0x1898) = fVar25 * *(float *)(iVar16 + 0x1898);
  *(float *)(iVar16 + 0x18a8) = fVar25 * *(float *)(iVar16 + 0x18a8);
  fVar27 = fVar27 * fVar21;
  *(float *)(iVar16 + 0x18b8) = fVar25 * *(float *)(iVar16 + 0x18b8);
  fVar25 = fVar25 * *(float *)(iVar16 + 0x18c8);
  *(float *)(iVar16 + 0x18c8) = fVar25;
  *(float *)(iVar16 + 0x189c) = fVar27 * *(float *)(iVar16 + 0x189c);
  *(float *)(iVar16 + 0x18ac) = fVar27 * *(float *)(iVar16 + 0x18ac);
  *(float *)(iVar16 + 0x18bc) = fVar27 * *(float *)(iVar16 + 0x18bc);
  fVar27 = fVar27 * *(float *)(iVar16 + 0x18cc);
  iVar15 = *(int *)(iVar16 + 0x18d8);
  *(int *)(iVar16 + 0x18d8) = iVar15 + 1;
  *(float *)(iVar16 + 0x18cc) = fVar27;
  fVar22 = *(float *)(param_1 + 0x74);
  fVar23 = *(float *)(param_1 + 0x78);
  *(float *)(iVar16 + 0x18c4) = *(float *)(param_1 + 0x70) + fVar24;
  *(float *)(iVar16 + 0x18c8) = fVar22 + fVar25;
  *(float *)(iVar16 + 0x18cc) = fVar23 + fVar27;
  *(int *)(iVar16 + 0x18d8) = iVar15 + 2;
  FUN_0008d434(iVar16,1);
  local_58 = *puVar18;
  local_57 = puVar18[1];
  local_56 = puVar18[2];
  local_55 = puVar18[3];
  FUN_000a344c(&local_58,fVar21,fVar26,fVar21,fVar26);
  FUN_000995e0(*(undefined4 *)(param_1 + 4));
  if (local_108 != 0) {
    FUN_000995e4(*(undefined4 *)(param_1 + 8));
    fVar23 = DAT_000980b4;
    fVar22 = DAT_000980b0;
    uVar7 = (**(code **)(**(int **)(param_1 + 8) + 0x14))();
    fVar6 = local_68;
    fVar5 = local_6c;
    fVar27 = local_70;
    *(undefined *)(iVar16 + 0x18d4) = 0;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
    *puVar17 = *puVar19;
    *(undefined4 *)(iVar16 + 0x1098) = uVar10;
    *(undefined4 *)(iVar16 + 0x109c) = uVar13;
    *(undefined4 *)(iVar16 + 0x10a0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
    fVar29 = fVar26 / (float)(ulonglong)uVar7;
    *(undefined4 *)(iVar16 + 0x10a4) = *(undefined4 *)(iVar12 + 0x97d6a);
    *(undefined4 *)(iVar16 + 0x10a8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10ac) = uVar13;
    *(undefined4 *)(iVar16 + 0x10b0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
    *(undefined4 *)(iVar16 + 0x10b4) = *(undefined4 *)(iVar12 + 0x97d7a);
    *(undefined4 *)(iVar16 + 0x10b8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10bc) = uVar13;
    *(undefined4 *)(iVar16 + 0x10c0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
    *(undefined4 *)(iVar16 + 0x10c4) = *puVar20;
    *(undefined4 *)(iVar16 + 0x10c8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10cc) = uVar13;
    *(undefined4 *)(iVar16 + 0x10d0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
    *puVar11 = *puVar19;
    *(undefined4 *)(iVar16 + 0x1898) = uVar10;
    *(undefined4 *)(iVar16 + 0x189c) = uVar13;
    *(undefined4 *)(iVar16 + 0x18a0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
    *(undefined4 *)(iVar16 + 0x18a4) = *(undefined4 *)(iVar12 + 0x97d6a);
    *(undefined4 *)(iVar16 + 0x18a8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18ac) = uVar13;
    *(undefined4 *)(iVar16 + 0x18b0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
    fVar28 = fVar29 * fVar22;
    *(undefined4 *)(iVar16 + 0x18b4) = *(undefined4 *)(iVar12 + 0x97d7a);
    *(undefined4 *)(iVar16 + 0x18b8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18bc) = uVar13;
    *(undefined4 *)(iVar16 + 0x18c0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
    *(undefined4 *)(iVar16 + 0x18c4) = *puVar20;
    *(undefined4 *)(iVar16 + 0x18c8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18cc) = uVar13;
    *(undefined4 *)(iVar16 + 0x18d0) = uVar14;
    iVar15 = *(int *)(iVar16 + 0x18d8);
    *(int *)(iVar16 + 0x18d8) = iVar15 + 1;
    fVar24 = local_74 * *(float *)(param_1 + 0x6c);
    *(float *)(iVar16 + 0x1894) = fVar24 * *(float *)(iVar16 + 0x1894);
    *(float *)(iVar16 + 0x18a4) = fVar24 * *(float *)(iVar16 + 0x18a4);
    *(float *)(iVar16 + 0x18b4) = fVar24 * *(float *)(iVar16 + 0x18b4);
    *(float *)(iVar16 + 0x1898) = local_70 * *(float *)(iVar16 + 0x1898);
    *(float *)(iVar16 + 0x18a8) = local_70 * *(float *)(iVar16 + 0x18a8);
    *(float *)(iVar16 + 0x18b8) = local_70 * *(float *)(iVar16 + 0x18b8);
    *(float *)(iVar16 + 0x189c) = *(float *)(iVar16 + 0x189c) * fVar21;
    *(float *)(iVar16 + 0x18ac) = *(float *)(iVar16 + 0x18ac) * fVar21;
    *(float *)(iVar16 + 0x18bc) = *(float *)(iVar16 + 0x18bc) * fVar21;
    *(int *)(iVar16 + 0x18d8) = iVar15 + 3;
    *(float *)(iVar16 + 0x18c4) = local_6c + fVar24 * *(float *)(iVar16 + 0x18c4);
    *(float *)(iVar16 + 0x18c8) = local_68 + local_70 * *(float *)(iVar16 + 0x18c8);
    *(float *)(iVar16 + 0x18cc) = fVar21 + *(float *)(iVar16 + 0x18cc) * fVar21;
    FUN_0008d434(iVar16,1);
    fVar24 = DAT_000980b8;
    local_5c = uVar2;
    local_5b = uVar3;
    local_5a = uVar4;
    local_59 = local_100;
    FUN_000a344c(&local_5c,fVar21,fVar23,fVar28,fVar28 + fVar29);
    *(undefined *)(iVar16 + 0x18d4) = 0;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
    *puVar17 = *puVar19;
    *(undefined4 *)(iVar16 + 0x1098) = uVar10;
    *(undefined4 *)(iVar16 + 0x109c) = uVar13;
    *(undefined4 *)(iVar16 + 0x10a0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
    *(undefined4 *)(iVar16 + 0x10a4) = *(undefined4 *)(iVar12 + 0x97d6a);
    *(undefined4 *)(iVar16 + 0x10a8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10ac) = uVar13;
    *(undefined4 *)(iVar16 + 0x10b0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
    *(undefined4 *)(iVar16 + 0x10b4) = *(undefined4 *)(iVar12 + 0x97d7a);
    *(undefined4 *)(iVar16 + 0x10b8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10bc) = uVar13;
    *(undefined4 *)(iVar16 + 0x10c0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
    *(undefined4 *)(iVar16 + 0x10c4) = *puVar20;
    *(undefined4 *)(iVar16 + 0x10c8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10cc) = uVar13;
    *(undefined4 *)(iVar16 + 0x10d0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
    *puVar11 = *puVar19;
    *(undefined4 *)(iVar16 + 0x1898) = uVar10;
    *(undefined4 *)(iVar16 + 0x189c) = uVar13;
    *(undefined4 *)(iVar16 + 0x18a0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
    *(undefined4 *)(iVar16 + 0x18a4) = *(undefined4 *)(iVar12 + 0x97d6a);
    *(undefined4 *)(iVar16 + 0x18a8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18ac) = uVar13;
    *(undefined4 *)(iVar16 + 0x18b0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
    *(undefined4 *)(iVar16 + 0x18b4) = *(undefined4 *)(iVar12 + 0x97d7a);
    *(undefined4 *)(iVar16 + 0x18b8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18bc) = uVar13;
    *(undefined4 *)(iVar16 + 0x18c0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
    *(undefined4 *)(iVar16 + 0x18c4) = *puVar20;
    *(undefined4 *)(iVar16 + 0x18c8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18cc) = uVar13;
    *(undefined4 *)(iVar16 + 0x18d0) = uVar14;
    iVar15 = *(int *)(iVar16 + 0x18d8);
    *(int *)(iVar16 + 0x18d8) = iVar15 + 1;
    fVar25 = *(float *)(param_1 + 0x6c) * fVar22;
    *(float *)(iVar16 + 0x1894) = fVar25 * *(float *)(iVar16 + 0x1894);
    *(float *)(iVar16 + 0x18a4) = fVar25 * *(float *)(iVar16 + 0x18a4);
    *(float *)(iVar16 + 0x18b4) = fVar25 * *(float *)(iVar16 + 0x18b4);
    *(float *)(iVar16 + 0x1898) = fVar25 * *(float *)(iVar16 + 0x1898);
    *(float *)(iVar16 + 0x18a8) = fVar25 * *(float *)(iVar16 + 0x18a8);
    *(float *)(iVar16 + 0x18b8) = fVar25 * *(float *)(iVar16 + 0x18b8);
    *(float *)(iVar16 + 0x189c) = *(float *)(iVar16 + 0x189c) * fVar21;
    *(float *)(iVar16 + 0x18ac) = *(float *)(iVar16 + 0x18ac) * fVar21;
    *(float *)(iVar16 + 0x18bc) = *(float *)(iVar16 + 0x18bc) * fVar21;
    *(int *)(iVar16 + 0x18d8) = iVar15 + 3;
    *(float *)(iVar16 + 0x18c4) = fVar5 + fVar25 * *(float *)(iVar16 + 0x18c4);
    *(float *)(iVar16 + 0x18c8) =
         fVar6 + fVar27 * fVar23 + fVar24 + fVar25 * *(float *)(iVar16 + 0x18c8);
    *(float *)(iVar16 + 0x18cc) = fVar21 + *(float *)(iVar16 + 0x18cc) * fVar21;
    FUN_0008d434(iVar16,1);
    local_60 = uVar2;
    local_5f = uVar3;
    local_5e = uVar4;
    local_5d = local_100;
    FUN_000a344c(&local_60,fVar21,fVar23,fVar21,fVar28);
    *(undefined *)(iVar16 + 0x18d4) = 0;
    fVar25 = DAT_000986a0;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
    fVar29 = fVar29 * DAT_0009869c;
    *puVar17 = *puVar19;
    *(undefined4 *)(iVar16 + 0x1098) = uVar10;
    *(undefined4 *)(iVar16 + 0x109c) = uVar13;
    *(undefined4 *)(iVar16 + 0x10a0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
    *(undefined4 *)(iVar16 + 0x10a4) = *(undefined4 *)(iVar12 + 0x97d6a);
    *(undefined4 *)(iVar16 + 0x10a8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10ac) = uVar13;
    *(undefined4 *)(iVar16 + 0x10b0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
    *(undefined4 *)(iVar16 + 0x10b4) = *(undefined4 *)(iVar12 + 0x97d7a);
    *(undefined4 *)(iVar16 + 0x10b8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10bc) = uVar13;
    *(undefined4 *)(iVar16 + 0x10c0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
    *(undefined4 *)(iVar16 + 0x10c4) = *puVar20;
    *(undefined4 *)(iVar16 + 0x10c8) = uVar10;
    *(undefined4 *)(iVar16 + 0x10cc) = uVar13;
    *(undefined4 *)(iVar16 + 0x10d0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d5e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d62);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d66);
    *puVar11 = *puVar19;
    *(undefined4 *)(iVar16 + 0x1898) = uVar10;
    *(undefined4 *)(iVar16 + 0x189c) = uVar13;
    *(undefined4 *)(iVar16 + 0x18a0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d6e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d72);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d76);
    *(undefined4 *)(iVar16 + 0x18a4) = *(undefined4 *)(iVar12 + 0x97d6a);
    *(undefined4 *)(iVar16 + 0x18a8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18ac) = uVar13;
    *(undefined4 *)(iVar16 + 0x18b0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d7e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d82);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d86);
    *(undefined4 *)(iVar16 + 0x18b4) = *(undefined4 *)(iVar12 + 0x97d7a);
    *(undefined4 *)(iVar16 + 0x18b8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18bc) = uVar13;
    *(undefined4 *)(iVar16 + 0x18c0) = uVar14;
    uVar10 = *(undefined4 *)(iVar12 + 0x97d8e);
    uVar13 = *(undefined4 *)(iVar12 + 0x97d92);
    uVar14 = *(undefined4 *)(iVar12 + 0x97d96);
    *(undefined4 *)(iVar16 + 0x18c4) = *puVar20;
    *(undefined4 *)(iVar16 + 0x18c8) = uVar10;
    *(undefined4 *)(iVar16 + 0x18cc) = uVar13;
    *(undefined4 *)(iVar16 + 0x18d0) = uVar14;
    iVar12 = *(int *)(iVar16 + 0x18d8);
    *(int *)(iVar16 + 0x18d8) = iVar12 + 1;
    fVar22 = *(float *)(param_1 + 0x6c) * fVar22;
    *(float *)(iVar16 + 0x1894) = fVar22 * *(float *)(iVar16 + 0x1894);
    *(float *)(iVar16 + 0x18a4) = fVar22 * *(float *)(iVar16 + 0x18a4);
    *(float *)(iVar16 + 0x18b4) = fVar22 * *(float *)(iVar16 + 0x18b4);
    *(float *)(iVar16 + 0x1898) = fVar22 * *(float *)(iVar16 + 0x1898);
    *(float *)(iVar16 + 0x18a8) = fVar22 * *(float *)(iVar16 + 0x18a8);
    *(float *)(iVar16 + 0x18b8) = fVar22 * *(float *)(iVar16 + 0x18b8);
    *(float *)(iVar16 + 0x189c) = *(float *)(iVar16 + 0x189c) * fVar21;
    *(float *)(iVar16 + 0x18ac) = *(float *)(iVar16 + 0x18ac) * fVar21;
    *(float *)(iVar16 + 0x18bc) = *(float *)(iVar16 + 0x18bc) * fVar21;
    *(int *)(iVar16 + 0x18d8) = iVar12 + 3;
    *(float *)(iVar16 + 0x18c4) = fVar5 + fVar22 * *(float *)(iVar16 + 0x18c4);
    *(float *)(iVar16 + 0x18c8) =
         ((fVar6 + fVar27 * fVar25) - fVar24) + fVar22 * *(float *)(iVar16 + 0x18c8);
    *(float *)(iVar16 + 0x18cc) = fVar21 + *(float *)(iVar16 + 0x18cc) * fVar21;
    FUN_0008d434(iVar16,1);
    local_64 = uVar2;
    local_63 = uVar3;
    local_62 = uVar4;
    local_61 = local_100;
    FUN_000a344c(&local_64,fVar21,fVar23,fVar29,fVar26);
    FUN_000995e0(*(undefined4 *)(param_1 + 8));
  }
  uVar10 = *(undefined4 *)(param_1 + 0x10);
  FUN_00036320(local_e4,local_f8);
  local_54 = *(undefined *)(param_1 + 0x18);
  local_53 = *(undefined *)(param_1 + 0x19);
  local_52 = *(undefined *)(param_1 + 0x1a);
  local_51 = *(undefined *)(param_1 + 0x1b);
  FUN_00091528(uVar10,local_e4,
               *(float *)(param_1 + 0x70) + *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0xa4),
               *(float *)(param_1 + 0x74) + *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0xa8),
               DAT_000980ac,&local_54,(float)(ulonglong)*(uint *)(param_1 + 0x1c),
               (float)(ulonglong)*(uint *)(param_1 + 0x38),DAT_000980ac,0x11,&local_ac);
  local_e4[0] = *(int *)(iVar9 + local_fc) + 8;
  FUN_00097474(param_1,&local_ac);
  iVar9 = *(int *)(iVar9 + iVar1);
  *(undefined4 *)(iVar9 + 0x804) = *(undefined4 *)(iVar9 + 0x104);
  *(undefined4 *)(iVar9 + 0x808) = *(undefined4 *)(iVar9 + 0x108);
  *(undefined4 *)(iVar9 + 0x80c) = *(undefined4 *)(iVar9 + 0x10c);
  *(undefined4 *)(iVar9 + 0x810) = *(undefined4 *)(iVar9 + 0x110);
  *(undefined4 *)(iVar9 + 0x814) = *(undefined4 *)(iVar9 + 0x114);
  *(undefined4 *)(iVar9 + 0x818) = *(undefined4 *)(iVar9 + 0x118);
  *(undefined4 *)(iVar9 + 0x81c) = *(undefined4 *)(iVar9 + 0x11c);
  *(undefined4 *)(iVar9 + 0x820) = *(undefined4 *)(iVar9 + 0x120);
  *(undefined4 *)(iVar9 + 0x824) = *(undefined4 *)(iVar9 + 0x124);
  *(undefined4 *)(iVar9 + 0x828) = *(undefined4 *)(iVar9 + 0x128);
  *(undefined4 *)(iVar9 + 0x82c) = *(undefined4 *)(iVar9 + 300);
  *(undefined4 *)(iVar9 + 0x830) = *(undefined4 *)(iVar9 + 0x130);
  *(undefined4 *)(iVar9 + 0x834) = *(undefined4 *)(iVar9 + 0x134);
  *(undefined4 *)(iVar9 + 0x838) = *(undefined4 *)(iVar9 + 0x138);
  *(undefined4 *)(iVar9 + 0x83c) = *(undefined4 *)(iVar9 + 0x13c);
  *(undefined4 *)(iVar9 + 0x840) = *(undefined4 *)(iVar9 + 0x140);
  *(int *)(iVar9 + 0x848) = *(int *)(iVar9 + 0x848) + 1;
  *(undefined4 *)(iVar9 + 0x104c) = *(undefined4 *)(iVar9 + 0x94c);
  *(undefined4 *)(iVar9 + 0x1050) = *(undefined4 *)(iVar9 + 0x950);
  *(undefined4 *)(iVar9 + 0x1054) = *(undefined4 *)(iVar9 + 0x954);
  *(undefined4 *)(iVar9 + 0x1058) = *(undefined4 *)(iVar9 + 0x958);
  *(undefined4 *)(iVar9 + 0x105c) = *(undefined4 *)(iVar9 + 0x95c);
  *(undefined4 *)(iVar9 + 0x1060) = *(undefined4 *)(iVar9 + 0x960);
  *(undefined4 *)(iVar9 + 0x1064) = *(undefined4 *)(iVar9 + 0x964);
  *(undefined4 *)(iVar9 + 0x1068) = *(undefined4 *)(iVar9 + 0x968);
  *(undefined4 *)(iVar9 + 0x106c) = *(undefined4 *)(iVar9 + 0x96c);
  *(undefined4 *)(iVar9 + 0x1070) = *(undefined4 *)(iVar9 + 0x970);
  *(undefined4 *)(iVar9 + 0x1074) = *(undefined4 *)(iVar9 + 0x974);
  *(undefined4 *)(iVar9 + 0x1078) = *(undefined4 *)(iVar9 + 0x978);
  *(undefined4 *)(iVar9 + 0x107c) = *(undefined4 *)(iVar9 + 0x97c);
  *(undefined4 *)(iVar9 + 0x1080) = *(undefined4 *)(iVar9 + 0x980);
  *(undefined4 *)(iVar9 + 0x1084) = *(undefined4 *)(iVar9 + 0x984);
  *(undefined4 *)(iVar9 + 0x1088) = *(undefined4 *)(iVar9 + 0x988);
  *(int *)(iVar9 + 0x1090) = *(int *)(iVar9 + 0x1090) + 1;
  return;
}



