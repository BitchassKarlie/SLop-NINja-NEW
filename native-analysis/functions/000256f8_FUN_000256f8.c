/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000256f8 FUN_000256f8 */

void FUN_000256f8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  float fVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 *puVar23;
  int iVar24;
  int *piVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  float fVar28;
  int local_2a8;
  int local_2a0;
  undefined auStack_27c [20];
  undefined4 local_268;
  undefined2 local_264;
  undefined2 local_262;
  undefined4 local_260;
  int local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  undefined4 local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  undefined4 local_19c;
  int local_198;
  undefined4 local_194;
  int local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined local_184;
  undefined local_183;
  undefined local_182;
  undefined local_181;
  undefined local_180;
  undefined local_17f;
  undefined local_17e;
  undefined local_17d;
  undefined4 local_17c;
  undefined local_178;
  undefined local_177;
  undefined local_176;
  undefined local_175;
  undefined4 local_174;
  undefined local_170;
  undefined local_16f;
  undefined local_16e;
  undefined local_16d;
  undefined local_16c;
  undefined local_16b;
  undefined local_16a;
  undefined local_169;
  undefined auStack_168 [128];
  undefined4 local_e8 [8];
  undefined local_c8;
  undefined auStack_c4 [36];
  undefined auStack_a0 [36];
  undefined4 local_7c [8];
  undefined local_5c;
  undefined auStack_58 [36];
  int local_34;
  
  iVar5 = DAT_00025750;
  iVar19 = DAT_0002574c + 0x2570c;
  local_34 = **(int **)(iVar19 + DAT_00025750);
  if ((*(char *)(param_1 + 0xb4) != '\0') ||
     (fVar28 = *(float *)(param_1 + 0x6c),
     fVar28 != DAT_00025748 && fVar28 < DAT_00025748 == (NAN(fVar28) || NAN(DAT_00025748)))) {
    uVar7 = 1;
    goto LAB_00025730;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  iVar8 = FUN_0002f60c(*(undefined4 *)(param_1 + 0x90));
  iVar15 = DAT_000261f4;
  if (iVar8 < 2) {
    local_2a8 = DAT_000261f4;
LAB_00025788:
    *(undefined *)(param_1 + 0x10d) = 0;
  }
  else {
    if (*(char *)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00025bc8 + 0x25774) + 0x2d4
                 ) == '\0') {
      local_2a8 = DAT_00025bcc;
      goto LAB_00025788;
    }
    local_2a8 = DAT_000261f4;
    iVar8 = *(int *)(iVar19 + DAT_000261f4);
    if ((*(char *)(iVar8 + 8) != '\0') ||
       (fVar28 = *(float *)(iVar8 + 0x14), fVar28 != 0.0 && fVar28 < 0.0 == NAN(fVar28)))
    goto LAB_00025788;
    if (*(int *)(iVar8 + 0x34) < 3) {
      iVar8 = 2;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x34) + -1;
    }
    iVar24 = *(int *)(iVar19 + DAT_000261f4);
    *(int *)(iVar24 + 0x34) = iVar8;
    uVar7 = FUN_00086780();
    fVar28 = (float)FUN_0008575c(uVar7,0);
    if (fVar28 == 0.0 || fVar28 < 0.0 != NAN(fVar28)) goto LAB_00025788;
    iVar8 = *(int *)(iVar24 + 0x34);
    if (*(int *)(DAT_0002620c + 0x2605c) <= iVar8) {
      iVar8 = *(int *)(DAT_0002620c + 0x2605c);
    }
    uVar7 = FUN_00086780();
    fVar28 = (float)FUN_0008575c(uVar7,0);
    fVar28 = (float)(longlong)iVar8 / fVar28;
    if (fVar28 == DAT_000261c0 || fVar28 < DAT_000261c0 != (NAN(fVar28) || NAN(DAT_000261c0))) {
      puVar18 = *(uint **)(iVar19 + DAT_000267c4);
      lVar3 = (ulonglong)puVar18[2] * (ulonglong)*puVar18 +
              CONCAT44(*puVar18 * puVar18[3] + puVar18[2] * puVar18[1],puVar18[4]);
      uVar12 = puVar18[5] + (int)((ulonglong)lVar3 >> 0x20);
      uVar16 = 1;
      *puVar18 = (uint)lVar3;
      puVar18[1] = uVar12;
LAB_00026360:
      uVar12 = (uint)((ulonglong)uVar12 * (ulonglong)uVar16 >> 0x20);
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar19 + iVar15) + 0x34);
      if (*(int *)(DAT_00026210 + 0x2609a) <= iVar8) {
        iVar8 = *(int *)(DAT_00026210 + 0x2609a);
      }
      uVar7 = FUN_00086780();
      fVar28 = (float)FUN_0008575c(uVar7,0);
      puVar18 = *(uint **)(iVar19 + DAT_000261e4);
      lVar3 = (ulonglong)*puVar18 * (ulonglong)puVar18[2] +
              CONCAT44(puVar18[2] * puVar18[1] + *puVar18 * puVar18[3],puVar18[4]);
      uVar12 = puVar18[5] + (int)((ulonglong)lVar3 >> 0x20);
      *puVar18 = (uint)lVar3;
      puVar18[1] = uVar12;
      uVar16 = (uint)(0.0 < (float)(longlong)iVar8 / fVar28) *
               (int)((float)(longlong)iVar8 / fVar28);
      if (uVar16 - 1 < 0xfffffffe) goto LAB_00026360;
    }
    if (uVar12 != 0) goto LAB_00025788;
    *(undefined *)(param_1 + 0x10d) = 1;
    *(int *)(*(int *)(iVar19 + iVar15) + 0x34) =
         *(int *)(DAT_00026214 + 0x26114) + *(int *)(DAT_00026214 + 0x26110);
  }
  if ((*(char *)(*(int *)(iVar19 + local_2a8) + 9) == '\0') ||
     (iVar15 = FUN_00021694(param_1), iVar15 == 0)) {
    if (*(char *)(param_1 + 0x10d) == '\0') {
      piVar25 = (int *)(DAT_00025bd0 + 0x257b6);
      iVar15 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar25;
      if (0 < *(int *)(iVar15 + 0x2dc)) {
        pcVar9 = *(code **)(DAT_00025bd4 + 0x257e6);
        iVar17 = DAT_00025bd4 + 0x257de;
        iVar13 = DAT_00025bd8 + 0x257e6;
        uVar7 = *(undefined4 *)(iVar19 + DAT_00025bdc);
        iVar10 = *(int *)(iVar19 + local_2a8);
        iVar8 = 0;
        iVar24 = 0;
        do {
          iVar24 = iVar24 + 1;
          uVar20 = *(undefined4 *)(*(int *)(iVar15 + 0x2d8) + iVar8);
          iVar8 = iVar8 + 0xc;
          uVar21 = *(undefined4 *)(iVar10 + 0x18c);
          local_5c = 1;
          local_7c[0] = 0;
          local_198 = iVar17;
          local_194 = uVar7;
          (*pcVar9)(&local_198,local_7c);
          FUN_00073a7c(uVar21,uVar20,0x3f000000,local_7c);
          FUN_0001d388(local_7c);
          iVar15 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar25;
          local_198 = iVar13;
        } while (iVar24 < *(int *)(iVar15 + 0x2dc));
      }
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(iVar19 + local_2a8) + 0x18c);
      local_190 = DAT_000261f8 + 0x25f24;
      local_18c = *(undefined4 *)(iVar19 + DAT_000261fc);
      FUN_00021db4(auStack_58,&local_190);
      FUN_00073a7c(uVar7,DAT_00026200 + 0x25f38,0x3e800000,auStack_58);
      FUN_0001d388(auStack_58);
      local_190 = DAT_00026204 + 0x25f50;
    }
  }
  fVar28 = DAT_00025ba0;
  uVar7 = DAT_00025b9c;
  puVar23 = (undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x48) = *puVar23;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x6c) = uVar7;
  fVar11 = (float)FUN_00092d98(param_5[1] * param_5[1] + *param_5 * *param_5 +
                               param_5[2] * param_5[2]);
  iVar15 = DAT_00025be0;
  fVar11 = fVar11 * DAT_00025ba4;
  if ((fVar28 < fVar11) &&
     (fVar28 = DAT_00025ba8, fVar11 < DAT_00025ba8 != (NAN(fVar11) || NAN(DAT_00025ba8)))) {
    fVar28 = fVar11;
  }
  if (*(char *)(param_1 + 0x10d) == '\0') {
    if ((*(int *)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00026208 + 0x25f5c) + 0x2d0
                 ) == 0x32) && (*(char *)(*(int *)(iVar19 + local_2a8) + 8) == '\0')) {
      fVar28 = DAT_000261b4;
      if ((DAT_000261b4 < fVar11) &&
         (fVar28 = DAT_000261b8, fVar11 < DAT_000261b8 != (NAN(fVar11) || NAN(DAT_000261b8)))) {
        fVar28 = fVar11;
      }
      *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_000261bc;
      local_1c8 = *(undefined4 *)(param_1 + 0x10);
      local_1c4 = *(undefined4 *)(param_1 + 0x14);
      local_1c0 = *(undefined4 *)(param_1 + 0x18);
      local_16d = 0x80;
      local_16e = 0xff;
      local_16f = 0xff;
      local_170 = 0xff;
      FUN_000300d8();
      FUN_00055e9c();
      local_1d4 = *(undefined4 *)(param_1 + 0x10);
      local_1d0 = *(undefined4 *)(param_1 + 0x14);
      local_1cc = *(undefined4 *)(param_1 + 0x18);
      FUN_00056c10();
    }
  }
  else {
    fVar28 = DAT_00025bac;
    if ((DAT_00025bac < fVar11) &&
       (fVar28 = DAT_00025ba8, fVar11 < DAT_00025ba8 != (NAN(fVar11) || NAN(DAT_00025ba8)))) {
      fVar28 = fVar11;
    }
    *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x6c) * DAT_00025bb0;
    local_16c = *(undefined *)(iVar15 + 0x25916);
    local_1bc = *(undefined4 *)(param_1 + 0x10);
    local_1b8 = *(undefined4 *)(param_1 + 0x14);
    local_1b4 = *(undefined4 *)(param_1 + 0x18);
    local_16b = *(undefined *)(iVar15 + 0x25917);
    local_16a = *(undefined *)(iVar15 + 0x25918);
    local_169 = *(undefined *)(iVar15 + 0x25919);
    FUN_000300d8();
  }
  uVar6 = FUN_00092918(*param_5,param_5[1]);
  *(float *)(param_1 + 0x74) = fVar28;
  *(undefined2 *)(param_1 + 0x70) = uVar6;
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
  if ((*(char *)(*(int *)(iVar19 + local_2a8) + 9) == '\0') ||
     (iVar15 = FUN_00021694(param_1), iVar15 == 0)) {
    iVar15 = FUN_0002f5f0();
    if ((iVar15 != 0) && (param_1 == param_2)) {
      *(undefined4 *)(param_1 + 0x78) = 2;
    }
    local_1e0 = *(undefined4 *)(param_1 + 0x10);
    local_1dc = *(undefined4 *)(param_1 + 0x14);
    local_1d8 = *(undefined4 *)(param_1 + 0x18);
    if (*(char *)(param_1 + 0x10d) == '\0') {
      uVar7 = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      uVar7 = 1;
    }
    FUN_00033ffc(&local_1e0,
                 (float)(ulonglong)*(ushort *)(param_1 + 0x70) / DAT_00025bb4 + DAT_00025bb8,
                 fVar28 * DAT_00025bbc,uVar7);
    uVar7 = *(undefined4 *)
             ((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00025be4 + 0x259ee) + 0x210);
    if (*(char *)(param_1 + 0x10d) != '\0') {
      uVar7 = FUN_0008f414(DAT_0002621c + 0x26156);
    }
    uVar20 = FUN_0007e454();
    iVar15 = FUN_0007d7f8(uVar20,uVar7);
    if (iVar15 != 0) {
      uVar20 = FUN_0007e454();
      iVar15 = FUN_0007da40(uVar20,uVar7,0);
      if (iVar15 != 0) {
        fVar28 = (float)FUN_000927b8(-*(short *)(param_1 + 0x70));
        *(float *)(iVar15 + 0x30) = -fVar28;
        uVar7 = FUN_000927c8(-*(short *)(param_1 + 0x70));
        *(undefined4 *)(iVar15 + 0x2c) = uVar7;
        uVar7 = *(undefined4 *)(param_1 + 0x14);
        uVar20 = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(iVar15 + 8) = *puVar23;
        *(undefined4 *)(iVar15 + 0xc) = uVar7;
        *(undefined4 *)(iVar15 + 0x10) = uVar20;
      }
    }
    uVar7 = *(undefined4 *)
             ((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00025be8 + 0x25a5c) + 0x21c);
    if (*(char *)(param_1 + 0x10d) != '\0') {
      uVar7 = FUN_0008f414(DAT_00026220 + 0x26162);
    }
    uVar20 = FUN_0007e454();
    iVar15 = FUN_0007d7f8(uVar20,uVar7);
    if (iVar15 != 0) {
      uVar20 = FUN_0007e454();
      uVar20 = FUN_0007da40(uVar20,uVar7,0);
      *(undefined4 *)(param_1 + 0x40) = uVar20;
      uVar20 = FUN_0007e454();
      iVar15 = FUN_0007da40(uVar20,uVar7,0);
      iVar8 = *(int *)(param_1 + 0x40);
      *(int *)(param_1 + 0x44) = iVar15;
      if (iVar8 != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x14);
        uVar20 = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(iVar8 + 8) = *puVar23;
        *(undefined4 *)(iVar8 + 0xc) = uVar7;
        *(undefined4 *)(iVar8 + 0x10) = uVar20;
        iVar15 = *(int *)(param_1 + 0x44);
      }
      if (iVar15 != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0xbc);
        uVar20 = *(undefined4 *)(param_1 + 0xc0);
        *(undefined4 *)(iVar15 + 8) = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)(iVar15 + 0xc) = uVar7;
        *(undefined4 *)(iVar15 + 0x10) = uVar20;
      }
    }
    iVar15 = *(int *)(iVar19 + local_2a8);
    if (*(char *)(iVar15 + 9) == '\0') {
      uVar7 = FUN_00017e38();
      FUN_00018edc(uVar7,*(undefined4 *)
                          ((uint)*(byte *)(param_1 + 0x3c) * 0x2ec +
                           *(int *)(DAT_00025bec + 0x25ad4) + 0x210));
      if (((param_2 != 0) && (*(char *)(param_1 + 0x3d) == '\0')) &&
         ((*(char *)(iVar15 + 8) == '\0' ||
          (((*(int *)(iVar15 + 4) - 2U < 2 &&
            (fVar28 = *(float *)(iVar15 + 0x10), (int)((uint)(fVar28 < DAT_00025bc0) << 0x1f) < 0))
           && (fVar28 != DAT_00025bc4 && fVar28 < DAT_00025bc4 == (NAN(fVar28) || NAN(DAT_00025bc4))
              )))))) {
        local_2a0 = *(int *)(param_1 + 0x90);
        piVar25 = (int *)(DAT_00025bf0 + 0x25b32);
        uVar16 = (uint)*(byte *)(param_1 + 0x3c);
        iVar15 = uVar16 * 0x2ec + *piVar25;
        if (*(int *)(iVar15 + 0x2e8) != 0) {
          uVar7 = FUN_0007b72c();
          piVar25 = *(int **)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar25 + 0x2e8);
          uVar22 = *(uint *)(*piVar25 + (piVar25[1] + -1) * 0xc + 8);
          puVar18 = *(uint **)(iVar19 + DAT_00025bf4);
          lVar3 = (ulonglong)*puVar18 * (ulonglong)puVar18[2];
          uVar12 = (uint)lVar3;
          uVar14 = (int)((ulonglong)lVar3 >> 0x20) + puVar18[2] * puVar18[1] + *puVar18 * puVar18[3]
          ;
          uVar16 = puVar18[5] + uVar14 + CARRY4(puVar18[4],uVar12);
          *puVar18 = puVar18[4] + uVar12;
          puVar18[1] = uVar16;
          if (uVar22 - 1 < 0xfffffffe) {
            uVar14 = (uint)((ulonglong)uVar16 * (ulonglong)uVar22 >> 0x20);
            uVar16 = uVar22;
          }
          if (uVar22 - 1 < 0xfffffffe) {
            uVar16 = uVar14;
          }
          if (piVar25[1] < 1) {
            puVar27 = (undefined4 *)*piVar25;
          }
          else {
            puVar26 = (undefined4 *)*piVar25;
            puVar27 = puVar26;
            if ((int)puVar26[2] <= (int)uVar16) {
              iVar15 = 0;
              puVar4 = puVar26;
              do {
                iVar15 = iVar15 + 1;
                puVar27 = puVar26;
                if (iVar15 == piVar25[1]) break;
                piVar1 = puVar4 + 5;
                puVar27 = puVar4 + 3;
                puVar4 = puVar4 + 3;
              } while (*piVar1 <= (int)uVar16);
            }
          }
          local_1ec = *(undefined4 *)(param_1 + 0x10);
          local_1e8 = *(undefined4 *)(param_1 + 0x14);
          local_1e4 = *(undefined4 *)(param_1 + 0x18);
          FUN_0007cae4(uVar7,*puVar27,&local_1ec,0);
          uVar16 = (uint)*(byte *)(param_1 + 0x3c);
          iVar15 = uVar16 * 0x2ec + *(int *)(DAT_000261c4 + 0x25c70);
        }
        iVar8 = DAT_000267b0;
        if (*(char *)(param_1 + 0x10d) == '\0') {
          iVar15 = *(int *)(iVar15 + 0x2d0);
        }
        else {
          iVar15 = *(int *)(DAT_000261c8 + 0x25c92) + *(int *)(iVar15 + 0x2d0);
        }
        if (uVar16 == *(uint *)(DAT_000261cc + 0x25c96)) {
          if ((*(int *)(DAT_000267b0 + 0x2630c) < 1) ||
             (iVar24 = *(int *)(iVar19 + local_2a8), *(int *)(iVar24 + 4) != 1)) {
            iVar8 = *(int *)(DAT_000267b0 + 0x2630c) + 1;
          }
          else {
            FUN_0008f060(auStack_168,0x80,DAT_000267b4 + 0x262d0);
            uVar7 = *(undefined4 *)(iVar24 + 0x18c);
            local_1a0 = DAT_000267b8 + 0x262ee;
            local_19c = *(undefined4 *)(iVar19 + DAT_000267bc);
            FUN_00021db4(auStack_a0,&local_1a0);
            FUN_00073a7c(uVar7,auStack_168,0x3f800000,auStack_a0);
            FUN_0001d388(auStack_a0);
            local_1a0 = DAT_000267c0 + 0x2632a;
            iVar8 = *(int *)(iVar8 + 0x2630c) + 1;
          }
        }
        else {
          *(uint *)(DAT_000261cc + 0x25c96) = uVar16;
          uVar16 = *(uint *)(DAT_000261d0 + 0x25d06);
          if ((1 < (int)uVar16) && (*(int *)(*(int *)(iVar19 + local_2a8) + 4) == 1)) {
            do {
              uVar16 = uVar16 - 1;
              iVar15 = iVar15 + (1 << (uVar16 & 0xff));
            } while (uVar16 != 1);
            *(undefined4 *)(DAT_00026218 + 0x261a8) = 1;
          }
          *(undefined4 *)(DAT_000261d4 + 0x25d20) = 0;
          iVar8 = 1;
        }
        iVar24 = DAT_000261d8;
        *(int *)(DAT_000261d8 + 0x25d2a) = iVar8;
        iVar8 = FUN_0002f5f0();
        if (iVar8 != 0) {
          if (param_1 == param_2) {
            *(undefined4 *)(param_1 + 0x78) = 2;
            if (local_2a0 == 3) {
              iVar15 = FUN_00055e9c();
              local_1f8 = *(undefined4 *)(param_1 + 0x10);
              local_1f4 = *(undefined4 *)(param_1 + 0x14);
              local_1f0 = *(undefined4 *)(param_1 + 0x18);
              local_174 = 0;
              FUN_00017d64(&local_174,*(undefined4 *)(iVar24 + 0x25d1a));
              FUN_00056f04(iVar15,&local_1f8,0,&local_174);
              FUN_00017d90(&local_174);
              *(undefined *)(iVar15 + 0x53) = 0x78;
              *(undefined *)(iVar15 + 0x52) = 0xff;
              *(undefined *)(iVar15 + 0x51) = 10;
              *(undefined *)(iVar15 + 0x50) = 10;
              uVar7 = FUN_0007e454();
              uVar20 = FUN_0008f414(DAT_00026800 + 0x26750);
              iVar15 = FUN_0007da40(uVar7,uVar20,0);
              if (iVar15 != 0) {
                fVar28 = (float)FUN_000927b8(-*(short *)(param_1 + 0x70));
                *(float *)(iVar15 + 0x30) = -fVar28;
                uVar7 = FUN_000927c8(-*(short *)(param_1 + 0x70));
                *(undefined4 *)(iVar15 + 0x2c) = uVar7;
                uVar7 = *(undefined4 *)(param_1 + 0x14);
                uVar20 = *(undefined4 *)(param_1 + 0x18);
                *(undefined4 *)(iVar15 + 8) = *puVar23;
                *(undefined4 *)(iVar15 + 0xc) = uVar7;
                *(undefined4 *)(iVar15 + 0x10) = uVar20;
              }
            }
            if (*(int *)(param_1 + 0x90) == 1) {
              local_204 = *(undefined4 *)(param_1 + 0x10);
              iVar15 = 0;
              local_200 = *(undefined4 *)(param_1 + 0x14);
              local_1fc = *(undefined4 *)(param_1 + 0x18);
              local_175 = 100;
              local_176 = 0;
              local_177 = 0;
              local_178 = 0xff;
              FUN_000300d8();
              iVar8 = FUN_00055e9c();
              local_210 = *(undefined4 *)(param_1 + 0x10);
              local_20c = *(undefined4 *)(param_1 + 0x14);
              local_208 = *(undefined4 *)(param_1 + 0x18);
              local_17c = 0;
              FUN_00017d64(&local_17c,*(undefined4 *)(DAT_000267f8 + 0x266c6));
              FUN_00056f04(iVar8,&local_210,0,&local_17c);
              FUN_00017d90(&local_17c);
              *(undefined *)(iVar8 + 0x52) = 0xff;
              *(undefined *)(iVar8 + 0x53) = 0x78;
              *(undefined *)(iVar8 + 0x51) = 10;
              *(undefined *)(iVar8 + 0x50) = 10;
              local_2a0 = 2;
            }
            else {
              iVar15 = 0;
              local_2a0 = 2;
            }
          }
          else {
            if (local_2a0 < 1) {
              local_2a0 = 1;
            }
            else if (local_2a0 == 3) {
              local_21c = *(undefined4 *)(param_1 + 0x10);
              local_218 = *(undefined4 *)(param_1 + 0x14);
              local_214 = *(undefined4 *)(param_1 + 0x18);
              local_17d = 100;
              local_17f = 0;
              local_17e = 0xff;
              local_180 = 0;
              FUN_000300d8();
              iVar15 = FUN_00055e9c();
              local_228 = *(undefined4 *)(param_1 + 0x10);
              local_224 = *(undefined4 *)(param_1 + 0x14);
              local_220 = *(undefined4 *)(param_1 + 0x18);
              FUN_00056d8c(iVar15,&local_228,0);
              FUN_00017d64(iVar15 + 0x68,*(undefined4 *)(iVar24 + 0x25d16));
              uVar7 = FUN_0007e454();
              uVar20 = FUN_0008f414(DAT_000267ec + 0x2655c);
              iVar8 = FUN_0007da40(uVar7,uVar20,0);
              iVar15 = 3;
              if (iVar8 == 0) {
                local_2a0 = 1;
              }
              else {
                fVar28 = (float)FUN_000927b8(-*(short *)(param_1 + 0x70));
                *(float *)(iVar8 + 0x30) = -fVar28;
                uVar7 = FUN_000927c8(-*(short *)(param_1 + 0x70));
                *(undefined4 *)(iVar8 + 0x2c) = uVar7;
                uVar7 = *(undefined4 *)(param_1 + 0x14);
                uVar20 = *(undefined4 *)(param_1 + 0x18);
                *(undefined4 *)(iVar8 + 8) = *puVar23;
                *(undefined4 *)(iVar8 + 0xc) = uVar7;
                *(undefined4 *)(iVar8 + 0x10) = uVar20;
                local_2a0 = 1;
              }
            }
            if (*(int *)(param_1 + 0x90) == 2) {
              local_234 = *(undefined4 *)(param_1 + 0x10);
              local_230 = *(undefined4 *)(param_1 + 0x14);
              local_22c = *(undefined4 *)(param_1 + 0x18);
              local_181 = 100;
              local_183 = 0;
              local_184 = 0;
              local_182 = 0xff;
              FUN_000300d8();
              uVar7 = FUN_00055e9c();
              local_240 = *(undefined4 *)(param_1 + 0x10);
              local_23c = *(undefined4 *)(param_1 + 0x14);
              local_238 = *(undefined4 *)(param_1 + 0x18);
              local_188 = 0;
              FUN_00017d64(&local_188,*(undefined4 *)(DAT_000267dc + 0x26488));
              FUN_00056f04(uVar7,&local_240,0,&local_188);
              FUN_00017d90(&local_188);
              local_1a8 = DAT_000267e0 + 0x26484;
              iVar15 = *(int *)(iVar19 + local_2a8);
              local_1a4 = *(undefined4 *)(iVar19 + DAT_000267bc);
              uVar7 = *(undefined4 *)(iVar15 + 0x18c);
              FUN_00021db4(auStack_c4,&local_1a8);
              FUN_00073a7c(uVar7,DAT_000267e4 + 0x264a0,0x3f800000,auStack_c4);
              FUN_0001d388(auStack_c4);
              local_1a8 = DAT_000267e8 + 0x264be;
              local_24c = *(undefined4 *)(param_1 + 0x10);
              local_248 = *(undefined4 *)(param_1 + 0x14);
              local_244 = *(undefined4 *)(param_1 + 0x18);
              FUN_0001ae1c(*(undefined4 *)(iVar15 + 0x4c),&local_24c,0x3e800000,0x3fd33333);
              iVar15 = -3;
              local_2a0 = 1;
            }
            FUN_0006e908(auStack_27c);
            iVar8 = FUN_00086780();
            local_268 = *(undefined4 *)(iVar8 + 0x250);
            local_264 = *(undefined2 *)(param_1 + 8);
            local_262 = *(undefined2 *)(param_1 + 0x70);
            local_260 = *(undefined4 *)(param_1 + 0x74);
            local_25c = iVar15;
            piVar25 = (int *)FUN_000a3a68();
            (**(code **)(*piVar25 + 0x10))(piVar25,auStack_27c,0);
          }
        }
        iVar8 = DAT_000267c8;
        if (*(int *)(*(int *)(iVar19 + local_2a8) + 4) == 2) {
          uVar7 = FUN_00086780();
          FUN_000855c8(uVar7,0x3d4ccccd,0);
          if (-1 < *(int *)(iVar8 + 0x263f8) << 0x1f) {
            iVar24 = __cxa_guard_acquire(iVar8 + 0x263f8);
            if (iVar24 != 0) {
              uVar7 = FUN_0008f414(DAT_000267f4 + 0x2660e);
              *(undefined4 *)(iVar8 + 0x263fc) = uVar7;
              __cxa_guard_release(iVar8 + 0x263f8);
            }
          }
          iVar8 = DAT_000267cc;
          if (-1 < *(int *)(DAT_000267cc + 0x26416) << 0x1f) {
            iVar10 = DAT_000267cc + 0x26416;
            iVar24 = __cxa_guard_acquire(iVar10);
            if (iVar24 != 0) {
              uVar7 = FUN_0008f414(DAT_000267f0 + 0x265ea);
              *(undefined4 *)(iVar8 + 0x2641a) = uVar7;
              __cxa_guard_release(iVar10);
            }
          }
          iVar8 = DAT_000267d0;
          iVar10 = *(int *)(iVar19 + local_2a8);
          iVar24 = FUN_0006fbdc(*(undefined4 *)(iVar10 + 0x50),
                                *(undefined4 *)(DAT_000267d0 + 0x26428));
          if (iVar24 < 1) {
            FUN_00072d2c(*(undefined4 *)(iVar10 + 0x50),DAT_000267fc + 0x266da,
                         *(undefined4 *)(iVar8 + 0x26428),*(byte *)(param_1 + 0x3c) + 1,0,0);
          }
          bVar2 = *(byte *)(param_1 + 0x3c);
          uVar20 = *(undefined4 *)(*(int *)(iVar19 + local_2a8) + 0x50);
          uVar7 = *(undefined4 *)(DAT_000267d4 + 0x2645a);
          iVar8 = FUN_0006fbdc(uVar20,uVar7);
          FUN_00072d2c(uVar20,DAT_000267d8 + 0x263e6,uVar7,(bVar2 + 1) - iVar8,0,0);
        }
        iVar8 = DAT_000261dc;
        FUN_0002f6fc(iVar15,local_2a0,1,0);
        if (-1 < *(int *)(iVar8 + 0x25dce) << 0x1f) {
          iVar15 = __cxa_guard_acquire(iVar8 + 0x25dce);
          if (iVar15 != 0) {
            uVar7 = FUN_0008f414(DAT_00026224 + 0x2619c);
            *(undefined4 *)(iVar8 + 0x25dd2) = uVar7;
            __cxa_guard_release(iVar8 + 0x25dce);
          }
        }
        uVar7 = FUN_00017e38();
        if (*(char *)(*(int *)(iVar19 + local_2a8) + 0x20) == '\0') {
          uVar20 = FUN_0002f60c();
          FUN_00019278(uVar7,uVar20);
        }
        piVar25 = (int *)(DAT_000261e0 + 0x25d76);
        FUN_00019024(uVar7,*(undefined4 *)(DAT_000261e0 + 0x25dd6),
                     *(undefined4 *)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar25 + 0x210));
        iVar15 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar25;
        iVar8 = *(int *)(iVar19 + local_2a8);
        FUN_00072d2c(*(undefined4 *)(iVar8 + 0x50),iVar15,*(undefined4 *)(iVar15 + 0x210),1,0,0);
        iVar15 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar25;
        FUN_00072d2c(*(undefined4 *)(iVar8 + 0x50),iVar15 + 0x140,*(undefined4 *)(iVar15 + 0x220),1,
                     1,0);
        iVar8 = (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar25;
        iVar15 = *(int *)(iVar8 + 0x2e4);
        if (iVar15 < 1) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(iVar8 + 0x2e0);
          if (iVar8 < iVar15) {
            puVar18 = *(uint **)(iVar19 + DAT_000261e4);
            lVar3 = (ulonglong)*puVar18 * (ulonglong)puVar18[2] +
                    CONCAT44(puVar18[2] * puVar18[1] + *puVar18 * puVar18[3],puVar18[4]);
            uVar16 = puVar18[5] + (int)((ulonglong)lVar3 >> 0x20);
            *puVar18 = (uint)lVar3;
            puVar18[1] = uVar16;
            if ((iVar15 - iVar8) - 1U < 0xfffffffe) {
              uVar16 = (uint)((ulonglong)(uint)(iVar15 - iVar8) * (ulonglong)uVar16 >> 0x20);
            }
            iVar8 = uVar16 + *(int *)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec +
                                      *(int *)(DAT_000261e8 + 0x25e3e) + 0x2e0);
          }
        }
        if (*(char *)(param_1 + 0x10d) != '\0') {
          piVar25 = (int *)(DAT_000267a4 + 0x26242);
          iVar8 = (*(int *)(DAT_000267a0 + 0x26244) / 2) * iVar8;
          iVar15 = *(int *)(iVar19 + local_2a8);
          FUN_00072d2c(*(undefined4 *)(iVar15 + 0x50),DAT_000267a8 + 0x26246,
                       *(undefined4 *)(DAT_000267a4 + 0x262d2),1,0,0);
          FUN_0008f060(auStack_168,0x80,DAT_000267ac + 0x26280,
                       (uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *piVar25);
          uVar7 = FUN_0008f414(auStack_168);
          FUN_00072d2c(*(undefined4 *)(iVar15 + 0x50),auStack_168,uVar7,1,0,0);
        }
        if (0 < iVar8) {
          local_258 = *(undefined4 *)(param_1 + 0x10);
          uVar16 = (iVar8 + 1) * 0x1ffe;
          local_254 = *(undefined4 *)(param_1 + 0x14);
          if (0xffef < (int)uVar16) {
            uVar16 = 0xfff0;
          }
          local_1b0 = DAT_000261ec + 0x25e88;
          local_250 = *(undefined4 *)(param_1 + 0x18);
          uVar6 = *(undefined2 *)(param_1 + 0x70);
          uVar7 = 0;
          local_e8[0] = 0;
          local_1ac = *(undefined4 *)(iVar19 + DAT_000261f0);
          local_c8 = 1;
          (**(code **)(DAT_000261ec + 0x25e90))(&local_1b0,local_e8);
          FUN_00020034(iVar8,1,&local_258,uVar6,uVar16 & 0xffff,0,DAT_000261ac,DAT_000261b0,0,0,
                       local_e8,1);
          FUN_0001f694(local_e8);
          goto LAB_00025730;
        }
      }
    }
  }
  uVar7 = 0;
LAB_00025730:
  if (local_34 != **(int **)(iVar19 + iVar5)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}



