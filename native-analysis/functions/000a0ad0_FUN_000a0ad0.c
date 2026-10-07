/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0ad0 FUN_000a0ad0 */

void FUN_000a0ad0(int param_1,int param_2)

{
  void *pvVar1;
  
  if (param_2 == (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) * 0x2fa0be83) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return;
    }
  }
  else if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (param_2 != 0) {
    pvVar1 = operator_new__(param_2 * 0xc0);
    *(void **)(param_1 + 0x10) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_2 * 0x40);
    *(void **)(param_1 + 0x14) = pvVar1;
    *(void **)(param_1 + 0x18) = (void *)((int)pvVar1 + param_2 * 0x40);
  }
  return;
}



