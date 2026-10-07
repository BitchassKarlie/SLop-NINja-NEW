/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00056f04 FUN_00056f04 */

void FUN_00056f04(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  (**(code **)(*param_1 + 8))();
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  param_1[2] = *param_2;
  param_1[3] = iVar2;
  param_1[4] = iVar3;
  *(undefined *)((int)param_1 + 0x53) = 0xff;
  if (*param_4 == 0) {
    *(undefined *)(param_1 + 0x1c) = 3;
    *(undefined *)((int)param_1 + 0x71) = 1;
    iVar3 = DAT_000570e4;
    iVar2 = DAT_000570cc;
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = 0x1e;
    }
    uVar4 = (undefined2)iVar1;
    if (param_3 < 1) {
      uVar4 = 0;
    }
    *(undefined2 *)((int)param_1 + 0x72) = uVar4;
    param_1[0x1d] = iVar2;
    fVar6 = DAT_000570d0;
    fVar5 = *(float *)(iVar3 + 0x56fd4) * DAT_000570d0;
    fVar7 = *(float *)(iVar3 + 0x56fd8) * DAT_000570d0;
    param_1[5] = (int)(*(float *)(iVar3 + 0x56fd0) * DAT_000570d0);
    param_1[6] = (int)fVar5;
    param_1[7] = (int)fVar7;
    fVar7 = DAT_000570d8;
    fVar5 = DAT_000570d4;
    fVar8 = *(float *)(iVar3 + 0x56fd4);
    fVar9 = *(float *)(iVar3 + 0x56fd8);
    param_1[5] = (int)(*(float *)(iVar3 + 0x56fd0) * fVar6);
    param_1[6] = (int)(fVar8 * fVar6);
    param_1[7] = (int)(fVar9 * fVar6);
    fVar6 = DAT_000570dc;
    fVar7 = (float)param_1[5] * fVar7 - fVar5;
    fVar8 = (float)param_1[2];
    if ((fVar7 < fVar8) &&
       (fVar7 = fVar5 + (float)param_1[5] * DAT_000570e0,
       fVar8 < fVar7 != (NAN(fVar8) || NAN(fVar7)))) {
      fVar7 = fVar8;
    }
    param_1[2] = (int)fVar7;
    fVar7 = (float)param_1[3];
    fVar5 = (float)param_1[6] * DAT_000570d8 - fVar6;
    if (fVar5 < fVar7) {
      fVar6 = fVar6 + (float)param_1[6] * DAT_000570e0;
      if (fVar7 < fVar6 != (NAN(fVar7) || NAN(fVar6))) {
        fVar6 = fVar7;
      }
      param_1[3] = (int)fVar6;
    }
    else {
      param_1[3] = (int)fVar5;
    }
  }
  else {
    *(undefined *)(param_1 + 0x20) = 0;
    FUN_00017d64(param_1 + 0x1a,*param_4);
    *(undefined2 *)((int)param_1 + 0x72) = 0;
    param_1[0x1d] = DAT_000570c4;
    *(undefined *)(param_1 + 0x1c) = 3;
    *(undefined *)(param_1 + 0x1e) = 1;
    *(undefined *)((int)param_1 + 0x71) = 1;
    iVar3 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
    iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
    iVar2 = DAT_000570c8;
    param_1[5] = (int)(float)(ulonglong)(iVar3 + 1);
    param_1[6] = (int)(float)(ulonglong)(iVar1 + 1);
    param_1[7] = iVar2;
  }
  return;
}



