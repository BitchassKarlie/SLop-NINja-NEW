/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094024 FUN_00094024 */

void FUN_00094024(int param_1)

{
  int **ppiVar1;
  int **ppiVar3;
  int **ppiVar2;
  
  ppiVar3 = *(int ***)(param_1 + 0x3c);
  if (ppiVar3 != *(int ***)(param_1 + 0x38)) {
    ppiVar1 = *(int ***)(param_1 + 0x38);
    do {
      ppiVar2 = ppiVar1 + 1;
      (**(code **)(**ppiVar1 + 0x20))(*ppiVar1,param_1 + 0x44);
      ppiVar1 = ppiVar2;
    } while (ppiVar3 != ppiVar2);
  }
  return;
}



