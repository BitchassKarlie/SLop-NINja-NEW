/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1e18 FUN_000b1e18 */

int FUN_000b1e18(int param_1)

{
  void *pvVar1;
  
  FUN_000b18cc(param_1 + 8);
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_000a95e8(pvVar1);
    operator_delete(pvVar1);
  }
  FUN_000a121c(param_1);
  return param_1;
}



