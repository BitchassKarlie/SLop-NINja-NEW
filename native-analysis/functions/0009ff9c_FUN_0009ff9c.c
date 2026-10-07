/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ff9c FUN_0009ff9c */

void FUN_0009ff9c(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(param_1 + 4);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)((int)pvVar4 + 0xc);
    if (*(void **)((int)pvVar4 + 0xc) == (void *)0x0) goto LAB_0009ffb0;
    do {
      do {
        pvVar4 = pvVar5;
        pvVar5 = *(void **)((int)pvVar4 + 0xc);
      } while (*(void **)((int)pvVar4 + 0xc) != (void *)0x0);
LAB_0009ffb0:
      pvVar5 = *(void **)((int)pvVar4 + 0x10);
    } while (pvVar5 != (void *)0x0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    do {
      pvVar3 = *(void **)((int)pvVar4 + 0x14);
      if (pvVar3 != (void *)0x0) {
        pvVar1 = *(void **)((int)pvVar3 + 0xc);
        pvVar2 = pvVar1;
        if (pvVar1 == pvVar4) {
          *(undefined4 *)((int)pvVar3 + 0xc) = 0;
          pvVar2 = pvVar5;
        }
        if (pvVar1 != pvVar4) {
          *(undefined4 *)((int)pvVar3 + 0x10) = 0;
        }
        while ((pvVar1 = pvVar2, pvVar2 != (void *)0x0 ||
               (pvVar1 = *(void **)((int)pvVar3 + 0x10), pvVar1 != (void *)0x0))) {
          pvVar2 = *(void **)((int)pvVar1 + 0xc);
          pvVar3 = pvVar1;
        }
      }
      if (*(void **)((int)pvVar4 + 4) != (void *)0x0) {
        operator_delete(*(void **)((int)pvVar4 + 4));
        *(undefined4 *)((int)pvVar4 + 4) = 0;
      }
      operator_delete(pvVar4);
      pvVar4 = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  return;
}



