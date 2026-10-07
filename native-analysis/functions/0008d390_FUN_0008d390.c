/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d390 FUN_0008d390 */

void FUN_0008d390(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,undefined4 param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_0008d42c;
  param_8[1] = DAT_0008d42c;
  param_8[2] = fVar1;
  param_8[3] = fVar1;
  param_8[4] = fVar1;
  param_8[6] = fVar1;
  param_8[7] = fVar1;
  param_8[8] = fVar1;
  param_8[9] = fVar1;
  param_8[0xb] = fVar1;
  fVar1 = DAT_0008d430;
  param_8[0xf] = DAT_0008d430;
  fVar2 = fVar1 / (param_4 - param_3);
  fVar3 = fVar1 / (param_1 - param_2);
  param_8[10] = fVar1 / (param_6 - param_5);
  param_8[0xe] = param_5 / (param_5 - param_6);
  param_8[0xc] = -((param_4 + param_3) * fVar2);
  param_8[0xd] = -((param_1 + param_2) * fVar3);
  *param_8 = fVar2 + fVar2;
  param_8[5] = fVar3 + fVar3;
  return;
}



