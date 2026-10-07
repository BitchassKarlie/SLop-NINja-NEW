/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006ad38 FUN_0006ad38 */

void * FUN_0006ad38(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined **local_3c0;
  undefined **local_3bc;
  undefined auStack_3b8 [932];
  
  pvVar1 = operator_new(0x3a8);
  FUN_000697c4(auStack_3b8,param_2);
  *(undefined ****)pvVar1 = &local_3c0;
  *(undefined ****)((int)pvVar1 + 4) = &local_3c0;
  local_3c0 = (undefined **)&local_3c0;
  local_3bc = (undefined **)&local_3c0;
  FUN_000697c4((int)pvVar1 + 8,auStack_3b8);
  FUN_0006ad04(auStack_3b8);
  return pvVar1;
}



