/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093a84 FUN_00093a84 */

int FUN_00093a84(int param_1)

{
  void *pvVar1;
  
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  pvVar1 = *(void **)(param_1 + 4);
  *(void **)(param_1 + 8) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return param_1;
}



