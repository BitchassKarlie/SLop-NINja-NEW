/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009191c FUN_0009191c */

void FUN_0009191c(int param_1,undefined4 param_2)

{
  int **ppiVar1;
  int iVar2;
  int **ppiVar3;
  bool bVar4;
  
  ppiVar3 = *(int ***)(param_1 + 8);
  ppiVar1 = (int **)*ppiVar3;
  if (ppiVar3 != ppiVar1) {
    iVar2 = 0;
    do {
      bVar4 = *(int *)(param_1 + 0xc) + -1 == iVar2;
      iVar2 = iVar2 + 1;
      FUN_000ad548(ppiVar1[2],param_2,bVar4);
      ppiVar1 = (int **)*ppiVar1;
    } while (ppiVar3 != ppiVar1);
  }
  return;
}



