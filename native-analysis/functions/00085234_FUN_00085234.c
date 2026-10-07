/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085234 FUN_00085234 */

void FUN_00085234(int param_1)

{
  longlong lVar1;
  int **ppiVar2;
  int **ppiVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  ppiVar3 = *(int ***)(param_1 + 4);
  ppiVar2 = (int **)*ppiVar3;
  if (ppiVar3 == ppiVar2) {
    return;
  }
  iVar9 = 0;
  puVar5 = *(uint **)(DAT_000852f4 + 0x85252);
  do {
    if ((uint)((int)ppiVar2[4] - (int)ppiVar2[3]) >> 2 != 0) {
      uVar4 = 0;
      do {
        while( true ) {
          lVar1 = (ulonglong)*puVar5 * (ulonglong)puVar5[2] +
                  CONCAT44(puVar5[2] * puVar5[1] + *puVar5 * puVar5[3],puVar5[4]);
          uVar7 = puVar5[5] + (int)((ulonglong)lVar1 >> 0x20);
          *puVar5 = (uint)lVar1;
          puVar5[1] = uVar7;
          if (((4 < (uint)((ulonglong)uVar7 * 100 >> 0x20)) && (iVar9 < 5)) ||
             (1 < (int)ppiVar2[10])) break;
          piVar6 = ppiVar2[3];
          uVar7 = uVar4 + 1;
          iVar9 = 0;
          iVar8 = piVar6[uVar4];
          ppiVar2[iVar8 + 7] = (int *)((int)ppiVar2[iVar8 + 7] + -1);
          piVar6[uVar4] = 3;
          ppiVar2[10] = (int *)((int)ppiVar2[10] + 1);
          iVar8 = 0;
          uVar4 = uVar7;
          if ((uint)((int)ppiVar2[4] - (int)ppiVar2[3] >> 2) <= uVar7) goto LAB_000852de;
        }
        uVar4 = uVar4 + 1;
        iVar8 = iVar9;
      } while (uVar4 < (uint)((int)ppiVar2[4] - (int)ppiVar2[3] >> 2));
LAB_000852de:
      ppiVar3 = *(int ***)(param_1 + 4);
      iVar9 = iVar8;
    }
    ppiVar2 = (int **)*ppiVar2;
    if (ppiVar2 == ppiVar3) {
      return;
    }
    iVar9 = iVar9 + 1;
  } while( true );
}



