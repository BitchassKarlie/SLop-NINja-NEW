/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c0f8 FUN_0001c0f8 */

void FUN_0001c0f8(int *param_1)

{
  int **ppiVar1;
  int *piVar2;
  int **ppiVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int **ppiVar7;
  int iVar8;
  int iVar9;
  
  param_1[0x403] = 0;
  if ((*param_1 != 0) && (iVar5 = param_1[0x404], iVar5 != 0)) {
    if (0 < param_1[0x408]) {
      iVar8 = 0;
      iVar9 = 0;
      do {
        ppiVar3 = *(int ***)(iVar5 + iVar8 + 4);
        ppiVar1 = (int **)*ppiVar3;
        if (ppiVar3 != ppiVar1) {
          do {
            while (piVar6 = ppiVar1[2], -1 < (int)((uint)*(byte *)(piVar6 + 3) << 0x1a)) {
              (**(code **)(*piVar6 + 0xc))(piVar6);
              (**(code **)(*piVar6 + 4))(piVar6);
              ppiVar1 = (int **)*ppiVar1;
              if (ppiVar3 == ppiVar1) goto LAB_0001c15c;
            }
            ppiVar1 = (int **)*ppiVar1;
          } while (ppiVar3 != ppiVar1);
LAB_0001c15c:
          iVar5 = param_1[0x404] + iVar8;
          ppiVar3 = *(int ***)(iVar5 + 4);
          ppiVar1 = (int **)*ppiVar3;
          while (ppiVar1 != ppiVar3) {
            if (*(int ***)(iVar5 + 4) == ppiVar1) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            ppiVar7 = (int **)*ppiVar1;
            *ppiVar1[1] = (int)ppiVar7;
            (*ppiVar1)[1] = (int)ppiVar1[1];
            operator_delete(ppiVar1);
            *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + -1;
            ppiVar1 = ppiVar7;
          }
        }
        iVar9 = iVar9 + 1;
        iVar8 = iVar8 + 0xc;
        if (param_1[0x408] <= iVar9) break;
        iVar5 = param_1[0x404];
      } while( true );
    }
    if (param_1[0x202] != 0) {
      uVar4 = 0;
      piVar6 = param_1;
      do {
        piVar2 = (int *)piVar6[2];
        uVar4 = uVar4 + 1;
        piVar6 = piVar6 + 1;
        (**(code **)(*piVar2 + 0xc))(piVar2);
        (**(code **)(*piVar2 + 4))(piVar2);
      } while (uVar4 < (uint)param_1[0x202]);
    }
    param_1[0x202] = 0;
  }
  return;
}



