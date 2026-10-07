/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bbefc FUN_000bbefc */

void FUN_000bbefc(void *param_1)

{
  void *__ptr;
  int iVar1;
  void *__ptr_00;
  int iVar2;
  int iVar3;
  int iVar4;
  void *__ptr_01;
  int iVar5;
  int iVar6;
  
  iVar6 = DAT_000bbfa4 + 0xbbf0a;
  if (param_1 != (void *)0x0) {
    iVar4 = *(int *)((int)param_1 + 4);
    iVar5 = iVar4;
    if (iVar4 != 0) {
      iVar5 = *(int *)(iVar4 + 0x1c);
    }
    __ptr_00 = *(void **)((int)param_1 + 8);
    __ptr_01 = *(void **)((int)param_1 + 0x48);
    if (__ptr_00 != (void *)0x0) {
      iVar1 = *(int *)(iVar4 + 4);
      if (0 < iVar1) {
        iVar2 = 0;
        do {
          __ptr = *(void **)((int)__ptr_00 + iVar2 * 4);
          if (__ptr != (void *)0x0) {
            free(__ptr);
            __ptr_00 = *(void **)((int)param_1 + 8);
            iVar1 = *(int *)(iVar4 + 4);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      free(__ptr_00);
      if (*(void **)((int)param_1 + 0xc) != (void *)0x0) {
        free(*(void **)((int)param_1 + 0xc));
      }
    }
    iVar4 = DAT_000bbfa8;
    if ((iVar5 != 0) && (iVar1 = *(int *)(iVar5 + 8), 0 < iVar1)) {
      iVar3 = 0;
      iVar2 = iVar5;
      do {
        if ((__ptr_01 != (void *)0x0) && (*(int *)((int)__ptr_01 + 0xc) != 0)) {
          (**(code **)(*(int *)(*(int *)(iVar6 + iVar4) +
                               *(int *)(iVar5 + (*(int *)(*(int *)(iVar2 + 0x20) + 0xc) + 0x48) * 4)
                               * 4) + 0xc))
                    (*(undefined4 *)(*(int *)((int)__ptr_01 + 0xc) + iVar3 * 4));
          iVar1 = *(int *)(iVar5 + 8);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar1);
    }
    if (__ptr_01 != (void *)0x0) {
      if (*(void **)((int)__ptr_01 + 0xc) != (void *)0x0) {
        free(*(void **)((int)__ptr_01 + 0xc));
      }
      free(__ptr_01);
    }
    memset(param_1,0,0x50);
  }
  return;
}



