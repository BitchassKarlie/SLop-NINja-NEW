/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be77c FUN_000be77c */

void FUN_000be77c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
    if ((void *)param_1[5] != (void *)0x0) {
      free((void *)param_1[5]);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    free(param_1);
  }
  return;
}



