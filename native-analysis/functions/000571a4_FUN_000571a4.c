/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000571a4 FUN_000571a4 */

void FUN_000571a4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = DAT_00057370;
  (**(code **)(*param_1 + 8))();
  if (param_3 < 2) {
    iVar4 = 0;
  }
  else if (param_3 < 10) {
    iVar4 = param_3 + -1;
  }
  else {
    iVar4 = 9;
  }
  FUN_00017d64(param_1 + 0x1a,*(undefined4 *)(DAT_00057374 + iVar4 * 4 + 0x571f0));
  *(undefined *)(param_1 + 0x1e) = 1;
  *(undefined *)((int)param_1 + 0x79) = 1;
  iVar4 = DAT_00057378;
  param_1[0x1f] = param_3;
  if (*(int *)(*(int *)(iVar1 + 0x571bc + iVar4) + 4) == 2) {
    uVar3 = FUN_00086780();
    fVar11 = (float)FUN_00085548(uVar3,0);
    param_1[0x1f] = (int)(fVar11 + DAT_0005736c);
  }
  iVar1 = DAT_00057350;
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  param_1[2] = *param_2;
  param_1[3] = iVar4;
  param_1[4] = iVar5;
  param_1[0x1d] = iVar1;
  *(undefined *)((int)param_1 + 0x53) = 0xff;
  *(undefined *)(param_1 + 0x1c) = 3;
  *(undefined2 *)((int)param_1 + 0x72) = 0;
  *(undefined *)((int)param_1 + 0x71) = 1;
  iVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  iVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar1 = DAT_00057358;
  fVar11 = DAT_00057354;
  param_1[5] = (int)(float)(ulonglong)(iVar4 + 1);
  param_1[6] = (int)(float)(ulonglong)(iVar5 + 1);
  param_1[7] = iVar1;
  fVar12 = (float)param_1[5] * fVar11;
  fVar8 = (float)param_1[2];
  fVar7 = fVar12 + fVar8;
  param_1[5] = (int)fVar12;
  fVar10 = DAT_0005735c;
  fVar13 = (float)param_1[6] * fVar11;
  fVar11 = (float)param_1[7] * fVar11;
  param_1[6] = (int)fVar13;
  fVar2 = DAT_00057360;
  param_1[7] = (int)fVar11;
  if (fVar7 != fVar10 && fVar7 < fVar10 == (NAN(fVar7) || NAN(fVar10))) {
    fVar8 = fVar10 - fVar12;
  }
  fVar9 = (float)param_1[3];
  fVar6 = fVar13 + fVar9;
  if (fVar7 != fVar10 && fVar7 < fVar10 == (NAN(fVar7) || NAN(fVar10))) {
    param_1[2] = (int)fVar8;
  }
  fVar8 = fVar8 - fVar12;
  if (fVar6 != fVar2 && fVar6 < fVar2 == (NAN(fVar6) || NAN(fVar2))) {
    fVar9 = fVar2 - fVar13;
  }
  iVar1 = (uint)(fVar8 < DAT_00057364) << 0x1f;
  if (fVar6 != fVar2 && fVar6 < fVar2 == (NAN(fVar6) || NAN(fVar2))) {
    param_1[3] = (int)fVar9;
  }
  if (iVar1 < 0) {
    fVar8 = fVar12 - DAT_0005735c;
  }
  if (iVar1 < 0) {
    param_1[2] = (int)fVar8;
  }
  iVar1 = (uint)(fVar9 - fVar13 < DAT_00057368) << 0x1f;
  fVar10 = fVar9 - fVar13;
  if (iVar1 < 0) {
    fVar10 = DAT_00057360;
  }
  param_1[5] = (int)(fVar12 + fVar12);
  if (iVar1 < 0) {
    fVar10 = fVar13 - fVar10;
  }
  param_1[7] = (int)(fVar11 + fVar11);
  if (iVar1 < 0) {
    param_1[3] = (int)fVar10;
  }
  param_1[6] = (int)(fVar13 + fVar13);
  return;
}



