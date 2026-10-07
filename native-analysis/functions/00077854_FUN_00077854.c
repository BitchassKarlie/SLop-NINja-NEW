/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077854 FUN_00077854 */

void FUN_00077854(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    pvVar5 = *(void **)((int)pvVar1 + 0xc);
    if (*(void **)((int)pvVar1 + 0xc) == (void *)0x0) goto LAB_0007786a;
    do {
      do {
        pvVar1 = pvVar5;
        pvVar5 = *(void **)((int)pvVar1 + 0xc);
      } while (*(void **)((int)pvVar1 + 0xc) != (void *)0x0);
LAB_0007786a:
      pvVar5 = *(void **)((int)pvVar1 + 0x10);
    } while (pvVar5 != (void *)0x0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pvVar3 = *(void **)((int)pvVar1 + 0x14);
    while (pvVar4 = pvVar3, pvVar4 != (void *)0x0) {
      pvVar2 = *(void **)((int)pvVar4 + 0xc);
      pvVar3 = pvVar2;
      if (pvVar2 == pvVar1) {
        *(undefined4 *)((int)pvVar4 + 0xc) = 0;
        pvVar3 = pvVar5;
      }
      if (pvVar2 != pvVar1) {
        *(undefined4 *)((int)pvVar4 + 0x10) = 0;
      }
      while ((pvVar2 = pvVar3, pvVar3 != (void *)0x0 ||
             (pvVar2 = *(void **)((int)pvVar4 + 0x10), pvVar2 != (void *)0x0))) {
        pvVar3 = *(void **)((int)pvVar2 + 0xc);
        pvVar4 = pvVar2;
      }
      operator_delete(pvVar1);
      pvVar1 = pvVar4;
      pvVar3 = *(void **)((int)pvVar4 + 0x14);
    }
    operator_delete(pvVar1);
  }
  return;
}



