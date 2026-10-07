/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00021e48 FUN_00021e48 */

void FUN_00021e48(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_2[3] * param_2[3];
  fVar3 = *param_2 * *param_2;
  fVar4 = param_2[1] * param_2[1];
  fVar5 = param_2[2] * param_2[2];
  *param_1 = ((fVar2 + fVar3) - fVar4) - fVar5;
  fVar1 = DAT_00021f80;
  param_1[1] = *param_2 * param_2[1] + *param_2 * param_2[1] +
               param_2[3] * param_2[2] * DAT_00021f80;
  param_1[2] = *param_2 * param_2[2] + *param_2 * param_2[2] +
               param_2[3] * param_2[1] + param_2[3] * param_2[1];
  fVar2 = fVar2 - fVar3;
  param_1[3] = *param_2 * param_2[1] + *param_2 * param_2[1] +
               param_2[3] * param_2[2] + param_2[3] * param_2[2];
  param_1[4] = (fVar2 + fVar4) - fVar5;
  param_1[5] = param_2[1] * param_2[2] + param_2[1] * param_2[2] + param_2[3] * *param_2 * fVar1;
  param_1[6] = *param_2 * param_2[2] + *param_2 * param_2[2] + param_2[3] * param_2[1] * fVar1;
  param_1[7] = param_2[1] * param_2[2] + param_2[1] * param_2[2] +
               param_2[3] * *param_2 + param_2[3] * *param_2;
  param_1[8] = (fVar2 - fVar4) + fVar5;
  return;
}



