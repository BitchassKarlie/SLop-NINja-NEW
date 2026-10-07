/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f888 FUN_0009f888 */

int FUN_0009f888(int param_1)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar3 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar3) {
    do {
      iVar2 = (int)pvVar1 + 8;
      pvVar1 = (void *)((int)pvVar1 + 0x10);
      FUN_0009f860(iVar2);
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



