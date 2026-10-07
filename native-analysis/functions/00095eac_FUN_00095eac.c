/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00095eac FUN_00095eac */

void FUN_00095eac(int param_1,float *param_2,undefined4 *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  
  fVar8 = *(float *)(param_1 + 100) - *(float *)(param_1 + 0x5c);
  uVar7 = *(undefined4 *)(param_1 + 0x10c4);
  fVar2 = fVar8 * DAT_00095f80;
  if ((int)((uint)(fVar8 < 0.0) << 0x1f) < 0) {
    fVar8 = -fVar8;
  }
  fVar6 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x2c)) +
          *(float *)(param_1 + 0x5c) + fVar2 + fVar8 * DAT_00095f84;
  fVar2 = DAT_00095f88;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x18))();
    fVar2 = (float)(ulonglong)uVar1 * DAT_00095f80;
  }
  fVar4 = *(float *)(param_1 + 0x6c);
  *param_3 = uVar7;
  param_3[1] = fVar2 * fVar4;
  fVar2 = *(float *)(param_1 + 0x74);
  fVar5 = *(float *)(param_1 + 0x24);
  fVar4 = *(float *)(param_1 + 0xa8);
  fVar3 = *(float *)(param_1 + 0x10c0);
  *param_2 = fVar6 + ((fVar8 + fVar6) - fVar6) * DAT_00095f80;
  param_2[1] = (fVar2 + fVar5 + fVar4) - fVar3;
  return;
}



