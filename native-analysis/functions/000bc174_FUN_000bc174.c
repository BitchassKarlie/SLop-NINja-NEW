/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc174 FUN_000bc174 */

void FUN_000bc174(int param_1)

{
  void **__ptr;
  void *pvVar1;
  void **ppvVar2;
  
  __ptr = *(void ***)(param_1 + 0x54);
  while (__ptr != (void **)0x0) {
    ppvVar2 = (void **)__ptr[1];
    free(*__ptr);
    *__ptr = (void *)0x0;
    __ptr[1] = (void *)0x0;
    free(__ptr);
    __ptr = ppvVar2;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    pvVar1 = realloc(*(void **)(param_1 + 0x44),*(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x4c))
    ;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(void **)(param_1 + 0x44) = pvVar1;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



