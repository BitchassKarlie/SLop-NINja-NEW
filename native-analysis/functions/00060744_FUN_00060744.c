/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00060744 FUN_00060744 */

int * FUN_00060744(int *param_1)

{
  void *pvVar1;
  
  *param_1 = DAT_0006076c + 0x6079c;
  FUN_0005fd38();
  pvVar1 = (void *)param_1[0x2a];
  param_1[0x2b] = (int)pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_0004a61c(param_1);
  return param_1;
}



