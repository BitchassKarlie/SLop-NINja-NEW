/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b86f4 FUN_000b86f4 */

char ** FUN_000b86f4(char *param_1,undefined4 param_2)

{
  char **ppcVar1;
  char *pcVar2;
  undefined auStack_24 [16];
  
  ppcVar1 = (char **)_zip_new(auStack_24);
  if (ppcVar1 == (char **)0x0) {
    FUN_000b86c0(param_2,auStack_24,0);
  }
  else {
    pcVar2 = strdup(param_1);
    *ppcVar1 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      _zip_free(ppcVar1);
      FUN_000b86c0(param_2,0,0xe);
      ppcVar1 = (char **)0x0;
    }
  }
  return ppcVar1;
}



