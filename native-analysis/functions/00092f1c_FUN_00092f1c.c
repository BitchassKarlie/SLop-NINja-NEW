/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00092f1c FUN_00092f1c */

float * FUN_00092f1c(float *param_1,float *param_2,undefined4 param_3,float *param_4,float *param_5)

{
  float fVar1;
  
  fVar1 = (param_4[1] * param_1[1] + *param_4 * *param_1 + param_4[2] * param_1[2]) -
          (param_4[1] * param_2[1] + *param_4 * *param_2 + param_4[2] * param_2[2]);
  *param_5 = fVar1;
  if (fVar1 == 0.0 || fVar1 < 0.0 != NAN(fVar1)) {
    param_1 = (float *)0x0;
  }
  if (fVar1 != 0.0 && fVar1 < 0.0 == NAN(fVar1)) {
    param_1 = (float *)0x1;
  }
  return param_1;
}



