/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003a714 FUN_0003a714 */

void FUN_0003a714(int param_1,float param_2)

{
  short sVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  float *pfVar17;
  uint uVar18;
  char cVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  uint in_stack_fffffe98;
  uint in_stack_fffffe9c;
  undefined4 in_stack_fffffea0;
  undefined *in_stack_fffffea4;
  int local_14c;
  uint local_138;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8 [8];
  undefined local_b8;
  undefined4 local_b4 [8];
  undefined local_94;
  int local_90 [8];
  undefined local_70;
  undefined auStack_6c [32];
  int local_4c;
  
  iVar4 = DAT_0003aaa4;
  iVar20 = DAT_0003aaa0 + 0x3a72c;
  local_4c = **(int **)(iVar20 + DAT_0003aaa4);
  FUN_00038d38();
  fVar33 = *(float *)(DAT_0003aaa8 + 0x3a772) +
           ((float)(ulonglong)
                   (uint)((*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x7c) >> 5) * -0x55555555)
           + DAT_0003aa8c) * *(float *)(DAT_0003aaa8 + 0x3a776);
  fVar28 = *(float *)(param_1 + 0xb0);
  fVar26 = *(float *)(DAT_0003aaa8 + 0x3a77a) + *(float *)(DAT_0003aaa8 + 0x3a76e);
  fVar35 = fVar28 - param_2;
  if (fVar28 != fVar26 && fVar28 < fVar26 == (NAN(fVar28) || NAN(fVar26))) {
    *(undefined *)(param_1 + 0x27) = 1;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    if (fVar28 == 0.0 || fVar28 < 0.0 != NAN(fVar28)) {
      local_14c = DAT_0003b264;
    }
    else if (fVar33 == fVar28 || fVar33 < fVar28 != (NAN(fVar33) || NAN(fVar28))) {
      local_14c = DAT_0003b264;
    }
    else {
      local_14c = DAT_0003b264;
      uVar8 = *(undefined4 *)(*(int *)(iVar20 + DAT_0003b264) + 0x18c);
      local_e0 = DAT_0003b268 + 0x3b1ca;
      local_dc = *(undefined4 *)(iVar20 + DAT_0003b260);
      local_70 = 1;
      local_90[0] = *(int *)(param_1 + 0xac);
      (**(code **)(DAT_0003b268 + 0x3b1d2))(&local_e0,local_90);
      uVar8 = FUN_00073a7c(uVar8,DAT_0003b26c + 0x3b1e4,0,local_90);
      *(undefined4 *)(param_1 + 0xac) = uVar8;
      FUN_0001d388(local_90);
      local_e0 = DAT_0003b270 + 0x3b200;
      if (*(int *)(param_1 + 0xac) != 0) {
        FUN_000a5ce0(*(int *)(param_1 + 0xac),0);
      }
      fVar28 = *(float *)(param_1 + 0xb0);
    }
  }
  else {
    local_14c = DAT_0003aaac;
  }
  fVar26 = DAT_0003aae0;
  pfVar17 = (float *)(DAT_0003aab0 + 0x3a7b0);
  if ((int)((uint)(*(float *)(DAT_0003aab0 + 0x3a7c0) < fVar28) << 0x1f) < 0) {
    iVar11 = 0;
    iVar5 = *(int *)(iVar20 + local_14c);
    fVar24 = (fVar28 - *(float *)(DAT_0003aab0 + 0x3a7c0)) / *(float *)(DAT_0003aab0 + 0x3a7b4);
    fVar28 = DAT_0003aa90 - fVar24;
    do {
      iVar7 = iVar11 + 6;
      iVar9 = *(int *)(iVar5 + 0x40);
      iVar11 = iVar11 + 1;
      fVar29 = *(float *)(iVar9 + iVar7 * 4);
      *(float *)(iVar9 + iVar7 * 4) = fVar29 + (fVar26 - fVar29) * fVar28;
    } while (iVar11 != 3);
    fVar24 = fVar24 * fVar24;
    fVar26 = *(float *)(DAT_0003aab4 + 0x3a810);
    fVar28 = *(float *)(DAT_0003aab4 + 0x3a814);
    *(float *)(param_1 + 0xb4) = fVar24 * *(float *)(DAT_0003aab4 + 0x3a80c);
    *(float *)(param_1 + 0xb8) = fVar24 * fVar26;
    *(float *)(param_1 + 0xbc) = fVar24 * fVar28;
  }
  else if ((int)((uint)(fVar28 < 0.0) << 0x1f) < 0) {
    fVar26 = *pfVar17;
    if (((int)((uint)(DAT_0003ae40 - fVar26 < fVar28) << 0x1f) < 0) &&
       (fVar35 <= DAT_0003ae40 - fVar26)) {
      uVar8 = *(undefined4 *)(*(int *)(iVar20 + local_14c) + 0x18c);
      local_e8 = DAT_0003ae64 + 0x3ac42;
      local_e4 = *(undefined4 *)(iVar20 + DAT_0003ae68);
      local_94 = 1;
      local_b4[0] = 0;
      (**(code **)(DAT_0003ae64 + 0x3ac4a))(&local_e8,local_b4);
      FUN_00073a7c(uVar8,DAT_0003ae6c + 0x3ac5e,0,local_b4);
      FUN_0001d388(local_b4);
      fVar26 = *pfVar17;
      local_e8 = DAT_0003ae70 + 0x3ac7a;
      fVar28 = *(float *)(param_1 + 0xb0);
    }
    fVar24 = DAT_0003ae3c;
    fVar28 = fVar28 / fVar26;
    iVar11 = *(int *)(iVar20 + local_14c);
    fVar26 = *(float *)(*(int *)(iVar11 + 0x40) + 0x18);
    iVar5 = (uint)(fVar28 < 0.0) << 0x1f;
    if (iVar5 < 0) {
      fVar28 = fVar28 + DAT_0003ae38;
    }
    if (-1 < iVar5) {
      fVar28 = DAT_0003ae38 - fVar28;
    }
    *(float *)(*(int *)(iVar11 + 0x40) + 0x18) = fVar26 + fVar28 * (DAT_0003ae3c - fVar26);
    fVar26 = *(float *)(*(int *)(iVar11 + 0x40) + 0x1c);
    *(float *)(*(int *)(iVar11 + 0x40) + 0x1c) = fVar26 + fVar28 * (fVar24 - fVar26);
    fVar26 = DAT_0003ae48;
    fVar29 = *(float *)(*(int *)(iVar11 + 0x40) + 0x20);
    fVar22 = fVar28 * DAT_0003ae44;
    *(float *)(*(int *)(iVar11 + 0x40) + 0x20) = fVar29 + fVar28 * (fVar24 - fVar29);
    fVar24 = *(float *)(DAT_0003ae74 + 0x3ace4);
    fVar29 = *(float *)(DAT_0003ae74 + 0x3ace8);
    fVar23 = *(float *)(DAT_0003ae74 + 0x3acec);
    fVar26 = (float)FUN_000927b8((int)(fVar22 * fVar26) & 0xffff);
    fVar28 = (float)FUN_000927b8(0x4718);
    fVar26 = DAT_0003ae38 - fVar26 / fVar28;
    *(float *)(param_1 + 0xb4) = fVar26 * -fVar24;
    *(float *)(param_1 + 0xb8) = fVar26 * -fVar29;
    *(float *)(param_1 + 0xbc) = fVar26 * -fVar23;
  }
  else {
    if ((fVar33 <= fVar28) && (*(int *)(param_1 + 0xac) != 0)) {
      FUN_00073984(*(undefined4 *)(*(int *)(iVar20 + local_14c) + 0x18c),*(int *)(param_1 + 0xac),
                   DAT_0003ae78 + 0x3ae04);
      *(undefined4 *)(param_1 + 0xac) = 0;
    }
    fVar26 = DAT_0003ae3c;
    uVar8 = *(undefined4 *)(DAT_0003ae7c + 0x3ae1e);
    uVar10 = *(undefined4 *)(DAT_0003ae7c + 0x3ae22);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(DAT_0003ae7c + 0x3ae1a);
    *(undefined4 *)(param_1 + 0xb8) = uVar8;
    *(undefined4 *)(param_1 + 0xbc) = uVar10;
    iVar5 = *(int *)(iVar20 + local_14c);
    *(float *)(*(int *)(iVar5 + 0x40) + 0x18) = fVar26;
    *(float *)(*(int *)(iVar5 + 0x40) + 0x1c) = fVar26;
    *(float *)(*(int *)(iVar5 + 0x40) + 0x20) = fVar26;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  iVar7 = DAT_0003aad4;
  iVar11 = DAT_0003aac8;
  iVar5 = DAT_0003aac4;
  fVar27 = *(float *)(param_1 + 0xb0);
  fVar29 = *(float *)(DAT_0003aab8 + 0x3a886);
  fVar28 = *(float *)(param_1 + 0x10);
  fVar23 = *(float *)(param_1 + 0xbc);
  fVar30 = *(float *)(DAT_0003aac0 + 0x3a892);
  fVar25 = *(float *)(DAT_0003aac0 + 0x3a88e);
  fVar24 = *(float *)(param_1 + 0xa0);
  fVar22 = fVar27 / (fVar30 + fVar30 + fVar25);
  fVar26 = DAT_0003aae0;
  if ((0.0 < fVar22) &&
     (fVar26 = DAT_0003ae50, fVar22 < DAT_0003ae38 != (NAN(fVar22) || NAN(DAT_0003ae38)))) {
    fVar26 = DAT_0003ae3c + fVar22 * DAT_0003ae4c;
  }
  iVar9 = *(int *)(param_1 + 0x7c);
  if ((*(int *)(param_1 + 0x80) - iVar9 >> 5) * -0x55555555 != 0) {
    uVar18 = 0;
    cVar19 = '\x01';
    iVar12 = DAT_0003aac4 + 0x3a8f0;
    iVar6 = DAT_0003aacc + 0x3a8f4;
    iVar13 = DAT_0003aad0 + 0x3a904;
    fVar34 = *(float *)(param_1 + 8) + *(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0x98) +
             *(float *)(DAT_0003aab8 + 0x3a87e) + *(float *)(DAT_0003aabc + 0x3a86a) * DAT_0003aa94;
    fVar32 = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0x9c) +
             *(float *)(DAT_0003aab8 + 0x3a882) + *(float *)(DAT_0003aabc + 0x3a86e) * DAT_0003aa94;
    fVar22 = *(float *)(DAT_0003aabc + 0x3a872) * DAT_0003aa94;
    do {
      fVar3 = DAT_0003aa90;
      iVar9 = iVar9 + uVar18 * 0x60;
      fVar30 = ((fVar27 - fVar25) - (float)(longlong)(int)uVar18 * fVar30) / fVar30;
      if ((fVar30 < 0.0 != NAN(fVar30)) || (DAT_0003aa90 < fVar30)) {
        *(undefined *)(iVar9 + 0x53) = 0xff;
        *(float *)(iVar9 + 0x54) = DAT_0003aa90;
        iVar15 = *(int *)(iVar9 + 0x40) * *(int *)(iVar9 + 0x44);
        *(int *)(iVar9 + 0x4c) = iVar15;
      }
      else {
        uVar8 = SUB84((double)(fVar27 - fVar25),0);
        fmod((double)CONCAT44(in_stack_fffffe9c,in_stack_fffffe98),
             (double)CONCAT44(in_stack_fffffea4,in_stack_fffffea0));
        fVar27 = DAT_0003aad8;
        fVar25 = DAT_0003aa9c;
        fVar31 = (float)(double)CONCAT44(extraout_r1,uVar8);
        fVar30 = fVar31 / DAT_0003aa98;
        if (0.0 < fVar30) {
          if (fVar30 < fVar3 == (NAN(fVar30) || NAN(fVar3))) {
            uVar14 = 0xff;
          }
          else {
            uVar14 = (uint)(0.0 < fVar30 * DAT_0003ae54) * (int)(fVar30 * DAT_0003ae54) & 0xff;
          }
        }
        else {
          uVar14 = 0;
        }
        fVar30 = (fVar31 - param_2) - DAT_0003aad8;
        *(char *)(iVar9 + 0x53) = (char)uVar14;
        fVar30 = fVar30 / fVar25;
        fVar25 = (fVar31 - fVar27) / fVar25;
        if (0.0 < fVar25) {
          if (fVar25 < DAT_0003ae38 != (NAN(fVar25) || NAN(DAT_0003ae38))) {
            uVar21 = (int)(fVar25 * DAT_0003ae58 * DAT_0003ae48) & 0xffff;
            if (fVar25 == 0.0 || fVar25 < 0.0 != NAN(fVar25)) {
              uVar14 = 0;
            }
            if (fVar25 != 0.0 && fVar25 < 0.0 == NAN(fVar25)) {
              uVar14 = 1;
            }
            goto LAB_0003aa5a;
          }
          uVar21 = 0x5550;
          uVar14 = 1;
          uVar36 = CONCAT44(DAT_0003ae38,fVar32);
          if (fVar30 <= 0.0) goto LAB_0003aa60;
LAB_0003abbc:
          if (uVar14 == 0) goto LAB_0003aa66;
LAB_0003abc2:
          *(int *)(iVar9 + 0x4c) =
               (int)((float)(longlong)(*(int *)(iVar9 + 0x40) * *(int *)(iVar9 + 0x44)) *
                    (DAT_0003ae3c + (float)((ulonglong)uVar36 >> 0x20) * DAT_0003ae3c));
        }
        else {
          uVar21 = 0;
          uVar14 = 0;
          fVar25 = DAT_0003aadc;
LAB_0003aa5a:
          uVar36 = CONCAT44(fVar25,fVar32);
          if (0.0 < fVar30) goto LAB_0003abbc;
LAB_0003aa60:
          if (uVar14 != 0) {
            uVar8 = FUN_0007e454();
            uVar10 = FUN_0008f414(iVar6);
            iVar15 = FUN_0007da40(uVar8,uVar10,0);
            uVar8 = DAT_0003b240;
            if (iVar15 != 0) {
              fVar25 = DAT_0003b244;
              if ((uVar18 & 1) != 0) {
                fVar25 = DAT_0003b248;
              }
              *(float *)(iVar15 + 8) = fVar25 * fVar34;
              *(int *)(iVar15 + 0xc) = (int)uVar36;
              *(undefined4 *)(iVar15 + 0x10) = uVar8;
            }
            uVar8 = FUN_0007e454();
            uVar10 = FUN_0008f414(iVar11 + 0x3b056);
            iVar15 = FUN_0007da40(uVar8,uVar10,0);
            uVar8 = DAT_0003b240;
            if (iVar15 != 0) {
              fVar25 = DAT_0003b248;
              if ((uVar18 & 1) != 0) {
                fVar25 = DAT_0003b244;
              }
              *(float *)(iVar15 + 8) = fVar25 * fVar34;
              *(int *)(iVar15 + 0xc) = (int)uVar36;
              *(undefined4 *)(iVar15 + 0x10) = uVar8;
            }
            uVar8 = FUN_0007e454();
            uVar10 = FUN_0008f414(DAT_0003b258 + 0x3b0a4);
            iVar15 = FUN_0007da40(uVar8,uVar10,0);
            if (iVar15 != 0) {
              *(float *)(iVar15 + 8) = fVar34;
              *(float *)(iVar15 + 0xc) = fVar32;
              *(float *)(iVar15 + 0x10) = fVar28 + fVar23 + fVar24 + fVar29 + fVar22;
            }
            iVar15 = DAT_0003b254;
            uVar8 = DAT_0003b24c;
            *(undefined4 *)(param_1 + 0x8c) = DAT_0003b24c;
            *(undefined4 *)(param_1 + 0x90) = uVar8;
            *(undefined4 *)(param_1 + 0x88) = DAT_0003b250;
            puVar16 = *(uint **)(iVar20 + iVar15);
            lVar2 = (ulonglong)*puVar16 * (ulonglong)puVar16[2];
            local_138 = (uint)lVar2;
            in_stack_fffffe98 = puVar16[4] + local_138;
            in_stack_fffffe9c =
                 puVar16[5] +
                 puVar16[2] * puVar16[1] + *puVar16 * puVar16[3] + (int)((ulonglong)lVar2 >> 0x20) +
                 (uint)CARRY4(puVar16[4],local_138);
            *puVar16 = in_stack_fffffe98;
            puVar16[1] = in_stack_fffffe9c;
            in_stack_fffffea4 = auStack_6c;
            iVar15 = DAT_0003b25c + 0x3b12c;
            *(short *)(param_1 + 0x94) = (short)((ulonglong)in_stack_fffffe9c * 0xff3a >> 0x20);
            FUN_0008f060(in_stack_fffffea4,0x20,iVar15,cVar19);
            uVar8 = *(undefined4 *)(*(int *)(iVar20 + local_14c) + 0x18c);
            local_ec = *(undefined4 *)(iVar20 + DAT_0003b260);
            local_b8 = 1;
            local_d8[0] = 0;
            local_f0 = iVar12;
            (**(code **)(iVar5 + 0x3a8f8))(&local_f0,local_d8);
            FUN_00073a7c(uVar8,in_stack_fffffea4,0,local_d8);
            FUN_0001d388(local_d8);
            local_f0 = iVar13;
            goto LAB_0003abc2;
          }
LAB_0003aa66:
          *(undefined4 *)(iVar9 + 0x4c) = 0;
        }
        fVar25 = (float)FUN_000927b8(uVar21);
        fVar32 = (float)uVar36;
        fVar27 = (float)FUN_000927b8(0x5550);
        iVar15 = *(int *)(iVar9 + 0x4c);
        *(float *)(iVar9 + 0x54) = fVar25 / fVar27;
      }
      fVar25 = *(float *)(iVar7 + 0x3a976);
      iVar9 = *(int *)(param_1 + 0x7c);
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + iVar15;
      uVar18 = uVar18 + 1;
      cVar19 = cVar19 + '\x02';
      if ((uint)((*(int *)(param_1 + 0x80) - iVar9 >> 5) * -0x55555555) <= uVar18) break;
      fVar32 = fVar32 + fVar25;
      fVar25 = *(float *)(iVar7 + 0x3a96a);
      fVar30 = *(float *)(iVar7 + 0x3a96e);
      fVar27 = *(float *)(param_1 + 0xb0);
    } while( true );
  }
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_000a5ce0(*(int *)(param_1 + 0xac),fVar26);
  }
  uVar8 = DAT_0003b240;
  fVar26 = *(float *)(param_1 + 0xb0);
  if (fVar26 == fVar33 || fVar26 < fVar33 != (NAN(fVar26) || NAN(fVar33))) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0xa4) = uVar8;
    FUN_000a3a68();
    iVar5 = FUN_00094c30();
    if (*(char *)(param_1 + 0xa8) == '\0') {
      if (iVar5 == 1) {
        FUN_000a3a68();
        iVar5 = FUN_000a5890();
      }
      else {
        if (iVar5 != 2) goto LAB_0003ab64;
        iVar5 = FUN_0006e1b4();
      }
      if (iVar5 != 0) {
        uVar8 = FUN_00076a80();
        iVar5 = FUN_000773bc(uVar8,*(undefined4 *)(*(int *)(iVar20 + local_14c) + 4),3);
        if (iVar5 != 0) {
          iVar11 = *(int *)(param_1 + 0x74);
          uVar36 = FUN_0002f60c(0);
          iVar11 = (int)uVar36 + iVar11;
          FUN_000771b0(iVar5,(int)((ulonglong)uVar36 >> 0x20),iVar11,iVar11 >> 0x1f);
        }
        *(undefined *)(param_1 + 0xa8) = 1;
      }
    }
  }
  else {
    if (fVar35 <= fVar33) {
      FUN_0003a000(param_1);
      fVar26 = *(float *)(param_1 + 0xb0);
    }
    fVar26 = (fVar26 - fVar33) / DAT_0003aad8;
    if (0.0 < fVar26) {
      if (fVar26 < DAT_0003ae38 == (NAN(fVar26) || NAN(DAT_0003ae38))) {
        uVar18 = 0x51c2;
        fVar26 = DAT_0003ae38;
      }
      else {
        uVar18 = (int)(fVar26 * DAT_0003ae5c * DAT_0003ae48) & 0xffff;
      }
    }
    else {
      uVar18 = 0;
      fVar26 = DAT_0003aadc;
    }
    *(int *)(param_1 + 0x70) =
         (int)((float)(longlong)*(int *)(param_1 + 0x74) * (DAT_0003aae0 + fVar26 * DAT_0003aae0));
    fVar26 = (float)FUN_000927b8(uVar18);
    fVar28 = (float)FUN_000927b8(0x51c2);
    *(float *)(param_1 + 0xa4) = fVar26 / fVar28;
  }
