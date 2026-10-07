/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a63b4 FUN_000a63b4 */

void FUN_000a63b4(void)

{
  int **ppiVar1;
  
  if (((*(char *)(DAT_000a63d4 + 0xa63c4) != '\0') &&
      (ppiVar1 = (int **)(DAT_000a63d4 + 0xa63c8), *ppiVar1 != (int *)0x0)) &&
     (*(char *)(DAT_000a63d4 + 0xa63cc) == '\0')) {
    *(undefined *)(DAT_000a63d4 + 0xa63cc) = 1;
    (**(code **)(**ppiVar1 + 0x38))();
  }
  return;
}



