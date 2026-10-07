/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab40c FUN_000ab40c */

void FUN_000ab40c(int param_1)

{
  if ((*(char *)(param_1 + 4) == '\0') && (*(char *)(param_1 + 0x37) != '\0')) {
    if (*(void **)(param_1 + 0x30) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  FUN_0009f378(param_1);
  *(undefined *)(param_1 + 0x35) = 0;
  *(undefined *)(param_1 + 0x36) = 0;
  *(undefined *)(param_1 + 0x34) = 0;
  *(undefined *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}



