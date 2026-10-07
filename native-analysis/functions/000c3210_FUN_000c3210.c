/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3210 FUN_000c3210 */

undefined4 FUN_000c3210(void **param_1)

{
  if (param_1 != (void **)0x0) {
    if (*param_1 != (void *)0x0) {
      free(*param_1);
    }
    if (param_1[4] != (void *)0x0) {
      free(param_1[4]);
    }
    if (param_1[5] != (void *)0x0) {
      free(param_1[5]);
    }
    memset(param_1,0,0x168);
  }
  return 0;
}



