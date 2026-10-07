/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e474 FUN_0003e474 */

void FUN_0003e474(char **param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  char **ppcVar2;
  uint uVar3;
  
  ppcVar2 = param_1;
  if (param_1 != (char **)0x0) {
    ppcVar2 = (char **)0x1;
  }
  if (param_2 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)ppcVar2 & 1;
  }
  if (uVar3 != 0) {
    if (*param_1 != (char *)0x0) {
      operator_delete__(*param_1);
      *param_1 = (char *)0x0;
    }
    sVar1 = strlen(param_2);
    __dest = (char *)operator_new__(sVar1 + 1);
    *param_1 = __dest;
    strcpy(__dest,param_2);
  }
  return;
}



