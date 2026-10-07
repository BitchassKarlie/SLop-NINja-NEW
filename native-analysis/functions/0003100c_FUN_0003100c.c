/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003100c FUN_0003100c */

void FUN_0003100c(int param_1,int param_2)

{
  int **ppiVar1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  int local_20;
  int **local_1c;
  
  ppiVar3 = *(int ***)(param_1 + 4);
  local_1c = (int **)*ppiVar3;
  ppiVar5 = local_1c;
  local_20 = param_1;
  if (ppiVar3 != local_1c) {
    do {
      FUN_00030568(&local_20,param_1,local_20,local_1c);
    } while (ppiVar3 != local_1c);
    ppiVar5 = (int **)**(int ***)(param_1 + 4);
  }
  piVar4 = *(int **)(param_2 + 4);
  ppiVar3 = (int **)*piVar4;
  while ((int **)piVar4 != ppiVar3) {
    iVar2 = (int)(ppiVar3 + 2);
    ppiVar3 = (int **)*ppiVar3;
    ppiVar1 = (int **)FUN_00030fb8(param_1,iVar2);
    *ppiVar1 = (int *)ppiVar5;
    ppiVar1[1] = ppiVar5[1];
    ppiVar5[1] = (int *)ppiVar1;
    *ppiVar1[1] = (int)ppiVar1;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    ppiVar5 = ppiVar1;
  }
  return;
}



