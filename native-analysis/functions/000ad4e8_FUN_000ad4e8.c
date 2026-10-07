/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ad4e8 FUN_000ad4e8 */

void FUN_000ad4e8(int param_1,undefined4 param_2)

{
  int **ppiVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  for (ppiVar1 = (int **)*piVar2; (int **)piVar2 != ppiVar1; ppiVar1 = (int **)*ppiVar1) {
    FUN_000ad378(ppiVar1[2],param_2);
  }
  return;
}



