/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009fbdc FUN_0009fbdc */

void FUN_0009fbdc(float *param_1,uint param_2)

{
  float fVar1;
  
  fVar1 = DAT_0009fc20;
  *param_1 = (float)(ulonglong)(param_2 & 0xff) / DAT_0009fc20;
  param_1[1] = (float)(ulonglong)((param_2 << 0x10) >> 0x18) / fVar1;
  param_1[2] = (float)(ulonglong)((param_2 << 8) >> 0x18) / fVar1;
  return;
}



