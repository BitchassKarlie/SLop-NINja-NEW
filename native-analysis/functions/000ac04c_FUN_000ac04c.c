/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac04c FUN_000ac04c */

void FUN_000ac04c(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  
  pvVar1 = operator_new(param_2 * 0x4c);
  pvVar5 = *(void **)(param_1 + 8);
  pvVar2 = *(void **)(param_1 + 4);
  iVar6 = (int)pvVar5 - (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar1;
    if (pvVar2 < pvVar5) {
      do {
        FUN_000abfc8(pvVar4,pvVar2);
        pvVar3 = (void *)((int)pvVar2 + 0x4c);
        FUN_000abe04(pvVar2);
        pvVar2 = pvVar3;
        pvVar4 = (void *)((int)pvVar4 + 0x4c);
      } while (pvVar3 < pvVar5);
      pvVar2 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar2);
  }
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x4c);
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 8) = (void *)((iVar6 >> 2) * 4 + (int)pvVar1);
  return;
}



