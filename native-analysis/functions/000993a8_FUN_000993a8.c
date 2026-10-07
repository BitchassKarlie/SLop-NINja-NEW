/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000993a8 FUN_000993a8 */

int FUN_000993a8(int param_1)

{
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(void **)(param_1 + 0x4c) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x4c));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(void **)(param_1 + 0x44) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  return param_1;
}



