/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b1e5c FUN_000b1e5c */

int FUN_000b1e5c(int param_1,char *param_2)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = strlen(param_2);
  FUN_000b194c(param_1,sVar1 + (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)));
  iVar2 = *(int *)(param_1 + 0xc);
  *(size_t *)(param_1 + 0xc) = iVar2 + sVar1;
  iVar3 = 0;
  *(undefined *)(iVar2 + sVar1) = 0;
  if (sVar1 != 0) {
    while( true ) {
      sVar1 = sVar1 - 1;
      *(char *)(iVar2 + iVar3) = param_2[iVar3];
      if (sVar1 == 0) break;
      iVar3 = iVar3 + 1;
    }
  }
  return param_1;
}



