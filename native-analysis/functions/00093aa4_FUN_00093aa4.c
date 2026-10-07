/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093aa4 FUN_00093aa4 */

int FUN_00093aa4(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar3) {
    do {
      FUN_0009e858((int)pvVar1 + 0x18);
      pvVar2 = (void *)((int)pvVar1 + 0x40);
      FUN_00093a84(pvVar1);
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



