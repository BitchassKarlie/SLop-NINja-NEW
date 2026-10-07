/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc308 FUN_000bc308 */

void FUN_000bc308(undefined4 *param_1)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  __ptr = (void *)param_1[7];
  iVar6 = DAT_000bc424 + 0xbc316;
  if (__ptr != (void *)0x0) {
    iVar1 = *(int *)((int)__ptr + 8);
    if (0 < iVar1) {
      iVar2 = 0;
      pvVar3 = __ptr;
      do {
        if (*(void **)((int)pvVar3 + 0x20) != (void *)0x0) {
          free(*(void **)((int)pvVar3 + 0x20));
          iVar1 = *(int *)((int)__ptr + 8);
        }
        iVar2 = iVar2 + 1;
        pvVar3 = (void *)((int)pvVar3 + 4);
      } while (iVar2 < iVar1);
    }
    iVar1 = DAT_000bc428;
    iVar2 = *(int *)((int)__ptr + 0xc);
    if (0 < iVar2) {
      iVar4 = 0;
      pvVar3 = __ptr;
      do {
        if (*(int *)((int)pvVar3 + 0x220) != 0) {
          (**(code **)(*(int *)(*(int *)(iVar6 + iVar1) + *(int *)((int)pvVar3 + 0x120) * 4) + 8))()
          ;
          iVar2 = *(int *)((int)__ptr + 0xc);
        }
        iVar4 = iVar4 + 1;
        pvVar3 = (void *)((int)pvVar3 + 4);
      } while (iVar4 < iVar2);
    }
    iVar1 = DAT_000bc42c;
    iVar2 = *(int *)((int)__ptr + 0x14);
    if (0 < iVar2) {
      iVar4 = 0;
      pvVar3 = __ptr;
      do {
        if (*(int *)((int)pvVar3 + 0x520) != 0) {
          (**(code **)(*(int *)(*(int *)(iVar6 + iVar1) + *(int *)((int)pvVar3 + 0x420) * 4) + 8))()
          ;
          iVar2 = *(int *)((int)__ptr + 0x14);
        }
        iVar4 = iVar4 + 1;
        pvVar3 = (void *)((int)pvVar3 + 4);
      } while (iVar4 < iVar2);
    }
    iVar1 = DAT_000bc430;
    iVar2 = *(int *)((int)__ptr + 0x18);
    if (0 < iVar2) {
      iVar4 = 0;
      pvVar3 = __ptr;
      do {
        if (*(int *)((int)pvVar3 + 0x720) != 0) {
          (**(code **)(*(int *)(*(int *)(iVar6 + iVar1) + *(int *)((int)pvVar3 + 0x620) * 4) + 8))()
          ;
          iVar2 = *(int *)((int)__ptr + 0x18);
        }
        iVar4 = iVar4 + 1;
        pvVar3 = (void *)((int)pvVar3 + 4);
      } while (iVar4 < iVar2);
    }
    if (0 < *(int *)((int)__ptr + 0x1c)) {
      iVar1 = 0;
      piVar5 = (int *)((int)__ptr + 0x820);
      iVar6 = 0;
      do {
        if (*piVar5 != 0) {
          FUN_000bd360();
        }
        if (*(int *)((int)__ptr + 0xc20) != 0) {
          FUN_000bd2c0(*(int *)((int)__ptr + 0xc20) + iVar1);
        }
        iVar6 = iVar6 + 1;
        piVar5 = piVar5 + 1;
        iVar1 = iVar1 + 0x34;
      } while (iVar6 < *(int *)((int)__ptr + 0x1c));
    }
    if (*(void **)((int)__ptr + 0xc20) != (void *)0x0) {
      free(*(void **)((int)__ptr + 0xc20));
    }
    free(__ptr);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



