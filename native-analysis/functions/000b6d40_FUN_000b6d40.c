/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6d40 FUN_000b6d40 */

int * FUN_000b6d40(int *param_1)

{
  *param_1 = DAT_000b6d64 + 0xb6d50;
  FUN_000baec0(param_1 + 2);
  if (*(char *)(param_1 + 0xa9) != '\0') {
    operator_delete((void *)param_1[0xa8]);
  }
  return param_1;
}



