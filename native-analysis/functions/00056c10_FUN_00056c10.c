/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00056c10 FUN_00056c10 */

void FUN_00056c10(int *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  (**(code **)(*param_1 + 8))();
  FUN_00017d64(param_1 + 0x1a,*(undefined4 *)(DAT_00056d88 + 0x56c46));
  *(undefined *)(param_1 + 0x1e) = 1;
  iVar1 = DAT_00056d6c;
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  param_1[2] = *param_2;
  param_1[3] = iVar3;
  param_1[4] = iVar4;
  param_1[0x1d] = iVar1;
  *(undefined *)((int)param_1 + 0x71) = 1;
  *(undefined *)((int)param_1 + 0x53) = 0xff;
  *(undefined *)(param_1 + 0x1c) = 3;
  *(undefined2 *)((int)param_1 + 0x72) = 0;
  iVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  iVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar1 = DAT_00056d74;
  fVar10 = DAT_00056d70;
  param_1[5] = (int)(float)(ulonglong)(iVar3 + 1);
  param_1[6] = (int)(float)(ulonglong)(iVar4 + 1);
  param_1[7] = iVar1;
  fVar11 = (float)param_1[5] * fVar10;
  fVar7 = (float)param_1[2];
  param_1[0x21] = (int)fVar10;
  fVar6 = fVar11 + fVar7;
  param_1[5] = (int)fVar11;
  fVar9 = DAT_00056d78;
  fVar12 = (float)param_1[6] * fVar10;
  fVar10 = (float)param_1[7] * fVar10;
  param_1[6] = (int)fVar12;
  fVar2 = DAT_00056d7c;
  param_1[7] = (int)fVar10;
  if (fVar6 != fVar9 && fVar6 < fVar9 == (NAN(fVar6) || NAN(fVar9))) {
    fVar7 = fVar9 - fVar11;
  }
  fVar8 = (float)param_1[3];
  fVar5 = fVar12 + fVar8;
  if (fVar6 != fVar9 && fVar6 < fVar9 == (NAN(fVar6) || NAN(fVar9))) {
    param_1[2] = (int)fVar7;
  }
  fVar7 = fVar7 - fVar11;
  if (fVar5 != fVar2 && fVar5 < fVar2 == (NAN(fVar5) || NAN(fVar2))) {
    fVar8 = fVar2 - fVar12;
  }
  iVar1 = (uint)(fVar7 < DAT_00056d80) << 0x1f;
  if (fVar5 != fVar2 && fVar5 < fVar2 == (NAN(fVar5) || NAN(fVar2))) {
    param_1[3] = (int)fVar8;
  }
  if (iVar1 < 0) {
    fVar7 = fVar11 - DAT_00056d78;
  }
  if (iVar1 < 0) {
    param_1[2] = (int)fVar7;
  }
  iVar1 = (uint)(fVar8 - fVar12 < DAT_00056d84) << 0x1f;
  fVar9 = fVar8 - fVar12;
  if (iVar1 < 0) {
    fVar9 = DAT_00056d7c;
  }
  param_1[5] = (int)(fVar11 + fVar11);
  if (iVar1 < 0) {
    fVar9 = fVar12 - fVar9;
  }
  param_1[7] = (int)(fVar10 + fVar10);
  if (iVar1 < 0) {
    param_1[3] = (int)fVar9;
  }
  param_1[6] = (int)(fVar12 + fVar12);
  return;
}



