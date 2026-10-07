/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005cd74 FUN_0005cd74 */

void FUN_0005cd74(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  undefined uVar3;
  undefined uVar4;
  undefined uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 uVar19;
  float *pfVar20;
  undefined4 *puVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined local_280;
  int local_27c;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  int local_220 [7];
  int local_204 [7];
  int local_1e8 [7];
  int local_1cc [7];
  int local_1b0 [7];
  int local_194 [7];
  int local_178 [7];
  int local_15c [7];
  int local_140 [7];
  int local_124 [7];
  int local_108 [7];
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined local_c0;
  undefined local_bf;
  undefined local_be;
  undefined local_bd;
  undefined local_bc;
  undefined local_bb;
  undefined local_ba;
  undefined local_b9;
  undefined4 local_b8;
  undefined local_b4 [3];
  undefined local_b1;
  undefined local_b0 [3];
  undefined local_ad;
  undefined local_ac [4];
  char local_a8;
  char local_a7;
  char local_a6;
  char local_a5;
  undefined local_a4;
  undefined local_a3;
  undefined local_a2;
  undefined local_a1;
  undefined local_a0;
  undefined local_9f;
  undefined local_9e;
  undefined local_9c;
  undefined local_9b;
  undefined local_9a;
  undefined local_99;
  undefined local_98;
  undefined local_97;
  undefined local_96;
  undefined local_95;
  undefined local_94;
  undefined local_93;
  undefined local_92;
  undefined local_91;
  undefined local_90;
  undefined local_8f;
  undefined local_8e;
  undefined auStack_8c [64];
  int local_4c;
  
  iVar17 = DAT_0005d014;
  iVar1 = DAT_0005d010;
  iVar12 = DAT_0005d00c + 0x5cd8c;
  local_4c = **(int **)(iVar12 + DAT_0005d010);
  iVar23 = (int)(*(float *)(*(int *)(*(int *)(iVar12 + DAT_0005d014) + 0x40) + 0x24) * DAT_0005cfec)
  ;
  if (iVar23 < 1) {
    local_280 = 0;
  }
  else {
    if (0xfe < iVar23) {
      iVar23 = 0xff;
    }
    local_280 = (undefined)iVar23;
  }
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar23 = FUN_0002f5ec();
    if (iVar23 != 0) goto LAB_0005cfd2;
    iVar23 = *(int *)(iVar12 + iVar17);
    fVar22 = *(float *)(iVar23 + 0x10);
    if (fVar22 != DAT_0005d5fc && fVar22 < DAT_0005d5fc == (NAN(fVar22) || NAN(DAT_0005d5fc)))
    goto LAB_0005d6e2;
  }
  else {
    iVar23 = *(int *)(iVar12 + DAT_0005d014);
    fVar22 = *(float *)(iVar23 + 0x10);
    if (fVar22 != DAT_0005cff0 && fVar22 < DAT_0005cff0 == (NAN(fVar22) || NAN(DAT_0005cff0))) {
LAB_0005d6e2:
      FUN_0008f060(auStack_8c,0x40,DAT_0005da7c + 0x5d6f0,*(undefined4 *)(param_1 + 0x78));
      iVar14 = DAT_0005da88;
      if (*(int *)(param_1 + 0x78) < 1000) {
        local_27c = DAT_0005da80;
        fVar22 = DAT_0005da38;
        fVar24 = DAT_0005da3c;
      }
      else {
        piVar15 = (int *)(DAT_0005da88 + 0x5d926);
        if (*piVar15 << 0x1f < 0) {
          local_27c = DAT_0005da80;
        }
        else {
          iVar18 = __cxa_guard_acquire(piVar15);
          if (iVar18 == 0) {
            local_27c = DAT_0005dbdc;
          }
          else {
            uVar10 = *(undefined4 *)(iVar23 + 0x5c);
            FUN_00036320(local_108,DAT_0005dbe0 + 0x5db9a);
            fVar22 = (float)FUN_00090978(uVar10,local_108);
            *(float *)(iVar14 + 0x5d92a) = fVar22 * DAT_0005dbd8;
            __cxa_guard_release(piVar15);
            local_27c = DAT_0005dbdc;
            local_108[0] = *(int *)(iVar12 + DAT_0005dbdc) + 8;
          }
        }
        uVar10 = *(undefined4 *)(*(int *)(iVar12 + iVar17) + 0x5c);
        FUN_00036320(local_124,auStack_8c);
        fVar22 = (float)FUN_00090978(uVar10,local_124);
        local_124[0] = *(int *)(iVar12 + local_27c) + 8;
        fVar27 = fVar22 * *(float *)(param_1 + 0x84) * DAT_0005da40;
        fVar26 = *(float *)(DAT_0005da8c + 0x5d95e);
        fVar22 = DAT_0005da38;
        fVar24 = DAT_0005da3c;
        if (fVar27 != fVar26 && fVar27 < fVar26 == (NAN(fVar27) || NAN(fVar26))) {
          fVar22 = (fVar27 - fVar26) * DAT_0005da5c;
          fVar24 = fVar26 / fVar27;
        }
      }
      FUN_0002fee4(&local_90,param_2);
      uVar10 = *(undefined4 *)(*(int *)(iVar12 + iVar17) + 0x5c);
      FUN_00036320(local_140,auStack_8c);
      local_94 = local_90;
      local_93 = local_8f;
      local_92 = local_8e;
      local_91 = local_280;
      FUN_00091528(uVar10,local_140,fVar22 + *(float *)(param_1 + 0x88),
                   *(undefined4 *)(param_1 + 0x8c),DAT_0005da38,&local_94,
                   *(float *)(param_1 + 0x84) * DAT_0005da40 * fVar24,DAT_0005da38,DAT_0005da38,0xd,
                   0);
      local_140[0] = *(int *)(iVar12 + local_27c) + 8;
    }
  }
  iVar23 = DAT_0005d238;
  iVar14 = *(int *)(iVar12 + iVar17);
  if (*(int *)(iVar14 + 4) == 1) {
    iVar14 = **(int **)(iVar12 + DAT_0005d238);
    if (iVar14 < 1) {
      iVar18 = 0;
    }
    else {
      iVar18 = **(int **)(iVar12 + DAT_0005d23c) + -1;
      if (iVar14 <= iVar18) {
        iVar18 = iVar14;
      }
    }
    iVar14 = FUN_00021680(iVar18);
    FUN_00017d64(param_1 + 0x68,*(undefined4 *)(iVar14 + 700));
    iVar23 = **(int **)(iVar12 + iVar23);
    if (iVar23 < 1) {
      iVar14 = 0;
    }
    else {
      iVar14 = **(int **)(iVar12 + DAT_0005d23c) + -1;
      if (iVar23 <= iVar14) {
        iVar14 = iVar23;
      }
    }
    iVar23 = FUN_00021680(iVar14);
    fVar2 = DAT_0005d230;
    fVar26 = DAT_0005d22c;
    fVar27 = DAT_0005d228;
    fVar24 = DAT_0005d224;
    uVar10 = DAT_0005d220;
    fVar22 = DAT_0005d21c;
    local_98 = *(undefined *)(iVar23 + 0x2b4);
    local_97 = *(undefined *)(iVar23 + 0x2b5);
    local_96 = *(undefined *)(iVar23 + 0x2b6);
    local_95 = *(undefined *)(iVar23 + 0x2b7);
    uVar19 = *(undefined4 *)(*(int *)(iVar12 + iVar17) + 0x5c);
    FUN_00036320(local_15c,auStack_8c);
    fVar6 = (float)FUN_00090978(uVar19,local_15c);
    uVar5 = local_96;
    uVar4 = local_97;
    uVar3 = local_98;
    iVar23 = DAT_0005d240;
    local_15c[0] = *(int *)(iVar12 + DAT_0005d240) + 8;
    iVar18 = DAT_0005d244 + 0x5d0f8;
    uVar8 = 1;
    fVar6 = fVar22 + fVar6 * *(float *)(param_1 + 0x84) * DAT_0005d234;
    iVar14 = param_1;
    do {
      while( true ) {
        fVar25 = *(float *)(iVar14 + 0xac);
        iVar16 = uVar8 - 1;
        if (fVar25 == 0.0 || fVar25 < 0.0 != NAN(fVar25)) break;
        uVar9 = uVar8 & 0xff;
        uVar8 = uVar8 + 1;
        FUN_0008f060(auStack_8c,0x40,iVar18,1 << uVar9);
        pfVar20 = (float *)(iVar14 + 0xac);
        iVar14 = iVar14 + 4;
        fVar25 = (float)FUN_000927b8((int)(*pfVar20 * fVar24 * fVar27) & 0xffff);
        iVar13 = *(int *)(iVar12 + iVar17);
        uVar19 = *(undefined4 *)(iVar13 + 0x58);
        fVar25 = fVar25 * (fVar2 + (float)(longlong)iVar16 * fVar26);
        FUN_00036320(local_178,auStack_8c);
        local_9c = uVar3;
        local_9b = uVar4;
        local_9a = uVar5;
        local_99 = local_280;
        FUN_00091528(uVar19,local_178,fVar6 + *(float *)(param_1 + 0x88),0x431b0000,uVar10,&local_9c
                     ,fVar25,uVar10,uVar10,1,0);
        uVar19 = *(undefined4 *)(iVar13 + 0x58);
        iVar16 = *(int *)(iVar12 + iVar23) + 8;
        local_178[0] = iVar16;
        FUN_00036320(local_194,auStack_8c);
        fVar7 = (float)FUN_00090978(uVar19,local_194);
        fVar6 = fVar6 + fVar22 + fVar7 * fVar25;
        local_194[0] = iVar16;
        if (uVar8 == 0x11) goto LAB_0005cdf4;
      }
      uVar8 = uVar8 + 1;
      iVar14 = iVar14 + 4;
    } while (uVar8 != 0x11);
  }
  else if (((*(int *)(iVar14 + 4) == 2) &&
           (iVar23 = FUN_0007b72c(), 1 < *(int *)(iVar23 + 0x6c) * *(int *)(iVar23 + 0x70))) &&
          (*(char *)(iVar14 + 8) == '\0')) {
    uVar10 = *(undefined4 *)(iVar14 + 0x5c);
    FUN_00036320(local_1b0,auStack_8c);
    FUN_00090978(uVar10,local_1b0);
    iVar18 = *(int *)(iVar12 + DAT_0005da80) + 8;
    local_1b0[0] = iVar18;
    iVar23 = FUN_0007b72c();
    FUN_0008f060(auStack_8c,0x40,DAT_0005da84 + 0x5d7f0,
                 *(int *)(iVar23 + 0x6c) * *(int *)(iVar23 + 0x70));
    FUN_0002fee4(&local_a0,param_2);
    uVar10 = *(undefined4 *)(iVar14 + 0x84);
    FUN_00036320(local_1cc,auStack_8c);
    local_a4 = local_a0;
    local_a3 = local_9f;
    local_a2 = local_9e;
    local_a1 = local_280;
    FUN_00091528(uVar10,local_1cc,*(float *)(param_1 + 8) - DAT_0005da44,
                 *(float *)(param_1 + 0xc) - DAT_0005da48,DAT_0005da38,&local_a4,
                 *(float *)(param_1 + 0x84) * DAT_0005da40 * DAT_0005da4c,DAT_0005da38,DAT_0005da38,
                 0xd,0);
    local_1cc[0] = iVar18;
  }
