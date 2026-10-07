/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e5bc FUN_0008e5bc */

void FUN_0008e5bc(undefined4 param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = operator_new(0x24);
  FUN_0009376c(pvVar1,param_1);
  puVar2 = (undefined4 *)(DAT_0008e5d8 + 0x8e5d4);
  *(void **)((int)&DAT_0008e5d8 + DAT_0008e5d8) = pvVar1;
  *puVar2 = param_1;
  return;
}



