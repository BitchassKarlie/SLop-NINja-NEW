/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000749c8 FUN_000749c8 */

int FUN_000749c8(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar3) {
    do {
      FUN_0007499c((int)pvVar1 + 0x10);
      pvVar2 = (void *)((int)pvVar1 + 0x24);
      FUN_000747c8(pvVar1);
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