LAB_0005cdf4:
  iVar23 = DAT_0005d018;
  if ((*(uint *)(DAT_0005d018 + 0x5ce02) & 1) == 0) {
    iVar18 = DAT_0005d018 + 0x5ce02;
    iVar14 = __cxa_guard_acquire(iVar18);
    if (iVar14 != 0) {
      uVar10 = FUN_00083098(0xa5,0);
      *(undefined4 *)(iVar23 + 0x5ce06) = uVar10;
      __cxa_guard_release(iVar18);
    }
  }
  fVar22 = *(float *)(*(int *)(iVar12 + iVar17) + 0x10);
  if ((int)((uint)(fVar22 < 0.0) << 0x1f) < 0) {
    fVar22 = -fVar22;
  }
  if (((int)((uint)(fVar22 < DAT_0005cff4) << 0x1f) < 0) && (0 < *(int *)(param_1 + 0x7c))) {
    FUN_0008f060(auStack_8c,0x40,DAT_0005d01c + 0x5ce3e);
    iVar23 = DAT_0005da90;
    if (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0x78)) {
      if (*(char *)(*(int *)(iVar12 + iVar17) + 2) == '\0') {
        iVar14 = 6;
      }
      else {
        iVar14 = 0;
      }
      iVar14 = iVar14 + *(int *)(DAT_0005da90 + 0x5d9b4);
      *(int *)(DAT_0005da90 + 0x5d9b4) = iVar14;
      if (iVar14 < 0xb4) {
        uVar8 = iVar14 * 0xb6 & 0xffff;
      }
      else {
        uVar8 = 0x7ff8;
        *(undefined4 *)(iVar23 + 0x5d9b4) = 0xb4;
      }
      fVar22 = (float)FUN_000927c8(uVar8);
      fVar24 = DAT_0005da5c + fVar22 * DAT_0005da60;
      fVar22 = DAT_0005da64 + fVar24 * DAT_0005da68;
      if (0.0 < fVar22) {
        if (fVar22 < DAT_0005dbcc == (NAN(fVar22) || NAN(DAT_0005dbcc))) {
          local_a6 = -2;
        }
        else {
          local_a6 = (0.0 < fVar22) * (char)(int)fVar22;
        }
      }
      else {
        local_a6 = '\0';
      }
      fVar22 = DAT_0005da6c + fVar24 * DAT_0005da70;
      if (0.0 < fVar22) {
        if (fVar22 < DAT_0005dbcc == (NAN(fVar22) || NAN(DAT_0005dbcc))) {
          local_a7 = -2;
        }
        else {
          local_a7 = (0.0 < fVar22) * (char)(int)fVar22;
        }
      }
      else {
        local_a7 = '\0';
      }
      fVar22 = DAT_0005da58 + fVar24 * DAT_0005da74;
      if (0.0 < fVar22) {
        if (fVar22 < DAT_0005dbcc == (NAN(fVar22) || NAN(DAT_0005dbcc))) {
          local_a8 = -2;
        }
        else {
          local_a8 = (0.0 < fVar22) * (char)(int)fVar22;
        }
      }
      else {
        local_a8 = '\0';
      }
      fVar22 = DAT_0005da78 + fVar24 * DAT_0005da38;
      if (DAT_0005da38 < fVar22) {
        if (fVar22 < DAT_0005dbcc == (NAN(fVar22) || NAN(DAT_0005dbcc))) {
          local_a5 = -2;
        }
        else {
          local_a5 = (0.0 < fVar22) * (char)(int)fVar22;
        }
      }
      else {
        local_a5 = '\0';
      }
    }
    else {
      local_a5 = -0x38;
      local_a6 = -0x4c;
      local_a7 = -0x80;
      local_a8 = '\x05';
    }
    FUN_0002c714(local_ac,&local_a8,param_2);
    iVar23 = DAT_0005d020;
    iVar18 = *(int *)(iVar12 + iVar17);
    iVar14 = *(int *)(iVar18 + 0x58);
    if (iVar14 == 0) goto LAB_0005d250;
    if (*(int *)(DAT_0005d020 + 0x5cea6) << 0x1f < 0) {
      local_27c = DAT_0005d024;
    }
    else {
      iVar16 = DAT_0005d020 + 0x5cea6;
      iVar14 = __cxa_guard_acquire(iVar16);
      if (iVar14 == 0) {
        local_27c = DAT_0005dbdc;
        iVar14 = *(int *)(iVar18 + 0x58);
      }
      else {
        uVar10 = *(undefined4 *)(iVar18 + 0x58);
        FUN_00036320(local_1e8,*(undefined4 *)(iVar23 + 0x5ce9e));
        fVar22 = (float)FUN_00090978(uVar10,local_1e8);
        local_27c = DAT_0005dbdc;
        *(float *)(iVar23 + 0x5ceaa) = fVar22 * DAT_0005dbd0 - DAT_0005dbd4;
        __cxa_guard_release(iVar16);
        local_1e8[0] = *(int *)(iVar12 + local_27c) + 8;
        iVar14 = *(int *)(iVar18 + 0x58);
      }
    }
    iVar23 = DAT_0005d028;
    uVar10 = DAT_0005d004;
    fVar26 = DAT_0005d000;
    fVar27 = DAT_0005cffc;
    fVar24 = DAT_0005cff8;
    FUN_00036320(local_204,*(undefined4 *)(DAT_0005d028 + 0x5ceb8));
    local_cc = fVar26;
    local_d0 = *(float *)(param_1 + 0xc) - fVar24;
    local_d4 = *(float *)(param_1 + 8) + *(float *)(iVar23 + 0x5cec4) + fVar27;
    local_c8 = *(undefined4 *)(DAT_0005d02c + 0x5cefa);
    local_c4 = *(undefined4 *)(DAT_0005d02c + 0x5cefe);
    local_ad = local_280;
    FUN_000909a4(iVar14,local_204,&local_d4,local_b0,uVar10,&local_c8,0xe,DAT_0005d008,0);
    iVar14 = *(int *)(iVar12 + local_27c) + 8;
    uVar19 = *(undefined4 *)(*(int *)(iVar12 + iVar17) + 0x58);
    local_204[0] = iVar14;
    FUN_00036320(local_220,auStack_8c);
    fVar22 = DAT_0005d000;
    local_b1 = local_280;
    FUN_00091528(uVar19,local_220,*(float *)(param_1 + 8) + *(float *)(iVar23 + 0x5cec4) + fVar27,
                 *(float *)(param_1 + 0xc) - fVar24,fVar26,local_b4,uVar10,fVar26,fVar26,0xd,0);
    iVar17 = *(int *)(iVar12 + iVar17);
    fVar24 = *(float *)(iVar17 + 0x10);
    local_220[0] = iVar14;
    if (fVar24 == fVar22 || fVar24 < fVar22 != (NAN(fVar24) || NAN(fVar22))) goto LAB_0005cfd2;
  }
  else {
    *(undefined4 *)(DAT_0005d5e0 + 0x5d260) = 0;
LAB_0005d250:
    iVar17 = *(int *)(iVar12 + iVar17);
    fVar24 = *(float *)(iVar17 + 0x10);
    fVar22 = DAT_0005d5c8;
    if (fVar24 == DAT_0005d5c8 || fVar24 < DAT_0005d5c8 != (NAN(fVar24) || NAN(DAT_0005d5c8)))
    goto LAB_0005cfd2;
  }
  iVar23 = DAT_0005d5e4;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_000995e4(*(undefined4 *)(param_1 + 0x94));
    iVar14 = DAT_0005d5e8;
    iVar18 = *(int *)(iVar12 + iVar23);
    puVar21 = (undefined4 *)(DAT_0005d5e8 + 0x5d28a);
    *(undefined *)(iVar18 + 0x18d4) = 0;
    uVar10 = *(undefined4 *)(iVar14 + 0x5d28e);
    uVar19 = *(undefined4 *)(iVar14 + 0x5d292);
    uVar11 = *(undefined4 *)(iVar14 + 0x5d296);
    *(undefined4 *)(iVar18 + 0x1094) = *puVar21;
    *(undefined4 *)(iVar18 + 0x1098) = uVar10;
    *(undefined4 *)(iVar18 + 0x109c) = uVar19;
    *(undefined4 *)(iVar18 + 0x10a0) = uVar11;
    uVar10 = *(undefined4 *)(iVar14 + 0x5d29e);
    uVar19 = *(undefined4 *)(iVar14 + 0x5d2a2);
    uVar11 = *(undefined4 *)(iVar14 + 0x5d2a6);
    *(undefined4 *)(iVar18 + 0x10a4) = *(undefined4 *)(iVar14 + 0x5d29a);
    *(undefined4 *)(iVar18 + 0x10a8) = uVar10;
    *(undefined4 *)(iVar18 + 0x10ac) = uVar19;
    *(undefined4 *)(iVar18 + 0x10b0) = uVar11;
    uVar10 = *(undefined4 *)(iVar14 + 0x5d2ae);
    uVar19 = *(undefined4 *)(iVar14 + 0x5d2b2);
    uVar11 = *(undefined4 *)(iVar14 + 0x5d2b6);
    *(undefined4 *)(iVar18 + 0x10b4) = *(undefined4 *)(iVar14 + 0x5d2aa);
    *(undefined4 *)(iVar18 + 0x10b8) = uVar10;
    *(undefined4 *)(iVar18 + 0x10bc) = uVar19;
    *(undefined4 *)(iVar18 + 0x10c0) = uVar11;
    uVar10 = *(undefined4 *)(iVar14 + 0x5d2be);
    uVar19 = *(undefined4 *)(iVar14 + 0x5d2c2);
    uVar11 = *(undefined4 *)(iVar14 + 0x5d2c6);
    *(undefined4 *)(iVar18 + 0x10c4) = *(undefined4 *)(iVar14 + 0x5d2ba);
    *(undefined4 *)(iVar18 + 0x10c8) = uVar10;
    *(undefined4 *)(iVar18 + 0x10cc) = uVar19;
    *(undefined4 *)(iVar18 + 0x10d0) = uVar11;
    uVar10 = *(undefined4 *)(iVar14 + 0x5d28e);
    uVar19 = *(undefined4 *)(iVar14 + 0x5d292);
    uVar11 = *(undefined4 *)(iVar14 + 0x5d296);
    *(undefined4 *)(iVar18 + 0x1894) = *puVar21;
    *(undefined4 *)(iVar18 + 0x1898) = uVar10;
    *(undefined4 *)(iVar18 + 0x189c) = uVar19;
    *(undefined4 *)(iVar18 + 0x18a0) = uVar11;
    uVar10 = *(undefined4 *)(iVar14 + 0x5d29e);
    uVar19 = *(undefined4 *)(iVar14 + 0x5d2a2);
    uVar11 = *(undefined4 *)(iVar14 + 0x5d2a6);
    *(undefined4 *)(iVar18 + 0x18a4) = *(undefined4 *)(iVar14 + 0x5d29a);
    *(undefined4 *)(iVar18 + 0x18a8) = uVar10;
    *(undefined4 *)(iVar18 + 0x18ac) = uVar19;
    *(undefined4 *)(iVar18 + 0x18b0) = uVar11;
    uVar10 = *(undefined4 *)(iVar14 + 0x5d2ae);
    uVar19 = *(undefined4 *)(iVar14 + 0x5d2b2);
    uVar11 = *(undefined4 *)(iVar14 + 0x5d2b6);
    *(undefined4 *)(iVar18 + 0x18b4) = *(undefined4 *)(iVar14 + 0x5d2aa);
    *(undefined4 *)(iVar18 + 0x18b8) = uVar10;
    *(undefined4 *)(iVar18 + 0x18bc) = uVar19;
    *(undefined4 *)(iVar18 + 0x18c0) = uVar11;
    uVar10 = *(undefined4 *)(iVar14 + 0x5d2be);
    uVar19 = *(undefined4 *)(iVar14 + 0x5d2c2);
    uVar11 = *(undefined4 *)(iVar14 + 0x5d2c6);
    *(undefined4 *)(iVar18 + 0x18c4) = *(undefined4 *)(iVar14 + 0x5d2ba);
    *(undefined4 *)(iVar18 + 0x18c8) = uVar10;
    *(undefined4 *)(iVar18 + 0x18cc) = uVar19;
    *(undefined4 *)(iVar18 + 0x18d0) = uVar11;
    *(int *)(iVar18 + 0x18d8) = *(int *)(iVar18 + 0x18d8) + 1;
    uVar8 = (**(code **)(**(int **)(param_1 + 0x94) + 0x14))();
    fVar27 = (float)(ulonglong)uVar8;
    uVar8 = (**(code **)(**(int **)(param_1 + 0x94) + 0x18))();
    *(float *)(iVar18 + 0x1894) = fVar27 * *(float *)(iVar18 + 0x1894);
    *(float *)(iVar18 + 0x18a4) = fVar27 * *(float *)(iVar18 + 0x18a4);
    *(float *)(iVar18 + 0x18b4) = fVar27 * *(float *)(iVar18 + 0x18b4);
    fVar24 = (float)(ulonglong)uVar8;
    *(float *)(iVar18 + 0x18c4) = fVar27 * *(float *)(iVar18 + 0x18c4);
    *(float *)(iVar18 + 0x1898) = fVar24 * *(float *)(iVar18 + 0x1898);
    *(float *)(iVar18 + 0x18a8) = fVar24 * *(float *)(iVar18 + 0x18a8);
    *(float *)(iVar18 + 0x18b8) = fVar24 * *(float *)(iVar18 + 0x18b8);
    *(float *)(iVar18 + 0x18c8) = fVar24 * *(float *)(iVar18 + 0x18c8);
    *(float *)(iVar18 + 0x189c) = *(float *)(iVar18 + 0x189c) * fVar22;
    *(float *)(iVar18 + 0x18ac) = *(float *)(iVar18 + 0x18ac) * fVar22;
    *(float *)(iVar18 + 0x18bc) = *(float *)(iVar18 + 0x18bc) * fVar22;
    *(float *)(iVar18 + 0x18cc) = *(float *)(iVar18 + 0x18cc) * fVar22;
    *(int *)(iVar18 + 0x18d8) = *(int *)(iVar18 + 0x18d8) + 1;
    iVar14 = FUN_0002f5ec();
    fVar27 = DAT_0005da40;
    fVar24 = DAT_0005d5d0;
    if (iVar14 == 0) {
      fVar27 = *(float *)(param_1 + 0x8c) + DAT_0005d5cc;
      *(int *)(iVar18 + 0x18d8) = *(int *)(iVar18 + 0x18d8) + 1;
      *(float *)(iVar18 + 0x18c4) = *(float *)(iVar18 + 0x18c4) - DAT_0005d5f4;
      *(float *)(iVar18 + 0x18c8) = fVar27 + fVar24 + *(float *)(iVar18 + 0x18c8);
      *(float *)(iVar18 + 0x18cc) = *(float *)(iVar18 + 0x18cc) + fVar22;
    }
    else {
      fVar26 = *(float *)(iVar17 + 0x10) * DAT_0005da50 - DAT_0005da54;
      fVar24 = *(float *)(param_1 + 0x8c);
      *(int *)(iVar18 + 0x18d8) = *(int *)(iVar18 + 0x18d8) + 1;
      fVar24 = fVar24 + fVar27 + DAT_0005da58;
      *(float *)(iVar18 + 0x18c4) = fVar26 + *(float *)(iVar18 + 0x18c4);
      *(float *)(iVar18 + 0x18c8) = fVar24 + *(float *)(iVar18 + 0x18c8);
      *(float *)(iVar18 + 0x18cc) = *(float *)(iVar18 + 0x18cc) + fVar22;
    }
    FUN_0008d434(*(undefined4 *)(iVar12 + iVar23),1);
    local_bc = 0xff;
    local_bb = 0xff;
    local_ba = 0xff;
    local_b9 = local_280;
    FUN_000a344c(&local_bc,0,0x3f800000,0,0x3f800000);
    FUN_000995e0(*(undefined4 *)(param_1 + 0x94));
  }
  fVar24 = DAT_0005d5d4;
  fVar22 = DAT_0005d5c8;
  fVar27 = *(float *)(param_1 + 0x9c);
  if ((fVar27 != DAT_0005d5c8 && fVar27 < DAT_0005d5c8 == (NAN(fVar27) || NAN(DAT_0005d5c8))) &&
     (*(int *)(param_1 + 0x98) != 0)) {
    FUN_000995e4(*(undefined4 *)(param_1 + 0x98));
    iVar17 = DAT_0005d5ec;
    iVar23 = *(int *)(iVar12 + DAT_0005d5e4);
    pfVar20 = (float *)(DAT_0005d5ec + 0x5d46a);
    *(undefined *)(iVar23 + 0x18d4) = 0;
    uVar10 = *(undefined4 *)(iVar17 + 0x5d46e);
    uVar19 = *(undefined4 *)(iVar17 + 0x5d472);
    uVar11 = *(undefined4 *)(iVar17 + 0x5d476);
    *(float *)(iVar23 + 0x1094) = *pfVar20;
    *(undefined4 *)(iVar23 + 0x1098) = uVar10;
    *(undefined4 *)(iVar23 + 0x109c) = uVar19;
    *(undefined4 *)(iVar23 + 0x10a0) = uVar11;
    uVar10 = *(undefined4 *)(iVar17 + 0x5d47e);
    uVar19 = *(undefined4 *)(iVar17 + 0x5d482);
    uVar11 = *(undefined4 *)(iVar17 + 0x5d486);
    *(undefined4 *)(iVar23 + 0x10a4) = *(undefined4 *)(iVar17 + 0x5d47a);
    *(undefined4 *)(iVar23 + 0x10a8) = uVar10;
    *(undefined4 *)(iVar23 + 0x10ac) = uVar19;
    *(undefined4 *)(iVar23 + 0x10b0) = uVar11;
    uVar10 = *(undefined4 *)(iVar17 + 0x5d48e);
    uVar19 = *(undefined4 *)(iVar17 + 0x5d492);
    uVar11 = *(undefined4 *)(iVar17 + 0x5d496);
    *(undefined4 *)(iVar23 + 0x10b4) = *(undefined4 *)(iVar17 + 0x5d48a);
    *(undefined4 *)(iVar23 + 0x10b8) = uVar10;
    *(undefined4 *)(iVar23 + 0x10bc) = uVar19;
    *(undefined4 *)(iVar23 + 0x10c0) = uVar11;
    uVar10 = *(undefined4 *)(iVar17 + 0x5d49e);
    uVar19 = *(undefined4 *)(iVar17 + 0x5d4a2);
    uVar11 = *(undefined4 *)(iVar17 + 0x5d4a6);
    *(float *)(iVar23 + 0x10c4) = *(float *)(iVar17 + 0x5d49a);
    *(undefined4 *)(iVar23 + 0x10c8) = uVar10;
    *(undefined4 *)(iVar23 + 0x10cc) = uVar19;
    *(undefined4 *)(iVar23 + 0x10d0) = uVar11;
    uVar10 = *(undefined4 *)(iVar17 + 0x5d46e);
    uVar19 = *(undefined4 *)(iVar17 + 0x5d472);
    uVar11 = *(undefined4 *)(iVar17 + 0x5d476);
    *(float *)(iVar23 + 0x1894) = *pfVar20;
    *(undefined4 *)(iVar23 + 0x1898) = uVar10;
    *(undefined4 *)(iVar23 + 0x189c) = uVar19;
    *(undefined4 *)(iVar23 + 0x18a0) = uVar11;
    uVar10 = *(undefined4 *)(iVar17 + 0x5d47e);
    uVar19 = *(undefined4 *)(iVar17 + 0x5d482);
    uVar11 = *(undefined4 *)(iVar17 + 0x5d486);
    *(undefined4 *)(iVar23 + 0x18a4) = *(undefined4 *)(iVar17 + 0x5d47a);
    *(undefined4 *)(iVar23 + 0x18a8) = uVar10;
    *(undefined4 *)(iVar23 + 0x18ac) = uVar19;
    *(undefined4 *)(iVar23 + 0x18b0) = uVar11;
    uVar10 = *(undefined4 *)(iVar17 + 0x5d48e);
    uVar19 = *(undefined4 *)(iVar17 + 0x5d492);
    uVar11 = *(undefined4 *)(iVar17 + 0x5d496);
    *(undefined4 *)(iVar23 + 0x18b4) = *(undefined4 *)(iVar17 + 0x5d48a);
    *(undefined4 *)(iVar23 + 0x18b8) = uVar10;
    *(undefined4 *)(iVar23 + 0x18bc) = uVar19;
    *(undefined4 *)(iVar23 + 0x18c0) = uVar11;
    uVar10 = *(undefined4 *)(iVar17 + 0x5d49e);
    uVar19 = *(undefined4 *)(iVar17 + 0x5d4a2);
    uVar11 = *(undefined4 *)(iVar17 + 0x5d4a6);
    *(float *)(iVar23 + 0x18c4) = *(float *)(iVar17 + 0x5d49a);
    *(undefined4 *)(iVar23 + 0x18c8) = uVar10;
    *(undefined4 *)(iVar23 + 0x18cc) = uVar19;
    *(undefined4 *)(iVar23 + 0x18d0) = uVar11;
    *(int *)(iVar23 + 0x18d8) = *(int *)(iVar23 + 0x18d8) + 1;
    uVar8 = (**(code **)(**(int **)(param_1 + 0x98) + 0x14))();
    uVar9 = (**(code **)(**(int **)(param_1 + 0x98) + 0x18))();
    fVar27 = *(float *)(param_1 + 0x9c) * DAT_0005d5d8;
    local_d8 = (float)FUN_000927b8((uint)(0.0 < fVar27) * (int)fVar27 & 0xffff);
    local_e0 = ((float)(ulonglong)uVar8 + fVar24) * local_d8;
    local_dc = ((float)(ulonglong)uVar9 + fVar24) * local_d8;
    local_d8 = local_d8 * fVar22;
    local_b8 = FUN_000927b8(0x5550);
    FUN_00019f04(&local_ec,&local_e0,&local_b8);
    fVar27 = (float)FUN_000927b8(*(undefined2 *)(param_1 + 0xa0));
    local_238 = fVar24 + fVar27 * DAT_0005d5dc;
    local_260 = local_238 * local_ec;
    local_224 = fVar24;
    local_25c = fVar22;
    local_258 = fVar22;
    local_254 = fVar22;
    local_250 = fVar22;
    local_248 = fVar22;
    local_244 = fVar22;
    local_240 = fVar22;
    local_23c = fVar22;
    local_234 = fVar22;
    local_230 = fVar22;
    local_22c = fVar22;
    local_228 = fVar22;
    local_24c = local_238 * local_e8;
    local_238 = local_238 * local_e4;
    uVar10 = FUN_000927b8(0xe38);
    uVar19 = FUN_000927c8(0xe38);
    FUN_0001d0e0(&local_260,uVar10,uVar19);
    uVar8 = (**(code **)(**(int **)(param_1 + 0x94) + 0x14))();
    local_230 = ((float)(ulonglong)uVar8 * DAT_0005d5f0 - DAT_0005d5f4) + local_230;
    local_22c = *(float *)(param_1 + 0x8c) + DAT_0005d5f8 + local_22c;
    local_228 = local_228 + fVar22;
    *(float *)(iVar23 + 0x1894) = local_260;
    *(float *)(iVar23 + 0x1898) = local_25c;
    *(float *)(iVar23 + 0x189c) = local_258;
    *(float *)(iVar23 + 0x18a0) = local_254;
    *(float *)(iVar23 + 0x18a4) = local_250;
    *(float *)(iVar23 + 0x18a8) = local_24c;
    *(float *)(iVar23 + 0x18ac) = local_248;
    *(float *)(iVar23 + 0x18b0) = local_244;
    *(float *)(iVar23 + 0x18b4) = local_240;
    *(float *)(iVar23 + 0x18b8) = local_23c;
    *(float *)(iVar23 + 0x18bc) = local_238;
    *(float *)(iVar23 + 0x18c0) = local_234;
    *(float *)(iVar23 + 0x18c4) = local_230;
    *(float *)(iVar23 + 0x18c8) = local_22c;
    *(float *)(iVar23 + 0x18cc) = local_228;
    *(float *)(iVar23 + 0x18d0) = local_224;
    *(int *)(iVar23 + 0x18d8) = *(int *)(iVar23 + 0x18d8) + 1;
    FUN_0008d434(iVar23,1);
    local_c0 = 0xff;
    local_bf = 0xff;
    local_be = 0xff;
    local_bd = local_280;
    FUN_000a344c(&local_c0,fVar22,fVar24,fVar22,fVar24);
    FUN_000995e0(*(undefined4 *)(param_1 + 0x98));
  }
LAB_0005cfd2:
  if (local_4c == **(int **)(iVar12 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



