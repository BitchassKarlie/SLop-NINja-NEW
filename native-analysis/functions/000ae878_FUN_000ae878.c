/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ae878 FUN_000ae878 */

void FUN_000ae878(int **param_1)

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



