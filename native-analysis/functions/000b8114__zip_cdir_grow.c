/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b8114 _zip_cdir_grow */

undefined4 _zip_cdir_grow(void **param_1,void *param_2,undefined4 param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  
  if ((int)param_2 < (int)param_1[1]) {
    _zip_error_set(param_3,0x14,0);
    uVar2 = 0xffffffff;
  }
  else {
    pvVar1 = realloc(*param_1,(int)param_2 * 0x3c);
    if (pvVar1 == (void *)0x0) {
      _zip_error_set(param_3,0xe,0);
      uVar2 = 0xffffffff;
    }
    else {
      *param_1 = pvVar1;
      uVar2 = 0;
      param_1[1] = param_2;
    }
  }
  return uVar2;
}



