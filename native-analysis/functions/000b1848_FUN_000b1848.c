/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1848 FUN_000b1848 */

void FUN_000b1848(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(param_1 + 4);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)((int)pvVar4 + 0x30);
    if (*(void **)((int)pvVar4 + 0x30) == (void *)0x0) goto LAB_000b185c;
    do {
      do {
        pvVar4 = pvVar5;
        pvVar5 = *(void **)((int)pvVar4 + 0x30);
      } while (*(void **)((int)pvVar4 + 0x30) != (void *)0x0);
LAB_000b185c:
      pvVar5 = *(void **)((int)pvVar4 + 0x34);
    } while (pvVar5 != (void *)0x0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pvVar2 = *(void **)((int)pvVar4 + 0x38);
    while (pvVar3 = pvVar2, pvVar3 != (void *)0x0) {
      pvVar1 = *(void **)((int)pvVar3 + 0x30);
      pvVar2 = pvVar1;
      if (pvVar1 == pvVar4) {
        *(undefined4 *)((int)pvVar3 + 0x30) = 0;
        pvVar2 = pvVar5;
      }
      if (pvVar1 != pvVar4) {
        *(undefined4 *)((int)pvVar3 + 0x34) = 0;
      }
      while ((pvVar1 = pvVar2, pvVar2 != (void *)0x0 ||
             (pvVar1 = *(void **)((int)pvVar3 + 0x34), pvVar1 != (void *)0x0))) {
        pvVar2 = *(void **)((int)pvVar1 + 0x30);
        pvVar3 = pvVar1;
      }
      FUN_0009e858(pvVar4);
      operator_delete(pvVar4);
      pvVar4 = pvVar3;
      pvVar2 = *(void **)((int)pvVar3 + 0x38);
    }
    FUN_0009e858(pvVar4);
    operator_delete(pvVar4);
  }
  return;
}



