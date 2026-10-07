/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001ba40 FUN_0001ba40 */

void FUN_0001ba40(int param_1)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x1024) != '\0') && (0 < *(int *)(param_1 + 0x1020))) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x1010) + iVar3 + 4);
      for (ppiVar1 = (int **)*piVar2; (int **)piVar2 != ppiVar1; ppiVar1 = (int **)*ppiVar1) {
        if (*(int **)((int)ppiVar1[2] + 0x38) != (int *)0x0) {
          (**(code **)(**(int **)((int)ppiVar1[2] + 0x38) + 0x10))();
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *(int *)(param_1 + 0x1020));
  }
  return;
}



