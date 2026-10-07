/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098748 FUN_00098748 */

char FUN_00098748(char **param_1)

{
  char cVar1;
  
  cVar1 = **param_1;
  if (cVar1 != '\0') {
    cVar1 = '\x01';
  }
  *param_1 = *param_1 + 1;
  return cVar1;
}



