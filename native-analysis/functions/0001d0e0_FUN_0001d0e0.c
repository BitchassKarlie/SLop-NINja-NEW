/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001d0e0 FUN_0001d0e0 */

void FUN_0001d0e0(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[4];
  fVar3 = param_1[8];
  fVar4 = param_1[0xc];
  *param_1 = fVar1 * param_3 - param_1[1] * param_2;
  param_1[4] = fVar2 * param_3 - param_1[5] * param_2;
  param_1[8] = fVar3 * param_3 - param_1[9] * param_2;
  param_1[0xc] = fVar4 * param_3 - param_1[0xd] * param_2;
  param_1[1] = param_3 * param_1[1] + fVar1 * param_2;
  param_1[5] = param_3 * param_1[5] + param_2 * fVar2;
  param_1[9] = param_3 * param_1[9] + param_2 * fVar3;
  param_1[0xd] = param_3 * param_1[0xd] + param_2 * fVar4;
  return;
}



