/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6438 FUN_000a6438 */

int FUN_000a6438(void)

{
  int iVar1;
  
  if ((*(char *)(DAT_000a6458 + 0xa6448) == '\0') ||
     (*(int **)(DAT_000a6458 + 0xa644c) == (int *)0x0)) {
    iVar1 = 1;
  }
  else {
    iVar1 = (**(code **)(**(int **)(DAT_000a6458 + 0xa644c) + 0x4c))();
    iVar1 = iVar1 + -2;
    if (iVar1 != 0) {
      iVar1 = 1;
    }
  }
  return iVar1;
}



