/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094a9c FUN_00094a9c */

void FUN_00094a9c(int param_1,int **param_2)

{
  *(undefined *)(param_1 + 0x28) = 0;
  if (*(char *)(param_2 + 8) != '\0') {
    param_2 = (int **)*param_2;
  }
  if (param_2 != (int **)0x0) {
    (**(code **)((int)*param_2 + 8))(param_2,param_1 + 4);
  }
  return;
}



