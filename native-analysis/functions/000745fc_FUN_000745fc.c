/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000745fc FUN_000745fc */

void FUN_000745fc(int param_1,int param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  
  pvVar1 = operator_new(param_2 * 4);
  pvVar4 = *(void **)(param_1 + 8);
  pvVar2 = *(void **)(param_1 + 4);
  iVar5 = (int)pvVar4 - (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    if (pvVar2 < pvVar4) {
      iVar3 = 0;
      do {
        *(undefined4 *)((int)pvVar1 + iVar3) = *(undefined4 *)((int)pvVar2 + iVar3);
        iVar3 = iVar3 + 4;
      } while ((void *)((int)pvVar2 + iVar3) < pvVar4);
      pvVar2 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar2);
  }
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 4);
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar5 >> 2) * 4);
  *(void **)(param_1 + 4) = pvVar1;
  return;
}



