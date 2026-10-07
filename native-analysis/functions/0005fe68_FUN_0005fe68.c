/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005fe68 FUN_0005fe68 */

int * FUN_0005fe68(int *param_1)

{
  *param_1 = DAT_0005fe8c + 0x5fe78;
  if ((void *)param_1[0x15] != (void *)0x0) {
    operator_delete__((void *)param_1[0x15]);
    param_1[0x15] = 0;
  }
  FUN_0003e194(param_1 + 0xc);
  return param_1;
}



