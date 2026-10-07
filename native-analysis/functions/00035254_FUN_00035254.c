/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00035254 FUN_00035254 */

void FUN_00035254(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  undefined local_38;
  undefined local_37;
  undefined local_36;
  undefined local_35;
  undefined4 local_34 [2];
  
  iVar14 = DAT_00035468;
  iVar6 = DAT_0003546c + 0x35268;
  if (*(int *)(DAT_00035468 + 0x35372) == 0) {
    FUN_0002fa48(local_34,DAT_00035484 + 0x35436);
    FUN_00017d64(iVar14 + 0x35372,local_34[0]);
    FUN_00017d90(local_34);
  }
  iVar5 = DAT_00035478;
  iVar1 = DAT_00035474;
  iVar14 = DAT_00035470;
  fVar12 = *(float *)(*(int *)(iVar6 + DAT_00035470) + 0x14);
  if ((int)((uint)(fVar12 < DAT_0003544c) << 0x1f) < 0) {
    fVar13 = (fVar12 - DAT_00035450) / DAT_00035454 + DAT_00035458;
    fVar12 = DAT_00035464;
    if ((0.0 < fVar13) &&
       (fVar12 = DAT_0003545c, fVar13 < DAT_00035458 != (NAN(fVar13) || NAN(DAT_00035458)))) {
      fVar12 = fVar13 * DAT_0003545c;
    }
    puVar7 = (undefined4 *)(DAT_00035478 + 0x352d2);
    FUN_000995e4(*(undefined4 *)(DAT_00035474 + 0x353dc));
    iVar8 = *(int *)(iVar6 + DAT_0003547c);
    *(undefined *)(iVar8 + 0x18d4) = 0;
    uVar2 = *(undefined4 *)(iVar5 + 0x352d6);
    uVar3 = *(undefined4 *)(iVar5 + 0x352da);
    uVar4 = *(undefined4 *)(iVar5 + 0x352de);
    *(undefined4 *)(iVar8 + 0x1094) = *puVar7;
    *(undefined4 *)(iVar8 + 0x1098) = uVar2;
    *(undefined4 *)(iVar8 + 0x109c) = uVar3;
    *(undefined4 *)(iVar8 + 0x10a0) = uVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x352e6);
    uVar3 = *(undefined4 *)(iVar5 + 0x352ea);
    uVar4 = *(undefined4 *)(iVar5 + 0x352ee);
    *(undefined4 *)(iVar8 + 0x10a4) = *(undefined4 *)(iVar5 + 0x352e2);
    *(undefined4 *)(iVar8 + 0x10a8) = uVar2;
    *(undefined4 *)(iVar8 + 0x10ac) = uVar3;
    *(undefined4 *)(iVar8 + 0x10b0) = uVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x352f6);
    uVar3 = *(undefined4 *)(iVar5 + 0x352fa);
    uVar4 = *(undefined4 *)(iVar5 + 0x352fe);
    *(undefined4 *)(iVar8 + 0x10b4) = *(undefined4 *)(iVar5 + 0x352f2);
    *(undefined4 *)(iVar8 + 0x10b8) = uVar2;
    *(undefined4 *)(iVar8 + 0x10bc) = uVar3;
    *(undefined4 *)(iVar8 + 0x10c0) = uVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x35306);
    uVar3 = *(undefined4 *)(iVar5 + 0x3530a);
    uVar4 = *(undefined4 *)(iVar5 + 0x3530e);
    *(undefined4 *)(iVar8 + 0x10c4) = *(undefined4 *)(iVar5 + 0x35302);
    *(undefined4 *)(iVar8 + 0x10c8) = uVar2;
    *(undefined4 *)(iVar8 + 0x10cc) = uVar3;
    *(undefined4 *)(iVar8 + 0x10d0) = uVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x352d6);
    uVar3 = *(undefined4 *)(iVar5 + 0x352da);
    uVar4 = *(undefined4 *)(iVar5 + 0x352de);
    *(undefined4 *)(iVar8 + 0x1894) = *puVar7;
    *(undefined4 *)(iVar8 + 0x1898) = uVar2;
    *(undefined4 *)(iVar8 + 0x189c) = uVar3;
    *(undefined4 *)(iVar8 + 0x18a0) = uVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x352e6);
    uVar3 = *(undefined4 *)(iVar5 + 0x352ea);
    uVar4 = *(undefined4 *)(iVar5 + 0x352ee);
    *(undefined4 *)(iVar8 + 0x18a4) = *(undefined4 *)(iVar5 + 0x352e2);
    *(undefined4 *)(iVar8 + 0x18a8) = uVar2;
    *(undefined4 *)(iVar8 + 0x18ac) = uVar3;
    *(undefined4 *)(iVar8 + 0x18b0) = uVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x352f6);
    uVar3 = *(undefined4 *)(iVar5 + 0x352fa);
    uVar4 = *(undefined4 *)(iVar5 + 0x352fe);
    *(undefined4 *)(iVar8 + 0x18b4) = *(undefined4 *)(iVar5 + 0x352f2);
    *(undefined4 *)(iVar8 + 0x18b8) = uVar2;
    *(undefined4 *)(iVar8 + 0x18bc) = uVar3;
    *(undefined4 *)(iVar8 + 0x18c0) = uVar4;
    uVar2 = *(undefined4 *)(iVar5 + 0x35306);
    uVar3 = *(undefined4 *)(iVar5 + 0x3530a);
    uVar4 = *(undefined4 *)(iVar5 + 0x3530e);
    *(undefined4 *)(iVar8 + 0x18c4) = *(undefined4 *)(iVar5 + 0x35302);
    *(undefined4 *)(iVar8 + 0x18c8) = uVar2;
    *(undefined4 *)(iVar8 + 0x18cc) = uVar3;
    *(undefined4 *)(iVar8 + 0x18d0) = uVar4;
    iVar5 = *(int *)(iVar8 + 0x18d8);
    *(int *)(iVar8 + 0x18d8) = iVar5 + 1;
    *(float *)(iVar8 + 0x1894) = fVar12 * *(float *)(iVar8 + 0x1894);
    *(float *)(iVar8 + 0x18a4) = fVar12 * *(float *)(iVar8 + 0x18a4);
    *(float *)(iVar8 + 0x18b4) = fVar12 * *(float *)(iVar8 + 0x18b4);
    fVar11 = fVar12 * *(float *)(iVar8 + 0x18c4);
    *(float *)(iVar8 + 0x18c4) = fVar11;
    *(float *)(iVar8 + 0x1898) = fVar12 * *(float *)(iVar8 + 0x1898);
    *(float *)(iVar8 + 0x18a8) = fVar12 * *(float *)(iVar8 + 0x18a8);
    *(float *)(iVar8 + 0x18b8) = fVar12 * *(float *)(iVar8 + 0x18b8);
    fVar12 = fVar12 * *(float *)(iVar8 + 0x18c8);
    *(float *)(iVar8 + 0x18c8) = fVar12;
    fVar9 = *(float *)(iVar1 + 0x353b0);
    fVar13 = *(float *)(iVar1 + 0x353ac);
    fVar10 = *(float *)(iVar1 + 0x353b4);
    *(int *)(iVar8 + 0x18d8) = iVar5 + 3;
    *(float *)(iVar8 + 0x18c8) = fVar9 + fVar12;
    *(float *)(iVar8 + 0x18c4) = fVar13 + fVar11;
    *(float *)(iVar8 + 0x18cc) = fVar10 + *(float *)(iVar8 + 0x18cc);
    FUN_0008d434(iVar8,1);
    iVar14 = (int)(*(float *)(*(int *)(iVar6 + iVar14) + 0x14) * DAT_00035460);
    if (iVar14 < 1) {
      local_35 = 0;
    }
    else {
      if (0xfe < iVar14) {
        iVar14 = 0xff;
      }
      local_35 = (undefined)iVar14;
    }
    local_38 = 0xff;
    local_37 = 0xff;
    local_36 = 0xff;
    FUN_000a35f4(&local_38);
    FUN_000995e0(*(undefined4 *)(DAT_00035480 + 0x3551e));
  }
  return;
}



