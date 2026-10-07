/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001d050 FUN_0001d050 */

void FUN_0001d050(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_1;
  fVar2 = param_1[4];
  fVar4 = param_1[0xc];
  fVar3 = param_1[8];
  *param_1 = param_1[2] * param_2 + fVar1 * param_3;
  fVar5 = -param_2;
  param_1[4] = param_1[6] * param_2 + fVar2 * param_3;
  param_1[0xc] = param_1[0xe] * param_2 + fVar4 * param_3;
  param_1[2] = param_3 * param_1[2] + fVar1 * fVar5;
  param_1[6] = param_3 * param_1[6] + fVar2 * fVar5;
  param_1[8] = param_1[10] * param_2 + fVar3 * param_3;
  param_1[10] = param_3 * param_1[10] + fVar3 * fVar5;
  param_1[0xe] = param_3 * param_1[0xe] + fVar4 * fVar5;
  return;
}



