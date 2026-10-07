/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a898c FUN_000a898c */

int FUN_000a898c(int param_1)

{
  FUN_000a7ec8(param_1 + 0x20);
  FUN_000a7d94(param_1 + 0x10);
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return param_1;
}



