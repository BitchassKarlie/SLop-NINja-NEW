/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a97d0 FUN_000a97d0 */

int FUN_000a97d0(int param_1,int param_2)

{
  uint uVar1;
  void *pvVar2;
  
  uVar1 = *(uint *)(param_2 + 0x50);
  *(uint *)(param_1 + 0x50) = uVar1;
  pvVar2 = operator_new__(uVar1);
  *(void **)(param_1 + 0x54) = pvVar2;
  FUN_000a9764(pvVar2,param_1,param_2);
  return param_1;
}



