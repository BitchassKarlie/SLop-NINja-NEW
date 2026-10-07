/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001a178 FUN_0001a178 */

float FUN_0001a178(float *param_1)

{
  float fVar1;
  float fVar2;
  
  if (((*param_1 != 0.0) || (param_1[1] != 0.0)) || (fVar2 = DAT_0001a20c, param_1[2] != 0.0)) {
    fVar2 = (float)FUN_0001a154(param_1);
    fVar1 = DAT_0001a208;
    if (fVar2 == 0.0) {
      *param_1 = *param_1 * DAT_0001a208;
      param_1[1] = param_1[1] * fVar1;
      param_1[2] = param_1[2] * fVar1;
      FUN_0001a178(param_1);
    }
    else {
      FUN_00019f30(param_1,fVar2);
    }
  }
  return fVar2;
}



