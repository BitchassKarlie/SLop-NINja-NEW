/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00081380 FUN_00081380 */

void FUN_00081380(int param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float extraout_s14;
  float fVar25;
  float in_s15;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c [8];
  undefined local_7c;
  int local_78 [8];
  undefined local_58;
  int local_54;
  
  iVar5 = DAT_00081748;
  iVar15 = DAT_00081744 + 0x81398;
  local_54 = **(int **)(iVar15 + DAT_00081748);
  fVar28 = *(float *)(param_1 + 0x58);
  bVar1 = fVar28 < 0.0;
  bVar2 = fVar28 == 0.0;
  bVar3 = NAN(fVar28);
  iVar16 = *(int *)(param_1 + 0x14);
  if (!bVar2 && bVar1 == bVar3) {
    in_s15 = fVar28 - param_2;
  }
  if (bVar2 || bVar1 != bVar3) {
    fVar28 = param_3;
  }
  if (!bVar2 && bVar1 == bVar3) {
    param_4 = *(float *)(param_1 + 0x5c);
  }
  if (!bVar2 && bVar1 == bVar3) {
    *(float *)(param_1 + 0x58) = in_s15;
  }
  fVar6 = DAT_00081754;
  fVar21 = DAT_00081740;
  fVar25 = DAT_0008173c;
  fVar4 = DAT_00081738;
  fVar30 = DAT_00081734;
  if (*(int *)(param_1 + 0x18) != iVar16) {
    iVar19 = *(int *)(iVar15 + DAT_0008174c);
    do {
      fVar31 = param_4 * *(float *)(iVar16 + 0x5c);
      fVar29 = param_4 * *(float *)(iVar16 + 0x60);
      if ((*(int *)(iVar19 + 0x40) != 0) && (*(char *)(iVar16 + 0xc) == '\0')) {
        *(undefined *)(iVar16 + 0xc) = 1;
        FUN_00049d7c(*(undefined4 *)(iVar19 + 0x40),*(undefined4 *)(iVar16 + 8));
      }
      fVar27 = *(float *)(iVar16 + 0x40);
      fVar24 = DAT_00081754;
      if (fVar27 == 0.0 || fVar27 < 0.0 != NAN(fVar27)) {
        if ((fVar28 < fVar29 == (NAN(fVar28) || NAN(fVar29))) && (fVar28 <= fVar31)) {
          fVar24 = DAT_00081734;
        }
        *(float *)(iVar16 + 0x3c) = fVar24;
        bVar1 = true;
      }
      else if (fVar31 < fVar28) {
        *(float *)(iVar16 + 0x3c) = fVar6;
        bVar1 = true;
        fVar24 = fVar6;
      }
      else if ((int)((uint)(fVar29 + fVar27 < fVar28) << 0x1f) < 0) {
        fVar24 = param_2 / fVar27 + *(float *)(iVar16 + 0x3c);
        if (fVar24 != fVar30 && fVar24 < fVar30 == (NAN(fVar24) || NAN(fVar30))) {
          fVar24 = fVar30;
        }
        bVar1 = true;
        *(float *)(iVar16 + 0x3c) = fVar24;
      }
      else {
        fVar27 = (fVar28 - fVar29) / fVar27;
        if ((0.0 < fVar27) && (fVar24 = fVar27, fVar27 < fVar30 == (NAN(fVar27) || NAN(fVar30)))) {
          fVar24 = fVar30;
        }
        *(float *)(iVar16 + 0x3c) = fVar24;
        bVar1 = false;
      }
      fVar31 = *(float *)(iVar16 + 0x14);
      fVar29 = *(float *)(iVar16 + 0x24);
      iVar11 = *(int *)(iVar16 + 8);
      fVar27 = *(float *)(iVar16 + 0x20);
      fVar26 = (fVar30 - fVar24) * (fVar30 - fVar24);
      fVar24 = *(float *)(iVar16 + 0x18);
      if (bVar1) {
        pfVar8 = (float *)(iVar16 + 0x44);
      }
      else {
        pfVar8 = (float *)(iVar16 + 0x50);
      }
      fVar22 = pfVar8[1];
      fVar23 = pfVar8[2];
      *(float *)(iVar11 + 8) =
           *(float *)(iVar16 + 0x10) + *(float *)(iVar16 + 0x1c) * fVar4 + fVar26 * *pfVar8;
      *(float *)(iVar11 + 0xc) = fVar31 + fVar27 * fVar25 + fVar26 * fVar22;
      *(float *)(iVar11 + 0x10) = fVar24 + fVar29 * fVar6 + fVar26 * fVar23;
      if (*(int *)(iVar16 + 0x74) << 0x1f < 0) {
        fVar26 = fVar30 - fVar26;
        fVar29 = *(float *)(iVar16 + 0x68);
        iVar11 = *(int *)(iVar16 + 8);
        fVar31 = *(float *)(iVar16 + 0x6c);
        *(float *)(iVar11 + 0x14) = fVar26 * *(float *)(iVar16 + 100);
        *(float *)(iVar11 + 0x18) = fVar26 * fVar29;
        *(float *)(iVar11 + 0x1c) = fVar26 * fVar31;
      }
      else {
        iVar11 = *(int *)(iVar16 + 8);
        uVar10 = *(undefined4 *)(iVar16 + 0x68);
        uVar9 = *(undefined4 *)(iVar16 + 0x6c);
        *(undefined4 *)(iVar11 + 0x14) = *(undefined4 *)(iVar16 + 100);
        *(undefined4 *)(iVar11 + 0x18) = uVar10;
        *(undefined4 *)(iVar11 + 0x1c) = uVar9;
      }
      if (*(int *)(iVar16 + 0x74) << 0x1e < 0) {
        fVar29 = (float)(longlong)(int)(uint)*(byte *)(iVar16 + 0x73) * *(float *)(iVar16 + 0x3c);
        *(char *)(*(int *)(iVar16 + 8) + 0x53) = (0.0 < fVar29) * (char)(int)fVar29;
      }
      fVar29 = (float)(longlong)(int)(uint)*(ushort *)(iVar16 + 0x2c) +
               param_2 * fVar21 * *(float *)(iVar16 + 0x30);
      *(ushort *)(iVar16 + 0x2c) = (ushort)(0.0 < fVar29) * (short)(int)fVar29;
      fVar31 = (float)FUN_000927b8();
      iVar11 = *(int *)(iVar16 + 8);
      fVar29 = extraout_s14;
      if (fVar31 != 0.0 && fVar31 < 0.0 == NAN(fVar31)) {
        fVar29 = *(float *)(iVar16 + 0x34);
      }
      if (fVar31 == 0.0 || fVar31 < 0.0 != NAN(fVar31)) {
        fVar29 = *(float *)(iVar16 + 0x38);
      }
      iVar16 = iVar16 + 0x7c;
      fVar29 = fVar31 * fVar29 + fVar30;
      *(float *)(iVar11 + 0x14) = *(float *)(iVar11 + 0x14) * fVar29;
      *(float *)(iVar11 + 0x18) = *(float *)(iVar11 + 0x18) * fVar29;
      *(float *)(iVar11 + 0x1c) = *(float *)(iVar11 + 0x1c) * fVar29;
    } while (iVar16 != *(int *)(param_1 + 0x18));
  }
  fVar4 = DAT_00081754;
  iVar16 = DAT_0008174c;
  fVar30 = DAT_00081734;
  pfVar8 = *(float **)(param_1 + 0x24);
  if (pfVar8 != *(float **)(param_1 + 0x28)) {
    iVar19 = *(int *)(iVar15 + DAT_0008174c);
    do {
      fVar25 = pfVar8[1];
      if (fVar25 == 0.0 || fVar25 < 0.0 != NAN(fVar25)) {
        *pfVar8 = fVar30;
      }
      if (fVar25 != 0.0 && fVar25 < 0.0 == NAN(fVar25)) {
        if (pfVar8[2] * param_4 < fVar28) {
          *pfVar8 = fVar4;
        }
        else if ((int)((uint)(pfVar8[3] * param_4 + fVar25 < fVar28) << 0x1f) < 0) {
          fVar25 = param_2 / fVar25 + *pfVar8;
          if (fVar25 != fVar30 && fVar25 < fVar30 == (NAN(fVar25) || NAN(fVar30))) {
            fVar25 = fVar30;
          }
          *pfVar8 = fVar25;
        }
        else {
          fVar25 = (fVar28 - pfVar8[3] * param_4) / fVar25;
          if (0.0 < fVar25) {
            if (fVar25 < fVar30 == (NAN(fVar25) || NAN(fVar30))) {
              fVar25 = fVar30;
            }
            *pfVar8 = fVar25;
          }
          else {
            *pfVar8 = DAT_00081970;
          }
        }
      }
      iVar11 = *(int *)(iVar19 + 0x40);
      if (iVar11 != 0) {
        iVar18 = *(int *)(iVar15 + iVar16);
        iVar12 = 0;
        pfVar7 = pfVar8;
        while( true ) {
          fVar21 = fVar30 + (pfVar7[4] - fVar30) * *pfVar8;
          fVar25 = DAT_00081754;
          if ((0.0 < fVar21) && (fVar25 = fVar21, fVar21 < fVar30 == (NAN(fVar21) || NAN(fVar30))))
          {
            fVar25 = fVar30;
          }
          *(float *)(iVar11 + (iVar12 + 6) * 4) = *(float *)(iVar11 + (iVar12 + 6) * 4) * fVar25;
          iVar17 = iVar12 + 2;
          iVar11 = *(int *)(iVar18 + 0x40);
          fVar21 = *(float *)(iVar11 + iVar17 * 4 + 4);
          fVar25 = fVar30 + (pfVar7[7] - fVar30) * *pfVar8;
          if (0.0 < fVar25) {
            if (fVar25 < fVar30 == (NAN(fVar25) || NAN(fVar30))) {
              fVar25 = fVar30;
            }
            *(float *)(iVar11 + iVar17 * 4 + 4) = fVar21 * fVar25;
          }
          else {
            *(float *)(iVar11 + iVar17 * 4 + 4) = fVar21 * DAT_00081754;
          }
          if (iVar12 == 2) break;
          iVar12 = iVar12 + 1;
          pfVar7 = pfVar7 + 1;
          iVar11 = *(int *)(*(int *)(iVar15 + iVar16) + 0x40);
        }
      }
      pfVar8 = pfVar8 + 10;
    } while (pfVar8 != *(float **)(param_1 + 0x28));
  }
  fVar4 = DAT_00081754;
  fVar30 = DAT_00081750;
  iVar19 = *(int *)(param_1 + 4);
  iVar16 = *(int *)(param_1 + 8);
  if (iVar16 != iVar19) {
    do {
      if ((*(int *)(iVar19 + 4) != 0) && ((int)((uint)(fVar28 < fVar30) << 0x1f) < 0)) {
        *(float *)(*(int *)(iVar19 + 4) + 0x20) = fVar4;
        iVar16 = *(int *)(param_1 + 8);
      }
      iVar19 = iVar19 + 0x20;
    } while (iVar19 != iVar16);
  }
  iVar19 = DAT_00081980;
  iVar16 = DAT_00081978;
  iVar20 = param_1 + 0x30;
  iVar13 = DAT_00081974 + 0x817c6;
  iVar18 = DAT_00081978 + 0x817d0;
  iVar14 = DAT_0008197c + 0x817da;
  iVar17 = DAT_00081980 + 0x817e8;
  iVar11 = *(int *)(param_1 + 0x34);
  iVar12 = iVar20;
LAB_000817e4:
  do {
    if (iVar11 == *(int *)(param_1 + 0x38)) {
LAB_00081854:
      if (local_54 != **(int **)(iVar15 + iVar5)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    while( true ) {
      fVar30 = param_4 * *(float *)(iVar11 + 0x24);
      do {
      } while (param_4 * *(float *)(iVar11 + 0x20) < fVar28);
      if (fVar30 < 0.0 != NAN(fVar30)) break;
      *(undefined4 *)(iVar11 + 0x20) = DAT_0008196c;
      if (*(int *)(iVar11 + 0x28) == 0) {
        uVar10 = *(undefined4 *)(*(int *)(iVar15 + DAT_00081984) + 0x18c);
        local_a0 = *(undefined4 *)(iVar15 + DAT_00081988);
        local_58 = 1;
        local_a4 = iVar17;
        local_78[0] = *(int *)(iVar11 + 0x28);
        (**(code **)(iVar19 + 0x817f0))(&local_a4,local_78);
        uVar10 = FUN_00073a7c(uVar10,iVar11,0x3f28f5c3,local_78);
        *(undefined4 *)(iVar11 + 0x28) = uVar10;
        FUN_0001d388(local_78);
        local_a4 = iVar14;
      }
      if (-1 < (int)((uint)(fVar28 < fVar30) << 0x1f)) goto LAB_000817e4;
      local_b8 = iVar11 + 0x2c;
      local_c4 = iVar12;
      local_c0 = iVar11;
      local_bc = iVar12;
      FUN_00081308(&local_b4,iVar20,iVar12,iVar11,iVar12,local_b8);
      iVar11 = local_b0;
      iVar12 = local_b4;
      if (local_b0 == *(int *)(param_1 + 0x38)) goto LAB_00081854;
    }
    uVar10 = *(undefined4 *)(*(int *)(iVar15 + DAT_00081984) + 0x18c);
    local_a8 = *(undefined4 *)(iVar15 + DAT_00081988);
    local_7c = 1;
    local_9c[0] = 0;
    local_ac = iVar18;
    (**(code **)(iVar16 + 0x817d8))(&local_ac,local_9c);
    FUN_00073a7c(uVar10,iVar11,0x3f800000,local_9c);
    FUN_0001d388(local_9c);
    local_c4 = iVar12;
    local_c0 = iVar11;
    local_ac = iVar13;
    FUN_00081308(&local_cc,iVar20,iVar12,iVar11,iVar12,iVar11 + 0x2c);
    iVar11 = local_c8;
    iVar12 = local_cc;
  } while( true );
}



