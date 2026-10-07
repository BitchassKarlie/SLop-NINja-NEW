/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ec04 FUN_0009ec04 */

void FUN_0009ec04(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x58);
  for (ppiVar1 = (int **)*piVar2; (int **)piVar2 != ppiVar1; ppiVar1 = (int **)*ppiVar1) {
    (**(code **)(*ppiVar1[2] + 0xc))();
  }
  return;
}



