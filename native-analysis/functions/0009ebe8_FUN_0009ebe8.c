/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ebe8 FUN_0009ebe8 */

void FUN_0009ebe8(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x58);
  for (ppiVar1 = (int **)*piVar2; (int **)piVar2 != ppiVar1; ppiVar1 = (int **)*ppiVar1) {
    (**(code **)(*ppiVar1[2] + 8))();
  }
  return;
}



