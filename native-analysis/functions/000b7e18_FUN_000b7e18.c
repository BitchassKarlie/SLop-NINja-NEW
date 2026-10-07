/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7e18 FUN_000b7e18 */

char * FUN_000b7e18(void **param_1,size_t param_2,int param_3,undefined4 param_4)

{
  size_t __size;
  char *__dest;
  char *pcVar1;
  
  __size = param_2;
  if (param_3 != 0) {
    __size = param_2 + 1;
  }
  __dest = (char *)malloc(__size);
  if (__dest == (char *)0x0) {
    _zip_error_set(param_4,0xe,0);
  }
  else {
    memcpy(__dest,*param_1,param_2);
    *param_1 = (void *)((int)*param_1 + param_2);
    if (param_3 != 0) {
      __dest[param_2] = '\0';
      pcVar1 = __dest;
      if (__dest < __dest + param_2) {
        do {
          if (*pcVar1 == '\0') {
            *pcVar1 = ' ';
          }
          pcVar1 = pcVar1 + 1;
        } while (pcVar1 != __dest + param_2);
      }
    }
  }
  return __dest;
}



