/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000797f4 FUN_000797f4 */

void FUN_000797f4(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(param_1 + 4);
  if (pvVar4 != (void *)0x0) {
    pvVar5 = *(void **)((int)pvVar4 + 0x68);
    if (*(void **)((int)pvVar4 + 0x68) == (void *)0x0) goto LAB_00079808;
    do {
      do {
        pvVar4 = pvVar5;
        pvVar5 = *(void **)((int)pvVar4 + 0x68);
      } while (*(void **)((int)pvVar4 + 0x68) != (void *)0x0);
LAB_00079808:
      pvVar5 = *(void **)((int)pvVar4 + 0x6c);
    } while (pvVar5 != (void *)0x0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    pvVar2 = *(void **)((int)pvVar4 + 0x70);
    while (pvVar3 = pvVar2, pvVar3 != (void *)0x0) {
      pvVar1 = *(void **)((int)pvVar3 + 0x68);
      pvVar2 = pvVar1;
      if (pvVar1 == pvVar4) {
        *(undefined4 *)((int)pvVar3 + 0x68) = 0;
        pvVar2 = pvVar5;
      }
      if (pvVar1 != pvVar4) {
        *(undefined4 *)((int)pvVar3 + 0x6c) = 0;
      }
      while ((pvVar1 = pvVar2, pvVar2 != (void *)0x0 ||
             (pvVar1 = *(void **)((int)pvVar3 + 0x6c), pvVar1 != (void *)0x0))) {
        pvVar2 = *(void **)((int)pvVar1 + 0x68);
        pvVar3 = pvVar1;
      }
      FUN_00082438((int)pvVar4 + 4);
      operator_delete(pvVar4);
      pvVar4 = pvVar3;
      pvVar2 = *(void **)((int)pvVar3 + 0x70);
    }
    FUN_00082438((int)pvVar4 + 4);
    operator_delete(pvVar4);
  }
  return;
}



