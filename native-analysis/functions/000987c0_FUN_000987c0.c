/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000987c0 FUN_000987c0 */

void FUN_000987c0(int param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  
  pvVar1 = operator_new(param_2);
  pvVar2 = *(void **)(param_1 + 4);
  iVar4 = (int)*(void **)(param_1 + 8) - (int)pvVar2;
  if (pvVar2 != (void *)0x0) {
    if (pvVar2 < *(void **)(param_1 + 8)) {
      iVar3 = 0;
      do {
        *(undefined *)((int)pvVar1 + iVar3) = *(undefined *)((int)pvVar2 + iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar4);
      pvVar2 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar2);
  }
  *(uint *)(param_1 + 0xc) = (int)pvVar1 + param_2;
  *(int *)(param_1 + 8) = (int)pvVar1 + iVar4;
  *(void **)(param_1 + 4) = pvVar1;
  return;
}



