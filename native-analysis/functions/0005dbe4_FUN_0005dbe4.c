/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005dbe4 FUN_0005dbe4 */

void FUN_0005dbe4(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  int local_12c [7];
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  int local_ec;
  undefined4 local_e8;
  int local_e4;
  undefined4 local_e0;
  undefined auStack_dc [64];
  undefined4 local_9c [8];
  undefined local_7c;
  undefined4 local_78 [8];
  undefined local_58;
  int local_54;
  
  iVar7 = DAT_0005e030;
  iVar15 = DAT_0005e02c + 0x5dbfe;
  local_54 = **(int **)(iVar15 + DAT_0005e030);
  iVar8 = FUN_0002f60c(*(undefined4 *)(param_1 + 0xf0));
  if ((0 < *(int *)(param_1 + 0xf0)) && (iVar9 = FUN_0002f5ec(), iVar9 == 0)) {
    *(undefined *)(param_1 + 0x27) = 1;
    goto LAB_0005dc22;
  }
  if (**(int **)(iVar15 + DAT_0005e034) < 0x10) {
    iVar14 = **(int **)(iVar15 + DAT_0005e034) + -1;
    *(int *)(param_1 + 0xa4) = iVar14;
    iVar9 = DAT_0005e38c;
    if (0 < iVar14) goto LAB_0005dc4a;
LAB_0005dc56:
    fVar24 = DAT_0005e37c;
    fVar19 = DAT_0005e378;
    fVar26 = DAT_0005dfdc;
    fVar22 = DAT_0005dfd8;
    if ((int)((uint)(*(float *)(DAT_0005e03c + 0x5dc7c) < DAT_0005dfd4) << 0x1f) < 0) {
      iVar11 = 0;
      *(float *)(DAT_0005e03c + 0x5dc7c) = param_2 + *(float *)(DAT_0005e03c + 0x5dc7c);
      iVar14 = param_1;
      do {
        fVar19 = *(float *)(iVar14 + 0xac);
        bVar4 = (byte)(((uint)(fVar19 == fVar22) << 0x1e) >> 0x18);
        cVar18 = -((char)((byte)(((uint)(fVar19 < fVar22) << 0x1f) >> 0x18) | bVar4) >> 7);
        if ((!(bool)(bVar4 >> 6) && (bool)cVar18 == (NAN(fVar19) || NAN(fVar22))) &&
           (cVar18 != '\0')) {
          fVar19 = fVar19 + param_2 * fVar26;
          if (fVar19 != fVar22 && fVar19 < fVar22 == (NAN(fVar19) || NAN(fVar22))) {
            fVar19 = fVar22;
          }
          *(float *)(iVar14 + 0xac) = fVar19;
        }
        iVar11 = iVar11 + 1;
        iVar14 = iVar14 + 4;
      } while (iVar11 != 0x10);
    }
    else {
      fVar22 = *(float *)(param_1 + 0xac);
      iVar11 = 0;
      iVar14 = param_1;
      if (fVar22 != 0.0 && fVar22 < 0.0 == NAN(fVar22)) {
        do {
          fVar22 = fVar22 + param_2 * fVar24;
          if ((int)((uint)(fVar22 < 0.0) << 0x1f) < 0) {
            fVar22 = fVar19;
          }
          iVar11 = iVar11 + 1;
          *(float *)(iVar14 + 0xac) = fVar22;
          if (iVar11 == 0x10) goto LAB_0005dcb0;
          fVar22 = *(float *)(iVar14 + 0xb0);
          iVar14 = iVar14 + 4;
        } while (fVar22 != 0.0 && fVar22 < 0.0 == NAN(fVar22));
      }
      *(float *)(param_1 + iVar11 * 4 + 0xac) = DAT_0005e378;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xa4) = 0xf;
LAB_0005dc4a:
    iVar14 = DAT_0005e3a0;
    fVar24 = DAT_0005e388;
    fVar19 = DAT_0005e37c;
    fVar26 = DAT_0005e378;
    fVar22 = DAT_0005e364;
    iVar9 = DAT_0005e038;
    if (*(int *)(*(int *)(iVar15 + DAT_0005e038) + 4) != 1) goto LAB_0005dc56;
    if (*(int *)(param_1 + 0xa8) == **(int **)(iVar15 + DAT_0005e3a0)) {
      iVar14 = *(int *)(param_1 + 0xa4);
      if (0 < iVar14) {
        iVar16 = 0;
        iVar11 = param_1;
        do {
          if ((int)((uint)(*(float *)(iVar11 + 0xac) < fVar22) << 0x1f) < 0) {
            fVar26 = *(float *)(iVar11 + 0xac) + param_2 * fVar24;
            if (fVar26 != fVar22 && fVar26 < fVar22 == (NAN(fVar26) || NAN(fVar22))) {
              fVar26 = fVar22;
            }
            *(float *)(iVar11 + 0xac) = fVar26;
          }
          iVar16 = iVar16 + 1;
          iVar11 = iVar11 + 4;
        } while (iVar16 < iVar14);
      }
      *(float *)((int)&DAT_0005e36c + DAT_0005e3a4) = DAT_0005e378;
    }
    else {
      iVar16 = 0;
      iVar11 = param_1;
      do {
        fVar22 = *(float *)(iVar11 + 0xac);
        if (fVar22 == 0.0 || fVar22 < 0.0 != NAN(fVar22)) {
          *(float *)(param_1 + iVar16 * 4 + 0xac) = DAT_0005e378;
          if (iVar16 == 0) {
            *(undefined4 *)(param_1 + 0xa8) = **(undefined4 **)(iVar15 + iVar14);
          }
          break;
        }
        fVar22 = fVar22 + param_2 * fVar19;
        if ((int)((uint)(fVar22 < 0.0) << 0x1f) < 0) {
          fVar22 = fVar26;
        }
        iVar16 = iVar16 + 1;
        *(float *)(iVar11 + 0xac) = fVar22;
        iVar11 = iVar11 + 4;
      } while (iVar16 != 0x10);
    }
  }
LAB_0005dcb0:
  if (*(char *)(param_1 + 0x70) == '\0') {
    iVar14 = *(int *)(param_1 + 0x78);
    fVar26 = *(float *)(param_1 + 0x74);
    fVar22 = (float)(longlong)iVar8;
  }
  else {
    fVar26 = (float)(longlong)iVar8;
    *(undefined *)(param_1 + 0x70) = 0;
    iVar14 = (int)fVar26;
    *(float *)(param_1 + 0x74) = fVar26;
    *(int *)(param_1 + 0x78) = iVar14;
    fVar22 = fVar26;
  }
  fVar27 = DAT_0005dff0;
  fVar6 = DAT_0005dfec;
  fVar21 = DAT_0005dfe8;
  fVar5 = DAT_0005dfe4;
  fVar24 = DAT_0005dfe0;
  fVar19 = DAT_0005dfd8;
  fVar20 = DAT_0005dfe4;
  if (iVar8 < 0) {
    fVar20 = DAT_0005dfe0;
  }
  fVar25 = ((fVar22 + fVar20) - fVar26) * DAT_0005dfe8;
  iVar11 = FUN_0002f5f8(0);
  iVar16 = *(int *)(iVar15 + iVar9);
  fVar20 = fVar19;
  if (*(int *)(iVar16 + 4) == 2) {
    fVar20 = fVar27;
  }
  if ((int)((uint)(fVar25 < (float)(longlong)iVar11 * fVar6 * fVar20) << 0x1f) < 0) {
    fVar26 = *(float *)(param_1 + 0x74);
    if (-1 < iVar8) {
      fVar24 = fVar5;
    }
    fVar21 = ((fVar24 + fVar22) - fVar26) * fVar21;
  }
  else {
    iVar11 = FUN_0002f5f8(0);
    if (*(int *)(iVar16 + 4) != 2) {
      fVar27 = fVar19;
    }
    fVar21 = (float)(longlong)iVar11 * fVar6 * fVar27;
  }
  iVar11 = DAT_0005e040;
  sVar12 = (short)DAT_0005e040 + -0x22aa;
  *(float *)(param_1 + 0x74) = fVar26 + fVar21;
  iVar16 = (int)(fVar26 + fVar21);
  *(int *)(param_1 + 0x78) = iVar16;
  fVar22 = *(float *)(iVar11 + 0x5dd76);
  bVar1 = fVar22 < 0.0;
  bVar2 = fVar22 != 0.0;
  bVar3 = NAN(fVar22);
  if (bVar2 && bVar1 == bVar3) {
    fVar22 = fVar22 - param_2;
  }
  if (bVar2 && bVar1 == bVar3) {
    *(float *)(iVar11 + 0x5dd76) = fVar22;
  }
  fVar22 = DAT_0005e374;
  if (bVar2 && bVar1 == bVar3) {
    iVar16 = *(int *)(param_1 + 0x78);
  }
  if (iVar14 < iVar16) {
    if ((((*(float *)(DAT_0005e044 + 0x5dda8) <= 0.0) &&
         (iVar14 = *(int *)(iVar15 + iVar9), *(int *)(iVar14 + 4) == 2)) &&
        (iVar11 = *(int *)(iVar14 + 0x168), iVar11 != 0)) &&
       ((0 < *(int *)(iVar11 + 0x74) &&
        (fVar22 = *(float *)(iVar11 + 0x78), fVar22 != 0.0 && fVar22 < 0.0 == NAN(fVar22))))) {
      *(undefined4 *)(DAT_0005e044 + 0x5dda8) = DAT_0005e380;
      uVar17 = *(undefined4 *)(iVar14 + 0x18c);
      local_e4 = DAT_0005e390 + 0x5e20e;
      local_e0 = *(undefined4 *)(iVar15 + DAT_0005e394);
      local_58 = 1;
      local_78[0] = 0;
      (**(code **)(DAT_0005e390 + 0x5e216))(&local_e4,local_78);
      FUN_00073a7c(uVar17,DAT_0005e398 + 0x5e22c,0x3f800000,local_78);
      FUN_0001d388(local_78);
      local_e4 = DAT_0005e39c + 0x5e244;
    }
    fVar26 = DAT_0005dff4;
    *(undefined2 *)(param_1 + 0x72) = 0x8000;
LAB_0005dda2:
    fVar26 = fVar26 + param_2 * DAT_0005dff8;
    uVar23 = (uint)(0.0 < fVar26) * (int)fVar26;
    uVar10 = uVar23 & 0xffff;
    *(short *)(param_1 + 0x72) = (short)uVar23;
  }
  else {
    uVar10 = (uint)*(ushort *)(param_1 + 0x72);
    fVar26 = (float)(longlong)(int)uVar10;
    if (fVar26 != DAT_0005e36c && fVar26 < DAT_0005e36c == (NAN(fVar26) || NAN(DAT_0005e36c)))
    goto LAB_0005dda2;
    if (uVar10 != 0) {
      fVar26 = fVar26 + param_2 * DAT_0005e370;
      uVar23 = (uint)(0.0 < fVar26) * (int)fVar26;
      uVar10 = uVar23 & 0xffff;
      fVar26 = (float)(longlong)(int)uVar10;
      *(short *)(param_1 + 0x72) = (short)uVar23;
      bVar1 = fVar26 < fVar22;
      bVar2 = fVar26 != fVar22;
      bVar3 = NAN(fVar26) || NAN(fVar22);
      if (bVar2 && bVar1 == bVar3) {
        sVar12 = 0;
      }
      if (bVar2 && bVar1 == bVar3) {
        *(short *)(param_1 + 0x72) = sVar12;
      }
      if (bVar2 && bVar1 == bVar3) {
        uVar10 = 0;
      }
    }
  }
  fVar22 = (float)FUN_000927b8(uVar10);
  fVar19 = DAT_0005dffc + fVar22 * DAT_0005dff0;
  fVar26 = *(float *)(*(int *)(iVar15 + iVar9) + 0x10);
  fVar22 = DAT_0005dfd8;
  if ((0.0 < fVar26) &&
     (fVar22 = DAT_0005e368, fVar26 < DAT_0005e364 != (NAN(fVar26) || NAN(DAT_0005e364)))) {
    fVar22 = fVar26 + DAT_0005e364;
  }
  iVar14 = *(int *)(iVar15 + iVar9);
  *(float *)(param_1 + 0x84) = fVar22;
  if ((*(char *)(iVar14 + 8) == '\0') || (iVar8 == 0)) {
    iVar14 = FUN_0002f508();
    if (iVar14 == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      iVar14 = FUN_0002f508();
      if (*(int *)(param_1 + 0x78) < iVar14) {
        uVar17 = FUN_0002f508();
        *(undefined4 *)(param_1 + 0x7c) = uVar17;
      }
      else {
        *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x78);
      }
    }
  }
  fVar26 = DAT_0005e00c;
  fVar22 = DAT_0005e008;
  fVar24 = *(float *)(*(int *)(iVar15 + iVar9) + 0x10);
  iVar14 = *(int *)(iVar15 + iVar9);
  if ((int)((uint)(fVar24 < 0.0) << 0x1f) < 0) {
    fVar24 = -fVar24;
  }
  local_f8 = DAT_0005e000 - fVar24 * DAT_0005e004;
  local_f4 = DAT_0005e00c - fVar24 * DAT_0005e008;
  local_f0 = DAT_0005e008 - fVar24 * DAT_0005e008;
  *(float *)(param_1 + 8) = local_f8;
  *(float *)(param_1 + 0xc) = local_f4;
  *(float *)(param_1 + 0x10) = local_f0;
  uVar17 = DAT_0005e010;
  fVar24 = *(float *)(iVar14 + 0x10);
  if (fVar24 == fVar22 || fVar24 < fVar22 != (NAN(fVar24) || NAN(fVar22))) {
    local_10c = *(float *)(param_1 + 0xc) + fVar22;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xf0);
    local_108 = *(float *)(param_1 + 0x10) + fVar22;
    local_110 = *(float *)(param_1 + 8) + DAT_0005e360;
    *(float *)(param_1 + 0x88) = local_110;
    *(float *)(param_1 + 0x8c) = local_10c;
    *(float *)(param_1 + 0x90) = local_108;
  }
  else {
    local_100 = fVar26;
    local_fc = fVar22;
    local_104 = DAT_0005e010;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0xf0) + 1;
    *(undefined4 *)(param_1 + 0x88) = uVar17;
    *(float *)(param_1 + 0x8c) = fVar26;
    *(float *)(param_1 + 0x90) = fVar22;
    FUN_0008f060(auStack_dc,0x40,DAT_0005e048 + 0x5de90,iVar8);
    uVar17 = *(undefined4 *)(iVar14 + 0x5c);
    FUN_00036320(local_12c,auStack_dc);
    fVar26 = (float)FUN_00090978(uVar17,local_12c);
    local_12c[0] = *(int *)(iVar15 + DAT_0005e04c) + 8;
    fVar26 = DAT_0005e020 - fVar26 * *(float *)(param_1 + 0x84) * DAT_0005e018 * DAT_0005e01c;
    fVar24 = *(float *)(iVar14 + 0x10);
    *(float *)(param_1 + 0x8c) =
         *(float *)(param_1 + 0x8c) + (DAT_0005e014 - *(float *)(param_1 + 0x8c)) * fVar24;
    *(float *)(param_1 + 0x88) =
         *(float *)(param_1 + 0x88) + (fVar26 - *(float *)(param_1 + 0x88)) * fVar24;
    *(float *)(param_1 + 0x90) =
         *(float *)(param_1 + 0x90) + (fVar22 - *(float *)(param_1 + 0x90)) * fVar24;
  }
  fVar22 = DAT_0005dfd8;
  fVar26 = *(float *)(*(int *)(iVar15 + iVar9) + 0x10);
  if ((fVar26 == DAT_0005e024 || fVar26 < DAT_0005e024 != (NAN(fVar26) || NAN(DAT_0005e024))) ||
     (bVar4 = *(byte *)(*(int *)(*(int *)(iVar15 + iVar9) + 0x50) + 0x110), uVar13 = (ushort)bVar4,
     bVar4 == 0)) {
    fVar22 = *(float *)(param_1 + 0x9c) + param_2 * DAT_0005e358;
    if ((int)((uint)(fVar22 < DAT_0005e35c) << 0x1f) < 0) {
      fVar22 = DAT_0005e35c;
    }
    *(float *)(param_1 + 0x9c) = fVar22;
  }
  else {
    fVar26 = *(float *)(param_1 + 0x9c);
    fVar24 = fVar26 + param_2 * DAT_0005e028;
    bVar1 = fVar24 < DAT_0005dfd8;
    bVar2 = fVar24 != DAT_0005dfd8;
    bVar3 = NAN(DAT_0005dfd8);
    if (bVar2 && bVar1 == (NAN(fVar24) || bVar3)) {
      *(float *)(param_1 + 0x9c) = DAT_0005dfd8;
    }
    if (bVar2 && bVar1 == (NAN(fVar24) || bVar3)) {
LAB_0005e2ba:
      fVar22 = (float)(longlong)(int)(uint)*(ushort *)(param_1 + 0xa0) + param_2 * DAT_0005e384;
      fVar24 = *(float *)(param_1 + 0x9c);
      *(ushort *)(param_1 + 0xa0) = (ushort)(0.0 < fVar22) * (short)(int)fVar22;
    }
    else {
      *(float *)(param_1 + 0x9c) = fVar24;
      if (fVar24 != fVar22) {
        uVar13 = 0;
      }
      if (fVar24 == fVar22) goto LAB_0005e2ba;
      *(ushort *)(param_1 + 0xa0) = uVar13;
    }
    if ((fVar24 != 0.0 && fVar24 < 0.0 == NAN(fVar24)) && (fVar26 <= 0.0)) {
      uVar17 = *(undefined4 *)(*(int *)(iVar15 + iVar9) + 0x18c);
      local_ec = DAT_0005e050 + 0x5dfa2;
      local_e8 = *(undefined4 *)(iVar15 + DAT_0005e054);
      local_7c = 1;
      local_9c[0] = 0;
      (**(code **)(DAT_0005e050 + 0x5dfaa))(&local_ec,local_9c);
      FUN_00073a7c(uVar17,DAT_0005e058 + 0x5dfbe,0x3f800000,local_9c);
      FUN_0001d388(local_9c);
      local_ec = DAT_0005e05c + 0x5dfd6;
    }
  }
  *(float *)(param_1 + 0x14) = fVar19;
  *(float *)(param_1 + 0x18) = fVar19;
LAB_0005dc22:
  if (local_54 == **(int **)(iVar15 + iVar7)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



