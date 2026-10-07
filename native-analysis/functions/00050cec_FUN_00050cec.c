/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00050cec FUN_00050cec */

void FUN_00050cec(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  float *pfVar13;
  int iVar14;
  undefined4 uVar15;
  float *pfVar16;
  int iVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  undefined local_51;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  
  iVar17 = DAT_000510a8;
  iVar3 = DAT_000510a4;
  iVar10 = DAT_000510a0 + 0x50cfc;
  if (**(int **)(iVar10 + DAT_000510a4) == 0) {
    return;
  }
  iVar19 = 7 - (int)*(float *)(param_1 + 0x118) % 8;
  if (*(char *)(DAT_000510a8 + 0x50d2c) == '\0') {
    *(undefined *)(DAT_000510a8 + 0x50d2c) = 1;
    fVar2 = DAT_00051090;
    fVar25 = DAT_0005108c;
    fVar23 = DAT_00051088;
    fVar1 = DAT_00051084;
    fVar26 = DAT_00051080;
    sVar18 = 0;
    iVar20 = 0;
    pfVar16 = (float *)(iVar17 + 0x50d30);
    do {
      fVar5 = (float)FUN_000927b8(sVar18);
      fVar5 = fVar5 * fVar26;
      fVar6 = (float)FUN_000927c8(sVar18);
      fVar6 = fVar6 * fVar26;
      fVar7 = (float)FUN_000927b8(sVar18 + 0x3ffc);
      fVar7 = fVar7 * fVar1;
      fVar8 = (float)FUN_000927c8(sVar18 + 0x3ffc);
      iVar11 = 0;
      pfVar16[7] = fVar23;
      pfVar16[8] = fVar23;
      pfVar13 = (float *)(iVar17 + 0x50d30) + iVar20 * 9;
      pfVar16[0x10] = fVar25;
      pfVar16[0x11] = fVar23;
      pfVar16[0x19] = fVar23;
      pfVar16[0x1a] = fVar25;
      pfVar16[0x22] = fVar23;
      pfVar16[0x23] = fVar25;
      pfVar16[0x2b] = fVar25;
      pfVar16[0x2c] = fVar23;
      pfVar16[0x34] = fVar25;
      pfVar16[0x35] = fVar25;
      *pfVar16 = fVar5 - fVar7;
      fVar22 = fVar5 * fVar2;
      fVar8 = fVar8 * fVar1;
      pfVar16[1] = fVar6 - fVar8;
      fVar24 = fVar6 * fVar2;
      pfVar16[9] = fVar5 + fVar7;
      pfVar16[0x24] = fVar5 + fVar7;
      fVar5 = fVar22 - fVar7;
      pfVar16[10] = fVar6 + fVar8;
      pfVar16[0x25] = fVar6 + fVar8;
      fVar6 = fVar24 - fVar8;
      pfVar16[0x12] = fVar5;
      pfVar16[0x1b] = fVar5;
      pfVar16[0x13] = fVar6;
      pfVar16[0x1c] = fVar6;
      pfVar16[0x2d] = fVar7 + fVar22;
      pfVar16[0x2e] = fVar8 + fVar24;
      do {
        iVar11 = iVar11 + 1;
        pfVar13[5] = fVar25;
        pfVar13[2] = fVar23;
        pfVar13 = pfVar13 + 9;
      } while (iVar11 != 6);
      sVar18 = sVar18 + 0x1ffe;
      pfVar16 = pfVar16 + 0x36;
      iVar20 = iVar20 + 6;
    } while (sVar18 != -0x10);
  }
  iVar17 = DAT_000510ac + 0x50e72;
  iVar20 = DAT_000510ac + 0x51532;
  do {
    local_49 = 200;
    local_4d = 200;
    iVar11 = (iVar19 % 8) * 0x20;
    if (0xfe < iVar11) {
      iVar11 = 0xff;
    }
    if (iVar11 < 0x40) {
      iVar11 = 0x40;
    }
    local_50 = (undefined)iVar11;
    local_4f = local_50;
    local_4e = local_50;
    local_4c = local_50;
    local_4b = local_50;
    local_4a = local_50;
    FUN_0002c714(&local_54,&local_50,param_2);
    local_49 = local_51;
    local_4a = local_52;
    local_4b = local_53;
    local_4c = local_54;
    iVar11 = 0;
    do {
      uVar9 = FUN_0009e880(&local_4c);
      iVar14 = iVar17 + iVar11;
      iVar11 = iVar11 + 0x24;
      *(undefined4 *)(iVar14 + 0x18) = uVar9;
      iVar4 = DAT_000510b4;
      iVar14 = DAT_000510b0;
    } while (iVar11 != 0xd8);
    iVar17 = iVar17 + 0xd8;
    iVar19 = iVar19 + 1;
  } while (iVar17 != iVar20);
  puVar21 = (undefined4 *)(DAT_000510b4 + 0x50f10);
  FUN_000995e4(**(undefined4 **)(iVar10 + iVar3));
  fVar26 = DAT_00051094;
  iVar20 = *(int *)(iVar10 + iVar14);
  *(undefined *)(iVar20 + 0x18d4) = 0;
  uVar9 = *(undefined4 *)(iVar4 + 0x50f14);
  uVar12 = *(undefined4 *)(iVar4 + 0x50f18);
  uVar15 = *(undefined4 *)(iVar4 + 0x50f1c);
  *(undefined4 *)(iVar20 + 0x1094) = *puVar21;
  *(undefined4 *)(iVar20 + 0x1098) = uVar9;
  *(undefined4 *)(iVar20 + 0x109c) = uVar12;
  *(undefined4 *)(iVar20 + 0x10a0) = uVar15;
  uVar9 = *(undefined4 *)(iVar4 + 0x50f24);
  uVar12 = *(undefined4 *)(iVar4 + 0x50f28);
  uVar15 = *(undefined4 *)(iVar4 + 0x50f2c);
  *(undefined4 *)(iVar20 + 0x10a4) = *(undefined4 *)(iVar4 + 0x50f20);
  *(undefined4 *)(iVar20 + 0x10a8) = uVar9;
  *(undefined4 *)(iVar20 + 0x10ac) = uVar12;
  *(undefined4 *)(iVar20 + 0x10b0) = uVar15;
  uVar9 = *(undefined4 *)(iVar4 + 0x50f34);
  uVar12 = *(undefined4 *)(iVar4 + 0x50f38);
  uVar15 = *(undefined4 *)(iVar4 + 0x50f3c);
  *(undefined4 *)(iVar20 + 0x10b4) = *(undefined4 *)(iVar4 + 0x50f30);
  *(undefined4 *)(iVar20 + 0x10b8) = uVar9;
  *(undefined4 *)(iVar20 + 0x10bc) = uVar12;
  *(undefined4 *)(iVar20 + 0x10c0) = uVar15;
  uVar9 = *(undefined4 *)(iVar4 + 0x50f44);
  uVar12 = *(undefined4 *)(iVar4 + 0x50f48);
  uVar15 = *(undefined4 *)(iVar4 + 0x50f4c);
  *(undefined4 *)(iVar20 + 0x10c4) = *(undefined4 *)(iVar4 + 0x50f40);
  *(undefined4 *)(iVar20 + 0x10c8) = uVar9;
  *(undefined4 *)(iVar20 + 0x10cc) = uVar12;
  *(undefined4 *)(iVar20 + 0x10d0) = uVar15;
  uVar9 = *(undefined4 *)(iVar4 + 0x50f14);
  uVar12 = *(undefined4 *)(iVar4 + 0x50f18);
  uVar15 = *(undefined4 *)(iVar4 + 0x50f1c);
  *(undefined4 *)(iVar20 + 0x1894) = *puVar21;
  *(undefined4 *)(iVar20 + 0x1898) = uVar9;
  *(undefined4 *)(iVar20 + 0x189c) = uVar12;
  *(undefined4 *)(iVar20 + 0x18a0) = uVar15;
  uVar9 = *(undefined4 *)(iVar4 + 0x50f24);
  uVar12 = *(undefined4 *)(iVar4 + 0x50f28);
  uVar15 = *(undefined4 *)(iVar4 + 0x50f2c);
  *(undefined4 *)(iVar20 + 0x18a4) = *(undefined4 *)(iVar4 + 0x50f20);
  *(undefined4 *)(iVar20 + 0x18a8) = uVar9;
  *(undefined4 *)(iVar20 + 0x18ac) = uVar12;
  *(undefined4 *)(iVar20 + 0x18b0) = uVar15;
  uVar9 = *(undefined4 *)(iVar4 + 0x50f34);
  uVar12 = *(undefined4 *)(iVar4 + 0x50f38);
  uVar15 = *(undefined4 *)(iVar4 + 0x50f3c);
  *(undefined4 *)(iVar20 + 0x18b4) = *(undefined4 *)(iVar4 + 0x50f30);
  *(undefined4 *)(iVar20 + 0x18b8) = uVar9;
  *(undefined4 *)(iVar20 + 0x18bc) = uVar12;
  *(undefined4 *)(iVar20 + 0x18c0) = uVar15;
  uVar9 = *(undefined4 *)(iVar4 + 0x50f44);
  uVar12 = *(undefined4 *)(iVar4 + 0x50f48);
  uVar15 = *(undefined4 *)(iVar4 + 0x50f4c);
  *(undefined4 *)(iVar20 + 0x18c4) = *(undefined4 *)(iVar4 + 0x50f40);
  *(undefined4 *)(iVar20 + 0x18c8) = uVar9;
  *(undefined4 *)(iVar20 + 0x18cc) = uVar12;
  *(undefined4 *)(iVar20 + 0x18d0) = uVar15;
  iVar17 = DAT_000510b8;
  iVar19 = *(int *)(iVar20 + 0x18d8);
  pfVar16 = (float *)(DAT_000510b8 + 0x50f6c);
  *(int *)(iVar20 + 0x18d8) = iVar19 + 1;
  fVar23 = *pfVar16 * fVar26;
  fVar25 = *(float *)(iVar17 + 0x50f70) * fVar26;
  fVar26 = *(float *)(iVar17 + 0x50f74) * fVar26;
  *(float *)(iVar20 + 0x1894) = fVar23 * *(float *)(iVar20 + 0x1894);
  *(float *)(iVar20 + 0x18a4) = fVar23 * *(float *)(iVar20 + 0x18a4);
  *(float *)(iVar20 + 0x18b4) = fVar23 * *(float *)(iVar20 + 0x18b4);
  fVar23 = fVar23 * *(float *)(iVar20 + 0x18c4);
  *(float *)(iVar20 + 0x18c4) = fVar23;
  *(float *)(iVar20 + 0x1898) = fVar25 * *(float *)(iVar20 + 0x1898);
  *(float *)(iVar20 + 0x18a8) = fVar25 * *(float *)(iVar20 + 0x18a8);
  *(float *)(iVar20 + 0x18b8) = fVar25 * *(float *)(iVar20 + 0x18b8);
  fVar25 = fVar25 * *(float *)(iVar20 + 0x18c8);
  *(float *)(iVar20 + 0x18c8) = fVar25;
  *(float *)(iVar20 + 0x189c) = fVar26 * *(float *)(iVar20 + 0x189c);
  *(float *)(iVar20 + 0x18ac) = fVar26 * *(float *)(iVar20 + 0x18ac);
  *(float *)(iVar20 + 0x18bc) = fVar26 * *(float *)(iVar20 + 0x18bc);
  fVar26 = fVar26 * *(float *)(iVar20 + 0x18cc);
  *(int *)(iVar20 + 0x18d8) = iVar19 + 2;
  *(float *)(iVar20 + 0x18cc) = fVar26;
  fVar1 = DAT_000510c8;
  if (*(int *)(param_1 + 0x11c) == 0x14) {
    *(float *)(iVar20 + 0x18c4) = fVar23 + DAT_000510c0;
    fVar25 = fVar25 - DAT_000510c4;
  }
  else {
    if (*(int *)(param_1 + 0x11c) == 0xd) {
      fVar23 = fVar23 + DAT_000510c8;
      *(int *)(iVar20 + 0x18d8) = iVar19 + 3;
      *(float *)(iVar20 + 0x18c4) = fVar23;
      fVar25 = fVar25 - DAT_000510cc;
      *(float *)(iVar20 + 0x18cc) = fVar26 + fVar1;
      *(float *)(iVar20 + 0x18c8) = fVar25;
      goto LAB_00051050;
    }
    *(float *)(iVar20 + 0x18c4) = fVar23 + DAT_00051098;
    fVar25 = fVar25 + DAT_0005109c;
  }
  *(float *)(iVar20 + 0x18c8) = fVar25;
  fVar26 = fVar26 + DAT_00051088;
  *(int *)(iVar20 + 0x18d8) = iVar19 + 3;
  *(float *)(iVar20 + 0x18cc) = fVar26;
LAB_00051050:
  FUN_0008d434(*(undefined4 *)(iVar10 + iVar14),1);
  FUN_000a3440(DAT_000510bc + 0x5107a,0x30,0);
  FUN_000995e0(**(undefined4 **)(iVar10 + iVar3));
  return;
}



