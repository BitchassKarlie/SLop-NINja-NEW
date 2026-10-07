/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b3bfc FUN_000b3bfc */

int * FUN_000b3bfc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_000b6800();
  iVar1 = DAT_000b3c34 + 0xb3c46;
  *param_1 = DAT_000b3c34 + 0xb3c16;
  param_1[3] = iVar1;
  iVar1 = FUN_000a0390(param_1 + 7);
  param_1[9] = 0;
  iVar2 = DAT_000b3c38 + 0xb3c5c;
  *param_1 = DAT_000b3c38 + 0xb3c2c;
  param_1[3] = iVar2;
  param_1[8] = iVar1;
  return param_1;
}



