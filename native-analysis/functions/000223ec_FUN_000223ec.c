/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000223ec FUN_000223ec */

int FUN_000223ec(int param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 4);
  pvVar2 = *(void **)(param_1 + 8);
  if (pvVar1 != pvVar2) {
    do {
      if (*(void **)((int)pvVar1 + 4) != (void *)0x0) {
        operator_delete(*(void **)((int)pvVar1 + 4));
        *(undefined4 *)((int)pvVar1 + 8) = 0;
        *(undefined4 *)((int)pvVar1 + 0xc) = 0;
        *(undefined4 *)((int)pvVar1 + 4) = 0;
      }
      pvVar1 = (void *)((int)pvVar1 + 0x10);
    } while (pvVar2 != pvVar1);
    pvVar1 = *(void **)(param_1 + 4);
    pvVar2 = pvVar1;
  }
  *(void **)(param_1 + 8) = pvVar2;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  return param_1;
}



