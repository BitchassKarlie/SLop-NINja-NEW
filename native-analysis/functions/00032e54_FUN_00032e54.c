/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00032e54 FUN_00032e54 */

void FUN_00032e54(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined uVar10;
  float fVar11;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  undefined4 local_2c;
  
  iVar3 = DAT_00033020;
  uVar4 = DAT_00033008;
  fVar11 = *(float *)(param_1 + 0x70);
  iVar8 = DAT_00033018 + 0x32e6e;
  if ((fVar11 != 0.0 && fVar11 < 0.0 == NAN(fVar11)) && (*(int *)(param_1 + 0x28) == 1)) {
    iVar6 = *(int *)(iVar8 + DAT_0003301c);
    *(undefined4 *)(*(int *)(iVar6 + 0x40) + 0xc) = DAT_00033008;
    *(undefined4 *)(*(int *)(iVar6 + 0x40) + 0x10) = uVar4;
    *(undefined4 *)(*(int *)(iVar6 + 0x40) + 0x14) = uVar4;
    if (*(int *)(iVar3 + 0x32f9c) == 0) {
      FUN_0002fa48(&local_2c,DAT_00033034 + 0x32ff4);
      FUN_00017d64(iVar3 + 0x32f9c,local_2c);
      FUN_00017d90(&local_2c);
    }
    iVar3 = DAT_00033028;
    fVar11 = *(float *)(param_1 + 0x70) * DAT_0003300c;
    uVar10 = 0;
    puVar9 = (undefined4 *)(DAT_00033028 + 0x32eca);
    FUN_000995e4(*(undefined4 *)(DAT_00033024 + 0x32fc8));
    iVar8 = *(int *)(iVar8 + DAT_0003302c);
    *(undefined *)(iVar8 + 0x18d4) = 0;
    uVar4 = *(undefined4 *)(iVar3 + 0x32ece);
    uVar5 = *(undefined4 *)(iVar3 + 0x32ed2);
    uVar7 = *(undefined4 *)(iVar3 + 0x32ed6);
    *(undefined4 *)(iVar8 + 0x1094) = *puVar9;
    *(undefined4 *)(iVar8 + 0x1098) = uVar4;
    *(undefined4 *)(iVar8 + 0x109c) = uVar5;
    *(undefined4 *)(iVar8 + 0x10a0) = uVar7;
    uVar4 = *(undefined4 *)(iVar3 + 0x32ede);
    uVar5 = *(undefined4 *)(iVar3 + 0x32ee2);
    uVar7 = *(undefined4 *)(iVar3 + 0x32ee6);
    *(undefined4 *)(iVar8 + 0x10a4) = *(undefined4 *)(iVar3 + 0x32eda);
    *(undefined4 *)(iVar8 + 0x10a8) = uVar4;
    *(undefined4 *)(iVar8 + 0x10ac) = uVar5;
    *(undefined4 *)(iVar8 + 0x10b0) = uVar7;
    uVar4 = *(undefined4 *)(iVar3 + 0x32eee);
    uVar5 = *(undefined4 *)(iVar3 + 0x32ef2);
    uVar7 = *(undefined4 *)(iVar3 + 0x32ef6);
    *(undefined4 *)(iVar8 + 0x10b4) = *(undefined4 *)(iVar3 + 0x32eea);
    *(undefined4 *)(iVar8 + 0x10b8) = uVar4;
    *(undefined4 *)(iVar8 + 0x10bc) = uVar5;
    *(undefined4 *)(iVar8 + 0x10c0) = uVar7;
    uVar4 = *(undefined4 *)(iVar3 + 0x32efe);
    uVar5 = *(undefined4 *)(iVar3 + 0x32f02);
    uVar7 = *(undefined4 *)(iVar3 + 0x32f06);
    *(undefined4 *)(iVar8 + 0x10c4) = *(undefined4 *)(iVar3 + 0x32efa);
    *(undefined4 *)(iVar8 + 0x10c8) = uVar4;
    *(undefined4 *)(iVar8 + 0x10cc) = uVar5;
    *(undefined4 *)(iVar8 + 0x10d0) = uVar7;
    uVar4 = *(undefined4 *)(iVar3 + 0x32ece);
    uVar5 = *(undefined4 *)(iVar3 + 0x32ed2);
    uVar7 = *(undefined4 *)(iVar3 + 0x32ed6);
    *(undefined4 *)(iVar8 + 0x1894) = *puVar9;
    *(undefined4 *)(iVar8 + 0x1898) = uVar4;
    *(undefined4 *)(iVar8 + 0x189c) = uVar5;
    *(undefined4 *)(iVar8 + 0x18a0) = uVar7;
    uVar4 = *(undefined4 *)(iVar3 + 0x32ede);
    uVar5 = *(undefined4 *)(iVar3 + 0x32ee2);
    uVar7 = *(undefined4 *)(iVar3 + 0x32ee6);
    *(undefined4 *)(iVar8 + 0x18a4) = *(undefined4 *)(iVar3 + 0x32eda);
    *(undefined4 *)(iVar8 + 0x18a8) = uVar4;
    *(undefined4 *)(iVar8 + 0x18ac) = uVar5;
    *(undefined4 *)(iVar8 + 0x18b0) = uVar7;
    uVar4 = *(undefined4 *)(iVar3 + 0x32eee);
    uVar5 = *(undefined4 *)(iVar3 + 0x32ef2);
    uVar7 = *(undefined4 *)(iVar3 + 0x32ef6);
    *(undefined4 *)(iVar8 + 0x18b4) = *(undefined4 *)(iVar3 + 0x32eea);
    *(undefined4 *)(iVar8 + 0x18b8) = uVar4;
    *(undefined4 *)(iVar8 + 0x18bc) = uVar5;
    *(undefined4 *)(iVar8 + 0x18c0) = uVar7;
    uVar4 = *(undefined4 *)(iVar3 + 0x32efe);
    uVar5 = *(undefined4 *)(iVar3 + 0x32f02);
    uVar7 = *(undefined4 *)(iVar3 + 0x32f06);
    *(undefined4 *)(iVar8 + 0x18c4) = *(undefined4 *)(iVar3 + 0x32efa);
    *(undefined4 *)(iVar8 + 0x18c8) = uVar4;
    *(undefined4 *)(iVar8 + 0x18cc) = uVar5;
    *(undefined4 *)(iVar8 + 0x18d0) = uVar7;
    *(float *)(iVar8 + 0x1894) = fVar11 * *(float *)(iVar8 + 0x1894);
    *(float *)(iVar8 + 0x18a4) = fVar11 * *(float *)(iVar8 + 0x18a4);
    *(float *)(iVar8 + 0x18b4) = fVar11 * *(float *)(iVar8 + 0x18b4);
    *(float *)(iVar8 + 0x18c4) = fVar11 * *(float *)(iVar8 + 0x18c4);
    *(float *)(iVar8 + 0x1898) = fVar11 * *(float *)(iVar8 + 0x1898);
    *(float *)(iVar8 + 0x18a8) = fVar11 * *(float *)(iVar8 + 0x18a8);
    *(float *)(iVar8 + 0x18b8) = fVar11 * *(float *)(iVar8 + 0x18b8);
    *(int *)(iVar8 + 0x18d8) = *(int *)(iVar8 + 0x18d8) + 2;
    *(float *)(iVar8 + 0x18c8) = fVar11 * *(float *)(iVar8 + 0x18c8);
    FUN_0008d434(iVar8,1);
    fVar11 = *(float *)(param_1 + 0x70) * DAT_00033010;
    if (0.0 < fVar11) {
      bVar1 = fVar11 < DAT_00033014;
      bVar2 = NAN(fVar11);
      if (bVar1 != (bVar2 || NAN(DAT_00033014))) {
        fVar11 = (float)((uint)(0.0 < fVar11) * (int)fVar11);
      }
      uVar10 = SUB41(fVar11,0);
      if (bVar1 == (bVar2 || NAN(DAT_00033014))) {
        uVar10 = 0x80;
      }
    }
    local_30 = 0;
    local_2f = 0;
    local_2e = 0;
    local_2d = uVar10;
    FUN_000a35f4(&local_30);
    FUN_000995e0(*(undefined4 *)(DAT_00033030 + 0x330ce));
  }
  return;
}



