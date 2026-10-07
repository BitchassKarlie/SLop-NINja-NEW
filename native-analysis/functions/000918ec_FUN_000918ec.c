/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000918ec FUN_000918ec */

void FUN_000918ec(int param_1,undefined4 param_2)

{
  int **ppiVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 8);
  for (ppiVar1 = (int **)*piVar2; (int **)piVar2 != ppiVar1; ppiVar1 = (int **)*ppiVar1) {
    (**(code **)(*ppiVar1[2] + 0x18))(ppiVar1[2],param_2);
  }
  return;
}



