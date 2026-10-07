/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b42fc FUN_000b42fc */

int * FUN_000b42fc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_000b698c();
  iVar1 = DAT_000b4334 + 0xb4342;
  *param_1 = DAT_000b4334 + 0xb4316;
  param_1[3] = iVar1;
  iVar1 = FUN_000b41f0(param_1 + 7);
  param_1[9] = 0;
  iVar2 = DAT_000b4338 + 0xb435c;
  *param_1 = DAT_000b4338 + 0xb432c;
  param_1[3] = iVar2;
  param_1[8] = iVar1;
  return param_1;
}



