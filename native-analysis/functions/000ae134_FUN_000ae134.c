/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ae134 FUN_000ae134 */

void FUN_000ae134(void **param_1)

{
  void *pvVar1;
  
  if (*param_1 != (void *)0x0) {
    operator_delete(*param_1);
    *param_1 = (void *)0x0;
  }
  pvVar1 = operator_new__(200);
  param_1[1] = (void *)0xa;
  param_1[2] = (void *)0x1;
  param_1[3] = (void *)0x0;
  *param_1 = pvVar1;
  return;
}



