/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b460c FUN_000b460c */

int * FUN_000b460c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000b4638;
  *param_1 = DAT_000b4638 + 0xb461c;
  param_1[3] = iVar1 + 0xb4648;
  FUN_000b3fb0(param_1 + 7);
  FUN_000b6928(param_1);
  operator_delete(param_1);
  return param_1;
}



