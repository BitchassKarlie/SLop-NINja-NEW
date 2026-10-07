/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00065374 FUN_00065374 */

void FUN_00065374(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58 [8];
  undefined local_38;
  int local_34;
  
  fVar14 = DAT_000656d0;
  iVar5 = DAT_000656b8;
  iVar1 = DAT_000656b0;
  iVar6 = DAT_000656ac + 0x6538a;
  local_34 = **(int **)(iVar6 + DAT_000656b0);
  if (*(char *)(DAT_000656b4 + 0x65396) == '\0') {
    cVar3 = *(char *)(*(int *)(iVar6 + DAT_000656b8) + 2);
  }
  else {
    cVar3 = *(char *)(*(int *)(iVar6 + DAT_000656b8) + 2);
    if ((cVar3 != '\0') &&
       (fVar9 = *(float *)(param_1 + 0x74), fVar9 != 0.0 && fVar9 < 0.0 == NAN(fVar9))) {
      fVar9 = *(float *)(param_1 + 0x88) * DAT_0006569c;
      *(float *)(param_1 + 0x78) = DAT_000656d0;
      if (0.0 < fVar9) {
        if (fVar9 < fVar14 == (NAN(fVar9) || NAN(fVar14))) {
          cVar3 = '\x10';
          fVar9 = fVar14;
        }
        else {
          cVar3 = (0.0 < fVar9 * DAT_000656e8) * (char)(int)(fVar9 * DAT_000656e8);
        }
      }
      else {
        cVar3 = '\0';
        fVar9 = DAT_000656d8;
      }
      *(char *)(param_1 + 0x53) = cVar3;
      *(undefined *)(param_1 + 0x52) = 0xf6;
      *(undefined *)(param_1 + 0x51) = 0xd4;
      *(undefined *)(param_1 + 0x50) = 0;
      *(float *)(param_1 + 0x8c) = fVar9;
      cVar3 = *(char *)(*(int *)(iVar6 + iVar5) + 2);
    }
    *(undefined *)(DAT_000656bc + 0x654f2) = 0;
  }
  fVar11 = DAT_000656e0;
  fVar9 = DAT_000656d8;
  fVar14 = DAT_000656d0;
  if (cVar3 != '\0') goto LAB_0006546e;
  if (*(float *)(param_1 + 0x74) == DAT_000656d8) {
    *(float *)(param_1 + 0x9c) = DAT_000656d8;
    if (*(int *)(param_1 + 0x94) != 0) {
      uVar2 = FUN_0007e454();
      FUN_0007d8e8(uVar2,*(undefined4 *)(param_1 + 0x94));
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
    fVar9 = DAT_000656d8;
    *(float *)(param_1 + 0x88) = DAT_000656d8;
    fVar10 = *(float *)(param_1 + 0x8c);
    fVar14 = DAT_000656d0;
    fVar12 = fVar9;
LAB_000653ea:
    iVar4 = *(int *)(iVar6 + iVar5);
    *(float *)(param_1 + 0x8c) = fVar10 + (fVar12 - fVar10) * DAT_00065698;
    if (*(int *)(iVar4 + 4) != 2) goto LAB_00065404;
LAB_00065586:
    fVar11 = **(float **)(iVar4 + 0x18c);
    if (fVar11 == fVar14 || fVar11 < fVar14 != (NAN(fVar11) || NAN(fVar14))) {
      if ((fVar14 == fVar11 || fVar14 < fVar11 != (NAN(fVar14) || NAN(fVar11))) ||
         (fVar12 = param_2 + fVar11,
         fVar12 != fVar14 && fVar12 < fVar14 == (NAN(fVar12) || NAN(fVar14)))) goto LAB_00065668;
    }
    else {
      fVar12 = fVar11 - param_2;
      if ((int)((uint)(fVar11 - param_2 < fVar14) << 0x1f) < 0) {
LAB_00065668:
        fVar12 = fVar14;
      }
    }
    **(float **)(iVar4 + 0x18c) = fVar12;
    iVar4 = DAT_000656c0;
    if (*(char *)(DAT_000656c0 + 0x655b1) == '\0') {
      fVar14 = *(float *)(param_1 + 0x9c);
      if (fVar14 == fVar9 || fVar14 < fVar9 != (NAN(fVar14) || NAN(fVar9))) goto LAB_000655c0;
      fVar14 = fVar14 + param_2 * DAT_000656a8;
      if ((int)((uint)(fVar14 < fVar9) << 0x1f) < 0) {
        fVar14 = fVar9;
      }
    }
    else {
      *(float *)(param_1 + 0x9c) = fVar9;
      *(undefined *)(iVar4 + 0x655b1) = 0;
      fVar14 = *(float *)(param_1 + 0x9c);
LAB_000655c0:
      if ((fVar9 == fVar14 || fVar9 < fVar14 != (NAN(fVar9) || NAN(fVar14))) ||
         (fVar14 = fVar14 + param_2 * DAT_000656a0,
         fVar14 != fVar9 && fVar14 < fVar9 == (NAN(fVar14) || NAN(fVar9)))) {
        fVar14 = fVar9;
      }
    }
    *(float *)(param_1 + 0x9c) = fVar14;
    if (fVar14 == 0.0 || fVar14 < 0.0 != NAN(fVar14)) goto LAB_000655f4;
LAB_00065428:
    iVar4 = *(int *)(param_1 + 0x90);
    if (iVar4 == 0) {
      iVar5 = *(int *)(iVar6 + iVar5);
      *(undefined4 *)(param_1 + 0x98) = 0;
      uVar7 = *(undefined4 *)(iVar5 + 0x18c);
      uVar2 = *(undefined4 *)(DAT_00065884 + 0x657d4);
      local_68 = DAT_00065888 + 0x657e4;
      local_60 = DAT_0006588c + 0x657ec;
      local_38 = 1;
      local_64 = param_1;
      local_5c = iVar4;
      local_58[0] = iVar4;
      (**(code **)(DAT_00065888 + 0x657ec))(&local_68,local_58);
      uVar2 = FUN_00073a7c(uVar7,uVar2,0,local_58);
      *(undefined4 *)(param_1 + 0x90) = uVar2;
      FUN_0001d388(local_58);
      iVar4 = *(int *)(param_1 + 0x90);
      local_68 = DAT_00065890 + 0x6581e;
      if (iVar4 != 0) {
        fVar14 = *(float *)(param_1 + 0x9c);
        goto LAB_00065432;
      }
    }
    else {
LAB_00065432:
      FUN_000a5ce0(iVar4,fVar14);
    }
LAB_0006543a:
    fVar14 = *(float *)(param_1 + 0x8c) * DAT_000656e8;
    if (fVar14 <= 0.0) goto LAB_00065452;
LAB_00065632:
    if (fVar14 < DAT_000656a4 == (NAN(fVar14) || NAN(DAT_000656a4))) {
      cVar3 = -1;
    }
    else {
      cVar3 = (0.0 < fVar14) * (char)(int)fVar14;
    }
  }
  else {
    if ((*(int *)(*(int *)(iVar6 + iVar5) + 4) == 2) &&
       (*(float *)(*(int *)(iVar6 + iVar5) + 0x10) == DAT_000656d8)) {
      uVar2 = FUN_00086780();
      fVar12 = (float)FUN_00085550(uVar2,0);
      fVar11 = DAT_000656cc;
      fVar14 = DAT_000656c8;
      if (0.0 < (fVar12 - DAT_000656c8) / DAT_000656cc) {
        uVar2 = FUN_00086780();
        fVar9 = (float)FUN_00085550(uVar2,0);
        fVar12 = (fVar9 - fVar14) / fVar11;
        fVar9 = DAT_0006587c;
        if (fVar12 < DAT_0006587c != (NAN(fVar12) || NAN(DAT_0006587c))) {
          uVar2 = FUN_00086780();
          fVar9 = (float)FUN_00085550(uVar2,0);
          fVar9 = (fVar9 - fVar14) / fVar11;
        }
      }
      fVar10 = *(float *)(param_1 + 0x8c);
      fVar14 = DAT_000656d0 + fVar9 * DAT_000656d4;
      fVar12 = fVar10 + fVar10;
      fVar11 = DAT_000656d8;
      if ((0.0 < fVar12) &&
         (fVar11 = fVar12, fVar12 < DAT_000656d0 == (NAN(fVar12) || NAN(DAT_000656d0)))) {
        fVar11 = DAT_000656d0;
      }
      fVar9 = fVar9 * fVar11;
      fVar11 = param_2 * DAT_000656e0;
      fVar13 = *(float *)(param_1 + 0x74);
      fVar8 = (float)(longlong)(int)(uint)*(ushort *)(param_1 + 0x70);
      fVar12 = DAT_000656dc;
      if ((DAT_000656dc < fVar13) &&
         (fVar12 = fVar13, fVar13 < DAT_000656e4 == (NAN(fVar13) || NAN(DAT_000656e4)))) {
        fVar12 = DAT_000656e4;
      }
    }
    else {
      fVar8 = (float)(longlong)(int)(uint)*(ushort *)(param_1 + 0x70);
      *(float *)(param_1 + 0x74) = DAT_000656d8;
      fVar10 = *(float *)(param_1 + 0x8c);
      fVar11 = param_2 * fVar11;
      fVar12 = DAT_000656dc;
    }
    fVar8 = fVar8 + fVar11 * fVar12 * DAT_000656c8;
    fVar11 = *(float *)(param_1 + 0x88) * DAT_0006569c;
    *(ushort *)(param_1 + 0x70) = (ushort)(0.0 < fVar8) * (short)(int)fVar8;
    fVar12 = DAT_00065880;
    if (fVar11 <= 0.0) goto LAB_000653ea;
    iVar4 = *(int *)(iVar6 + iVar5);
    if (fVar11 < DAT_000656d0 == (NAN(fVar11) || NAN(DAT_000656d0))) {
      fVar11 = DAT_000656d0;
    }
    *(float *)(param_1 + 0x8c) = fVar10 + (fVar11 - fVar10) * DAT_00065698;
    if (*(int *)(iVar4 + 4) == 2) goto LAB_00065586;
LAB_00065404:
    *(float *)(param_1 + 0x9c) = DAT_000656d8;
    **(float **)(iVar4 + 0x18c) = DAT_000656d0;
    fVar14 = *(float *)(param_1 + 0x9c);
    if (fVar14 != 0.0 && fVar14 < 0.0 == NAN(fVar14)) goto LAB_00065428;
LAB_000655f4:
    if (*(int *)(param_1 + 0x90) == 0) goto LAB_0006543a;
    FUN_00073984(*(undefined4 *)(*(int *)(iVar6 + iVar5) + 0x18c),*(int *)(param_1 + 0x90),
                 *(undefined4 *)(DAT_000656c4 + 0x6560e + *(int *)(param_1 + 0x98) * 4));
    fVar14 = *(float *)(param_1 + 0x8c) * DAT_000656e8;
    *(undefined4 *)(param_1 + 0x90) = 0;
    if (0.0 < fVar14) goto LAB_00065632;
LAB_00065452:
    cVar3 = '\0';
  }
  *(char *)(param_1 + 0x53) = cVar3;
  *(undefined *)(param_1 + 0x52) = 0xf6;
  *(undefined *)(param_1 + 0x51) = 0xd4;
  *(undefined *)(param_1 + 0x50) = 0;
LAB_0006546e:
  if (local_34 == **(int **)(iVar6 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



