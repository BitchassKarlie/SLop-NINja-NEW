/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e258 FUN_0003e258 */

undefined4
FUN_0003e258(float *param_1,float *param_2,float param_3,float param_4,undefined4 param_5,
            float param_6,undefined4 param_7,float param_8,undefined4 param_9)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float unaff_s20;
  float fVar11;
  undefined8 unaff_d11;
  float fVar12;
  
  fVar4 = DAT_0003e370;
  fVar3 = DAT_0003e36c;
  fVar11 = *param_2;
  fVar2 = param_3 * DAT_0003e364;
  param_3 = param_3 * DAT_0003e368;
  fVar9 = param_2[1];
  fVar8 = fVar9 + param_4 * DAT_0003e364;
  iVar6 = (uint)(fVar8 < param_8) << 0x1f;
  fVar12 = (float)((ulonglong)unaff_d11 >> 0x20);
  if (-1 < iVar6) {
    fVar12 = DAT_0003e36c;
  }
  if (iVar6 < 0) {
    fVar12 = (param_8 - fVar9) / param_4;
  }
  fVar10 = fVar9 + param_4 * DAT_0003e368;
  iVar1 = (uint)(param_6 < fVar10) << 0x1f;
  if (iVar6 < 0) {
    fVar12 = DAT_0003e368 - fVar12;
    fVar8 = param_8;
  }
  if (iVar1 < 0) {
    unaff_s20 = DAT_0003e368;
  }
  if (-1 < iVar1) {
    unaff_s20 = DAT_0003e370;
  }
  if (iVar1 < 0) {
    param_4 = (param_6 - fVar9) / param_4;
    fVar10 = param_6;
  }
  if (iVar1 < 0) {
    unaff_s20 = unaff_s20 - param_4;
  }
  if ((fVar10 == param_8 || fVar10 < param_8 != (NAN(fVar10) || NAN(param_8))) ||
     (-1 < (int)((uint)(fVar8 < param_6) << 0x1f))) {
    uVar5 = 0;
  }
  else {
    iVar6 = 0;
    do {
      fVar9 = (float)FUN_0009e880(param_9);
      bVar7 = -1 < iVar6 << 0x1f;
      param_1[1] = fVar4;
      *param_1 = fVar4;
      if (bVar7) {
        param_1[7] = fVar4;
        *param_1 = fVar11 + fVar2;
      }
      else {
        *param_1 = fVar11 + param_3;
      }
      if (!bVar7) {
        param_1[7] = fVar3;
      }
      if (iVar6 < 2) {
        param_1[1] = fVar8;
      }
      if (iVar6 < 2) {
        param_1[8] = fVar12;
      }
      if (1 < iVar6) {
        param_1[1] = fVar10;
      }
      if (1 < iVar6) {
        param_1[8] = unaff_s20;
      }
      iVar6 = iVar6 + 1;
      param_1[4] = fVar4;
      param_1[3] = fVar4;
      param_1[2] = fVar4;
      param_1[5] = fVar3;
      param_1[6] = fVar9;
      param_1 = param_1 + 9;
    } while (iVar6 != 4);
    uVar5 = 1;
  }
  return uVar5;
}



