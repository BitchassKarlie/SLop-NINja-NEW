/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00092f74 FUN_00092f74 */

void FUN_00092f74(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_1[1];
  if (fVar3 == param_2[1]) {
    *param_4 = *param_3;
    param_4[1] = param_1[1];
  }
  else {
    fVar1 = *param_1;
    if (fVar1 == *param_2) {
      *param_4 = fVar1;
      param_4[1] = param_3[1];
    }
    else {
      fVar2 = (param_2[1] - fVar3) / (*param_2 - fVar1);
      fVar3 = (((param_3[1] - (DAT_0009300c / fVar2) * *param_3) - fVar3) + fVar1 * fVar2) /
              (fVar2 - DAT_0009300c / fVar2);
      *param_4 = fVar3;
      param_4[1] = param_1[1] + (fVar3 - *param_1) * fVar2;
      param_4[2] = DAT_00093010;
    }
  }
  return;
}



