/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00021dd0 FUN_00021dd0 */

void FUN_00021dd0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *param_2;
  fVar4 = param_3[3];
  fVar3 = param_2[3];
  fVar1 = *param_3;
  fVar5 = param_2[1];
  fVar7 = param_3[2];
  fVar8 = param_2[2];
  fVar6 = param_3[1];
  *param_1 = (fVar2 * fVar4 + fVar3 * fVar1 + fVar5 * fVar7) - fVar8 * fVar6;
  param_1[1] = (fVar4 * fVar5 + fVar3 * fVar6 + fVar1 * fVar8) - fVar2 * fVar7;
  param_1[2] = (fVar4 * fVar8 + fVar3 * fVar7 + fVar2 * fVar6) - fVar1 * fVar5;
  param_1[3] = ((fVar3 * fVar4 - fVar1 * fVar2) - fVar5 * fVar6) - fVar7 * fVar8;
  return;
}



