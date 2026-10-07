/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000934b4 FUN_000934b4 */

int FUN_000934b4(int **param_1,uint param_2,int **param_3)

{
  int **ppiVar1;
  int iVar2;
  int **ppiVar3;
  uint uVar4;
  int iVar5;
  int **ppiVar6;
  int *piVar7;
  int iVar8;
  int **ppiVar9;
  
  ppiVar9 = (int **)*param_1;
  ppiVar3 = ppiVar9;
  while( true ) {
    iVar2 = (int)ppiVar3 + (-0x10 - ((uint)param_1[8] >> 1));
    uVar4 = *(uint *)(iVar2 + 0xc) & 0xffffff;
    if (param_2 <= uVar4) break;
    ppiVar3 = (int **)*ppiVar3;
    if (ppiVar3 == (int **)0x0) {
      return 0;
    }
  }
  if ((uVar4 != param_2) && (param_1[8] + 4 < (int *)(uVar4 - param_2))) {
    if (ppiVar3 == ppiVar9) {
      *param_1 = *ppiVar3;
    }
    else {
      ppiVar6 = (int **)*ppiVar9;
      if (ppiVar6 == ppiVar3) {
LAB_000935b8:
        if ((int **)param_1[1] == ppiVar3) {
          *ppiVar9 = (int *)0x0;
          param_1[1] = (int *)ppiVar9;
        }
        else {
          *ppiVar9 = *ppiVar3;
        }
      }
      else {
        ppiVar9 = ppiVar6;
        for (ppiVar6 = (int **)*ppiVar6; ppiVar6 != (int **)0x0; ppiVar6 = (int **)*ppiVar6) {
          if (ppiVar3 == ppiVar6) goto LAB_000935b8;
          ppiVar9 = ppiVar6;
        }
      }
    }
    iVar5 = iVar2 + param_2;
    *(undefined *)(iVar5 + 0xf) = 1;
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar2 + 8);
    *(uint *)(iVar5 + 0xc) =
         *(uint *)(iVar5 + 0xc) & 0xff000000 |
         (*(uint *)(iVar2 + 0xc) & 0xffffff) - param_2 & 0xffffff;
    *(int *)(iVar2 + param_2) = iVar2;
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar2 + 4);
    *(int *)(iVar2 + 4) = iVar5;
    if (*(int **)(iVar5 + 4) != (int *)0x0) {
      **(int **)(iVar5 + 4) = iVar5;
    }
    piVar7 = param_1[8];
    if (piVar7 != (int *)0x0) {
      *(undefined4 *)(iVar5 + -4) = 0xdeadc0de;
      *(undefined4 *)(iVar5 + 0x10) = 0xdeadc0de;
      piVar7 = param_1[8];
    }
    iVar8 = ((uint)piVar7 >> 1) + 0x10;
    piVar7 = (int *)(iVar5 + iVar8);
    if (*param_1 == (int *)0x0) {
      *param_1 = piVar7;
      param_1[1] = piVar7;
      *(undefined4 *)(iVar5 + iVar8) = 0;
    }
    else {
      *param_1[1] = (int)piVar7;
      param_1[1] = piVar7;
      *(undefined4 *)(iVar5 + iVar8) = 0;
    }
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xff000000 | param_2 & 0xffffff;
LAB_00093566:
    *param_3 = (int *)ppiVar3;
    return iVar2;
  }
  if (ppiVar3 == ppiVar9) {
    *param_1 = *ppiVar3;
    *param_3 = (int *)ppiVar3;
    return iVar2;
  }
  ppiVar6 = (int **)*ppiVar9;
  if (ppiVar6 != ppiVar3) {
    ppiVar1 = (int **)*ppiVar6;
    ppiVar9 = ppiVar6;
    if (*ppiVar6 == (int *)0x0) goto LAB_00093566;
    while (ppiVar6 = ppiVar1, ppiVar3 != ppiVar6) {
      ppiVar1 = (int **)*ppiVar6;
      ppiVar9 = ppiVar6;
      if (*ppiVar6 == (int *)0x0) {
        *param_3 = (int *)ppiVar3;
        return iVar2;
      }
    }
  }
  if ((int **)param_1[1] == ppiVar3) {
    *ppiVar9 = (int *)0x0;
    param_1[1] = (int *)ppiVar9;
    *param_3 = (int *)ppiVar3;
    return iVar2;
  }
  *ppiVar9 = *ppiVar3;
  *param_3 = (int *)ppiVar3;
  return iVar2;
}



