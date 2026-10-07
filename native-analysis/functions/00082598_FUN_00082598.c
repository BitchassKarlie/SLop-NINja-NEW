/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00082598 FUN_00082598 */

void FUN_00082598(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  
  pvVar1 = operator_new(param_2 * 0x7c);
  pvVar4 = *(void **)(param_1 + 8);
  pvVar2 = *(void **)(param_1 + 4);
  iVar5 = (int)pvVar4 - (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = pvVar1;
    if (pvVar2 < pvVar4) {
      while( true ) {
        FUN_00079bac(pvVar3,pvVar2);
        FUN_00084cd8(pvVar2,0);
        FUN_00017d90(pvVar2);
        if (pvVar4 <= (void *)((int)pvVar2 + 0x7cU)) break;
        pvVar2 = (void *)((int)pvVar2 + 0x7cU);
        pvVar3 = (void *)((int)pvVar3 + 0x7c);
      }
      pvVar2 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar2);
  }
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x7c);
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar5 >> 2) * 4);
  return;
}



