/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b93f0 _zip_free */

void _zip_free(void **param_1)

{
  void *pvVar1;
  void *__ptr;
  int iVar2;
  int iVar3;
  
  if (param_1 != (void **)0x0) {
    if (*param_1 != (void *)0x0) {
      free(*param_1);
    }
    if ((FILE *)param_1[1] != (FILE *)0x0) {
      fclose((FILE *)param_1[1]);
    }
    _zip_cdir_free(param_1[7]);
    pvVar1 = param_1[0xc];
    if (pvVar1 != (void *)0x0) {
      if (0 < (int)param_1[10]) {
        iVar2 = 0;
        iVar3 = 0;
        while( true ) {
          iVar3 = iVar3 + 1;
          _zip_entry_free((int)pvVar1 + iVar2);
          iVar2 = iVar2 + 0x14;
          if ((int)param_1[10] <= iVar3) break;
          pvVar1 = param_1[0xc];
        }
        pvVar1 = param_1[0xc];
      }
      free(pvVar1);
    }
    pvVar1 = param_1[0xd];
    if ((int)pvVar1 < 1) {
      __ptr = param_1[0xf];
    }
    else {
      __ptr = param_1[0xf];
      iVar2 = 0;
      do {
        while (iVar3 = *(int *)((int)__ptr + iVar2 * 4), *(int *)(iVar3 + 4) == 0) {
          _zip_error_set(iVar3 + 4,8,0);
          iVar3 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          **(undefined4 **)((int)param_1[0xf] + iVar3) = 0;
          pvVar1 = param_1[0xd];
          __ptr = param_1[0xf];
          if ((int)pvVar1 <= iVar2) goto LAB_000b9472;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)pvVar1);
    }
LAB_000b9472:
    free(__ptr);
    free(param_1);
  }
  return;
}



