/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7dc4 _zip_cdir_new */

void ** _zip_cdir_new(void *param_1,undefined4 param_2)

{
  void **__ptr;
  void *pvVar1;
  
  __ptr = (void **)malloc(0x18);
  if (__ptr == (void **)0x0) {
    _zip_error_set(param_2,0xe,0);
  }
  else {
    pvVar1 = malloc((int)param_1 * 0x3c);
    *__ptr = pvVar1;
    if (pvVar1 == (void *)0x0) {
      _zip_error_set(param_2,0xe,0);
      free(__ptr);
      __ptr = (void **)0x0;
    }
    else {
      __ptr[1] = param_1;
      __ptr[3] = (void *)0x0;
      __ptr[2] = (void *)0x0;
      __ptr[4] = (void *)0x0;
      *(undefined2 *)(__ptr + 5) = 0;
    }
  }
  return __ptr;
}



