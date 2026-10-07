/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00045830 FUN_00045830 */

void FUN_00045830(int *param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float in_s13;
  float extraout_s13;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58 [8];
  undefined local_38;
  int local_34;
  
  fVar13 = DAT_00045bd8;
  iVar7 = DAT_00045bc0;
  iVar5 = DAT_00045bbc;
  fVar11 = DAT_00045ba0;
  iVar9 = DAT_00045bb8 + 0x45846;
  local_34 = **(int **)(iVar9 + DAT_00045bbc);
  fVar10 = (float)param_1[0x22];
  iVar8 = param_1[0x23];
  switch(iVar8) {
  case 0:
    param_1[0x22] = (int)(fVar10 + (DAT_00045bb0 - fVar10) * DAT_00045bac);
    iVar7 = (**(code **)(*param_1 + 0x34))(param_1);
    if (iVar7 == 0) {
LAB_000459f4:
      iVar8 = param_1[0x23];
    }
    else {
      param_1[0x23] = 2;
      (**(code **)(*param_1 + 0x38))(param_1);
      iVar7 = DAT_00045bf4;
      iVar8 = param_1[0x23];
      param_1[0x28] = DAT_00045bf4;
      param_1[0x29] = iVar7;
    }
    break;
  case 1:
    fVar10 = fVar10 + (DAT_00045bb0 - fVar10) * DAT_00045bac;
    bVar1 = fVar10 < DAT_00045bb4;
    bVar2 = fVar10 != DAT_00045bb4;
    bVar3 = NAN(DAT_00045bb4);
    param_1[0x22] = (int)fVar10;
    if (bVar2 && bVar1 == (NAN(fVar10) || bVar3)) {
      param_1[0x23] = 2;
      (**(code **)(*param_1 + 0x38))(param_1);
      iVar8 = param_1[0x23];
      param_1[0x2e] = 0;
    }
    break;
  case 2:
    if ((*(char *)(DAT_00045bd4 + 0x45a4c) != '\0') && (*(char *)(param_1 + 0x2d) == '\0')) {
      FUN_00045300(param_1,param_2);
      fVar10 = (float)param_1[0x22];
      iVar8 = param_1[0x23];
      in_s13 = extraout_s13;
    }
    iVar7 = (uint)(fVar10 < DAT_00045bb4) << 0x1f;
    fVar11 = DAT_00045bb4;
    if (iVar7 < 0) {
      in_s13 = DAT_00045bb0 - fVar10;
      fVar11 = DAT_00045bac;
    }
    if (-1 < iVar7) {
      fVar11 = DAT_00045bb0;
    }
    if (-1 < iVar7) {
      param_1[0x22] = (int)fVar11;
    }
    fVar12 = DAT_00045bd8;
    fVar13 = DAT_00045bb0;
    if (iVar7 < 0) {
      fVar10 = fVar10 + in_s13 * fVar11;
    }
    if (iVar7 < 0) {
      param_1[0x22] = (int)fVar10;
    }
    fVar12 = (fVar13 - (float)param_1[0x2c]) * fVar12;
    fVar11 = DAT_00045be8;
    if ((DAT_00045be8 < fVar12) &&
       (fVar11 = fVar12, fVar12 < DAT_00045bdc == (NAN(fVar12) || NAN(DAT_00045bdc)))) {
      fVar11 = DAT_00045bdc;
    }
    param_1[0x2c] = (int)(fVar11 + (float)param_1[0x2c]);
    fVar11 = (float)param_1[0x28];
    if ((fVar11 != 0.0 && fVar11 < 0.0 == NAN(fVar11)) &&
       (param_1[0x28] = (int)(fVar11 - param_2), fVar11 - param_2 <= 0.0)) {
      param_1[0x28] = DAT_00045bf4;
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
    fVar10 = fVar10 * DAT_00045b9c;
    iVar8 = *(int *)(iVar9 + DAT_00045bc0);
    param_1[0x22] = (int)fVar10;
    param_1[0x2c] = (int)fVar10;
    fVar13 = *(float *)(iVar8 + 0x10);
    if ((int)((uint)(fVar13 < fVar11) << 0x1f) < 0) {
      (**(code **)(*param_1 + 0x40))(param_1);
      fVar13 = *(float *)(iVar8 + 0x10);
    }
    fVar11 = DAT_00045ba8;
    fVar13 = fVar13 * DAT_00045ba4;
    *(float *)(*(int *)(iVar9 + iVar7) + 0x10) = fVar13;
    if ((int)((uint)(fVar13 < 0.0) << 0x1f) < 0) {
      fVar13 = -fVar13;
    }
    if (-1 < (int)((uint)(fVar13 < fVar11) << 0x1f)) goto LAB_000459f4;
    iVar7 = *(int *)(iVar9 + iVar7);
    local_60 = DAT_00045bc4 + 0x458ee;
    local_38 = 1;
    local_5c = *(undefined4 *)(iVar9 + DAT_00045bc8);
    local_58[0] = 0;
    uVar6 = *(undefined4 *)(iVar7 + 0x18c);
    (**(code **)(DAT_00045bc4 + 0x458f6))(&local_60,local_58);
    FUN_00073a7c(uVar6,DAT_00045bcc + 0x45914,0x3f800000,local_58);
    FUN_0001d388(local_58);
    local_60 = DAT_00045bd0;
    *(undefined *)(iVar7 + 8) = 0;
    *(float *)(iVar7 + 0x10) = DAT_00045bf0;
    *(undefined *)((int)param_1 + 0x27) = 1;
    local_60 = local_60 + 0x45934;
    *(undefined4 *)(*(int *)(iVar7 + 0x164) + 0x11c) = 0x11;
    iVar8 = param_1[0x23];
    break;
  case 7:
    param_1[0x30] = 0;
    fVar11 = DAT_00045ba8;
    if (fVar10 == 0.0 || fVar10 < 0.0 != NAN(fVar10)) {
      if (-1 < (int)((uint)(fVar10 < DAT_00045be8) << 0x1f)) {
        uVar6 = FUN_0001c940();
        iVar7 = FUN_0001bb84(uVar6,0);
        if (iVar7 == 0) {
          uVar6 = FUN_0001c940();
          iVar7 = FUN_0001bb84(uVar6,1);
          if (iVar7 == 0) {
            uVar6 = FUN_000a3a68();
            FUN_00094c94(uVar6,0,0xffffffff,2,2);
            iVar8 = param_1[0x23];
            param_1[0x22] = DAT_00045d70;
            break;
          }
        }
        goto LAB_000459f4;
      }
      bVar1 = fVar10 - param_2 < DAT_00045bec;
      param_1[0x22] = (int)(fVar10 - param_2);
      if ((int)((uint)bVar1 << 0x1f) < 0) {
        param_1[0x22] = (int)DAT_00045bf0;
        param_1[0x23] = 1;
        goto LAB_0004596e;
      }
    }
    else {
      fVar10 = fVar10 * DAT_00045b9c;
      param_1[0x22] = (int)fVar10;
      param_1[0x2c] = (int)fVar10;
      if ((int)((uint)(fVar10 < 0.0) << 0x1f) < 0) {
        fVar10 = -fVar10;
      }
      if ((int)((uint)(fVar10 < fVar11) << 0x1f) < 0) {
        param_1[0x22] = (int)DAT_00045bf0;
      }
    }
    break;
  case 8:
    fVar13 = (DAT_00045bf0 - (float)param_1[0x2c]) * DAT_00045bd8;
    fVar11 = DAT_00045be8;
    if ((DAT_00045be8 < fVar13) &&
       (fVar11 = fVar13, fVar13 < DAT_00045bdc == (NAN(fVar13) || NAN(DAT_00045bdc)))) {
      fVar11 = DAT_00045bdc;
    }
    param_1[0x2c] = (int)(fVar11 + (float)param_1[0x2c]);
    uVar6 = FUN_0001c940();
    iVar7 = FUN_0001bb84(uVar6,0);
    if (iVar7 != 0) goto LAB_000459f4;
    uVar6 = FUN_000a3a68();
    iVar7 = FUN_00094c90(uVar6,1);
    if (iVar7 != 0) {
      *(undefined *)(*(int *)(iVar9 + DAT_00045d74) + 0x19c) = 1;
      FUN_000a3a68();
      FUN_00094c8c();
    }
    param_1[0x23] = 9;
    goto LAB_00045948;
  case 9:
    fVar13 = (DAT_00045bf0 - (float)param_1[0x2c]) * DAT_00045bd8;
    fVar11 = DAT_00045be8;
    if ((DAT_00045be8 < fVar13) &&
       (fVar11 = fVar13, fVar13 < DAT_00045bdc == (NAN(fVar13) || NAN(DAT_00045bdc)))) {
      fVar11 = DAT_00045bdc;
    }
    fVar11 = fVar11 + (float)param_1[0x2c];
    param_1[0x2c] = (int)fVar11;
    fVar13 = DAT_00045bf0;
    iVar7 = iVar8;
    if ((int)((uint)(fVar11 < 0.0) << 0x1f) < 0) {
      if (fVar11 == DAT_00045be0 || fVar11 < DAT_00045be0 != (NAN(fVar11) || NAN(DAT_00045be0))) {
        iVar7 = 0;
      }
      if (fVar11 != DAT_00045be0 && fVar11 < DAT_00045be0 == (NAN(fVar11) || NAN(DAT_00045be0))) {
        iVar7 = 1;
      }
    }
    else {
      iVar4 = (uint)(fVar11 < DAT_00045be4) << 0x1f;
      if (-1 < iVar4) {
        iVar7 = 0;
      }
      if (iVar4 < 0) {
        iVar7 = 1;
      }
    }
    if (iVar7 != 0) {
      param_1[0x30] = 0;
      param_1[0x2f] = (int)fVar13;
      param_1[0x23] = 1;
      goto LAB_0004596e;
    }
    break;
  case 0xe:
    fVar11 = fVar10 * DAT_00045ba4;
    bVar1 = fVar10 < DAT_00045bd8;
    bVar2 = fVar10 != DAT_00045bd8;
    bVar3 = NAN(DAT_00045bd8);
    param_1[0x22] = (int)fVar11;
    param_1[0x2c] = (int)fVar11;
    if ((bVar2 && bVar1 == (NAN(fVar10) || bVar3)) && (fVar11 <= fVar13)) {
      *(undefined4 *)(*(int *)(*(int *)(iVar9 + DAT_00045d74) + 0x164) + 0x11c) = 8;
      fVar11 = (float)param_1[0x22];
      iVar8 = param_1[0x23];
    }
    if ((int)((uint)(fVar11 < DAT_00045ba8) << 0x1f) < 0) {
      *(undefined *)((int)param_1 + 0x27) = 1;
    }
  }
  if (2 < iVar8) {
LAB_00045948:
    fVar11 = param_2 / DAT_00045bac + (float)param_1[0x2f];
    if (-1 < (int)((uint)(fVar11 < 0.0) << 0x1f)) {
      fVar11 = DAT_00045bf0;
    }
    param_1[0x2f] = (int)fVar11;
  }
LAB_0004596e:
  (**(code **)(*param_1 + 0x3c))(param_1,param_2);
  if (local_34 != **(int **)(iVar9 + iVar5)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



