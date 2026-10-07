/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001dc40 FUN_0001dc40 */

float FUN_0001dc40(float *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *param_1;
  if (fVar2 == 0.0) {
    fVar1 = param_1[1];
    if (fVar1 == 0.0) {
      return DAT_0001dcd8;
    }
  }
  else {
    fVar1 = param_1[1];
  }
  fVar1 = (float)FUN_00092d98(fVar1 * fVar1 + fVar2 * fVar2);
  fVar2 = DAT_0001dcd4;
  if (fVar1 == 0.0) {
    *param_1 = *param_1 * DAT_0001dcd4;
    param_1[1] = param_1[1] * fVar2;
    FUN_0001dc40(param_1);
  }
  else {
    *param_1 = *param_1 / fVar1;
    param_1[1] = param_1[1] / fVar1;
  }
  return fVar1;
}



