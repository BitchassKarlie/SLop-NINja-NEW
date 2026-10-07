/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc2b4 FUN_000bc2b4 */

void FUN_000bc2b4(void **param_1)

{
  void *__ptr;
  void *pvVar1;
  void *__ptr_00;
  int iVar2;
  
  if (param_1 != (void **)0x0) {
    pvVar1 = param_1[2];
    if ((int)pvVar1 < 1) {
      __ptr_00 = *param_1;
    }
    else {
      __ptr_00 = *param_1;
      iVar2 = 0;
      do {
        __ptr = *(void **)((int)__ptr_00 + iVar2 * 4);
        if (__ptr != (void *)0x0) {
          free(__ptr);
          __ptr_00 = *param_1;
          pvVar1 = param_1[2];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)pvVar1);
    }
    if (__ptr_00 != (void *)0x0) {
      free(__ptr_00);
    }
    if (param_1[1] != (void *)0x0) {
      free(param_1[1]);
    }
    if (param_1[3] != (void *)0x0) {
      free(param_1[3]);
    }
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x0;
    param_1[2] = (void *)0x0;
    param_1[3] = (void *)0x0;
  }
  return;
}



