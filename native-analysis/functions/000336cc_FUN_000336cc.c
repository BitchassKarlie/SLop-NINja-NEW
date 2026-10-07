/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000336cc FUN_000336cc */

/* WARNING: Removing unreachable block (ram,0x000337c4) */

void FUN_000336cc(float param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float extraout_s15;
  float extraout_s15_00;
  float fVar17;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar10 = DAT_00033a4c;
  iVar9 = DAT_00033a48;
  iVar4 = DAT_00033a44;
  iVar11 = DAT_00033a40 + 0x336e2;
  local_34 = **(int **)(iVar11 + DAT_00033a44);
  iVar12 = DAT_00033ea4;
  if (*(int *)(DAT_00033a48 + 0x337fa) != 0) {
    FUN_00049d7c(*(undefined4 *)(*(int *)(iVar11 + DAT_00033a4c) + 0x40),
                 *(int *)(DAT_00033a48 + 0x337fa),0);
    *(undefined4 *)(iVar9 + 0x337fa) = 0;
    iVar12 = iVar10;
  }
  fVar15 = DAT_00033a1c;
  fVar14 = *(float *)(DAT_00033a50 + 0x337fa);
  if ((fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) &&
     (*(float *)(DAT_00033a50 + 0x337fa) = fVar14 - param_1, fVar14 - param_1 <= fVar15)) {
    if (fVar14 != fVar15 && fVar14 < fVar15 == (NAN(fVar14) || NAN(fVar15))) {
      uVar5 = FUN_000a3a68();
      FUN_000a3728(uVar5,DAT_00033eb0 + 0x33d24);
    }
    param_1 = DAT_00033a20;
    *(float *)(*(int *)(iVar11 + iVar12) + 0x3c) = DAT_00033a20;
  }
  uVar5 = DAT_00033a24;
  fVar15 = DAT_00033a20;
  iVar10 = *(int *)(iVar11 + iVar12);
  *(undefined *)(iVar10 + 0xa1) = 0;
  *(undefined *)(iVar10 + 0xa0) = 0;
  iVar9 = iVar10 + 0xc0;
  do {
    fVar14 = *(float *)(iVar10 + 0xac);
    if (fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) {
      *(float *)(iVar10 + 0xac) = fVar15;
    }
    if ((fVar14 == 0.0 || fVar14 < 0.0 != NAN(fVar14)) && (fVar14 == 0.0)) {
      *(undefined4 *)(iVar10 + 0xac) = uVar5;
    }
    iVar7 = DAT_00033a58;
    iVar10 = iVar10 + 0xc;
  } while (iVar10 != iVar9);
  if (*(float *)(DAT_00033a54 + 0x33790) <= 0.0) {
    uVar5 = FUN_0002e348();
    FUN_000918bc(uVar5,param_1);
  }
  else {
    if (*(int *)(DAT_00033a58 + 0x33890) == 0) {
      FUN_0002fa48(&local_5c,DAT_00033eb4 + 0x33e02);
      FUN_00017d64(iVar7 + 0x33890,local_5c);
      FUN_00017d90(&local_5c);
    }
    iVar9 = FUN_0006dc50();
    fVar15 = DAT_00033a20;
    if (iVar9 == 0) goto LAB_000339ee;
    fVar14 = *(float *)(DAT_00033a5c + 0x337c0) + param_1 * DAT_00033a28;
    if (NAN(fVar14) || NAN(DAT_00033a20)) {
      *(float *)(DAT_00033a5c + 0x337c0) = DAT_00033a20;
      *(float *)(*(int *)(iVar11 + iVar12) + 0x3c) = fVar15;
    }
    else {
      *(float *)(DAT_00033a5c + 0x337c0) = fVar14;
      *(float *)(*(int *)(iVar11 + iVar12) + 0x3c) = fVar15;
    }
    param_1 = 0.0;
    FUN_00017d64(DAT_00033ea8 + 0x33dc8,0);
  }
  iVar9 = FUN_0006dc44();
  if (iVar9 == 0) {
    if (param_2 != 0) goto LAB_000337e4;
LAB_00033aa2:
    iVar9 = *(int *)(iVar11 + iVar12);
    fVar15 = *(float *)(iVar9 + 0x10);
    *(char *)(iVar9 + 0x39) = (char)param_2;
    if ((int)((uint)(fVar15 < 0.0) << 0x1f) < 0) {
      iVar10 = (uint)(fVar15 < DAT_00033a78) << 0x1f;
      if (-1 < iVar10) {
        iVar9 = 0;
      }
      if (iVar10 < 0) {
        iVar9 = 1;
      }
      if (iVar9 != 0) goto LAB_00033ad0;
LAB_00033ce4:
      if (*(char *)(*(int *)(iVar11 + iVar12) + 2) != '\0') {
        *(undefined *)(*(int *)(*(int *)(iVar11 + iVar12) + 0x50) + 0x21) = 1;
      }
    }
    else {
      if (fVar15 == DAT_00033e88 || fVar15 < DAT_00033e88 != (NAN(fVar15) || NAN(DAT_00033e88))) {
        iVar9 = 0;
      }
      if (fVar15 != DAT_00033e88 && fVar15 < DAT_00033e88 == (NAN(fVar15) || NAN(DAT_00033e88))) {
        iVar9 = 1;
      }
      if (iVar9 == 0) goto LAB_00033ce4;
LAB_00033ad0:
      *(undefined *)(*(int *)(iVar11 + iVar12) + 2) = 0;
    }
    iVar9 = DAT_00033e8c;
    FUN_00028908(0);
    iVar10 = 0;
    do {
      piVar6 = *(int **)(iVar9 + 0x33b82 + iVar10);
      (**(code **)(*piVar6 + 0x10))(piVar6,param_1);
      piVar6 = *(int **)(iVar9 + 0x33b82 + iVar10);
      iVar10 = iVar10 + 4;
      (**(code **)(*piVar6 + 0x18))(piVar6,param_1);
    } while (iVar10 != 0x40);
    uVar5 = FUN_00086780();
    FUN_0008a1a4(uVar5,0);
    fVar15 = param_1;
  }
  else {
    uVar5 = FUN_000a5f28();
    FUN_000a5e60(uVar5,param_1);
    FUN_00073b20(*(undefined4 *)(*(int *)(iVar11 + iVar12) + 0x18c));
    FUN_00032044(param_1);
    if (param_2 == 0) goto LAB_00033aa2;
LAB_000337e4:
    iVar9 = *(int *)(iVar11 + iVar12);
    *(undefined *)(*(int *)(iVar9 + 0x50) + 0x21) = 0;
    fVar15 = *(float *)(iVar9 + 0x30);
    bVar1 = fVar15 < 0.0;
    bVar2 = fVar15 != 0.0;
    bVar3 = NAN(fVar15);
    if (bVar2 && bVar1 == bVar3) {
      fVar15 = fVar15 - param_1;
    }
    if (bVar2 && bVar1 == bVar3) {
      *(float *)(iVar9 + 0x30) = fVar15;
    }
    fVar15 = DAT_00033e70;
    fVar16 = *(float *)(DAT_00033a60 + 0x3380a);
    fVar14 = DAT_00033a2c;
    if (fVar16 != 0.0 && fVar16 < 0.0 == NAN(fVar16)) {
      fVar16 = fVar16 - param_1 * *(float *)(DAT_00033eac + 0x33d06);
      fVar14 = *(float *)(DAT_00033eac + 0x33d02) - DAT_00033e70;
      *(float *)(DAT_00033a60 + 0x3380a) = fVar16;
      fVar14 = fVar15 + fVar16 * fVar14;
    }
    iVar9 = DAT_00033a68;
    iVar10 = *(int *)(iVar11 + iVar12);
    fVar15 = DAT_00033a34;
    if (*(char *)(*(int *)(iVar11 + iVar12) + 0x39) != '\0') {
      fVar15 = DAT_00033a30;
    }
    fVar16 = *(float *)(DAT_00033a64 + 0x3384a) - fVar15 * param_1;
    fVar15 = *(float *)(DAT_00033a64 + 0x3384a);
    if (fVar16 != DAT_00033a2c && fVar16 < DAT_00033a2c == (NAN(fVar16) || NAN(DAT_00033a2c))) {
      fVar15 = fVar16;
    }
    fVar13 = DAT_00033a2c;
    if (fVar16 != DAT_00033a2c && fVar16 < DAT_00033a2c == (NAN(fVar16) || NAN(DAT_00033a2c))) {
      fVar13 = fVar15;
    }
    fVar16 = *(float *)(iVar10 + 0x3c);
    *(undefined *)(iVar10 + 0x39) = 0;
    *(float *)(iVar9 + 0x3386a) = fVar13;
    fVar15 = param_1 * fVar13 * fVar14;
    *(float *)(iVar10 + 0x3c) = fVar13 * fVar14 * fVar16;
    FUN_00028908(param_1);
    FUN_0002d5e4(param_1);
    fVar14 = *(float *)(iVar10 + 0x14);
    if (fVar14 == 0.0 || fVar14 < 0.0 != NAN(fVar14)) {
      *(undefined *)(*(int *)(iVar10 + 0x50) + 0x21) = 1;
      uVar5 = FUN_00086780();
      FUN_0008a1a4(uVar5,fVar15);
      uVar5 = FUN_00086780();
      fVar14 = (float)FUN_00085600(uVar5,0);
      fVar14 = fVar15 * fVar14;
      param_1 = fVar15;
      if (fVar14 == 0.0) goto LAB_00033938;
    }
    else {
      if (*(char *)(DAT_00033a6c + 0x33940) == '\0') {
        *(undefined *)(iVar10 + 0x39) = 1;
      }
      fVar16 = fVar14 - fVar15;
      iVar9 = *(int *)(iVar11 + iVar12);
      *(float *)(iVar9 + 0x14) = fVar16;
      if (*(int *)(iVar9 + 4) == 2) {
        iVar10 = (uint)(*(float *)(iVar9 + 0x10) < DAT_00033e70) << 0x1f;
        if (iVar10 < 0) {
          fVar16 = fVar16 - fVar15;
        }
        if (iVar10 < 0) {
          *(float *)(iVar9 + 0x14) = fVar16;
        }
      }
      bVar1 = fVar16 < DAT_00033a38;
      bVar2 = fVar16 == DAT_00033a38;
      bVar3 = NAN(fVar16) || NAN(DAT_00033a38);
      fVar13 = DAT_00033a38;
      if (!bVar2 && bVar1 == bVar3) {
        fVar13 = -fVar15;
      }
      param_1 = 0.0;
      if (!bVar2 && bVar1 == bVar3) {
        param_1 = fVar13;
      }
      if (bVar2 || bVar1 != bVar3) {
        FUN_00031bec(fVar14);
        param_1 = fVar15 + fVar15;
        fVar16 = *(float *)(*(int *)(iVar11 + iVar12) + 0x14);
      }
      if ((((fVar16 <= DAT_00033a3c) &&
           (fVar14 != DAT_00033a3c && fVar14 < DAT_00033a3c == (NAN(fVar14) || NAN(DAT_00033a3c))))
          && (iVar9 = *(int *)(iVar11 + iVar12), *(char *)(iVar9 + 8) == '\0')) &&
         (*(char *)(DAT_00033a70 + 0x3399e) == '\0')) {
        FUN_000318fc(0xffffffff,0xbf800000,0xffffffff);
        fVar16 = *(float *)(iVar9 + 0x14);
      }
      fVar14 = DAT_00033a20;
      if ((int)((uint)(fVar16 < 0.0) << 0x1f) < 0) {
        *(float *)(*(int *)(iVar11 + iVar12) + 0x14) = DAT_00033a20;
        fVar14 = DAT_00033a20;
      }
LAB_00033938:
      if ((int)((uint)(*(float *)(*(int *)(iVar11 + iVar12) + 0x10) < 0.0) << 0x1f) < 0) {
        fVar14 = fVar15;
      }
    }
    FUN_0001ced8(fVar14);
    uVar5 = FUN_0001c940();
    FUN_0001bfac(uVar5,fVar14,0,0);
    iVar9 = FUN_0002f5ec();
    if (iVar9 != 0) {
      FUN_00022fcc();
    }
  }
  iVar9 = DAT_00033e90;
  fVar14 = DAT_00033e70;
  *(float *)(DAT_00033e90 + 0x33b40) = DAT_00033e70;
  uVar5 = FUN_00086780();
  fVar16 = (float)FUN_00085600(uVar5,0);
  if (fVar16 == 0.0) {
    fVar16 = fVar14;
  }
  if (*(char *)(*(int *)(iVar11 + iVar12) + 2) == '\0') {
    fVar13 = fVar14 / fVar16;
    if ((int)((uint)(fVar14 / fVar16 < fVar14) << 0x1f) < 0) {
      fVar13 = fVar14;
    }
    *(float *)(iVar9 + 0x33b40) = fVar13;
  }
  uVar5 = FUN_0007e454();
  iVar9 = *(int *)(iVar11 + iVar12);
  cVar8 = *(char *)(iVar9 + 2);
  if (cVar8 != '\0') {
    cVar8 = '\x01';
  }
  FUN_000806b0(uVar5,fVar15 / *(float *)(DAT_00033e94 + 0x33b88),cVar8);
  FUN_00019f5c(*(undefined4 *)(iVar9 + 0x4c),param_1);
  fVar14 = DAT_00033e74;
  if (*(char *)(iVar9 + 0x39) == '\0') {
    FUN_0004a130(*(undefined4 *)(iVar9 + 0x40),fVar15);
    cVar8 = *(char *)(iVar9 + 0x39);
joined_r0x00033984:
    if (cVar8 != '\0') goto LAB_00033bee;
    iVar9 = *(int *)(iVar11 + iVar12);
    if (*(char *)(iVar9 + 8) == '\0') goto LAB_00033c38;
LAB_00033996:
    if (*(int *)(DAT_00033a74 + 0x33a84) != 0) {
      FUN_000a5ce0(*(int *)(DAT_00033a74 + 0x33a84),0);
    }
  }
  else {
    if (fVar15 == 0.0) {
      FUN_0004a130(*(undefined4 *)(iVar9 + 0x40),0);
      cVar8 = *(char *)(iVar9 + 0x39);
      goto joined_r0x00033984;
    }
    fVar16 = extraout_s15;
    fVar13 = fVar15;
    if (fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15)) {
      do {
        if (fVar13 == fVar14 || fVar13 < fVar14 != (NAN(fVar13) || NAN(fVar14))) {
          fVar16 = fVar14;
        }
        if (fVar13 != fVar14 && fVar13 < fVar14 == (NAN(fVar13) || NAN(fVar14))) {
          fVar16 = fVar13;
        }
        fVar13 = fVar13 - fVar14;
        FUN_0004a130(*(undefined4 *)(iVar9 + 0x40),fVar16);
        fVar16 = extraout_s15_00;
      } while (fVar13 != 0.0 && fVar13 < 0.0 == NAN(fVar13));
      cVar8 = *(char *)(*(int *)(iVar11 + iVar12) + 0x39);
      goto joined_r0x00033984;
    }
LAB_00033bee:
    iVar10 = FUN_00030330();
    iVar9 = DAT_00033e98;
    fVar16 = DAT_00033e78;
    fVar14 = DAT_00033e70;
    fVar13 = DAT_00033e70;
    if (iVar10 != 0) {
      fVar13 = DAT_00033e78;
    }
    fVar13 = fVar13 * *(float *)(DAT_00033e98 + 0x33c1c);
    fVar17 = DAT_00033e7c;
    if (fVar13 == DAT_00033e7c || fVar13 < DAT_00033e7c != (NAN(fVar13) || NAN(DAT_00033e7c))) {
      iVar10 = FUN_00030330();
      if (iVar10 == 0) {
        fVar16 = fVar14;
      }
      fVar17 = fVar16 * *(float *)(iVar9 + 0x33c1c);
    }
    iVar9 = *(int *)(iVar11 + iVar12);
    *(float *)(DAT_00033e9c + 0x33c48) = fVar17;
    if (*(char *)(iVar9 + 8) != '\0') goto LAB_00033996;
LAB_00033c38:
    fVar14 = (float)FUN_0001d490();
    iVar10 = DAT_00033ea0;
    if ((fVar14 == 0.0 || fVar14 < 0.0 != NAN(fVar14)) || (*(char *)(iVar9 + 2) != '\0'))
    goto LAB_00033996;
    iVar7 = *(int *)(DAT_00033ea0 + 0x33d44);
    if (iVar7 == 0) {
      uVar5 = *(undefined4 *)(iVar9 + 0x18c);
      local_64 = DAT_00033eb8 + 0x33e2c;
      local_60 = *(undefined4 *)(iVar11 + DAT_00033ebc);
      local_38 = 1;
      local_58[0] = iVar7;
      (**(code **)(DAT_00033eb8 + 0x33e34))(&local_64,local_58);
      uVar5 = FUN_00073a7c(uVar5,DAT_00033ec0 + 0x33e48,0,local_58);
      *(undefined4 *)(iVar10 + 0x33d44) = uVar5;
      FUN_0001d388(local_58);
      iVar7 = *(int *)(iVar10 + 0x33d44);
      local_64 = DAT_00033ec4 + 0x33e68;
      if (iVar7 != 0) goto LAB_00033c64;
    }
    else {
LAB_00033c64:
      fVar14 = fVar14 / DAT_00033e80;
      fVar16 = DAT_00033e84;
      if ((0.0 < fVar14) &&
         (fVar16 = fVar14, fVar14 < DAT_00033e70 == (NAN(fVar14) || NAN(DAT_00033e70)))) {
        fVar16 = DAT_00033e70;
      }
      FUN_000a5ce0(iVar7,fVar16 * **(float **)(*(int *)(iVar11 + iVar12) + 0x18c));
    }
  }
  iVar9 = *(int *)(iVar11 + iVar12);
  if (*(char *)(iVar9 + 9) != '\0') {
    if (0.0 < *(float *)(iVar9 + 0xc)) {
      FUN_000316e8(fVar15);
      *(float *)(iVar9 + 0xc) = *(float *)(iVar9 + 0xc) - fVar15;
    }
    else {
      FUN_00031c5c();
      *(float *)(iVar9 + 0xc) = DAT_00033a20;
    }
  }
  fVar14 = *(float *)(*(int *)(iVar11 + iVar12) + 0x1a4);
  if ((fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) &&
     (*(float *)(*(int *)(iVar11 + iVar12) + 0x1a4) = fVar14 - fVar15, fVar14 - fVar15 <= 0.0)) {
    FUN_000334a0();
  }
LAB_000339ee:
  if (local_34 == **(int **)(iVar11 + iVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



