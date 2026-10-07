/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aea74 FUN_000aea74 */

int FUN_000aea74(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar3) {
    do {
      pvVar2 = *(void **)((int)pvVar1 + 8);
      *(void **)((int)pvVar1 + 0xc) = pvVar2;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      pvVar1 = (void *)((int)pvVar1 + 0x14);
    } while (pvVar3 != pvVar1);
    pvVar1 = *(void **)(param_1 + 4);
  }
  *(void **)(param_1 + 8) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return param_1;
}



