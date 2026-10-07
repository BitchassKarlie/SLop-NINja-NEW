/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000997f0 FUN_000997f0 */

void FUN_000997f0(int param_1)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar5 = *(void **)(param_1 + 4);
  if (pvVar5 != (void *)0x0) {
    pvVar6 = *(void **)((int)pvVar5 + 0x10);
    if (*(void **)((int)pvVar5 + 0x10) == (void *)0x0) goto LAB_00099804;
    do {
      do {
        pvVar5 = pvVar6;
        pvVar6 = *(void **)((int)pvVar5 + 0x10);
      } while (*(void **)((int)pvVar5 + 0x10) != (void *)0x0);
LAB_00099804:
      pvVar6 = *(void **)((int)pvVar5 + 0x14);
    } while (pvVar6 != (void *)0x0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    do {
      pvVar4 = *(void **)((int)pvVar5 + 0x18);
      if (pvVar4 != (void *)0x0) {
        pvVar2 = *(void **)((int)pvVar4 + 0x10);
        pvVar3 = pvVar2;
        if (pvVar2 == pvVar5) {
          *(undefined4 *)((int)pvVar4 + 0x10) = 0;
          pvVar3 = pvVar6;
        }
        if (pvVar2 != pvVar5) {
          *(undefined4 *)((int)pvVar4 + 0x14) = 0;
        }
        while ((pvVar2 = pvVar3, pvVar3 != (void *)0x0 ||
               (pvVar2 = *(void **)((int)pvVar4 + 0x14), pvVar2 != (void *)0x0))) {
          pvVar3 = *(void **)((int)pvVar2 + 0x10);
          pvVar4 = pvVar2;
        }
      }
      iVar1 = FUN_000a75e0((int)pvVar5 + 8,0);
      if (iVar1 != 0) {
        FUN_00017d24();
      }
      operator_delete(pvVar5);
      pvVar5 = pvVar4;
    } while (pvVar4 != (void *)0x0);
  }
  return;
}



