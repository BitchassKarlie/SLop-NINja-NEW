/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000947ec FUN_000947ec */

int * FUN_000947ec(int *param_1)

{
  *param_1 = DAT_00094820 + 0x947fc;
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  FUN_000946b0(param_1 + 0x11);
  FUN_000947c0(param_1 + 0xd);
  FUN_0009e858(param_1 + 3);
  return param_1;
}



