/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000885fc FUN_000885fc */

void * FUN_000885fc(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined **local_40;
  undefined **local_3c;
  undefined auStack_38 [4];
  void *local_34;
  void *local_30;
  
  pvVar1 = operator_new(0x28);
  FUN_00085940(auStack_38,param_2);
  *(undefined ****)pvVar1 = &local_40;
  *(undefined ****)((int)pvVar1 + 4) = &local_40;
  local_40 = (undefined **)&local_40;
  local_3c = (undefined **)&local_40;
  FUN_00085940((int)pvVar1 + 8,auStack_38);
  local_30 = local_34;
  if (local_34 != (void *)0x0) {
    operator_delete(local_34);
  }
  return pvVar1;
}



