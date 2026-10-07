/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab388 FUN_000ab388 */

int FUN_000ab388(int param_1)

{
  void *pvVar1;
  
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  pvVar1 = *(void **)(param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    FUN_000ab448(pvVar1);
    operator_delete(pvVar1);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return param_1;
}



