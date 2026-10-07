/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001bca0 FUN_0001bca0 */

int * FUN_0001bca0(int param_1,int param_2,int param_3)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  
  ppiVar1 = *(int ***)(*(int *)(param_1 + 0x1010) + param_2 * 0xc + 4);
  ppiVar4 = (int **)*ppiVar1;
  if (ppiVar1 == ppiVar4) {
LAB_0001bcc8:
    piVar2 = (int *)0x0;
  }
  else {
    if (param_3 != 0) {
      iVar3 = 0;
      do {
        ppiVar4 = (int **)*ppiVar4;
        if (ppiVar1 == ppiVar4) goto LAB_0001bcc8;
        iVar3 = iVar3 + 1;
      } while (param_3 != iVar3);
    }
    piVar2 = ppiVar4[2];
  }
  return piVar2;
}



