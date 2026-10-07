/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac69c FUN_000ac69c */

void FUN_000ac69c(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  
  pvVar1 = operator_new(param_2 * 0x10);
  pvVar5 = *(void **)(param_1 + 8);
  pvVar3 = *(void **)(param_1 + 4);
  iVar6 = (int)pvVar5 - (int)pvVar3;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = pvVar1;
    if (pvVar3 < pvVar5) {
      do {
        FUN_000ac66c(pvVar4,pvVar3);
        iVar2 = (int)pvVar3 + 8;
        pvVar3 = (void *)((int)pvVar3 + 0x10);
        FUN_0009f860(iVar2);
        pvVar4 = (void *)((int)pvVar4 + 0x10);
      } while (pvVar3 < pvVar5);
      pvVar3 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar3);
  }
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x10);
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar6 >> 4) * 0x10);
  return;
}



