/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005fdc4 FUN_0005fdc4 */

int * FUN_0005fdc4(int param_1,undefined4 param_2)

{
  int iVar1;
  int **ppiVar2;
  
  if ((*(char *)(param_1 + 0xc2) != '\0') &&
     (ppiVar2 = *(int ***)(param_1 + 0xa8), ppiVar2 != *(int ***)(param_1 + 0xac))) {
    do {
      iVar1 = (**(code **)(**ppiVar2 + 0x34))(*ppiVar2,param_2);
      if (iVar1 != 0) {
        return *ppiVar2;
      }
      ppiVar2 = ppiVar2 + 1;
    } while (ppiVar2 != *(int ***)(param_1 + 0xac));
  }
  return (int *)0x0;
}



