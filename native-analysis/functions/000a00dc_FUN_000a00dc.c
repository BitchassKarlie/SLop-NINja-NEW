/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a00dc FUN_000a00dc */

undefined4 * FUN_000a00dc(undefined4 *param_1,int param_2,undefined4 param_3,void **param_4)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_2 + 4);
  if ((void **)pvVar1 != param_4) {
    pvVar1 = *param_4;
    *(void **)param_4[1] = pvVar1;
    *(void **)((int)*param_4 + 4) = param_4[1];
    FUN_0009fd54(param_4 + 2);
    operator_delete(param_4);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = param_3;
  param_1[1] = pvVar1;
  return param_1;
}



