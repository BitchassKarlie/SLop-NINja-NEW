/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e424 FUN_0003e424 */

int * FUN_0003e424(int *param_1)

{
  *param_1 = *(int *)(DAT_0003e44c + 0x3e42c + DAT_0003e450) + 8;
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  FUN_0003e194(param_1 + 0xc);
  return param_1;
}



