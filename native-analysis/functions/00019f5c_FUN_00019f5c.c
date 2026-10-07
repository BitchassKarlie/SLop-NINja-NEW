/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00019f5c FUN_00019f5c */

/* WARNING: Type propagation algorithm not settling */

void FUN_00019f5c(int param_1,float param_2)

{
  int iVar1;
  ushort uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar13 = DAT_0001a12c;
  fVar12 = *(float *)(param_1 + 0x164);
  iVar5 = DAT_0001a14c + 0x19f78;
  if (fVar12 != 0.0 && fVar12 < 0.0 == NAN(fVar12)) {
    fVar12 = fVar12 - param_2;
    fVar9 = *(float *)(param_1 + 0x148);
    fVar8 = *(float *)(param_1 + 0x144);
    fVar11 = *(float *)(param_1 + 0x13c) - fVar9;
    *(float *)(param_1 + 0x164) = fVar12;
    fVar10 = *(float *)(param_1 + 0x138) - fVar8;
    if ((int)((uint)(fVar11 * fVar11 + fVar10 * fVar10 < fVar13) << 0x1f) < 0) {
      uVar2 = *(ushort *)(param_1 + 0x140);
      puVar6 = *(uint **)(iVar5 + DAT_0001a150);
      uVar4 = *puVar6;
      lVar3 = (ulonglong)uVar4 * (ulonglong)puVar6[2] +
              CONCAT44(puVar6[2] * puVar6[1] + uVar4 * puVar6[3],puVar6[4]);
      uVar7 = puVar6[5] + (int)((ulonglong)lVar3 >> 0x20);
      *puVar6 = (uint)lVar3;
      puVar6[1] = uVar7;
      fVar13 = DAT_0001a148;
      lVar3 = (ulonglong)uVar7 * 0x38e0;
      uVar7 = uVar2 + 0x6388 + (int)((ulonglong)lVar3 >> 0x20);
      *(short *)(param_1 + 0x140) = (short)uVar7;
      fVar13 = (*(float *)(param_1 + 0x164) / *(float *)(param_1 + 0x168)) * fVar13;
      fVar12 = (float)FUN_000927c8(uVar7 & 0xffff,uVar4,(int)lVar3);
      *(float *)(param_1 + 0x138) = fVar12 * fVar13;
      fVar11 = (float)FUN_000927b8(*(undefined2 *)(param_1 + 0x140));
      fVar8 = *(float *)(param_1 + 0x144);
      fVar9 = *(float *)(param_1 + 0x148);
      fVar10 = *(float *)(param_1 + 0x138) - fVar8;
      fVar11 = fVar11 * fVar13;
      fVar12 = *(float *)(param_1 + 0x164);
      *(float *)(param_1 + 0x13c) = fVar11;
      fVar11 = fVar11 - fVar9;
    }
    fVar13 = DAT_0001a130;
    *(undefined *)(param_1 + 0x108) = 1;
    fVar13 = fVar12 / *(float *)(param_1 + 0x168) + fVar13;
    fVar11 = fVar11 * DAT_0001a134;
    *(float *)(param_1 + 0x144) = fVar8 + fVar13 * fVar10 * DAT_0001a134;
    *(float *)(param_1 + 0x148) = fVar9 + fVar13 * fVar11;
    return;
  }
  fVar13 = *(float *)(param_1 + 0x144);
  if ((int)((uint)(fVar13 < 0.0) << 0x1f) < 0) {
    iVar1 = (uint)(fVar13 < DAT_0001a138) << 0x1f;
    if (-1 < iVar1) {
      iVar5 = 0;
    }
    if (iVar1 < 0) {
      iVar5 = 1;
    }
  }
  else {
    if (fVar13 == DAT_0001a144 || fVar13 < DAT_0001a144 != (NAN(fVar13) || NAN(DAT_0001a144))) {
      iVar5 = 0;
    }
    if (fVar13 != DAT_0001a144 && fVar13 < DAT_0001a144 == (NAN(fVar13) || NAN(DAT_0001a144))) {
      iVar5 = 1;
    }
  }
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x144) = DAT_0001a140;
    fVar13 = *(float *)(param_1 + 0x148);
  }
  else {
    *(float *)(param_1 + 0x144) = fVar13 * DAT_0001a13c;
    fVar13 = *(float *)(param_1 + 0x148);
  }
  if ((int)((uint)(fVar13 < 0.0) << 0x1f) < 0) {
    iVar1 = (uint)(fVar13 < DAT_0001a138) << 0x1f;
    if (-1 < iVar1) {
      iVar5 = 0;
    }
    if (iVar1 < 0) {
      iVar5 = 1;
    }
  }
  else {
    if (fVar13 == DAT_0001a144 || fVar13 < DAT_0001a144 != (NAN(fVar13) || NAN(DAT_0001a144))) {
      iVar5 = 0;
    }
    if (fVar13 != DAT_0001a144 && fVar13 < DAT_0001a144 == (NAN(fVar13) || NAN(DAT_0001a144))) {
      iVar5 = 1;
    }
  }
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x148) = DAT_0001a140;
  }
  else {
    *(float *)(param_1 + 0x148) = fVar13 * DAT_0001a13c;
  }
  return;
}



