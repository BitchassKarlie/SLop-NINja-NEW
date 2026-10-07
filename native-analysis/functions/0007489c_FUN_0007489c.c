/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007489c FUN_0007489c */

int FUN_0007489c(int param_1)

{
  void *pvVar1;
  
  FUN_00017d90(param_1 + 0xc4);
  pvVar1 = *(void **)(param_1 + 0xb4);
  *(void **)(param_1 + 0xb8) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_000747c8(param_1 + 0x18);
  FUN_000747c8(param_1 + 8);
  return param_1;
}



