/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000844d0 FUN_000844d0 */

undefined4 FUN_000844d0(char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  size_t sVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 1 - (int)param_1;
  if ((char *)0x1 < param_1) {
    uVar5 = 0;
  }
  if (param_2 == (char *)0x0) {
    uVar5 = uVar5 | 1;
  }
  if (uVar5 == 0) {
    sVar3 = strlen(param_1);
    sVar4 = strlen(param_2);
    if (sVar4 <= sVar3) {
      if (*param_2 == '\0') {
        return 1;
      }
      iVar6 = 0;
      if (*param_1 == *param_2) {
        do {
          iVar2 = iVar6 + 1;
          if (param_2[iVar2] == '\0') {
            return 1;
          }
          iVar1 = iVar6 + 1;
          iVar6 = iVar6 + 1;
        } while (param_2[iVar2] == param_1[iVar1]);
      }
    }
  }
  return 0;
}