LAB_0003ab64:
  fVar26 = *(float *)(param_1 + 0x8c);
  if (fVar26 == 0.0 || fVar26 < 0.0 != NAN(fVar26)) {
    uVar8 = *(undefined4 *)(DAT_0003ae60 + 0x3ab80);
    uVar10 = *(undefined4 *)(DAT_0003ae60 + 0x3ab84);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(DAT_0003ae60 + 0x3ab7c);
    *(undefined4 *)(param_1 + 0x9c) = uVar8;
    *(undefined4 *)(param_1 + 0xa0) = uVar10;
  }
  else {
    *(float *)(param_1 + 0x8c) = fVar26 - param_2;
    fVar35 = ((fVar26 - param_2) * *(float *)(param_1 + 0x88)) / *(float *)(param_1 + 0x90);
    fVar26 = (float)FUN_000927b8(*(undefined2 *)(param_1 + 0x94));
    fVar28 = (float)FUN_000927c8(*(undefined2 *)(param_1 + 0x94));
    fVar33 = *(float *)(param_1 + 0x98);
    uVar36 = *(undefined8 *)(param_1 + 0x9c);
    fVar24 = fVar26 * fVar35 - fVar33;
    fVar26 = fVar28 * fVar35 - (float)uVar36;
    fVar28 = DAT_0003ae84 - (float)((ulonglong)uVar36 >> 0x20);
    if ((int)((uint)(fVar26 * fVar26 + fVar24 * fVar24 + fVar28 * fVar28 < DAT_0003ae80) << 0x1f) <
        0) {
      sVar1 = *(short *)(param_1 + 0x94);
      puVar16 = *(uint **)(iVar20 + DAT_0003b254);
      lVar2 = (ulonglong)*puVar16 * (ulonglong)puVar16[2] +
              CONCAT44(puVar16[2] * puVar16[1] + *puVar16 * puVar16[3],puVar16[4]);
      uVar18 = puVar16[5] + (int)((ulonglong)lVar2 >> 0x20);
      *puVar16 = (uint)lVar2;
      puVar16[1] = uVar18;
      fVar33 = *(float *)(param_1 + 0x98);
      uVar36 = *(undefined8 *)(param_1 + 0x9c);
      *(short *)(param_1 + 0x94) =
           sVar1 + (short)(int)((DAT_0003b234 +
                                ((float)(ulonglong)
                                        ((uVar18 >> 0xd) - (uint)(uVar18 * 0x80000 < uVar18)) /
                                DAT_0003b22c) * DAT_0003b230) * DAT_0003b238);
    }
    fVar35 = DAT_0003b23c;
    fVar26 = fVar26 * DAT_0003b23c;
    *(float *)(param_1 + 0x98) = fVar33 + fVar24 * DAT_0003b23c;
    *(float *)(param_1 + 0x9c) = (float)uVar36 + fVar26;
    *(float *)(param_1 + 0xa0) = (float)((ulonglong)uVar36 >> 0x20) + fVar28 * fVar35;
  }
  if (local_4c != **(int **)(iVar20 + iVar4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



