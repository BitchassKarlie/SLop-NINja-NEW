/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098930 FUN_00098930 */

int * FUN_00098930(int *param_1)

{
  void *pvVar1;
  
  *param_1 = DAT_00098958 + 0x98940;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[5] = 0;
  }
  pvVar1 = (void *)param_1[2];
  param_1[3] = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return param_1;
}



