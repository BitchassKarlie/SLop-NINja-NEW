/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00030650 FUN_00030650 */

void FUN_00030650(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar1 = *(void **)(param_1 + 4);
  if (pvVar1 != (void *)0x0) {
    pvVar5 = *(void **)((int)pvVar1 + 0x8c);
    if (*(void **)((int)pvVar1 + 0x8c) == (void *)0x0) goto LAB_0003066a;
    do {
      do {
        pvVar1 = pvVar5;
        pvVar5 = *(void **)((int)pvVar1 + 0x8c);
      } while (*(void **)((int)pvVar1 + 0x8c) != (void *)0x0);
LAB_0003066a:
      pvVar5 = *(void **)((int)pvVar1 + 0x90);
    } while (pvVar5 != (void *)0x0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pvVar3 = *(void **)((int)pvVar1 + 0x94);
    while (pvVar4 = pvVar3, pvVar4 != (void *)0x0) {
      pvVar2 = *(void **)((int)pvVar4 + 0x8c);
      pvVar3 = pvVar2;
      if (pvVar2 == pvVar1) {
        *(undefined4 *)((int)pvVar4 + 0x8c) = 0;
        pvVar3 = pvVar5;
      }
      if (pvVar2 != pvVar1) {
        *(undefined4 *)((int)pvVar4 + 0x90) = 0;
      }
      while ((pvVar2 = pvVar3, pvVar3 != (void *)0x0 ||
             (pvVar2 = *(void **)((int)pvVar4 + 0x90), pvVar2 != (void *)0x0))) {
        pvVar3 = *(void **)((int)pvVar2 + 0x8c);
        pvVar4 = pvVar2;
      }
      operator_delete(pvVar1);
      pvVar1 = pvVar4;
      pvVar3 = *(void **)((int)pvVar4 + 0x94);
    }
    operator_delete(pvVar1);
  }
  return;
}



