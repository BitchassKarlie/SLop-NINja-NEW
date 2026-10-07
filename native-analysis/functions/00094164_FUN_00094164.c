/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094164 FUN_00094164 */

void FUN_00094164(float *param_1,float *param_2)

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
  fVar1 = DAT_0009429c;
  param_1[1] = *param_2 * param_2[1] + *param_2 * param_2[1] +
               param_2[3] * param_2[2] * DAT_0009429c;
  param_1[2] = *param_2 * param_2[2] + *param_2 * param_2[2] +
               param_2[3] * param_2[1] + param_2[3] * param_2[1];
  fVar2 = fVar2 - fVar3;
  param_1[4] = *param_2 * param_2[1] + *param_2 * param_2[1] +
               param_2[3] * param_2[2] + param_2[3] * param_2[2];
  param_1[5] = (fVar2 + fVar4) - fVar5;
  param_1[6] = param_2[1] * param_2[2] + param_2[1] * param_2[2] + param_2[3] * *param_2 * fVar1;
  param_1[8] = *param_2 * param_2[2] + *param_2 * param_2[2] + param_2[3] * param_2[1] * fVar1;
  param_1[9] = param_2[1] * param_2[2] + param_2[1] * param_2[2] +
               param_2[3] * *param_2 + param_2[3] * *param_2;
  param_1[10] = (fVar2 - fVar4) + fVar5;
  return;
}



