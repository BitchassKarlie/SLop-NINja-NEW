/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a694 FUN_0009a694 */

size_t ** FUN_0009a694(size_t **param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = (size_t *)0x0;
  sVar1 = strlen(param_2);
  FUN_00099d3c(param_1,sVar1,sVar1);
  memcpy(*param_1 + 2,param_2,**param_1);
  return param_1;
}



