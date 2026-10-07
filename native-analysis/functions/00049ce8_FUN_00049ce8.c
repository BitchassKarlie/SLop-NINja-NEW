/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00049ce8 FUN_00049ce8 */

void FUN_00049ce8(int param_1)

{
  int iVar1;
  int **ppiVar2;
  int **ppiVar3;
  
  ppiVar3 = *(int ***)(param_1 + 4);
  ppiVar2 = (int **)*ppiVar3;
  do {
    if (ppiVar3 == ppiVar2) {
      return;
    }
    while (iVar1 = (**(code **)(*ppiVar2[2] + 0x28))(), iVar1 != 8) {
      ppiVar2 = (int **)*ppiVar2;
      if (ppiVar3 == ppiVar2) {
        return;
      }
    }
    FUN_0005fe04(ppiVar2[2]);
    ppiVar2 = (int **)*ppiVar2;
  } while( true );
}



