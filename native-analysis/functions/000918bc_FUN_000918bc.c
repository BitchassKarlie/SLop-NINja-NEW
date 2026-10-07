/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000918bc FUN_000918bc */

void FUN_000918bc(char *param_1,undefined4 param_2)

{
  int **ppiVar1;
  int *piVar2;
  
  if (*param_1 == '\0') {
    piVar2 = *(int **)(param_1 + 8);
    param_1[1] = '\x01';
    for (ppiVar1 = (int **)*piVar2; (int **)piVar2 != ppiVar1; ppiVar1 = (int **)*ppiVar1) {
      (**(code **)(*ppiVar1[2] + 0xc))(ppiVar1[2],param_2);
    }
    param_1[1] = '\0';
  }
  return;
}



