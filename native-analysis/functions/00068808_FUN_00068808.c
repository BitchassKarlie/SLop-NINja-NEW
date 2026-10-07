/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00068808 FUN_00068808 */

void FUN_00068808(int param_1,undefined4 *param_2,float param_3,float param_4,float param_5,
                 undefined8 param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  FUN_00017d64(param_1 + 0xf0,*param_2);
  uVar1 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x14))();
  uVar2 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x18))();
  fVar4 = (float)((ulonglong)param_6 >> 0x20);
  fVar3 = param_3 * DAT_000688a4;
  *(float *)(param_1 + 0x104) = param_3 * (float)(ulonglong)uVar1 * (param_5 - param_4);
  *(float *)(param_1 + 0x108) = param_3 * (float)(ulonglong)uVar2 * (fVar4 - (float)param_6);
  *(float *)(param_1 + 0x10c) = fVar3;
  *(float *)(param_1 + 0xf4) = param_4;
  *(float *)(param_1 + 0xf8) = param_5;
  *(float *)(param_1 + 0xfc) = (float)param_6;
  *(float *)(param_1 + 0x100) = fVar4;
  return;
}



