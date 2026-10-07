/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abe04 FUN_000abe04 */

int FUN_000abe04(int param_1)

{
  void *pvVar1;
  
  FUN_000abe24(param_1 + 0x3c);
  pvVar1 = *(void **)(param_1 + 0x30);
  *(void **)(param_1 + 0x34) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  FUN_0009e858(param_1 + 4);
  return param_1;
}



