/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a6d0 FUN_0009a6d0 */

char * FUN_0009a6d0(undefined4 param_1,undefined4 param_2,char **param_3)

{
  char *__nptr;
  char *pcVar1;
  char *extraout_r1;
  
  __nptr = (char *)FUN_0009a4a0();
  if (param_3 != (char **)0x0) {
    if (__nptr == (char *)0x0) {
      *param_3 = (char *)0x0;
      param_3[1] = (char *)0x0;
    }
    else {
      pcVar1 = __nptr;
      strtod(__nptr,(char **)0x0);
      *param_3 = pcVar1;
      param_3[1] = extraout_r1;
    }
  }
  return __nptr;
}



