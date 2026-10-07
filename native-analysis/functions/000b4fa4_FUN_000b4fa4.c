/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4fa4 FUN_000b4fa4 */

int FUN_000b4fa4(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar3) {
    do {
      iVar2 = (int)pvVar1 + 4;
      pvVar1 = (void *)((int)pvVar1 + 0x14);
      FUN_000b4ebc(iVar2);
    } while (pvVar3 != pvVar1);
    pvVar1 = *(void **)(param_1 + 4);
    pvVar3 = pvVar1;
  }
  *(void **)(param_1 + 8) = pvVar3;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return param_1;
}



