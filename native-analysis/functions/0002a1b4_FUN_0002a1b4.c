/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002a1b4 FUN_0002a1b4 */

void FUN_0002a1b4(int param_1)

{
  bool bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  iVar9 = DAT_0002a550;
  uVar3 = FUN_00086780();
  iVar4 = FUN_0008570c(uVar3,0);
  iVar6 = DAT_0002a564;
  iVar11 = DAT_0002a55c;
  if (iVar4 == 0) {
    if (*(char *)(DAT_0002a55c + 0x2a356) == '\0') {
      if (*(int *)(param_1 + 0x3c) != 0) {
        uVar3 = FUN_0007e454();
        FUN_0007d8e8(uVar3,*(undefined4 *)(param_1 + 0x3c));
        *(undefined4 *)(param_1 + 0x3c) = 0;
      }
    }
    else if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = FUN_0007e454();
      iVar11 = FUN_0007da40(uVar3,*(undefined4 *)(iVar11 + 0x2a35a),0);
      *(int *)(param_1 + 0x3c) = iVar11;
      if (iVar11 != 0) {
        *(undefined *)(iVar11 + 0x44) = 1;
      }
    }
  }
  else {
    iVar11 = *(int *)(param_1 + 0x3c);
    if (iVar11 == 0) {
      if (-1 < *(int *)(DAT_0002a564 + 0x2a506) << 0x1f) {
        iVar12 = DAT_0002a564 + 0x2a506;
        iVar4 = __cxa_guard_acquire(iVar12);
        if (iVar4 != 0) {
          uVar3 = FUN_0008f414(DAT_0002a570 + 0x2a532);
          *(undefined4 *)(iVar6 + 0x2a50a) = uVar3;
          __cxa_guard_release(iVar12);
        }
      }
      uVar3 = FUN_0007e454();
      iVar6 = FUN_0007da40(uVar3,*(undefined4 *)(DAT_0002a568 + 0x2a51c),0);
      *(int *)(param_1 + 0x3c) = iVar6;
      if (iVar6 != 0) {
        *(undefined *)(iVar6 + 0x44) = 1;
        iVar11 = *(int *)(param_1 + 0x3c);
      }
    }
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar11 + 8) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar11 + 0xc) = uVar3;
    *(undefined4 *)(iVar11 + 0x10) = uVar7;
  }
  fVar13 = *(float *)(*(int *)(iVar9 + 0x2a1cc + DAT_0002a554) + 0x14);
  if (fVar13 != 0.0 && fVar13 < 0.0 == NAN(fVar13)) {
    return;
  }
  if (*(char *)(DAT_0002a558 + 0x2a259) == '\0') {
    return;
  }
  fVar13 = *(float *)(param_1 + 0x144);
  local_2c = *(float *)(param_1 + 0x10) - fVar13;
  iVar9 = *(int *)(param_1 + 0x3c);
  local_28 = *(float *)(param_1 + 0x14) - *(float *)(param_1 + 0x148);
  local_24 = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14c);
  if (iVar9 != 0) {
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar9 + 0xc) = uVar3;
    *(undefined4 *)(iVar9 + 0x10) = uVar7;
    fVar13 = *(float *)(param_1 + 0x144);
  }
  iVar9 = DAT_0002a56c;
  if ((fVar13 == DAT_0002a540) && (*(float *)(param_1 + 0x148) == DAT_0002a540)) {
    bVar1 = *(float *)(param_1 + 0x14c) == DAT_0002a540;
  }
  else {
    bVar1 = false;
  }
  bVar8 = *(byte *)(param_1 + 0x200);
  if (bVar8 == 0) {
    fVar13 = local_28 * local_28 + local_2c * local_2c;
    if (fVar13 < DAT_0002a548 == (NAN(fVar13) || NAN(DAT_0002a548))) goto LAB_0002a318;
LAB_0002a2a2:
    if (bVar1) {
LAB_0002a498:
      pfVar10 = (float *)(DAT_0002a56c + 0x2a4ac);
      *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x18);
      local_34 = *(float *)(iVar9 + 0x2a4b0) - *(float *)(param_1 + 0x148);
      local_30 = *(float *)(iVar9 + 0x2a4b4) - *(float *)(param_1 + 0x14c);
      local_38 = *pfVar10 - *(float *)(param_1 + 0x144);
      local_2c = local_38;
      local_28 = local_34;
      local_24 = local_30;
      FUN_0001a178(&local_2c);
      iVar9 = *(int *)(param_1 + 0x58);
    }
    else {
      iVar9 = *(int *)(param_1 + 0x58);
      if (0 < iVar9) goto LAB_0002a2ae;
    }
  }
  else {
    fVar13 = local_28 * local_28 + local_2c * local_2c;
    if (fVar13 < DAT_0002a544 != (NAN(fVar13) || NAN(DAT_0002a544))) goto LAB_0002a2a2;
LAB_0002a318:
    if (bVar1) goto LAB_0002a498;
    iVar9 = *(int *)(param_1 + 0x58);
  }
  *(int *)(param_1 + 0x1f8) = iVar9 + -1;
  local_44 = local_2c;
  local_40 = local_28;
  local_3c = local_24;
  FUN_0001a178(&local_44);
  fVar5 = (float)FUN_0001a154(&local_2c);
  fVar13 = DAT_0002a54c;
  if ((!bVar1) &&
     (fVar5 != DAT_0002a54c && fVar5 < DAT_0002a54c == (NAN(fVar5) || NAN(DAT_0002a54c)))) {
    do {
      local_5c = *(float *)(param_1 + 0x144) + local_44 * fVar13;
      local_58 = *(float *)(param_1 + 0x148) + local_40 * fVar13;
      local_54 = *(float *)(param_1 + 0x14c) + local_3c * fVar13;
      fVar5 = fVar5 - fVar13;
      local_68 = local_2c;
      local_64 = local_28;
      local_60 = local_24;
      local_50 = local_5c;
      local_4c = local_58;
      local_48 = local_54;
      FUN_000299f4(param_1,&local_5c,&local_68);
      *(float *)(param_1 + 0x144) = local_50;
      *(float *)(param_1 + 0x148) = local_4c;
      *(float *)(param_1 + 0x14c) = local_48;
    } while (fVar5 != fVar13 && fVar5 < fVar13 == (NAN(fVar5) || NAN(fVar13)));
  }
  if ((*(int *)(param_1 + 0x3c) != 0) && (*(char *)(DAT_0002a560 + 0x2a47c) == '\x02')) {
    sVar2 = FUN_00092918(local_2c,local_28);
    iVar9 = *(int *)(param_1 + 0x3c);
    fVar13 = (float)FUN_000927b8(-sVar2);
    *(float *)(iVar9 + 0x30) = -fVar13;
    iVar9 = *(int *)(param_1 + 0x3c);
    uVar3 = FUN_000927c8(-sVar2);
    *(undefined4 *)(iVar9 + 0x2c) = uVar3;
  }
  local_80 = *(float *)(param_1 + 0x144) + fVar5 * local_44;
  local_7c = *(float *)(param_1 + 0x148) + fVar5 * local_40;
  local_78 = *(float *)(param_1 + 0x14c) + fVar5 * local_3c;
  local_8c = local_2c;
  local_88 = local_28;
  local_84 = local_24;
  local_74 = local_80;
  local_70 = local_7c;
  local_6c = local_78;
  FUN_000299f4(param_1,&local_80,&local_8c);
  *(float *)(param_1 + 0x144) = local_74;
  *(float *)(param_1 + 0x148) = local_70;
  *(float *)(param_1 + 0x14c) = local_6c;
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x58) + -1;
  bVar8 = *(byte *)(param_1 + 0x200);
LAB_0002a2ae:
  *(byte *)(param_1 + 0x200) = bVar8 | 1;
  return;
}



