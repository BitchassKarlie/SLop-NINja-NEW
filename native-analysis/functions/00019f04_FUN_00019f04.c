/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00019f04 FUN_00019f04 */

void FUN_00019f04(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_3;
  fVar1 = *param_2;
  fVar2 = param_2[2];
  param_1[1] = param_2[1] / fVar3;
  param_1[2] = fVar2 / fVar3;
  *param_1 = fVar1 / fVar3;
  return;
}



