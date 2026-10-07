/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093ea4 FUN_00093ea4 */

void FUN_00093ea4(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  if (-1 < (int)((uint)(*param_1 < *param_2) << 0x1f)) {
    fVar1 = *param_2;
  }
  fVar5 = param_1[1];
  if (-1 < (int)((uint)(param_1[1] < param_2[1]) << 0x1f)) {
    fVar5 = param_2[1];
  }
  fVar4 = param_1[2];
  if (-1 < (int)((uint)(param_1[2] < param_2[2]) << 0x1f)) {
    fVar4 = param_2[2];
  }
  fVar2 = param_1[3];
  fVar3 = param_1[4];
  *param_1 = fVar1;
  param_1[1] = fVar5;
  param_1[2] = fVar4;
  fVar5 = param_2[3];
  fVar1 = param_2[5];
  if (fVar2 == fVar5 || fVar2 < fVar5 != (NAN(fVar2) || NAN(fVar5))) {
    fVar2 = fVar5;
  }
  fVar5 = param_2[4];
  if (fVar3 == fVar5 || fVar3 < fVar5 != (NAN(fVar3) || NAN(fVar5))) {
    fVar3 = fVar5;
  }
  fVar5 = param_1[5];
  if (fVar5 == fVar1 || fVar5 < fVar1 != (NAN(fVar5) || NAN(fVar1))) {
    fVar5 = fVar1;
  }
  param_1[3] = fVar2;
  param_1[4] = fVar3;
  param_1[5] = fVar5;
  return;
}



