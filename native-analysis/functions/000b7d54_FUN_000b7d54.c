/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7d54 FUN_000b7d54 */

char * FUN_000b7d54(FILE *param_1,size_t param_2,int param_3,undefined4 param_4)

{
  size_t sVar1;
  char *__ptr;
  undefined4 *puVar2;
  char *pcVar3;
  
  sVar1 = param_2;
  if (param_3 != 0) {
    sVar1 = param_2 + 1;
  }
  __ptr = (char *)malloc(sVar1);
  if (__ptr == (char *)0x0) {
    _zip_error_set(param_4,0xe,0);
  }
  else {
    sVar1 = fread(__ptr,1,param_2,param_1);
    if (sVar1 < param_2) {
      free(__ptr);
      puVar2 = (undefined4 *)__errno();
      _zip_error_set(param_4,5,*puVar2);
      __ptr = (char *)0x0;
    }
    else if (param_3 != 0) {
      __ptr[param_2] = '\0';
      pcVar3 = __ptr;
      if (__ptr < __ptr + param_2) {
        do {
          if (*pcVar3 == '\0') {
            *pcVar3 = ' ';
          }
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 != __ptr + param_2);
      }
    }
  }
  return __ptr;
}



