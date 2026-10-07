/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00039ab0 FUN_00039ab0 */

void FUN_00039ab0(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar1 = operator_new(param_2 * 0x60);
  pvVar6 = *(void **)(param_1 + 8);
  pvVar4 = *(void **)(param_1 + 4);
  iVar3 = (int)pvVar6 - (int)pvVar4;
  if (pvVar4 != (void *)0x0) {
    pvVar5 = pvVar1;
    if (pvVar4 < pvVar6) {
      do {
        FUN_0003998c(pvVar5,pvVar4);
        iVar2 = (int)pvVar4 + 0x5c;
        pvVar4 = (void *)((int)pvVar4 + 0x60);
        FUN_00017d90(iVar2);
        pvVar5 = (void *)((int)pvVar5 + 0x60);
      } while (pvVar4 < pvVar6);
      pvVar4 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar4);
  }
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x60);
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar3 >> 5) * 0x20);
  return;
}



