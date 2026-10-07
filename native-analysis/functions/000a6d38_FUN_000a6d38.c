/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6d38 FUN_000a6d38 */

void FUN_000a6d38(char *param_1,uint param_2,char *param_3)

{
  char *pcVar1;
  size_t sVar2;
  uint __n;
  int iVar3;
  
  pcVar1 = strchr(param_3,0x2f);
  if (pcVar1 == (char *)0x0) {
    sVar2 = strlen(param_1);
    memcpy(param_1 + sVar2,(void *)(DAT_000a6db0 + 0xa6da4),4);
  }
  else {
    iVar3 = (int)pcVar1 - (int)param_3;
    if (-1 < iVar3) {
      __n = iVar3 + 1U;
      if (param_2 <= iVar3 + 1U) {
        __n = param_2;
      }
      strncpy(param_1,param_3,__n);
      param_1[param_2 - 1] = '\0';
      param_1[iVar3 + 1] = '\0';
    }
    param_3 = pcVar1 + 1;
    sVar2 = strlen(param_1);
    memcpy(param_1 + sVar2,(void *)(DAT_000a6dac + 0xa6d86),4);
  }
  strcat(param_1,param_3);
  return;
}



