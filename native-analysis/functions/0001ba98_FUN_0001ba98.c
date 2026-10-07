/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001ba98 FUN_0001ba98 */

void FUN_0001ba98(int *param_1)

{
  int iVar1;
  int **ppiVar2;
  int **ppiVar3;
  int iVar4;
  int iVar5;
  
  if ((*param_1 != 0) && (iVar1 = param_1[0x404], iVar1 != 0)) {
    if (0 < param_1[0x408]) {
      iVar4 = 0;
      iVar5 = 0;
      do {
        ppiVar3 = *(int ***)(iVar1 + iVar4 + 4);
        for (ppiVar2 = (int **)*ppiVar3; ppiVar3 != ppiVar2; ppiVar2 = (int **)*ppiVar2) {
          while ((*(byte *)(ppiVar2[2] + 3) & 0x11) != 0) {
            ppiVar2 = (int **)*ppiVar2;
            if (ppiVar3 == ppiVar2) goto LAB_0001baec;
          }
          (**(code **)(*ppiVar2[2] + 0x14))();
        }
LAB_0001baec:
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xc;
        if (param_1[0x408] <= iVar5) break;
        iVar1 = param_1[0x404];
      } while( true );
    }
    if (*(char *)(param_1 + 0x409) != '\0') {
      FUN_0001ba40(param_1);
    }
  }
  return;
}



