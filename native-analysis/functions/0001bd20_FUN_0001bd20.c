/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001bd20 FUN_0001bd20 */

int FUN_0001bd20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 0x1020) < 1) {
    iVar5 = 0;
  }
  else {
    iVar6 = 0;
    iVar7 = 0;
    iVar5 = 0;
    do {
      piVar4 = *(int **)(*(int *)(param_1 + 0x1010) + iVar6 + 4);
      for (ppiVar3 = (int **)*piVar4; (int **)piVar4 != ppiVar3; ppiVar3 = (int **)*ppiVar3) {
        pcVar2 = *(code **)(*ppiVar3[2] + 0x20);
        iVar1 = (*pcVar2)(ppiVar3[2],param_2,param_3,pcVar2,param_4);
        if (iVar1 != 0) {
          iVar5 = iVar5 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar7 < *(int *)(param_1 + 0x1020));
  }
  return iVar5;
}



