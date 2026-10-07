/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00075094 FUN_00075094 */

int FUN_00075094(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x20);
  *(void **)(param_1 + 0x24) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_00074950(param_1 + 0x10);
  FUN_000749c8(param_1);
  return param_1;
}



