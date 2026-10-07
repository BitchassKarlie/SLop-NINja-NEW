/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00035488 FUN_00035488 */

void FUN_00035488(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  byte local_34;
  byte local_33;
  byte local_32;
  undefined local_31;
  
  iVar12 = DAT_000356e0;
  fVar10 = *(float *)(DAT_000356e0 + 0x354b2);
  iVar5 = DAT_000356e4 + 0x354a4;
  if (fVar10 != 0.0 && fVar10 < 0.0 == NAN(fVar10)) {
    FUN_0001a804(*(undefined4 *)(*(int *)(iVar5 + DAT_000356e8) + 0x4c),3,1);
    fVar10 = *(float *)(iVar12 + 0x354b2);
    if (fVar10 == DAT_000356c4 || fVar10 < DAT_000356c4 != (NAN(fVar10) || NAN(DAT_000356c4))) {
      bVar6 = 0;
      iVar11 = (int)((fVar10 + fVar10) * DAT_000356c8);
      fVar10 = DAT_000356cc;
    }
    else {
      fVar9 = (fVar10 - DAT_000356c4) + (fVar10 - DAT_000356c4);
      fVar10 = DAT_000356cc;
      if ((0.0 < fVar9) &&
         (fVar10 = DAT_000356d8, fVar9 < DAT_000356cc != (NAN(fVar9) || NAN(DAT_000356cc)))) {
        fVar10 = DAT_000356cc - fVar9;
      }
      fVar10 = DAT_000356cc + fVar10 * fVar10;
      iVar11 = 0xff;
      iVar12 = (int)(fVar9 * DAT_000356c8);
      if (0xfe < iVar12) {
        iVar12 = 0xff;
      }
      bVar6 = (byte)iVar12 & ~(byte)(iVar12 >> 0x1f);
    }
    FUN_000995e4(*(undefined4 *)(DAT_000356ec + 0x355fe));
    iVar12 = DAT_000356f4;
    fVar9 = DAT_000356d4;
    fVar8 = fVar10 * DAT_000356d0;
    iVar5 = *(int *)(iVar5 + DAT_000356f0);
    puVar7 = (undefined4 *)(DAT_000356f4 + 0x3551a);
    *(undefined *)(iVar5 + 0x18d4) = 0;
    uVar2 = *(undefined4 *)(iVar12 + 0x3551e);
    uVar3 = *(undefined4 *)(iVar12 + 0x35522);
    uVar4 = *(undefined4 *)(iVar12 + 0x35526);
    *(undefined4 *)(iVar5 + 0x1094) = *puVar7;
    *(undefined4 *)(iVar5 + 0x1098) = uVar2;
    *(undefined4 *)(iVar5 + 0x109c) = uVar3;
    *(undefined4 *)(iVar5 + 0x10a0) = uVar4;
    fVar1 = DAT_000356d8;
    fVar9 = fVar10 * fVar9;
    uVar2 = *(undefined4 *)(iVar12 + 0x3552e);
    uVar3 = *(undefined4 *)(iVar12 + 0x35532);
    uVar4 = *(undefined4 *)(iVar12 + 0x35536);
    *(undefined4 *)(iVar5 + 0x10a4) = *(undefined4 *)(iVar12 + 0x3552a);
    *(undefined4 *)(iVar5 + 0x10a8) = uVar2;
    *(undefined4 *)(iVar5 + 0x10ac) = uVar3;
    *(undefined4 *)(iVar5 + 0x10b0) = uVar4;
    uVar2 = *(undefined4 *)(iVar12 + 0x3553e);
    uVar3 = *(undefined4 *)(iVar12 + 0x35542);
    uVar4 = *(undefined4 *)(iVar12 + 0x35546);
    fVar10 = fVar10 * fVar1;
    *(undefined4 *)(iVar5 + 0x10b4) = *(undefined4 *)(iVar12 + 0x3553a);
    *(undefined4 *)(iVar5 + 0x10b8) = uVar2;
    *(undefined4 *)(iVar5 + 0x10bc) = uVar3;
    *(undefined4 *)(iVar5 + 0x10c0) = uVar4;
    uVar2 = *(undefined4 *)(iVar12 + 0x3554e);
    uVar3 = *(undefined4 *)(iVar12 + 0x35552);
    uVar4 = *(undefined4 *)(iVar12 + 0x35556);
    *(undefined4 *)(iVar5 + 0x10c4) = *(undefined4 *)(iVar12 + 0x3554a);
    *(undefined4 *)(iVar5 + 0x10c8) = uVar2;
    *(undefined4 *)(iVar5 + 0x10cc) = uVar3;
    *(undefined4 *)(iVar5 + 0x10d0) = uVar4;
    uVar2 = *(undefined4 *)(iVar12 + 0x3551e);
    uVar3 = *(undefined4 *)(iVar12 + 0x35522);
    uVar4 = *(undefined4 *)(iVar12 + 0x35526);
    *(undefined4 *)(iVar5 + 0x1894) = *puVar7;
    *(undefined4 *)(iVar5 + 0x1898) = uVar2;
    *(undefined4 *)(iVar5 + 0x189c) = uVar3;
    *(undefined4 *)(iVar5 + 0x18a0) = uVar4;
    uVar2 = *(undefined4 *)(iVar12 + 0x3552e);
    uVar3 = *(undefined4 *)(iVar12 + 0x35532);
    uVar4 = *(undefined4 *)(iVar12 + 0x35536);
    *(undefined4 *)(iVar5 + 0x18a4) = *(undefined4 *)(iVar12 + 0x3552a);
    *(undefined4 *)(iVar5 + 0x18a8) = uVar2;
    *(undefined4 *)(iVar5 + 0x18ac) = uVar3;
    *(undefined4 *)(iVar5 + 0x18b0) = uVar4;
    uVar2 = *(undefined4 *)(iVar12 + 0x3553e);
    uVar3 = *(undefined4 *)(iVar12 + 0x35542);
    uVar4 = *(undefined4 *)(iVar12 + 0x35546);
    *(undefined4 *)(iVar5 + 0x18b4) = *(undefined4 *)(iVar12 + 0x3553a);
    *(undefined4 *)(iVar5 + 0x18b8) = uVar2;
    *(undefined4 *)(iVar5 + 0x18bc) = uVar3;
    *(undefined4 *)(iVar5 + 0x18c0) = uVar4;
    uVar2 = *(undefined4 *)(iVar12 + 0x3554e);
    uVar3 = *(undefined4 *)(iVar12 + 0x35552);
    uVar4 = *(undefined4 *)(iVar12 + 0x35556);
    *(undefined4 *)(iVar5 + 0x18c4) = *(undefined4 *)(iVar12 + 0x3554a);
    *(undefined4 *)(iVar5 + 0x18c8) = uVar2;
    *(undefined4 *)(iVar5 + 0x18cc) = uVar3;
    *(undefined4 *)(iVar5 + 0x18d0) = uVar4;
    *(float *)(iVar5 + 0x1894) = fVar8 * *(float *)(iVar5 + 0x1894);
    *(float *)(iVar5 + 0x18a4) = fVar8 * *(float *)(iVar5 + 0x18a4);
    *(float *)(iVar5 + 0x18b4) = fVar8 * *(float *)(iVar5 + 0x18b4);
    *(float *)(iVar5 + 0x18c4) = fVar8 * *(float *)(iVar5 + 0x18c4);
    *(float *)(iVar5 + 0x1898) = fVar9 * *(float *)(iVar5 + 0x1898);
    *(float *)(iVar5 + 0x18a8) = fVar9 * *(float *)(iVar5 + 0x18a8);
    *(float *)(iVar5 + 0x18b8) = fVar9 * *(float *)(iVar5 + 0x18b8);
    *(float *)(iVar5 + 0x18c8) = fVar9 * *(float *)(iVar5 + 0x18c8);
    *(float *)(iVar5 + 0x189c) = fVar10 * *(float *)(iVar5 + 0x189c);
    *(float *)(iVar5 + 0x18ac) = fVar10 * *(float *)(iVar5 + 0x18ac);
    *(float *)(iVar5 + 0x18bc) = fVar10 * *(float *)(iVar5 + 0x18bc);
    *(int *)(iVar5 + 0x18d8) = *(int *)(iVar5 + 0x18d8) + 2;
    *(float *)(iVar5 + 0x18cc) = fVar10 * *(float *)(iVar5 + 0x18cc);
    FUN_0008d434(iVar5,1);
    local_31 = 0;
    if (0 < iVar11) {
      iVar12 = 0;
      if (iVar11 < 0xff) {
        iVar12 = iVar11;
      }
      local_31 = (undefined)iVar12;
      if (0xfe < iVar11) {
        local_31 = 0xff;
      }
    }
    local_34 = bVar6;
    local_33 = bVar6;
    local_32 = bVar6;
    FUN_000a344c(&local_34,0x3d000000,0x3f780000,0x3e400000,DAT_000356dc);
    FUN_000995e0(*(undefined4 *)(DAT_000356f8 + 0x35758));
  }
  return;
}



