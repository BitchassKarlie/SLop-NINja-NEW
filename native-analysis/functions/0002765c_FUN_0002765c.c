/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002765c FUN_0002765c */

void FUN_0002765c(int param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint local_2e8;
  undefined auStack_290 [28];
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_258;
  undefined4 local_230;
  undefined auStack_228 [48];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1c8;
  undefined auStack_1c0 [48];
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_160;
  float local_158;
  float local_154;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_11c;
  float local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined auStack_100 [16];
  undefined auStack_f0 [16];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  float local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  undefined4 local_64;
  undefined auStack_60 [36];
  int local_3c;
  
  iVar6 = DAT_00027fb4;
  iVar2 = DAT_000279f4;
  iVar22 = DAT_000279f0 + 0x27674;
  local_3c = **(int **)(iVar22 + DAT_000279f4);
  param_2 = param_2 * *(float *)(param_1 + 0x94);
  fVar30 = param_2 / DAT_000279d0;
  if (*(char *)(param_1 + 0xb4) == '\0') {
    fVar27 = *(float *)(param_1 + 0x80);
    if (fVar27 != 0.0 && fVar27 < 0.0 == NAN(fVar27)) {
      iVar12 = *(int *)(iVar22 + DAT_00027fb4);
      fVar26 = fVar27;
      if (((*(char *)(iVar12 + 2) == '\0') && (*(float *)(iVar12 + 0x14) <= 0.0)) &&
         (((*(int *)(iVar12 + 4) == 2 &&
           ((int)((uint)(*(float *)(iVar12 + 0x10) < DAT_00027fe4) << 0x1f) < 0)) ||
          (*(char *)(*(int *)(iVar22 + DAT_00027fb4) + 8) == '\0')))) {
        fVar26 = fVar27 - *(float *)(*(int *)(iVar22 + DAT_00027fb4) + 0x3c);
        *(float *)(param_1 + 0x80) = fVar26;
      }
      iVar12 = DAT_00027fb8;
      if ((((fVar26 <= DAT_00027f9c) &&
           (fVar27 != DAT_00027f9c && fVar27 < DAT_00027f9c == (NAN(fVar27) || NAN(DAT_00027f9c))))
          && (*(char *)(DAT_00027fb8 + 0x27d42) == '\0')) &&
         (*(char *)(*(int *)(iVar22 + iVar6) + 8) == '\0')) {
        uVar7 = *(undefined4 *)(*(int *)(iVar22 + iVar6) + 0x18c);
        local_68 = DAT_00027fbc + 0x27cd2;
        local_64 = *(undefined4 *)(iVar22 + DAT_00027fc0);
        FUN_00021db4(auStack_60,&local_68);
        FUN_00073a7c(uVar7,DAT_00027fc4 + 0x27ce6,0x3f800000,auStack_60);
        FUN_0001d388(auStack_60);
        local_68 = DAT_00027fc8 + 0x27cfc;
        *(undefined *)(iVar12 + 0x27d42) = 1;
        fVar26 = *(float *)(param_1 + 0x80);
      }
      iVar6 = DAT_00027fcc;
      if (0.0 < fVar26) goto LAB_00027b30;
      iVar12 = FUN_0002224c(param_1,*(undefined4 *)
                                     ((uint)*(byte *)(param_1 + 0x3c) * 0x2ec +
                                      *(int *)(DAT_00027fcc + 0x27d1c) + 0x218));
      if ((iVar12 == 0) && (iVar12 = FUN_0006e130(), iVar12 != 0)) {
        if (-1 < *(int *)(iVar6 + 0x27db4) << 0x1f) {
          iVar12 = __cxa_guard_acquire(iVar6 + 0x27db4);
          if (iVar12 != 0) {
            uVar7 = FUN_0008f414(DAT_0002823c + 0x28208);
            *(undefined4 *)(iVar6 + 0x27db8) = uVar7;
            __cxa_guard_release(iVar6 + 0x27db4);
          }
        }
        iVar6 = DAT_0002822c;
        if (-1 < *(int *)(DAT_0002822c + 0x281ba) << 0x1f) {
          iVar19 = DAT_0002822c + 0x281ba;
          iVar12 = __cxa_guard_acquire(iVar19);
          if (iVar12 != 0) {
            uVar7 = FUN_0008f414(DAT_00028238 + 0x281e6);
            *(undefined4 *)(iVar6 + 0x281be) = uVar7;
            __cxa_guard_release(iVar19);
          }
        }
        iVar6 = DAT_00028230;
        if (-1 < *(int *)(DAT_00028230 + 0x281ce) << 0x1f) {
          iVar19 = DAT_00028230 + 0x281ce;
          iVar12 = __cxa_guard_acquire(iVar19);
          if (iVar12 != 0) {
            uVar7 = FUN_0008f414(DAT_00028234 + 0x28144);
            *(undefined4 *)(iVar6 + 0x281d2) = uVar7;
            __cxa_guard_release(iVar19);
          }
        }
      }
      iVar6 = *(int *)(param_1 + 0x40);
      if (iVar6 != 0) {
        fVar27 = *(float *)(param_1 + 0x98);
        local_70 = *(float *)(param_1 + 0x14) + fVar27 * *(float *)(DAT_00027fd0 + 0x27d46);
        local_6c = *(float *)(param_1 + 0x18) + fVar27 * *(float *)(DAT_00027fd0 + 0x27d4a);
        local_74 = *(float *)(param_1 + 0x10) + fVar27 * *(float *)(DAT_00027fd0 + 0x27d42);
        *(float *)(iVar6 + 8) = local_74;
        *(float *)(iVar6 + 0xc) = local_70;
        *(float *)(iVar6 + 0x10) = local_6c;
      }
      iVar6 = FUN_00086780();
      fVar27 = *(float *)(iVar6 + 0x6c);
      iVar6 = (int)fVar27;
      if ((int)((uint)((float)(longlong)iVar6 + DAT_00027fa0 < fVar27) << 0x1f) < 0) {
        iVar12 = FUN_00086780();
        fVar27 = (fVar27 - (float)(longlong)iVar6) * DAT_0002821c;
        lVar1 = (ulonglong)*(uint *)(iVar12 + 8) * (ulonglong)*(uint *)(iVar12 + 0x10) +
                CONCAT44(*(uint *)(iVar12 + 0x10) * *(int *)(iVar12 + 0xc) +
                         *(uint *)(iVar12 + 8) * *(int *)(iVar12 + 0x14),
                         *(undefined4 *)(iVar12 + 0x18));
        uVar14 = *(int *)(iVar12 + 0x1c) + (int)((ulonglong)lVar1 >> 0x20);
        *(int *)(iVar12 + 8) = (int)lVar1;
        *(uint *)(iVar12 + 0xc) = uVar14;
        fVar26 = (float)((ulonglong)uVar14 * 100 >> 0x20);
        if (fVar27 != fVar26 && fVar27 < fVar26 == (NAN(fVar27) || NAN(fVar26))) {
          iVar6 = iVar6 + 1;
        }
      }
      uVar9 = DAT_00028224;
      uVar7 = DAT_00028220;
      if (iVar6 < 1) {
        local_80 = DAT_00028220;
        *(undefined4 *)(param_1 + 0x80) = DAT_00028220;
        *(undefined4 *)(param_1 + 0x14) = uVar9;
        uVar9 = DAT_00028228;
        local_7c = DAT_00028228;
        *(undefined4 *)(param_1 + 0x1c) = uVar7;
        *(undefined4 *)(param_1 + 0x20) = uVar9;
        *(undefined4 *)(param_1 + 0x24) = uVar7;
        local_78 = local_80;
      }
      else if (iVar6 != 1) {
        puVar13 = auStack_228;
        do {
          *(undefined4 *)(puVar13 + -0x60) = 0;
          *(float *)(puVar13 + -0x50) = DAT_00027fe4;
          *(undefined4 *)(puVar13 + -0x5c) = 0;
          *(undefined4 *)(puVar13 + -0x38) = DAT_00027fa4;
          *(undefined4 *)(puVar13 + -0x58) = 0;
          *(float *)(puVar13 + -0x34) = DAT_00027fe4;
          puVar13[-3] = 0;
          local_b0 = DAT_00027fd4;
          local_ac = DAT_00027fa4;
          local_a8 = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x4c) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x48) = DAT_00027fa4;
          *(undefined4 *)(puVar13 + -0x44) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x1c) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x30) = 0;
          *(undefined4 *)(puVar13 + -0x18) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x54) = 0;
          *(undefined4 *)(puVar13 + -0x20) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x24) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x28) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x2c) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x14) = 0;
          *(undefined4 *)(puVar13 + -8) = DAT_00027fd4;
          *(undefined4 *)(puVar13 + -0x68) = 0;
          *(float *)(puVar13 + -0x40) = DAT_00027fe4;
          *(float *)(puVar13 + -0x3c) = DAT_00027fe4;
          puVar13[-4] = 0;
          puVar13 = puVar13 + 0x68;
        } while (puVar13 != auStack_f0);
        local_258 = 1;
        local_8c = DAT_00027fd4;
        local_88 = DAT_00027fa8;
        local_84 = DAT_00027fd4;
        local_274 = DAT_00027fd4;
        uStack_270 = DAT_00027fa8;
        uStack_26c = DAT_00027fd4;
        local_230 = DAT_00027fac;
        local_1f8 = DAT_00027fa4;
        local_1f4 = DAT_00027fb0;
        local_1c8 = DAT_00027fac;
        local_190 = DAT_00027fa4;
        local_18c = DAT_00027fb0;
        local_160 = DAT_00027fac;
        local_1f0 = 2;
        local_188 = 3;
        uVar7 = FUN_00086780();
        iVar12 = FUN_00086780();
        lVar1 = (ulonglong)*(uint *)(iVar12 + 8) * (ulonglong)*(uint *)(iVar12 + 0x10);
        local_2e8 = (uint)lVar1;
        uVar14 = *(int *)(iVar12 + 0x1c) +
                 *(uint *)(iVar12 + 0x10) * *(int *)(iVar12 + 0xc) +
                 *(uint *)(iVar12 + 8) * *(int *)(iVar12 + 0x14) + (int)((ulonglong)lVar1 >> 0x20) +
                 (uint)CARRY4(*(uint *)(iVar12 + 0x18),local_2e8);
        *(uint *)(iVar12 + 8) = *(uint *)(iVar12 + 0x18) + local_2e8;
        *(uint *)(iVar12 + 0xc) = uVar14;
        FUN_00087668(uVar7,iVar6 + -1,0xffffffff,
                     auStack_290 +
                     ((uint)CARRY4(uVar14,uVar14) + (uint)CARRY4(uVar14 * 2,uVar14)) * 0x68,0);
        FUN_00022424(auStack_1c0);
        FUN_00022424(auStack_228);
        FUN_00022424(auStack_290);
      }
    }
    if (*(char *)(param_1 + 0x7c) != '\0') {
      fVar24 = param_2 * param_2;
      fVar26 = *(float *)(param_1 + 0x20);
      fVar28 = *(float *)(param_1 + 0x24);
      fVar27 = *(float *)(param_1 + 0x1c);
      fVar25 = *(float *)(param_1 + 0xa0) * DAT_00027c54;
      fVar29 = *(float *)(param_1 + 0xa4) * DAT_00027c54;
      fVar23 = *(float *)(param_1 + 0x9c) * DAT_00027c54;
      *(float *)(param_1 + 0x24) = fVar28 + param_2 * *(float *)(param_1 + 0xa4);
      *(float *)(param_1 + 0x1c) = fVar27 + param_2 * *(float *)(param_1 + 0x9c);
      *(float *)(param_1 + 0x20) = fVar26 + param_2 * *(float *)(param_1 + 0xa0);
      *(float *)(param_1 + 0x10) =
           fVar24 * fVar23 + fVar30 * fVar27 + *(float *)(param_1 + 0x10) +
           param_2 * *(float *)(param_1 + 0x84);
      *(float *)(param_1 + 0x14) =
           fVar24 * fVar25 + fVar30 * fVar26 + *(float *)(param_1 + 0x14) +
           param_2 * *(float *)(param_1 + 0x88);
      *(float *)(param_1 + 0x18) =
           fVar24 * fVar29 + fVar30 * fVar28 + *(float *)(param_1 + 0x18) +
           param_2 * *(float *)(param_1 + 0x8c);
    }
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x24);
    fVar27 = *(float *)(param_1 + 0x6c);
    if ((fVar27 != 0.0 && fVar27 < 0.0 == NAN(fVar27)) &&
       (*(float *)(param_1 + 0x6c) = fVar27 - param_2, fVar27 - param_2 <= 0.0)) {
      *(undefined4 *)(param_1 + 0x6c) = DAT_00027c58;
      FUN_00026804(param_1);
    }
    FUN_000224cc(param_1,param_2);
  }
  else {
    if (*(char *)(param_1 + 0x114) == '\0') {
      fVar27 = *(float *)(param_1 + 0x110) + param_2 * DAT_000279d4;
      if (-1 < (int)((uint)(fVar27 < DAT_000279d8) << 0x1f)) {
        fVar27 = DAT_000279d8;
      }
      *(float *)(param_1 + 0x110) = fVar27;
    }
    if (*(char *)(param_1 + 0x10d) == '\0') {
      fVar27 = (float)FUN_0001a178(param_1 + 0x9c);
      fVar27 = fVar27 + fVar30 * DAT_00027fdc * DAT_00027fe0;
      *(float *)(param_1 + 0x9c) = *(float *)(param_1 + 0x9c) * fVar27;
      *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) * fVar27;
      *(float *)(param_1 + 0xa4) = *(float *)(param_1 + 0xa4) * fVar27;
      if (*(char *)(param_1 + 0x10c) == '\0') goto LAB_000276d6;
LAB_00028040:
      fVar27 = (float)FUN_0001a178(param_1 + 0x9c);
      fVar27 = fVar27 + fVar30 * DAT_00027fdc * DAT_00027fd8;
      fVar26 = fVar27 * *(float *)(param_1 + 0x9c);
      fVar28 = fVar27 * *(float *)(param_1 + 0xa0);
      *(float *)(param_1 + 0x9c) = fVar26;
      fVar27 = fVar27 * *(float *)(param_1 + 0xa4);
      *(float *)(param_1 + 0xa0) = fVar28;
      *(float *)(param_1 + 0xa4) = fVar27;
    }
    else {
      if (*(char *)(param_1 + 0x10c) != '\0') goto LAB_00028040;
LAB_000276d6:
      fVar26 = *(float *)(param_1 + 0x9c);
      fVar28 = *(float *)(param_1 + 0xa0);
      fVar27 = *(float *)(param_1 + 0xa4);
    }
    fVar23 = *(float *)(param_1 + 0x1c) + param_2 * fVar26;
    fVar24 = *(float *)(param_1 + 0x20) + param_2 * fVar28;
    *(float *)(param_1 + 0x1c) = fVar23;
    fVar25 = *(float *)(param_1 + 0x24) + param_2 * fVar27;
    *(float *)(param_1 + 0x20) = fVar24;
    fVar26 = *(float *)(param_1 + 0xc4) + param_2 * fVar26;
    *(float *)(param_1 + 0x24) = fVar25;
    fVar28 = *(float *)(param_1 + 200) + param_2 * fVar28;
    *(float *)(param_1 + 0xc4) = fVar26;
    fVar27 = *(float *)(param_1 + 0xcc) + param_2 * fVar27;
    *(float *)(param_1 + 200) = fVar28;
    *(float *)(param_1 + 0xcc) = fVar27;
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar30 * fVar23;
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar30 * fVar24;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar30 * fVar25;
    *(float *)(param_1 + 0xb8) = *(float *)(param_1 + 0xb8) + fVar30 * fVar26;
    *(float *)(param_1 + 0xbc) = *(float *)(param_1 + 0xbc) + fVar30 * fVar28;
    *(float *)(param_1 + 0xc0) = *(float *)(param_1 + 0xc0) + fVar30 * fVar27;
    *(int *)(param_1 + 0x60) =
         (int)((float)(longlong)*(int *)(param_1 + 0x60) + param_2 * DAT_000279dc);
  }
  iVar4 = DAT_00027a08;
  iVar3 = DAT_00027a04;
  iVar19 = DAT_00027a00;
  iVar12 = DAT_000279fc;
  iVar6 = DAT_000279f8;
  iVar20 = 0;
  iVar8 = DAT_00027a0c + 0x277d4;
  iVar11 = DAT_00027a10 + 0x277d8;
  iVar5 = DAT_00027a04 + 0x27876;
  iVar16 = DAT_00027a14 + 0x277de;
  iVar18 = param_1;
  iVar21 = param_1;
  do {
    if (((*(uint *)(iVar3 + 0x27876) & 1) == 0) &&
       (iVar15 = __cxa_guard_acquire(iVar5), iVar15 != 0)) {
      uVar9 = FUN_000927c8(0);
      uVar10 = FUN_000927b8(0);
      uVar7 = DAT_00027fd4;
      *(undefined4 *)(iVar3 + 0x2787a) = uVar9;
      *(undefined4 *)(iVar3 + 0x27882) = uVar7;
      *(undefined4 *)(iVar3 + 0x2787e) = uVar10;
      __cxa_guard_release(iVar5);
      __aeabi_atexit(iVar3 + 0x2787a,iVar8,*(undefined4 *)(iVar22 + iVar4));
    }
    if ((*(uint *)(iVar12 + 0x278b8) & 1) == 0) {
      iVar15 = __cxa_guard_acquire(iVar12 + 0x278b8);
      if (iVar15 != 0) {
        uVar7 = FUN_000927c8(0);
        uVar9 = FUN_000927b8(0);
        *(undefined4 *)(iVar12 + 0x278bc) = DAT_00027fd4;
        *(undefined4 *)(iVar12 + 0x278c0) = uVar7;
        *(undefined4 *)(iVar12 + 0x278c4) = uVar9;
        __cxa_guard_release(iVar12 + 0x278b8);
        __aeabi_atexit(iVar12 + 0x278bc,iVar11,*(undefined4 *)(iVar22 + iVar4));
      }
    }
    if ((*(uint *)(iVar6 + 0x278d8) & 1) == 0) {
      iVar15 = __cxa_guard_acquire();
      if (iVar15 != 0) {
        uVar7 = FUN_000927b8(0);
        uVar9 = FUN_000927c8(0);
        *(undefined4 *)(iVar6 + 0x278e0) = DAT_00027fd4;
        *(undefined4 *)(iVar6 + 0x278dc) = uVar7;
        *(undefined4 *)(iVar6 + 0x278e4) = uVar9;
        __cxa_guard_release(iVar6 + 0x278d8);
        __aeabi_atexit(iVar6 + 0x278dc,iVar16,*(undefined4 *)(iVar22 + iVar4));
      }
    }
    fVar27 = DAT_000279e4;
    local_c0 = DAT_000279e0;
    local_b4 = DAT_000279d8;
    local_c4 = DAT_000279d8;
    local_d4 = DAT_000279d8;
    local_bc = DAT_000279e0;
    local_b8 = DAT_000279e0;
    local_d0 = DAT_000279e0;
    local_cc = DAT_000279e0;
    local_c8 = DAT_000279e0;
    local_e0 = DAT_000279e0;
    local_dc = DAT_000279e0;
    local_d8 = DAT_000279e0;
    FUN_00022344(&local_c0,*(undefined4 *)(iVar19 + 0x27910),*(undefined4 *)(iVar19 + 0x27914),
                 *(undefined4 *)(iVar19 + 0x27918),
                 (int)(fVar30 * *(float *)(iVar18 + 0xf0) * DAT_000279e4) & 0xffff);
    FUN_00022344(&local_d0,*(undefined4 *)(iVar19 + 0x27920),*(undefined4 *)(iVar19 + 0x27924),
                 *(undefined4 *)(iVar19 + 0x27928),
                 (int)(fVar30 * *(float *)(iVar18 + 0xf4) * fVar27) & 0xffff);
    pfVar17 = (float *)(iVar18 + 0xf8);
    iVar18 = iVar18 + 0xc;
    iVar15 = iVar20 + 0xd;
    iVar20 = iVar20 + 1;
    iVar15 = param_1 + iVar15 * 0x10;
    FUN_00022344(&local_e0,*(undefined4 *)(iVar19 + 0x27930),*(undefined4 *)(iVar19 + 0x27934),
                 *(undefined4 *)(iVar19 + 0x27938),(int)(fVar30 * *pfVar17 * fVar27) & 0xffff);
    FUN_00021dd0(auStack_f0,iVar15,&local_c0);
    FUN_00021dd0(auStack_100,auStack_f0,&local_d0);
    FUN_00021dd0(&local_110,auStack_100,&local_e0);
    *(undefined4 *)(iVar21 + 0xd0) = local_110;
    *(undefined4 *)(iVar21 + 0xd4) = uStack_10c;
    *(undefined4 *)(iVar21 + 0xd8) = uStack_108;
    *(undefined4 *)(iVar21 + 0xdc) = uStack_104;
    FUN_000222b4(iVar15);
    iVar21 = iVar21 + 0x10;
  } while (iVar20 != 2);
  iVar6 = FUN_00021764(param_1);
  if (iVar6 != 0) {
    FUN_00023b48(param_1,1);
  }
  uVar7 = DAT_000279e0;
  iVar6 = *(int *)(param_1 + 0x38);
  if (iVar6 != 0) {
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar6 + 8) = uVar9;
    *(undefined4 *)(iVar6 + 0xc) = uVar10;
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc) = uVar7;
  }
  if (param_2 == 0.0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      uVar7 = FUN_0007e454();
      FUN_0007d8e8(uVar7,*(undefined4 *)(param_1 + 0x40));
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar7 = FUN_0007e454();
      FUN_0007d8e8(uVar7,*(undefined4 *)(param_1 + 0x44));
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  iVar6 = DAT_00027a18;
  uVar7 = DAT_000279ec;
  iVar12 = *(int *)(param_1 + 0x40);
  if (iVar12 != 0) {
    fVar30 = *(float *)(param_1 + 0x98) - DAT_000279e8;
    pfVar17 = (float *)(DAT_00027a18 + 0x27990);
    local_94 = *(float *)(param_1 + 0x14) + fVar30 * *(float *)(DAT_00027a18 + 0x27994);
    local_90 = *(float *)(param_1 + 0x18) + fVar30 * *(float *)(DAT_00027a18 + 0x27998);
    local_98 = *(float *)(param_1 + 0x10) + fVar30 * *pfVar17;
    *(float *)(iVar12 + 8) = local_98;
    *(float *)(iVar12 + 0xc) = local_94;
    *(float *)(iVar12 + 0x10) = local_90;
    *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10) = uVar7;
    FUN_00021e48(&local_134,param_1 + 0xd0);
    fVar26 = *(float *)(iVar6 + 0x27994);
    fVar30 = *pfVar17;
    fVar27 = *(float *)(iVar6 + 0x27998);
    uVar7 = FUN_00092918(fVar26 * local_128 + fVar30 * local_134 + fVar27 * local_11c,
                         fVar26 * local_124 + fVar30 * local_130 + fVar27 * local_118);
    iVar6 = *(int *)(param_1 + 0x40);
    uVar9 = FUN_000927b8();
    *(undefined4 *)(iVar6 + 0x30) = uVar9;
    iVar6 = *(int *)(param_1 + 0x40);
    uVar7 = FUN_000927c8(uVar7);
    *(undefined4 *)(iVar6 + 0x2c) = uVar7;
  }
  iVar6 = DAT_00027c5c;
  iVar12 = *(int *)(param_1 + 0x44);
  if (iVar12 != 0) {
    fVar30 = *(float *)(param_1 + 0x98);
    pfVar17 = (float *)(DAT_00027c5c + 0x27a96);
    local_a0 = *(float *)(param_1 + 0xbc) + fVar30 * *(float *)(DAT_00027c5c + 0x27a9a);
    local_9c = *(float *)(param_1 + 0xc0) + fVar30 * *(float *)(DAT_00027c5c + 0x27a9e);
    local_a4 = *(float *)(param_1 + 0xb8) + fVar30 * *pfVar17;
    *(float *)(iVar12 + 8) = local_a4;
    *(float *)(iVar12 + 0xc) = local_a0;
    *(float *)(iVar12 + 0x10) = local_9c;
    FUN_00021e48(&local_158,param_1 + 0xd0);
    fVar26 = *(float *)(iVar6 + 0x27a9a);
    fVar30 = *pfVar17;
    fVar27 = *(float *)(iVar6 + 0x27a9e);
    uVar7 = FUN_00092918(fVar26 * local_14c + fVar30 * local_158 + fVar27 * local_140,
                         fVar26 * local_148 + fVar30 * local_154 + fVar27 * local_13c);
    iVar6 = *(int *)(param_1 + 0x44);
    uVar9 = FUN_000927b8();
    *(undefined4 *)(iVar6 + 0x30) = uVar9;
    iVar6 = *(int *)(param_1 + 0x44);
    uVar7 = FUN_000927c8(uVar7);
    *(undefined4 *)(iVar6 + 0x2c) = uVar7;
  }
LAB_00027b30:
  if (local_3c != **(int **)(iVar22 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



