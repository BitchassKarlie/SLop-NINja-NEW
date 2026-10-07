/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a63d8 FUN_000a63d8 */

void FUN_000a63d8(void)

{
  int iVar1;
  
  iVar1 = DAT_000a63f8;
  if (((*(char *)(DAT_000a63f8 + 0xa63e8) != '\0') &&
      (*(int **)(DAT_000a63f8 + 0xa63ec) != (int *)0x0)) &&
     (*(char *)(DAT_000a63f8 + 0xa63f0) != '\0')) {
    (**(code **)(**(int **)(DAT_000a63f8 + 0xa63ec) + 0x3c))();
    *(undefined *)(iVar1 + 0xa63f0) = 0;
  }
  return;
}



