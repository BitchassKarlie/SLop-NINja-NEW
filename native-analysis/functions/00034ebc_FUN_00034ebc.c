/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00034ebc FUN_00034ebc */

void FUN_00034ebc(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  byte local_2d;
  undefined4 local_2c;
  
  iVar16 = DAT_00035214;
  iVar7 = DAT_00035218 + 0x34ed0;
  if (*(int *)(DAT_00035214 + 0x34fda) == 0) {
    FUN_0002fa48(&local_2c,DAT_00035250 + 0x351d6);
    FUN_00017d64(iVar16 + 0x34fda,local_2c);
    FUN_00017d90(&local_2c);
  }
  iVar16 = DAT_0003521c;
  fVar15 = DAT_00035208;
  fVar11 = DAT_00035204;
  fVar14 = *(float *)(*(int *)(iVar7 + DAT_0003521c) + 0x30);
  if (-1 < (int)((uint)(fVar14 < **(float **)(iVar7 + DAT_00035220)) << 0x1f)) {
    return;
  }
  fVar14 = DAT_00035200 -
           (fVar14 - **(float **)(iVar7 + DAT_00035224)) /
           (**(float **)(iVar7 + DAT_00035220) - **(float **)(iVar7 + DAT_00035224));
  if (0.0 < fVar14) {
    if (fVar14 < DAT_00035200 == (NAN(fVar14) || NAN(DAT_00035200))) {
      FUN_000995e4(*(undefined4 *)(DAT_00035248 + 0x35262));
      iVar2 = DAT_0003524c;
      iVar10 = DAT_0003522c;
      fVar14 = DAT_00035210;
      iVar5 = *(int *)(iVar7 + DAT_0003522c);
      puVar9 = (undefined4 *)(DAT_0003524c + 0x35172);
      *(undefined *)(iVar5 + 0x18d4) = 0;
      uVar1 = *(undefined4 *)(iVar2 + 0x35176);
      uVar3 = *(undefined4 *)(iVar2 + 0x3517a);
      uVar4 = *(undefined4 *)(iVar2 + 0x3517e);
      *(undefined4 *)(iVar5 + 0x1094) = *puVar9;
      *(undefined4 *)(iVar5 + 0x1098) = uVar1;
      *(undefined4 *)(iVar5 + 0x109c) = uVar3;
      *(undefined4 *)(iVar5 + 0x10a0) = uVar4;
      uVar1 = *(undefined4 *)(iVar2 + 0x35186);
      uVar3 = *(undefined4 *)(iVar2 + 0x3518a);
      uVar4 = *(undefined4 *)(iVar2 + 0x3518e);
      *(undefined4 *)(iVar5 + 0x10a4) = *(undefined4 *)(iVar2 + 0x35182);
      *(undefined4 *)(iVar5 + 0x10a8) = uVar1;
      *(undefined4 *)(iVar5 + 0x10ac) = uVar3;
      *(undefined4 *)(iVar5 + 0x10b0) = uVar4;
      uVar1 = *(undefined4 *)(iVar2 + 0x35196);
      uVar3 = *(undefined4 *)(iVar2 + 0x3519a);
      uVar4 = *(undefined4 *)(iVar2 + 0x3519e);
      *(undefined4 *)(iVar5 + 0x10b4) = *(undefined4 *)(iVar2 + 0x35192);
      *(undefined4 *)(iVar5 + 0x10b8) = uVar1;
      *(undefined4 *)(iVar5 + 0x10bc) = uVar3;
      *(undefined4 *)(iVar5 + 0x10c0) = uVar4;
      uVar1 = *(undefined4 *)(iVar2 + 0x351a6);
      uVar3 = *(undefined4 *)(iVar2 + 0x351aa);
      uVar4 = *(undefined4 *)(iVar2 + 0x351ae);
      *(undefined4 *)(iVar5 + 0x10c4) = *(undefined4 *)(iVar2 + 0x351a2);
      *(undefined4 *)(iVar5 + 0x10c8) = uVar1;
      *(undefined4 *)(iVar5 + 0x10cc) = uVar3;
      *(undefined4 *)(iVar5 + 0x10d0) = uVar4;
      uVar1 = *(undefined4 *)(iVar2 + 0x35176);
      uVar3 = *(undefined4 *)(iVar2 + 0x3517a);
      uVar4 = *(undefined4 *)(iVar2 + 0x3517e);
      *(undefined4 *)(iVar5 + 0x1894) = *puVar9;
      *(undefined4 *)(iVar5 + 0x1898) = uVar1;
      *(undefined4 *)(iVar5 + 0x189c) = uVar3;
      *(undefined4 *)(iVar5 + 0x18a0) = uVar4;
      uVar1 = *(undefined4 *)(iVar2 + 0x35186);
      uVar3 = *(undefined4 *)(iVar2 + 0x3518a);
      uVar4 = *(undefined4 *)(iVar2 + 0x3518e);
      *(undefined4 *)(iVar5 + 0x18a4) = *(undefined4 *)(iVar2 + 0x35182);
      *(undefined4 *)(iVar5 + 0x18a8) = uVar1;
      *(undefined4 *)(iVar5 + 0x18ac) = uVar3;
      *(undefined4 *)(iVar5 + 0x18b0) = uVar4;
      uVar1 = *(undefined4 *)(iVar2 + 0x35196);
      uVar3 = *(undefined4 *)(iVar2 + 0x3519a);
      uVar4 = *(undefined4 *)(iVar2 + 0x3519e);
      *(undefined4 *)(iVar5 + 0x18b4) = *(undefined4 *)(iVar2 + 0x35192);
      *(undefined4 *)(iVar5 + 0x18b8) = uVar1;
      *(undefined4 *)(iVar5 + 0x18bc) = uVar3;
      *(undefined4 *)(iVar5 + 0x18c0) = uVar4;
      uVar1 = *(undefined4 *)(iVar2 + 0x351a6);
      uVar3 = *(undefined4 *)(iVar2 + 0x351aa);
      uVar4 = *(undefined4 *)(iVar2 + 0x351ae);
      *(undefined4 *)(iVar5 + 0x18c4) = *(undefined4 *)(iVar2 + 0x351a2);
      *(undefined4 *)(iVar5 + 0x18c8) = uVar1;
      *(undefined4 *)(iVar5 + 0x18cc) = uVar3;
      *(undefined4 *)(iVar5 + 0x18d0) = uVar4;
      iVar2 = *(int *)(iVar5 + 0x18d8) + 1;
      *(int *)(iVar5 + 0x18d8) = iVar2;
      goto LAB_00034fa4;
    }
    fVar11 = fVar14 * DAT_0003520c;
    FUN_000995e4(*(undefined4 *)(DAT_00035240 + 0x351ca));
    iVar2 = DAT_00035244;
    iVar10 = DAT_0003522c;
    fVar14 = DAT_00035210;
    iVar8 = *(int *)(iVar7 + DAT_0003522c);
    puVar9 = (undefined4 *)(DAT_00035244 + 0x350da);
    *(undefined *)(iVar8 + 0x18d4) = 0;
    uVar1 = *(undefined4 *)(iVar2 + 0x350de);
    uVar3 = *(undefined4 *)(iVar2 + 0x350e2);
    uVar4 = *(undefined4 *)(iVar2 + 0x350e6);
    *(undefined4 *)(iVar8 + 0x1094) = *puVar9;
    *(undefined4 *)(iVar8 + 0x1098) = uVar1;
    *(undefined4 *)(iVar8 + 0x109c) = uVar3;
    *(undefined4 *)(iVar8 + 0x10a0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x350ee);
    uVar3 = *(undefined4 *)(iVar2 + 0x350f2);
    uVar4 = *(undefined4 *)(iVar2 + 0x350f6);
    *(undefined4 *)(iVar8 + 0x10a4) = *(undefined4 *)(iVar2 + 0x350ea);
    *(undefined4 *)(iVar8 + 0x10a8) = uVar1;
    *(undefined4 *)(iVar8 + 0x10ac) = uVar3;
    *(undefined4 *)(iVar8 + 0x10b0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x350fe);
    uVar3 = *(undefined4 *)(iVar2 + 0x35102);
    uVar4 = *(undefined4 *)(iVar2 + 0x35106);
    *(undefined4 *)(iVar8 + 0x10b4) = *(undefined4 *)(iVar2 + 0x350fa);
    *(undefined4 *)(iVar8 + 0x10b8) = uVar1;
    *(undefined4 *)(iVar8 + 0x10bc) = uVar3;
    *(undefined4 *)(iVar8 + 0x10c0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x3510e);
    uVar3 = *(undefined4 *)(iVar2 + 0x35112);
    uVar4 = *(undefined4 *)(iVar2 + 0x35116);
    *(undefined4 *)(iVar8 + 0x10c4) = *(undefined4 *)(iVar2 + 0x3510a);
    *(undefined4 *)(iVar8 + 0x10c8) = uVar1;
    *(undefined4 *)(iVar8 + 0x10cc) = uVar3;
    *(undefined4 *)(iVar8 + 0x10d0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x350de);
    uVar3 = *(undefined4 *)(iVar2 + 0x350e2);
    uVar4 = *(undefined4 *)(iVar2 + 0x350e6);
    *(undefined4 *)(iVar8 + 0x1894) = *puVar9;
    *(undefined4 *)(iVar8 + 0x1898) = uVar1;
    *(undefined4 *)(iVar8 + 0x189c) = uVar3;
    *(undefined4 *)(iVar8 + 0x18a0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x350ee);
    uVar3 = *(undefined4 *)(iVar2 + 0x350f2);
    uVar4 = *(undefined4 *)(iVar2 + 0x350f6);
    *(undefined4 *)(iVar8 + 0x18a4) = *(undefined4 *)(iVar2 + 0x350ea);
    *(undefined4 *)(iVar8 + 0x18a8) = uVar1;
    *(undefined4 *)(iVar8 + 0x18ac) = uVar3;
    *(undefined4 *)(iVar8 + 0x18b0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x350fe);
    uVar3 = *(undefined4 *)(iVar2 + 0x35102);
    uVar4 = *(undefined4 *)(iVar2 + 0x35106);
    *(undefined4 *)(iVar8 + 0x18b4) = *(undefined4 *)(iVar2 + 0x350fa);
    *(undefined4 *)(iVar8 + 0x18b8) = uVar1;
    *(undefined4 *)(iVar8 + 0x18bc) = uVar3;
    *(undefined4 *)(iVar8 + 0x18c0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x3510e);
    uVar3 = *(undefined4 *)(iVar2 + 0x35112);
    iVar5 = *(int *)(iVar2 + 0x35116);
    *(undefined4 *)(iVar8 + 0x18c4) = *(undefined4 *)(iVar2 + 0x3510a);
    *(undefined4 *)(iVar8 + 0x18c8) = uVar1;
    *(undefined4 *)(iVar8 + 0x18cc) = uVar3;
    *(int *)(iVar8 + 0x18d0) = iVar5;
    iVar2 = *(int *)(iVar8 + 0x18d8) + 1;
    *(int *)(iVar8 + 0x18d8) = iVar2;
    if ((int)((uint)(fVar11 < fVar14) << 0x1f) < 0) {
      iVar8 = (uint)(fVar11 < DAT_00035208) << 0x1f;
      if (-1 < iVar8) {
        iVar5 = 0;
      }
      fVar14 = fVar11;
      if (iVar8 < 0) {
        iVar5 = 1;
      }
    }
    else {
      iVar8 = (uint)(fVar11 < DAT_00035208) << 0x1f;
      if (-1 < iVar8) {
        iVar5 = 0;
      }
      if (iVar8 < 0) {
        iVar5 = 1;
      }
    }
  }
  else {
    FUN_000995e4(*(undefined4 *)(DAT_00035228 + 0x35032));
    iVar2 = DAT_00035230;
    iVar10 = DAT_0003522c;
    iVar8 = *(int *)(iVar7 + DAT_0003522c);
    puVar9 = (undefined4 *)(DAT_00035230 + 0x34f3e);
    *(undefined *)(iVar8 + 0x18d4) = 0;
    uVar1 = *(undefined4 *)(iVar2 + 0x34f42);
    uVar3 = *(undefined4 *)(iVar2 + 0x34f46);
    uVar4 = *(undefined4 *)(iVar2 + 0x34f4a);
    *(undefined4 *)(iVar8 + 0x1094) = *puVar9;
    *(undefined4 *)(iVar8 + 0x1098) = uVar1;
    *(undefined4 *)(iVar8 + 0x109c) = uVar3;
    *(undefined4 *)(iVar8 + 0x10a0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x34f52);
    uVar3 = *(undefined4 *)(iVar2 + 0x34f56);
    uVar4 = *(undefined4 *)(iVar2 + 0x34f5a);
    *(undefined4 *)(iVar8 + 0x10a4) = *(undefined4 *)(iVar2 + 0x34f4e);
    *(undefined4 *)(iVar8 + 0x10a8) = uVar1;
    *(undefined4 *)(iVar8 + 0x10ac) = uVar3;
    *(undefined4 *)(iVar8 + 0x10b0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x34f62);
    uVar3 = *(undefined4 *)(iVar2 + 0x34f66);
    uVar4 = *(undefined4 *)(iVar2 + 0x34f6a);
    *(undefined4 *)(iVar8 + 0x10b4) = *(undefined4 *)(iVar2 + 0x34f5e);
    *(undefined4 *)(iVar8 + 0x10b8) = uVar1;
    *(undefined4 *)(iVar8 + 0x10bc) = uVar3;
    *(undefined4 *)(iVar8 + 0x10c0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x34f72);
    uVar3 = *(undefined4 *)(iVar2 + 0x34f76);
    uVar4 = *(undefined4 *)(iVar2 + 0x34f7a);
    *(undefined4 *)(iVar8 + 0x10c4) = *(undefined4 *)(iVar2 + 0x34f6e);
    *(undefined4 *)(iVar8 + 0x10c8) = uVar1;
    *(undefined4 *)(iVar8 + 0x10cc) = uVar3;
    *(undefined4 *)(iVar8 + 0x10d0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x34f42);
    uVar3 = *(undefined4 *)(iVar2 + 0x34f46);
    uVar4 = *(undefined4 *)(iVar2 + 0x34f4a);
    *(undefined4 *)(iVar8 + 0x1894) = *puVar9;
    *(undefined4 *)(iVar8 + 0x1898) = uVar1;
    *(undefined4 *)(iVar8 + 0x189c) = uVar3;
    *(undefined4 *)(iVar8 + 0x18a0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x34f52);
    uVar3 = *(undefined4 *)(iVar2 + 0x34f56);
    uVar4 = *(undefined4 *)(iVar2 + 0x34f5a);
    *(undefined4 *)(iVar8 + 0x18a4) = *(undefined4 *)(iVar2 + 0x34f4e);
    *(undefined4 *)(iVar8 + 0x18a8) = uVar1;
    *(undefined4 *)(iVar8 + 0x18ac) = uVar3;
    *(undefined4 *)(iVar8 + 0x18b0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x34f62);
    uVar3 = *(undefined4 *)(iVar2 + 0x34f66);
    uVar4 = *(undefined4 *)(iVar2 + 0x34f6a);
    *(undefined4 *)(iVar8 + 0x18b4) = *(undefined4 *)(iVar2 + 0x34f5e);
    *(undefined4 *)(iVar8 + 0x18b8) = uVar1;
    *(undefined4 *)(iVar8 + 0x18bc) = uVar3;
    *(undefined4 *)(iVar8 + 0x18c0) = uVar4;
    uVar1 = *(undefined4 *)(iVar2 + 0x34f72);
    uVar3 = *(undefined4 *)(iVar2 + 0x34f76);
    uVar4 = *(undefined4 *)(iVar2 + 0x34f7a);
    *(undefined4 *)(iVar8 + 0x18c4) = *(undefined4 *)(iVar2 + 0x34f6e);
    *(undefined4 *)(iVar8 + 0x18c8) = uVar1;
    *(undefined4 *)(iVar8 + 0x18cc) = uVar3;
    *(undefined4 *)(iVar8 + 0x18d0) = uVar4;
    iVar5 = 1;
    iVar2 = *(int *)(iVar8 + 0x18d8) + 1;
    *(int *)(iVar8 + 0x18d8) = iVar2;
    fVar14 = fVar11;
  }
  fVar15 = fVar11;
  if (iVar5 == 0) {
    fVar15 = DAT_00035208;
  }
LAB_00034fa4:
  iVar5 = *(int *)(iVar7 + iVar10);
  *(float *)(iVar5 + 0x1894) = fVar14 * *(float *)(iVar5 + 0x1894);
  *(float *)(iVar5 + 0x18a4) = fVar14 * *(float *)(iVar5 + 0x18a4);
  *(float *)(iVar5 + 0x18b4) = fVar14 * *(float *)(iVar5 + 0x18b4);
  fVar14 = fVar14 * *(float *)(iVar5 + 0x18c4);
  *(float *)(iVar5 + 0x18c4) = fVar14;
  *(float *)(iVar5 + 0x1898) = fVar15 * *(float *)(iVar5 + 0x1898);
  *(float *)(iVar5 + 0x18a8) = fVar15 * *(float *)(iVar5 + 0x18a8);
  *(float *)(iVar5 + 0x18b8) = fVar15 * *(float *)(iVar5 + 0x18b8);
  iVar10 = DAT_00035234;
  fVar15 = fVar15 * *(float *)(iVar5 + 0x18c8);
  pfVar6 = (float *)(DAT_00035234 + 0x35018);
  *(float *)(iVar5 + 0x18c8) = fVar15;
  fVar12 = *(float *)(iVar10 + 0x3501c);
  fVar11 = *pfVar6;
  fVar13 = *(float *)(iVar10 + 0x35020);
  *(int *)(iVar5 + 0x18d8) = iVar2 + 2;
  *(float *)(iVar5 + 0x18c8) = fVar12 + fVar15;
  *(float *)(iVar5 + 0x18c4) = fVar11 + fVar14;
  *(float *)(iVar5 + 0x18cc) = fVar13 + *(float *)(iVar5 + 0x18cc);
  FUN_0008d434(iVar5,1);
  local_2e = *(undefined *)(DAT_00035238 + 0x35064);
  local_2f = *(undefined *)(DAT_00035238 + 0x35063);
  local_30 = *(undefined *)(DAT_00035238 + 0x35062);
  local_2d = *(byte *)(DAT_00035238 + 0x35065);
  iVar16 = (int)((float)(ulonglong)(uint)local_2d * *(float *)(*(int *)(iVar7 + iVar16) + 0x30));
  if (iVar16 < 1) {
    local_2d = 0;
  }
  else if (iVar16 < (int)(uint)local_2d) {
    local_2d = (byte)iVar16;
  }
  FUN_000a35f4(&local_30);
  FUN_000995e0(*(undefined4 *)(DAT_0003523c + 0x351a2));
  return;
}



