/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a704 FUN_0009a704 */

char * FUN_0009a704(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char *__nptr;
  int iVar1;
  
  __nptr = (char *)FUN_0009a4a0();
  if (param_3 != (int *)0x0) {
    if (__nptr == (char *)0x0) {
      *param_3 = 0;
    }
    else {
      iVar1 = atoi(__nptr);
      *param_3 = iVar1;
    }
  }
  return __nptr;
}



