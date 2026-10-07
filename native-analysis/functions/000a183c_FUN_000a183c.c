/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a183c FUN_000a183c */

int * FUN_000a183c(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_000a1868;
  *param_1 = DAT_000a1868 + 0xa184c;
  param_1[3] = (int)(&UNK_000a187c + iVar1);
  FUN_000a0090(param_1 + 7);
  FUN_000b679c(param_1);
  operator_delete(param_1);
  return param_1;
}



