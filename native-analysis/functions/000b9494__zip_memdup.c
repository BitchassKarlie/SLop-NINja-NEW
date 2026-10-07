/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9494 _zip_memdup */

void * _zip_memdup(void *param_1,size_t param_2,undefined4 param_3)

{
  void *__dest;
  
  __dest = malloc(param_2);
  if (__dest == (void *)0x0) {
    _zip_error_set(param_3,0xe,0);
  }
  else {
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}



