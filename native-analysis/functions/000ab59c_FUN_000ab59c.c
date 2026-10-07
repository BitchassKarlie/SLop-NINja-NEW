/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ab59c FUN_000ab59c */

void FUN_000ab59c(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar1 = operator_new(param_2 * 0x28);
  pvVar6 = *(void **)(param_1 + 8);
  pvVar3 = *(void **)(param_1 + 4);
  iVar2 = (int)pvVar6 - (int)pvVar3;
  if (pvVar3 != (void *)0x0) {
    pvVar5 = pvVar1;
    if (pvVar3 < pvVar6) {
      do {
        FUN_0009e7a4(pvVar5,pvVar3);
        pvVar4 = (void *)((int)pvVar3 + 0x28);
        FUN_0009e858(pvVar3);
        pvVar3 = pvVar4;
        pvVar5 = (void *)((int)pvVar5 + 0x28);
      } while (pvVar4 < pvVar6);
      pvVar3 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar3);
  }
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x28);
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar2 >> 3) * 8);
  return;
}



