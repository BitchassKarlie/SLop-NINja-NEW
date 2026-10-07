/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0c2c FUN_000a0c2c */

int FUN_000a0c2c(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  
  sVar4 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  sVar1 = strlen(param_2);
  FUN_00017cb8(param_1,sVar1);
  if (sVar1 != 0) {
    iVar3 = *(int *)(param_1 + 4);
    iVar2 = (*(int *)(param_1 + 8) + -1) - iVar3;
    if (iVar2 != 0) {
      do {
        iVar2 = iVar2 + -1;
        *(char *)(iVar3 + sVar4) = param_2[sVar4];
        if (iVar2 == 0) break;
        sVar4 = sVar4 + 1;
      } while (sVar1 != sVar4);
      iVar3 = *(int *)(param_1 + 4);
    }
    *(size_t *)(param_1 + 0xc) = iVar3 + sVar1;
  }
  return param_1;
}



