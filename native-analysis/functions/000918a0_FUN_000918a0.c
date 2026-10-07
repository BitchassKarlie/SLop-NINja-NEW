/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000918a0 FUN_000918a0 */

void FUN_000918a0(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  for (ppiVar1 = (int **)*piVar2; (int **)piVar2 != ppiVar1; ppiVar1 = (int **)*ppiVar1) {
    (**(code **)(*ppiVar1[2] + 0x14))();
  }
  return;
}



