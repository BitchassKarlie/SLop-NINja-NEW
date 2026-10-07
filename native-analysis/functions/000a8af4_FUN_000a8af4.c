/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a8af4 FUN_000a8af4 */

int * FUN_000a8af4(int *param_1)

{
  *param_1 = DAT_000a8b34 + 0xa8b04;
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete((void *)param_1[0x10]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x10] = 0;
  }
  FUN_000a89b4(param_1 + 0xb);
  *param_1 = DAT_000a8b38 + 0xa8b28;
  FUN_000a7ef4(param_1 + 7);
  FUN_000a7f20(param_1 + 3);
  return param_1;
}



