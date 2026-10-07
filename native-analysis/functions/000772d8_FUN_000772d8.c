/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000772d8 FUN_000772d8 */

undefined4 * FUN_000772d8(undefined4 *param_1,int param_2,undefined4 param_3,void **param_4)

{
  undefined4 uVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)(param_2 + 4);
  if ((void **)pvVar2 != param_4) {
    pvVar2 = *param_4;
    *(void **)param_4[1] = pvVar2;
    *(void **)((int)*param_4 + 4) = param_4[1];
    uVar1 = FUN_000a3a68();
    FUN_000a371c(uVar1,param_4[0x15]);
    operator_delete(param_4);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = param_3;
  param_1[1] = pvVar2;
  return param_1;
}



