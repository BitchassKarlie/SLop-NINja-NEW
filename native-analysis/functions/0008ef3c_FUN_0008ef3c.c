/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008ef3c FUN_0008ef3c */

char * FUN_0008ef3c(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    pcVar2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar2;
  } while (cVar1 != '\0');
  return pcVar2 + ~(uint)param_1;
}



