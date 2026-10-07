/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000887fc FUN_000887fc */

undefined4 * FUN_000887fc(undefined4 *param_1,int param_2,undefined4 param_3,void **param_4)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_2 + 4);
  if ((void **)pvVar2 != param_4) {
    pvVar2 = *param_4;
    *(void **)param_4[1] = pvVar2;
    *(void **)((int)*param_4 + 4) = param_4[1];
    pvVar1 = param_4[3];
    param_4[4] = pvVar1;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    operator_delete(param_4);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = param_3;
  param_1[1] = pvVar2;
  return param_1;
}



