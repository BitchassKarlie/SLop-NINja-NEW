/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c2d0 FUN_0001c2d0 */

void FUN_0001c2d0(void **param_1)

{
  void *pvVar1;
  
  *(undefined *)(param_1 + 0x409) = 0;
  FUN_0001c0f8();
  pvVar1 = *param_1;
  if (pvVar1 != (void *)0x0) {
    FUN_0009372c(pvVar1);
    operator_delete(pvVar1);
    *param_1 = (void *)0x0;
  }
  param_1[1] = (void *)0x0;
  param_1[0x404] = (void *)0x0;
  param_1[0x202] = (void *)0x0;
  param_1[0x403] = (void *)0x0;
  return;
}



