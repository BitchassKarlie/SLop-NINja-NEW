/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00039a18 FUN_00039a18 */

int FUN_00039a18(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar3) {
    do {
      iVar2 = (int)pvVar1 + 0x5c;
      pvVar1 = (void *)((int)pvVar1 + 0x60);
      FUN_00017d90(iVar2);
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



