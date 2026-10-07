/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7d1c _zip_cdir_free */

void _zip_cdir_free(void **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (void **)0x0) {
    if (0 < (int)param_1[1]) {
      iVar2 = 0;
      iVar3 = 0;
      do {
        iVar3 = iVar3 + 1;
        iVar1 = (int)*param_1 + iVar2;
        iVar2 = iVar2 + 0x3c;
        _zip_dirent_finalize(iVar1);
      } while (iVar3 < (int)param_1[1]);
    }
    free(param_1[4]);
    free(*param_1);
    free(param_1);
  }
  return;
}



