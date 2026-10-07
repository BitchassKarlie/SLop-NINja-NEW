/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00087ee0 FUN_00087ee0 */

void FUN_00087ee0(int param_1,int param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  
  pvVar1 = operator_new(param_2 * 0x7c);
  pvVar5 = *(void **)(param_1 + 8);
  pvVar3 = *(void **)(param_1 + 4);
  iVar6 = (int)pvVar5 - (int)pvVar3;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = pvVar1;
    if (pvVar3 < pvVar5) {
      do {
        FUN_00086a14(pvVar4,pvVar3);
        iVar2 = (int)pvVar3 + 0xc;
        pvVar3 = (void *)((int)pvVar3 + 0x7c);
        FUN_000223ec(iVar2);
        pvVar4 = (void *)((int)pvVar4 + 0x7c);
      } while (pvVar3 < pvVar5);
      pvVar3 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar3);
  }
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x7c);
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar6 >> 2) * 4);
  return;
}



