/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005b864 FUN_0005b864 */

int * FUN_0005b864(int *param_1)

{
  void *pvVar1;
  
  *param_1 = DAT_0005b898 + 0x5b874;
  FUN_0005b6a4();
  pvVar1 = (void *)param_1[0x21];
  param_1[0x22] = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = (void *)param_1[0x1d];
  param_1[0x1e] = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_0004a8a4(param_1);
  return param_1;
}



