/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bcfd8 FUN_000bcfd8 */

void FUN_000bcfd8(undefined4 *param_1)

{
  void *__ptr;
  void *__ptr_00;
  int iVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[2];
    if (iVar1 < 1) {
      __ptr_00 = (void *)param_1[6];
    }
    else {
      __ptr_00 = (void *)param_1[6];
      iVar2 = 0;
      do {
        __ptr = *(void **)((int)__ptr_00 + iVar2 * 4);
        if (__ptr != (void *)0x0) {
          free(__ptr);
          __ptr_00 = (void *)param_1[6];
          iVar1 = param_1[2];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    free(__ptr_00);
    if (0 < (int)param_1[7]) {
      iVar1 = 0;
      do {
        iVar2 = iVar1 * 4;
        iVar1 = iVar1 + 1;
        free(*(void **)(param_1[8] + iVar2));
      } while (iVar1 < (int)param_1[7]);
    }
    free((void *)param_1[8]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    free(param_1);
  }
  return;
}



