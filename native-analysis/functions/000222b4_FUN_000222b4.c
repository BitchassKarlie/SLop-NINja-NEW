/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000222b4 FUN_000222b4 */

void FUN_000222b4(float *param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)FUN_00092d98(param_1[1] * param_1[1] + *param_1 * *param_1 +
                              param_1[2] * param_1[2] + param_1[3] * param_1[3]);
  *param_1 = *param_1 / fVar3;
  param_1[1] = param_1[1] / fVar3;
  param_1[2] = param_1[2] / fVar3;
  fVar2 = DAT_0002233c;
  fVar3 = param_1[3] / fVar3;
  bVar1 = fVar3 == DAT_0002233c;
  param_1[3] = fVar3;
  if (bVar1) {
    fVar3 = DAT_00022340;
  }
  if (bVar1) {
    param_1[2] = fVar2;
  }
  if (bVar1) {
    param_1[1] = fVar2;
    *param_1 = fVar2;
  }
  if (bVar1) {
    param_1[3] = fVar3;
  }
  return;
}



