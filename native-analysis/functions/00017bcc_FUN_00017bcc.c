/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017bcc FUN_00017bcc */

void FUN_00017bcc(int **param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    (*(code *)**param_1)();
    *param_1 = (int *)0x0;
    *(undefined *)(param_1 + 8) = 1;
  }
  else if (*param_1 != (int *)0x0) {
    (**(code **)(**param_1 + 4))();
    *param_1 = (int *)0x0;
  }
  return;
}



