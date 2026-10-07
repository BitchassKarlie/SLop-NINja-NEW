/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002a6d4 FUN_0002a6d4 */

void FUN_0002a6d4(int param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  
  iVar9 = DAT_0002a958 + 0x2a6e4;
  if (((*(byte *)(param_1 + 0x200) != 0) &&
      (bVar3 = *(byte *)(param_1 + 0x200) & 1, *(byte *)(param_1 + 0x200) = bVar3 * '\x02',
      iVar6 = DAT_0002a97c, bVar3 == 0)) && (*(int *)(DAT_0002a97c + 0x2a998) != 0)) {
    uVar4 = FUN_0007e454();
    iVar6 = FUN_0007da40(uVar4,*(undefined4 *)(iVar6 + 0x2a998),0);
    if (iVar6 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x14);
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(iVar6 + 0xc) = uVar4;
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
    }
  }
  if (0 < *(int *)(DAT_0002a95c + 0x2a788)) {
    *(undefined4 *)(DAT_0002a95c + 0x2a788) = 0;
  }
  iVar6 = DAT_0002a964;
  if (3 < *(int *)(param_1 + 0x58)) {
    uVar11 = 0;
    iVar12 = *(int *)(iVar9 + DAT_0002a960);
    puVar10 = (undefined4 *)(DAT_0002a964 + 0x2a71e);
    *(undefined *)(iVar12 + 0x18d4) = 0;
    uVar4 = *(undefined4 *)(iVar6 + 0x2a722);
    uVar5 = *(undefined4 *)(iVar6 + 0x2a726);
    uVar7 = *(undefined4 *)(iVar6 + 0x2a72a);
    *(undefined4 *)(iVar12 + 0x1094) = *puVar10;
    *(undefined4 *)(iVar12 + 0x1098) = uVar4;
    *(undefined4 *)(iVar12 + 0x109c) = uVar5;
    *(undefined4 *)(iVar12 + 0x10a0) = uVar7;
    uVar4 = *(undefined4 *)(iVar6 + 0x2a732);
    uVar5 = *(undefined4 *)(iVar6 + 0x2a736);
    uVar7 = *(undefined4 *)(iVar6 + 0x2a73a);
    *(undefined4 *)(iVar12 + 0x10a4) = *(undefined4 *)(iVar6 + 0x2a72e);
    *(undefined4 *)(iVar12 + 0x10a8) = uVar4;
    *(undefined4 *)(iVar12 + 0x10ac) = uVar5;
    *(undefined4 *)(iVar12 + 0x10b0) = uVar7;
    uVar4 = *(undefined4 *)(iVar6 + 0x2a742);
    uVar5 = *(undefined4 *)(iVar6 + 0x2a746);
    uVar7 = *(undefined4 *)(iVar6 + 0x2a74a);
    *(undefined4 *)(iVar12 + 0x10b4) = *(undefined4 *)(iVar6 + 0x2a73e);
    *(undefined4 *)(iVar12 + 0x10b8) = uVar4;
    *(undefined4 *)(iVar12 + 0x10bc) = uVar5;
    *(undefined4 *)(iVar12 + 0x10c0) = uVar7;
    uVar4 = *(undefined4 *)(iVar6 + 0x2a752);
    uVar5 = *(undefined4 *)(iVar6 + 0x2a756);
    uVar7 = *(undefined4 *)(iVar6 + 0x2a75a);
    *(undefined4 *)(iVar12 + 0x10c4) = *(undefined4 *)(iVar6 + 0x2a74e);
    *(undefined4 *)(iVar12 + 0x10c8) = uVar4;
    *(undefined4 *)(iVar12 + 0x10cc) = uVar5;
    *(undefined4 *)(iVar12 + 0x10d0) = uVar7;
    uVar4 = *(undefined4 *)(iVar6 + 0x2a722);
    uVar5 = *(undefined4 *)(iVar6 + 0x2a726);
    uVar7 = *(undefined4 *)(iVar6 + 0x2a72a);
    *(undefined4 *)(iVar12 + 0x1894) = *puVar10;
    *(undefined4 *)(iVar12 + 0x1898) = uVar4;
    *(undefined4 *)(iVar12 + 0x189c) = uVar5;
    *(undefined4 *)(iVar12 + 0x18a0) = uVar7;
    uVar4 = *(undefined4 *)(iVar6 + 0x2a732);
    uVar5 = *(undefined4 *)(iVar6 + 0x2a736);
    uVar7 = *(undefined4 *)(iVar6 + 0x2a73a);
    *(undefined4 *)(iVar12 + 0x18a4) = *(undefined4 *)(iVar6 + 0x2a72e);
    *(undefined4 *)(iVar12 + 0x18a8) = uVar4;
    *(undefined4 *)(iVar12 + 0x18ac) = uVar5;
    *(undefined4 *)(iVar12 + 0x18b0) = uVar7;
    uVar4 = *(undefined4 *)(iVar6 + 0x2a742);
    uVar5 = *(undefined4 *)(iVar6 + 0x2a746);
    uVar7 = *(undefined4 *)(iVar6 + 0x2a74a);
    *(undefined4 *)(iVar12 + 0x18b4) = *(undefined4 *)(iVar6 + 0x2a73e);
    *(undefined4 *)(iVar12 + 0x18b8) = uVar4;
    *(undefined4 *)(iVar12 + 0x18bc) = uVar5;
    *(undefined4 *)(iVar12 + 0x18c0) = uVar7;
    uVar4 = *(undefined4 *)(iVar6 + 0x2a752);
    uVar5 = *(undefined4 *)(iVar6 + 0x2a756);
    uVar7 = *(undefined4 *)(iVar6 + 0x2a75a);
    *(undefined4 *)(iVar12 + 0x18c4) = *(undefined4 *)(iVar6 + 0x2a74e);
    *(undefined4 *)(iVar12 + 0x18c8) = uVar4;
    *(undefined4 *)(iVar12 + 0x18cc) = uVar5;
    *(undefined4 *)(iVar12 + 0x18d0) = uVar7;
    iVar9 = DAT_0002a968;
    iVar6 = *(int *)(iVar12 + 0x18d8);
    pfVar8 = (float *)(DAT_0002a968 + 0x2a76e);
    *(int *)(iVar12 + 0x18d8) = iVar6 + 1;
    fVar13 = *pfVar8;
    fVar14 = *(float *)(iVar9 + 0x2a772);
    fVar15 = *(float *)(iVar9 + 0x2a776);
    *(int *)(iVar12 + 0x18d8) = iVar6 + 2;
    *(float *)(iVar12 + 0x18c4) = fVar13 + *(float *)(iVar12 + 0x18c4);
    *(float *)(iVar12 + 0x18c8) = fVar14 + *(float *)(iVar12 + 0x18c8);
    *(float *)(iVar12 + 0x18cc) = fVar15 + *(float *)(iVar12 + 0x18cc);
    FUN_0008d434(iVar12,1);
    fVar13 = *(float *)(param_1 + 0x1f0);
    if ((fVar13 != 0.0 && fVar13 < 0.0 == NAN(fVar13)) && (*(int *)(DAT_0002a974 + 0x2a8b0) != 0)) {
      FUN_000995e4(*(undefined4 *)(DAT_0002a974 + 0x2a8b0));
      fVar13 = *(float *)(param_1 + 0x1f0) * DAT_0002a954;
      if (0.0 < fVar13) {
        bVar1 = fVar13 < DAT_0002a954;
        bVar2 = NAN(fVar13);
        if (bVar1 != (bVar2 || NAN(DAT_0002a954))) {
          fVar13 = (float)((uint)(0.0 < fVar13) * (int)fVar13);
        }
        uVar11 = SUB41(fVar13,0);
        if (bVar1 == (bVar2 || NAN(DAT_0002a954))) {
          uVar11 = 0xff;
        }
      }
      local_22 = 0xff;
      local_23 = 0xff;
      local_24 = 0xff;
      local_21 = uVar11;
      if (0 < *(int *)(param_1 + 0x58)) {
        iVar9 = 0;
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
          iVar12 = *(int *)(param_1 + 0x5c) + iVar9;
          uVar4 = FUN_0009e880(&local_24);
          iVar9 = iVar9 + 0x24;
          *(undefined4 *)(iVar12 + 0x18) = uVar4;
        } while (iVar6 < *(int *)(param_1 + 0x58));
      }
      iVar9 = 0;
      do {
        uVar4 = FUN_0009e880(&local_24);
        iVar6 = param_1 + iVar9;
        iVar9 = iVar9 + 0x24;
        *(undefined4 *)(iVar6 + 0x78) = uVar4;
      } while (iVar9 != 0xd8);
      FUN_000a3434(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58),0);
      FUN_000a3440(param_1 + 0x60,6,0);
      FUN_000995e0(*(undefined4 *)(DAT_0002a978 + 0x2a942));
      local_21 = 0xff;
      local_22 = 0xff;
      local_23 = 0xff;
      local_24 = 0xff;
      if (0 < *(int *)(param_1 + 0x58)) {
        iVar9 = 0;
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
          iVar12 = *(int *)(param_1 + 0x5c) + iVar9;
          uVar4 = FUN_0009e880(&local_24);
          iVar9 = iVar9 + 0x24;
          *(undefined4 *)(iVar12 + 0x18) = uVar4;
        } while (iVar6 < *(int *)(param_1 + 0x58));
      }
      iVar9 = 0;
      do {
        uVar4 = FUN_0009e880(&local_24);
        iVar6 = param_1 + iVar9;
        iVar9 = iVar9 + 0x24;
        *(undefined4 *)(iVar6 + 0x78) = uVar4;
      } while (iVar9 != 0xd8);
    }
    if (*(int *)(DAT_0002a96c + 0x2a86e) == 0) {
      FUN_000995e4(*(undefined4 *)(DAT_0002a96c + 0x2a872));
    }
    else {
      FUN_000995e4(*(undefined4 *)(DAT_0002a96c + 0x2a86e));
    }
    FUN_000a3434(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x58),0);
    FUN_000a3440(param_1 + 0x60,6,0);
    if (*(int *)(DAT_0002a970 + 0x2a898) == 0) {
      FUN_000995e0(*(undefined4 *)(DAT_0002a970 + 0x2a89c));
    }
    else {
      FUN_000995e0(*(undefined4 *)(DAT_0002a970 + 0x2a898));
    }
  }
  return;
}



