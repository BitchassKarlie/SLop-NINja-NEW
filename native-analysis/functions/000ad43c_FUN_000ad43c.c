/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad43c FUN_000ad43c */

void FUN_000ad43c(int param_1,int **param_2)

{
  if (*(char *)(param_2 + 8) != '\0') {
    param_2 = (int **)*param_2;
  }
  if (param_2 != (int **)0x0) {
    (**(code **)((int)*param_2 + 8))(param_2,param_1 + 0x20);
  }
  return;
}



