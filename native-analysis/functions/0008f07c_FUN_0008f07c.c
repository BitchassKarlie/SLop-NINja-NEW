/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008f07c FUN_0008f07c */

uint FUN_0008f07c(char *param_1,char *param_2)

{
  size_t sVar1;
  char cVar2;
  uint uVar3;
  
  sVar1 = strlen(param_2);
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    uVar3 = 0;
    do {
      if (cVar2 == *param_2) {
        if ((sVar1 & 0xffff) == 0) {
          return uVar3;
        }
        cVar2 = param_1[uVar3 + 1];
      }
      else {
        cVar2 = param_1[uVar3];
      }
      if (cVar2 == '\0') {
        return 0xffffffff;
      }
      uVar3 = uVar3 + 1 & 0xffff;
      cVar2 = param_1[uVar3];
    } while (cVar2 != '\0');
  }
  return 0xffffffff;
}



