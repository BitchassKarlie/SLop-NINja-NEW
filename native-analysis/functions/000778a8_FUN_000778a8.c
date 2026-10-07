/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000778a8 FUN_000778a8 */

int FUN_000778a8(int param_1)

{
  void *pvVar1;
  
  if (param_1 + 0x2c != 0) {
    FUN_00077854(param_1 + 0x4c);
    FUN_00077854(param_1 + 0x3c);
    FUN_00077854(param_1 + 0x2c);
  }
  FUN_00077854(param_1 + 0x1c);
  pvVar1 = *(void **)(param_1 + 0x10);
  *(void **)(param_1 + 0x14) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return param_1;
}



