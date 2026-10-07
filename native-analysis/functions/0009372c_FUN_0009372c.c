/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009372c FUN_0009372c */

undefined4 * FUN_0009372c(undefined4 *param_1)

{
  void *pvVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pvVar1 = (void *)param_1[4];
  param_1[6] = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    param_1[4] = 0;
  }
  return param_1;
}



