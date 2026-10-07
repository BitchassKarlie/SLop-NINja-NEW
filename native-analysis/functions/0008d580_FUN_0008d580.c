/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d580 FUN_0008d580 */

void FUN_0008d580(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_18 = param_1[1] - param_3[1];
  local_14 = param_1[2] - param_3[2];
  local_1c = *param_1 - *param_3;
  FUN_0001a178(&local_1c);
  local_28 = param_2[1] * local_14 - local_18 * param_2[2];
  local_24 = param_2[2] * local_1c - local_14 * *param_2;
  local_20 = local_18 * *param_2 - param_2[1] * local_1c;
  FUN_0001a178(&local_28);
  fVar3 = local_18 * local_20 - local_24 * local_14;
  fVar1 = local_14 * local_28 - local_20 * local_1c;
  fVar2 = local_24 * local_1c - local_18 * local_28;
  param_4[2] = local_1c;
  param_4[3] = local_24;
  *param_4 = local_28;
  param_4[5] = local_18;
  param_4[6] = local_20;
  param_4[8] = local_14;
  param_4[1] = fVar3;
  param_4[4] = fVar1;
  param_4[7] = fVar2;
  param_4[9] = -(param_1[1] * local_24 + *param_1 * local_28 + param_1[2] * local_20);
  param_4[10] = -(fVar1 * param_1[1] + fVar3 * *param_1 + fVar2 * param_1[2]);
  param_4[0xb] = -(param_1[1] * local_18 + *param_1 * local_1c + param_1[2] * local_14);
  return;
}



