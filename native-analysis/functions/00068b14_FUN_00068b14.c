/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00068b14 FUN_00068b14 */

int FUN_00068b14(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 4);
  piVar2 = piVar4;
  ppiVar1 = (int **)*piVar4;
  while( true ) {
    if ((int **)piVar4 == ppiVar1) {
      FUN_00068af8(param_1,piVar2);
      return param_1;
    }
    if (ppiVar1 == (int **)piVar2) break;
    piVar3 = *ppiVar1;
    *ppiVar1[1] = (int)piVar3;
    *(int **)((int)*ppiVar1 + 4) = ppiVar1[1];
    FUN_00068af8(param_1);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    piVar2 = *(int **)(param_1 + 4);
    ppiVar1 = (int **)piVar3;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



