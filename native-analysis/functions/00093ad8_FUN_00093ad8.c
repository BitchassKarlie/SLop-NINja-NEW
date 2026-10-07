/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093ad8 FUN_00093ad8 */

int FUN_00093ad8(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar3) {
    do {
      FUN_00093aa4((int)pvVar1 + 0x28);
      pvVar2 = (void *)((int)pvVar1 + 0x38);
      FUN_0009e858(pvVar1);
      pvVar1 = pvVar2;
    } while (pvVar3 != pvVar2);
    pvVar1 = *(void **)(param_1 + 4);
    pvVar3 = pvVar1;
  }
  *(void **)(param_1 + 8) = pvVar3;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return param_1;
}



