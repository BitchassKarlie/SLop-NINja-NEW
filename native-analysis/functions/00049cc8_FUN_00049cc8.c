/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00049cc8 FUN_00049cc8 */

void FUN_00049cc8(int param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = *(int ***)(param_1 + 4);
  ppiVar2 = (int **)*ppiVar1;
  if (ppiVar1 != ppiVar2) {
    do {
      if (ppiVar2[2] != (int *)0x0) {
        (**(code **)(*ppiVar2[2] + 0x30))();
        ppiVar1 = *(int ***)(param_1 + 4);
      }
      ppiVar2 = (int **)*ppiVar2;
    } while (ppiVar2 != ppiVar1);
  }
  return;
}



