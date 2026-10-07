/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00087f90 FUN_00087f90 */

int FUN_00087f90(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar3) {
    do {
      iVar2 = (int)pvVar1 + 0xc;
      pvVar1 = (void *)((int)pvVar1 + 0x7c);
      FUN_000223ec(iVar2);
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



