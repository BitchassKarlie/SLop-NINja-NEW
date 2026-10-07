/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000755d8 FUN_000755d8 */

void FUN_000755d8(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  
  pvVar1 = operator_new(param_2 * 200);
  pvVar5 = *(void **)(param_1 + 8);
  pvVar2 = *(void **)(param_1 + 4);
  iVar6 = (int)pvVar5 - (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar1;
    if (pvVar2 < pvVar5) {
      do {
        FUN_000750d4(pvVar4,pvVar2);
        pvVar3 = (void *)((int)pvVar2 + 200);
        FUN_0007489c(pvVar2);
        pvVar2 = pvVar3;
        pvVar4 = (void *)((int)pvVar4 + 200);
      } while (pvVar3 < pvVar5);
      pvVar2 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar2);
  }
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 200);
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 8) = (void *)((iVar6 >> 3) * 8 + (int)pvVar1);
  return;
}



