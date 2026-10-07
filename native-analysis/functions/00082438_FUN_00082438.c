/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00082438 FUN_00082438 */

int FUN_00082438(int param_1)

{
  void *pvVar1;
  
  FUN_000812dc(param_1 + 0x30);
  pvVar1 = *(void **)(param_1 + 0x24);
  *(void **)(param_1 + 0x28) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_00082404(param_1 + 0x10);
  pvVar1 = *(void **)(param_1 + 4);
  *(void **)(param_1 + 8) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return param_1;
}



