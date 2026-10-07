/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00026804 FUN_00026804 */

void FUN_00026804(int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined2 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint uVar24;
  byte bVar25;
  bool bVar26;
  byte bVar27;
  byte bVar28;
  int iVar29;
  float fVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint local_298;
  uint local_294;
  uint local_290;
  uint local_288;
  int local_27c;
  int local_274;
  float local_1f8;
  float local_1f4;
  float local_1e8;
  float local_1e4;
  float local_1d8;
  float local_1d4;
  float local_1c8;
  float local_1c4;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined auStack_1a8 [16];
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  undefined4 local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  undefined auStack_f8 [128];
  undefined4 local_78 [8];
  undefined local_58;
  int local_54;
  
  iVar6 = DAT_00026a60;
  iVar5 = DAT_00026a5c;
  iVar20 = DAT_00026a58 + 0x2681a;
  local_54 = **(int **)(iVar20 + DAT_00026a5c);
  *(float *)(param_1 + 0x6c) = DAT_00026a74;
  puVar15 = *(uint **)(iVar20 + iVar6);
  uVar9 = puVar15[2];
  uVar1 = (ulonglong)*puVar15 * (ulonglong)uVar9 +
          CONCAT44(uVar9 * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
  uVar12 = (uint)uVar1;
  uVar16 = puVar15[5] + (int)(uVar1 >> 0x20);
  if (0x2aa8 < (uint)((ulonglong)uVar16 * 0x5550 >> 0x20)) {
    lVar2 = (ulonglong)uVar9 * (uVar1 & 0xffffffff) +
            CONCAT44(uVar9 * uVar16 + uVar12 * puVar15[3],puVar15[4]);
    uVar12 = (uint)lVar2;
    uVar16 = puVar15[5] + (int)((ulonglong)lVar2 >> 0x20);
  }
  puVar15 = *(uint **)(iVar20 + iVar6);
  uVar24 = puVar15[2];
  uVar9 = puVar15[4];
  local_288 = (uint)((ulonglong)uVar24 * (ulonglong)uVar12);
  uVar13 = uVar9 + local_288;
  uVar12 = puVar15[5] +
           uVar24 * uVar16 + uVar12 * puVar15[3] +
           (int)((ulonglong)uVar24 * (ulonglong)uVar12 >> 0x20) + (uint)CARRY4(uVar9,local_288);
  *puVar15 = uVar13;
  puVar15[1] = uVar12;
  if (0x2aa8 < (uint)((ulonglong)uVar12 * 0x5550 >> 0x20)) {
    lVar2 = (ulonglong)uVar24 * (ulonglong)uVar13 +
            CONCAT44(uVar24 * uVar12 + uVar13 * puVar15[3],uVar9);
    *puVar15 = (uint)lVar2;
    puVar15[1] = puVar15[5] + (int)((ulonglong)lVar2 >> 0x20);
  }
  FUN_000220bc(&local_1f8,param_1 + 0xd0);
  iVar11 = DAT_00026a64;
  local_1c8 = local_1e8 * DAT_00026a74 + local_1f8 * DAT_00026a74 + local_1d8 + local_1c8;
  fVar30 = local_1e4 * DAT_00026a74 + local_1f4 * DAT_00026a74 + local_1d4 + local_1c4;
  if (*(char *)(*(int *)(iVar20 + DAT_00026a64) + 8) != '\0') {
    *(undefined *)(param_1 + 0x10d) = 0;
  }
  iVar19 = (uint)(fVar30 < 0.0) << 0x1f;
  iVar29 = (uint)(local_1c8 < 0.0) << 0x1f;
  if (-1 < iVar19) {
    local_1f4 = fVar30;
  }
  if (iVar19 < 0) {
    local_1f4 = -fVar30;
  }
  if (-1 < iVar29) {
    local_1c4 = local_1c8;
  }
  if (iVar29 < 0) {
    local_1c4 = -local_1c8;
  }
  local_1f4 = local_1f4 + local_1c4;
  if (local_1f4 != 0.0 && local_1f4 < 0.0 == NAN(local_1f4)) {
    iVar19 = FUN_00092918(fVar30,local_1c8);
    uVar9 = *(ushort *)(param_1 + 0x70) - 0x7ff8 & 0xffff;
    fVar37 = (float)(ulonglong)(iVar19 - 0x3ffcU & 0xffff) / DAT_00027634 + DAT_00027638;
    fVar30 = (float)(ulonglong)uVar9 / DAT_0002763c;
    fVar8 = fVar37 - fVar30;
    iVar19 = (uint)(fVar8 < 0.0) << 0x1f;
    if (-1 < iVar19) {
      uVar9 = 0;
    }
    if (iVar19 < 0) {
      uVar9 = 1;
    }
    if (uVar9 == 0) {
      if (fVar8 != DAT_00027640 && fVar8 < DAT_00027640 == (NAN(fVar8) || NAN(DAT_00027640))) {
LAB_000274c0:
        bVar25 = (byte)(((uint)(fVar37 < fVar30) << 0x1f) >> 0x18);
        bVar4 = (byte)(((uint)(fVar37 == fVar30) << 0x1e) >> 0x18);
        bVar27 = (byte)(((uint)(NAN(fVar37) || NAN(fVar30)) << 0x1c) >> 0x18);
        bVar28 = bVar25 | bVar4 | bVar27;
        bVar25 = bVar25 >> 7;
        bVar26 = (bool)(bVar4 >> 6);
        bVar27 = bVar27 >> 4;
        if (bVar26 || bVar25 != bVar27) {
          fVar8 = DAT_00027638;
        }
        if (bVar26 || bVar25 != bVar27) {
          fVar37 = fVar37 + fVar8;
        }
        if (!bVar26 && bVar25 == bVar27) {
          fVar30 = DAT_00027638;
        }
        if (bVar26 || bVar25 != bVar27) {
          fVar30 = fVar37 - fVar30;
        }
        if (!bVar26 && bVar25 == bVar27) {
          fVar8 = fVar8 - fVar30;
        }
        if (bVar26 || bVar25 != bVar27) {
          bVar28 = (byte)(((uint)(fVar30 < 0.0) << 0x1f) >> 0x18);
        }
        if (!bVar26 && bVar25 == bVar27) {
          bVar28 = (byte)(((uint)(fVar8 < 0.0) << 0x1f) >> 0x18);
        }
        if (-1 < (char)bVar28) {
          uVar9 = 0;
        }
        if ((char)bVar28 < '\0') {
          uVar9 = 1;
        }
      }
    }
    else {
      fVar35 = -fVar8;
      if (fVar35 != DAT_00027640 && fVar35 < DAT_00027640 == (NAN(fVar35) || NAN(DAT_00027640)))
      goto LAB_000274c0;
    }
    if (uVar9 != 0) {
      bVar26 = true;
      goto LAB_00026982;
    }
  }
  bVar26 = false;
LAB_00026982:
  fVar37 = *(float *)(param_1 + 0x74);
  puVar15 = *(uint **)(iVar20 + iVar6);
  lVar2 = (ulonglong)*puVar15 * (ulonglong)puVar15[2] +
          CONCAT44(puVar15[2] * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
  local_298 = (uint)lVar2;
  local_294 = puVar15[5] + (int)((ulonglong)lVar2 >> 0x20);
  *puVar15 = local_298;
  puVar15[1] = local_294;
  fVar8 = DAT_00027650;
  fVar30 = DAT_00027634;
  local_274 = CARRY4(local_294,local_294) + 2;
  if ((*(char *)(param_1 + 0x10d) != '\0') && (*(int *)(param_1 + 0x90) < 2)) {
    local_10c = *(undefined4 *)(param_1 + 0x10);
    local_108 = *(undefined4 *)(param_1 + 0x14);
    local_104 = *(undefined4 *)(param_1 + 0x18);
    fVar35 = fVar37 * DAT_00027648 * DAT_0002764c;
    FUN_00033ffc(&local_10c,
                 (float)(ulonglong)*(ushort *)(param_1 + 0x70) / DAT_00027634 + DAT_00027650,fVar35,
                 1);
    local_118 = *(undefined4 *)(param_1 + 0x10);
    local_114 = *(undefined4 *)(param_1 + 0x14);
    local_110 = *(undefined4 *)(param_1 + 0x18);
    FUN_00033ffc(&local_118,(float)(ulonglong)*(ushort *)(param_1 + 0x70) / fVar30 - fVar8,fVar35,1)
    ;
    fVar37 = fVar37 * DAT_00027644;
    local_274 = *(int *)(DAT_00027658 + 0x2760a);
    uVar23 = FUN_00055e9c();
    local_124 = *(undefined4 *)(param_1 + 0x10);
    local_120 = *(undefined4 *)(param_1 + 0x14);
    local_11c = *(undefined4 *)(param_1 + 0x18);
    FUN_00056d8c(uVar23,&local_124,*(undefined4 *)(param_1 + 0x90));
    local_298 = *puVar15;
    local_294 = puVar15[1];
  }
  iVar19 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00026a68 + 0x269dc);
  if (*(int *)(iVar19 + 0x2d0) == 0x32) {
    fVar37 = fVar37 * DAT_00027644;
    local_274 = *(int *)(DAT_00027654 + 0x27544);
  }
  if ((((*(char *)(*(int *)(iVar20 + iVar11) + 9) == '\0') ||
       (iVar29 = FUN_00021694(param_1), iVar29 == 0)) || (*(int *)(param_1 + 0x90) < 2)) &&
     (iVar31 = DAT_00026a70, iVar29 = DAT_00026a6c, fVar36 = DAT_00026a54, fVar34 = DAT_00026a50,
     fVar35 = DAT_00026a4c, fVar8 = DAT_00026a48, fVar30 = DAT_00026a44, 0 < local_274)) {
    iVar19 = 0;
    while( true ) {
      piVar17 = *(int **)(iVar20 + iVar6);
      uVar13 = piVar17[2];
      uVar1 = (ulonglong)local_298;
      iVar10 = local_298 * piVar17[3];
      local_298 = (uint)(uVar13 * uVar1);
      uVar9 = local_298 + piVar17[4];
      uVar16 = uVar13 * local_294 + iVar10 + (int)(uVar13 * uVar1 >> 0x20) +
               piVar17[5] + (uint)CARRY4(local_298,piVar17[4]);
      lVar2 = (ulonglong)uVar13 * (ulonglong)uVar9;
      uVar12 = (uint)lVar2;
      uVar3 = (undefined2)((ulonglong)uVar16 * 0xfff0 >> 0x20);
      iVar10 = uVar13 * uVar16 + uVar9 * piVar17[3] + (int)((ulonglong)lVar2 >> 0x20);
      uVar9 = piVar17[5] + iVar10 + (uint)CARRY4(piVar17[4],uVar12);
      *piVar17 = piVar17[4] + uVar12;
      piVar17[1] = uVar9;
      fVar33 = (fVar35 + ((float)(ulonglong)((uVar9 >> 0xd) - (uint)(uVar9 * 0x80000 < uVar9)) /
                         fVar30) * fVar8) * fVar37 * (fVar36 + (float)(longlong)iVar19 * fVar34);
      iVar10 = FUN_0002c85c(uVar9 >> 0xd,iVar10,uVar9 * 0x7ffff);
      uVar9 = (uint)*(byte *)(param_1 + 0x3c);
      if (*(char *)(param_1 + 0x10d) != '\0') {
        uVar9 = uVar9 + *(int *)(iVar29 + 0x26a1a);
      }
      local_13c = *(undefined4 *)(param_1 + 0x10);
      local_138 = *(undefined4 *)(param_1 + 0x14);
      local_134 = *(undefined4 *)(param_1 + 0x18);
      fVar7 = (float)FUN_000927b8(uVar3);
      local_12c = (float)FUN_000927c8(uVar3);
      local_130 = fVar7 * fVar33;
      local_12c = local_12c * fVar33;
      local_128 = DAT_00026a74;
      FUN_0002d1c0(iVar10,&local_13c,&local_130,0,uVar9);
      fVar7 = fVar35 - (float)(longlong)(iVar19 + -2) / (float)(longlong)local_274;
      fVar33 = DAT_00026a78;
      if ((DAT_00026a78 < fVar7) && (fVar33 = fVar7, fVar7 < fVar35 == (NAN(fVar7) || NAN(fVar35))))
      {
        fVar33 = fVar35;
      }
      *(float *)(iVar10 + 100) = *(float *)(iVar10 + 100) * fVar33;
      if (2 < iVar19) {
        *(float *)(iVar10 + 0x5c) =
             *(float *)(iVar10 + 0x5c) * *(float *)((int)&DAT_00026a54 + iVar31 + 2);
        *(float *)(iVar10 + 0x60) =
             *(float *)(iVar10 + 0x60) * *(float *)((int)&DAT_00026a54 + iVar31 + 2);
        fVar33 = *(float *)((int)&DAT_00026a50 + iVar31 + 2);
        *(float *)(iVar10 + 0x44) = *(float *)(iVar10 + 0x44) * fVar33;
        *(float *)(iVar10 + 0x48) = *(float *)(iVar10 + 0x48) * fVar33;
        *(float *)(iVar10 + 0x4c) = *(float *)(iVar10 + 0x4c) * fVar33;
      }
      iVar10 = DAT_00026f80;
      iVar19 = iVar19 + 1;
      if (iVar19 == local_274) break;
      local_298 = **(uint **)(iVar20 + iVar6);
      local_294 = (*(uint **)(iVar20 + iVar6))[1];
    }
    puVar15 = *(uint **)(iVar20 + iVar6);
    lVar2 = (ulonglong)*puVar15 * (ulonglong)puVar15[2] +
            CONCAT44(puVar15[2] * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
    uVar9 = puVar15[5] + (int)((ulonglong)lVar2 >> 0x20);
    *puVar15 = (uint)lVar2;
    puVar15[1] = uVar9;
    FUN_0008f060(auStack_f8,0x80,iVar10 + 0x26c82,
                 CARRY4(uVar9,uVar9) + CARRY4(uVar9 * 2,uVar9) + '\x01');
    local_78[0] = 0;
    uVar23 = *(undefined4 *)(*(int *)(iVar20 + iVar11) + 0x18c);
    local_100 = DAT_00026f84 + 0x26cb8;
    local_fc = *(undefined4 *)(iVar20 + DAT_00026f88);
    local_58 = 1;
    (**(code **)(DAT_00026f84 + 0x26cc0))(&local_100,local_78);
    FUN_00073a7c(uVar23,auStack_f8,0x3f800000,local_78);
    FUN_0001d388(local_78);
    local_100 = DAT_00026f8c + 0x26cea;
    iVar19 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00026f90 + 0x26cee);
    local_298 = *puVar15;
    local_294 = puVar15[1];
  }
  fVar30 = DAT_00026f60;
  fVar35 = *(float *)(iVar19 + 0x20c);
  iVar11 = *(int *)(iVar20 + iVar6);
  uVar16 = *(uint *)(iVar11 + 8);
  uVar13 = *(uint *)(iVar11 + 0x10);
  uVar12 = (uint)((ulonglong)uVar16 * (ulonglong)local_298);
  uVar9 = uVar12 + uVar13;
  uVar12 = uVar16 * local_294 + local_298 * *(int *)(iVar11 + 0xc) +
           (int)((ulonglong)uVar16 * (ulonglong)local_298 >> 0x20) +
           *(int *)(iVar11 + 0x14) + (uint)CARRY4(uVar12,uVar13);
  fVar8 = DAT_00026f58;
  if (0x2aa8 < (uint)((ulonglong)uVar12 * 0x5550 >> 0x20)) {
    lVar2 = (ulonglong)uVar16 * (ulonglong)uVar9 +
            CONCAT44(uVar16 * uVar12 + uVar9 * *(int *)(iVar11 + 0xc),uVar13);
    uVar9 = (uint)lVar2;
    uVar12 = *(int *)(iVar11 + 0x14) + (int)((ulonglong)lVar2 >> 0x20);
    fVar8 = (float)((ulonglong)uVar12 * 0x5550 >> 0x20);
  }
  fVar34 = DAT_00026f5c - fVar35;
  puVar15 = *(uint **)(iVar20 + iVar6);
  uVar13 = puVar15[2];
  uVar24 = puVar15[4];
  uVar22 = (uint)((ulonglong)uVar13 * (ulonglong)uVar9);
  uVar16 = uVar22 + uVar24;
  uVar9 = (int)((ulonglong)uVar13 * (ulonglong)uVar9 >> 0x20) + uVar13 * uVar12 + uVar9 * puVar15[3]
          + puVar15[5] + (uint)CARRY4(uVar22,uVar24);
  *puVar15 = uVar16;
  puVar15[1] = uVar9;
  fVar30 = fVar8 * fVar34 * fVar30;
  uVar12 = (uint)(0.0 < fVar30) * (int)fVar30 & 0xffff;
  fVar30 = DAT_00026f58;
  if (0x2aa8 < (uint)((ulonglong)uVar9 * 0x5550 >> 0x20)) {
    lVar2 = (ulonglong)uVar13 * (ulonglong)uVar16 +
            CONCAT44(uVar13 * uVar9 + uVar16 * puVar15[3],uVar24);
    uVar9 = puVar15[5] + (int)((ulonglong)lVar2 >> 0x20);
    *puVar15 = (uint)lVar2;
    puVar15[1] = uVar9;
    fVar30 = (float)((ulonglong)uVar9 * 0x5550 >> 0x20);
  }
  uVar16 = (uint)*(ushort *)(param_1 + 0x70);
  fVar30 = fVar30 * fVar34 * DAT_00026f60;
  uVar9 = (uint)(0.0 < fVar30) * (int)fVar30 & 0xffff;
  if (bVar26) {
    uVar13 = uVar16 + 0x7ff8 & 0xffff;
    *(short *)(param_1 + 0x70) = (short)(uVar16 + 0x7ff8);
    uVar9 = uVar13 - uVar9 & 0xffff;
    uVar13 = uVar13 + uVar12 & 0xffff;
    uVar12 = uVar9 + 0x7ff8 & 0xffff;
    fVar8 = (float)FUN_000927b8(uVar12);
    fVar30 = (float)FUN_000927c8(uVar12);
  }
  else {
    uVar13 = uVar9 + uVar16 & 0xffff;
    uVar9 = uVar16 - uVar12 & 0xffff;
    fVar8 = (float)FUN_000927b8(uVar13);
    fVar30 = (float)FUN_000927c8(uVar13);
  }
  fVar36 = fVar35 * DAT_00026f98;
  local_144 = fVar34 * *(float *)(param_1 + 0x20) + fVar30 * fVar37 * fVar35;
  local_148 = fVar34 * *(float *)(param_1 + 0x1c) + fVar8 * fVar37 * fVar35;
  local_140 = fVar36 + fVar34 * *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0xc4) = local_148;
  *(float *)(param_1 + 200) = local_144;
  *(float *)(param_1 + 0xcc) = local_140;
  if (bVar26) {
    uVar9 = uVar13 + 0x7ff8 & 0xffff;
    fVar8 = (float)FUN_000927b8(uVar9);
    fVar30 = (float)FUN_000927c8(uVar9);
  }
  else {
    fVar8 = (float)FUN_000927b8(uVar9);
    fVar30 = (float)FUN_000927c8(uVar9);
  }
  pfVar18 = (float *)(param_1 + 0x1c);
  local_150 = fVar34 * *(float *)(param_1 + 0x20) + fVar30 * fVar37 * fVar35;
  local_14c = fVar36 + fVar34 * *(float *)(param_1 + 0x24);
  local_154 = fVar34 * *pfVar18 + fVar8 * fVar37 * fVar35;
  *pfVar18 = local_154;
  *(float *)(param_1 + 0x20) = local_150;
  *(float *)(param_1 + 0x24) = local_14c;
  uVar23 = DAT_0002762c;
  if ((*(char *)(param_1 + 0x10d) == '\0') &&
     (*(int *)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00026f94 + 0x26eb2) + 0x2d0)
      != 0x32)) {
    cVar14 = '\0';
    if (*(char *)(param_1 + 0x10c) == '\0') {
      FUN_000302b4(param_1 + 0x98);
      cVar14 = *(char *)(param_1 + 0x10d);
    }
  }
  else {
    fVar8 = (float)FUN_000927b8(*(short *)(param_1 + 0x70) + 0x3ffc);
    fVar35 = (float)FUN_000927c8(*(short *)(param_1 + 0x70) + 0x3ffc);
    fVar30 = DAT_00027630;
    local_158 = uVar23;
    local_160 = (float)(longlong)(int)(fVar8 * fVar37) * DAT_00027630;
    local_15c = (float)(longlong)(int)(fVar35 * fVar37) * DAT_00027630;
    *(float *)(param_1 + 0xc4) = local_160;
    *(float *)(param_1 + 200) = local_15c;
    *(undefined4 *)(param_1 + 0xcc) = uVar23;
    fVar8 = (float)FUN_000927b8(*(short *)(param_1 + 0x70) + -0x3ffc);
    fVar35 = (float)FUN_000927c8(*(short *)(param_1 + 0x70) + -0x3ffc);
    local_164 = uVar23;
    local_16c = (float)(longlong)(int)(fVar8 * fVar37) * fVar30;
    local_168 = (float)(longlong)(int)(fVar35 * fVar37) * fVar30;
    *pfVar18 = local_16c;
    *(float *)(param_1 + 0x20) = local_168;
    *(undefined4 *)(param_1 + 0x24) = uVar23;
    cVar14 = *(char *)(param_1 + 0x10d);
  }
  iVar19 = 0;
  *(undefined *)(param_1 + 0xb4) = 1;
  fVar33 = DAT_00026f7c;
  fVar36 = DAT_00026f78;
  fVar34 = DAT_00026f74;
  fVar35 = DAT_00026f70;
  fVar37 = DAT_00026f6c;
  fVar8 = DAT_00026f68;
  fVar30 = DAT_00026f64;
  iVar11 = param_1;
  local_27c = param_1;
  do {
    fVar7 = *(float *)(iVar11 + 0xf0);
    fVar32 = *(float *)(iVar11 + 0xf4);
    if ((int)((uint)(fVar7 < 0.0) << 0x1f) < 0) {
      fVar7 = -fVar7;
    }
    if ((int)((uint)(fVar32 < 0.0) << 0x1f) < 0) {
      fVar32 = -fVar32;
    }
    local_178 = *(float *)(iVar11 + 0xf8);
    if ((int)((uint)(local_178 < 0.0) << 0x1f) < 0) {
      local_178 = -local_178;
    }
    local_178 = fVar7 + fVar32 + local_178;
    if (cVar14 == '\0') {
      local_178 = local_178 * fVar30;
    }
    else {
      local_178 = local_178 + local_178;
    }
    puVar15 = *(uint **)(iVar20 + iVar6);
    uVar13 = puVar15[3];
    uVar24 = puVar15[2];
    uVar22 = puVar15[4];
    uVar16 = puVar15[5];
    uVar1 = (ulonglong)*puVar15 * (ulonglong)uVar24 +
            CONCAT44(uVar24 * puVar15[1] + *puVar15 * uVar13,uVar22);
    uVar21 = uVar16 + (int)(uVar1 >> 0x20);
    lVar2 = (ulonglong)uVar24 * (uVar1 & 0xffffffff);
    local_290 = (uint)lVar2;
    uVar9 = local_290 + uVar22;
    uVar12 = uVar24 * uVar21 + (int)uVar1 * uVar13 + (int)((ulonglong)lVar2 >> 0x20) +
             uVar16 + CARRY4(local_290,uVar22);
    iVar31 = (int)((fVar37 + ((float)(ulonglong)
                                     ((uVar12 >> 0xd) - (uint)(uVar12 * 0x80000 < uVar12)) / fVar8)
                             * fVar30) * local_178);
    iVar29 = (int)((fVar37 + ((float)(ulonglong)
                                     ((uVar21 >> 0xd) - (uint)(uVar21 * 0x80000 < uVar21)) / fVar8)
                             * fVar30) * local_178);
    if (bVar26) {
      lVar2 = (ulonglong)uVar24 * (ulonglong)uVar9 +
              CONCAT44(uVar24 * uVar12 + uVar9 * uVar13,uVar22);
      uVar9 = (uint)lVar2;
      uVar16 = uVar16 + (int)((ulonglong)lVar2 >> 0x20);
      if (1 < (uVar16 >> 0x1e) + (uint)CARRY4(uVar16 * 4,uVar16)) {
        iVar29 = -iVar29;
      }
      if (iVar19 != 1) goto LAB_000270c6;
LAB_00027260:
      iVar29 = -iVar29;
    }
    else {
      lVar2 = (ulonglong)uVar24 * (ulonglong)uVar9 +
              CONCAT44(uVar24 * uVar12 + uVar9 * uVar13,uVar22);
      uVar9 = (uint)lVar2;
      uVar16 = uVar16 + (int)((ulonglong)lVar2 >> 0x20);
      if ((uVar16 >> 0x1e) + (uint)CARRY4(uVar16 * 4,uVar16) < 2) {
        iVar29 = -iVar29;
      }
      if (iVar19 == 0) goto LAB_00027260;
LAB_000270c6:
      iVar31 = -iVar31;
    }
    piVar17 = *(int **)(iVar20 + iVar6);
    uVar12 = piVar17[2];
    uVar13 = piVar17[4];
    uVar1 = (ulonglong)uVar12 * (ulonglong)uVar9 +
            CONCAT44(uVar12 * uVar16 + uVar9 * piVar17[3],uVar13);
    uVar9 = piVar17[5] + (int)(uVar1 >> 0x20);
    *piVar17 = (int)uVar1;
    piVar17[1] = uVar9;
    if ((char)(CARRY4(uVar9,uVar9) + CARRY4(uVar9 * 2,uVar9)) == '\0') {
      local_178 = (float)(longlong)iVar29 * fVar35;
      local_174 = DAT_00026f98;
      if ((int)((uint)(local_178 < 0.0) << 0x1f) < 0) {
        local_178 = (float)(longlong)iVar29 * fVar34;
      }
    }
    else {
      lVar2 = (ulonglong)uVar12 * (uVar1 & 0xffffffff);
      local_290 = (uint)lVar2;
      uVar9 = piVar17[5] +
              uVar12 * uVar9 + (int)uVar1 * piVar17[3] + (int)((ulonglong)lVar2 >> 0x20) +
              (uint)CARRY4(uVar13,local_290);
      *piVar17 = uVar13 + local_290;
      piVar17[1] = uVar9;
      local_178 = (((float)(ulonglong)((uVar9 >> 0xd) - (uint)(uVar9 * 0x80000 < uVar9)) / fVar8) *
                   fVar36 - fVar33) * local_178;
      local_174 = (float)(longlong)iVar29;
    }
    local_170 = (float)(longlong)-iVar31;
    iVar29 = iVar19 + 0xd;
    iVar19 = iVar19 + 1;
    *(float *)(iVar11 + 0xf0) = local_178;
    *(float *)(iVar11 + 0xf4) = local_174;
    *(float *)(iVar11 + 0xf8) = local_170;
    iVar29 = param_1 + iVar29 * 0x10;
    FUN_00022344(iVar29,0,0,0x3f800000,0x3ffc);
    local_188 = 0;
    local_17c = 0x3f800000;
    local_184 = 0;
    local_180 = 0;
    FUN_00022344(&local_188,0,0x3f800000,0,0x3ffc);
    local_198 = 0;
    local_18c = 0x3f800000;
    local_194 = 0;
    local_190 = 0;
    FUN_00022344(&local_198,0,0,0x3f800000,*(undefined2 *)(param_1 + 0x70));
    FUN_00021dd0(auStack_1a8,iVar29,&local_188);
    FUN_00021dd0(&local_1b8,auStack_1a8,&local_198);
    *(undefined4 *)(local_27c + 0xd0) = local_1b8;
    *(undefined4 *)(local_27c + 0xd4) = uStack_1b4;
    *(undefined4 *)(local_27c + 0xd8) = uStack_1b0;
    *(undefined4 *)(local_27c + 0xdc) = uStack_1ac;
    local_27c = local_27c + 0x10;
    if (iVar19 == 2) {
      if (local_54 == **(int **)(iVar20 + iVar5)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    cVar14 = *(char *)(param_1 + 0x10d);
    iVar11 = iVar11 + 0xc;
  } while( true );
}



