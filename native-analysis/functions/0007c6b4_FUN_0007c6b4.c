/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007c6b4 FUN_0007c6b4 */

void FUN_0007c6b4(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int **ppiVar3;
  uint *puVar4;
  int **ppiVar5;
  int *piVar6;
  int **ppiVar7;
  int iVar8;
  float fVar9;
  undefined auStack_30 [8];
  int local_28;
  uint *local_24;
  
  *(undefined4 *)(param_1 + 0x7c) = DAT_0007c778;
  *(undefined4 *)(param_1 + 0x54) = 0;
  ppiVar3 = *(int ***)(param_1 + 0x14);
  iVar8 = param_1 + 0x1c;
  ppiVar7 = (int **)*ppiVar3;
  do {
    ppiVar5 = ppiVar7;
    if (ppiVar7 == ppiVar3) {
      return;
    }
    while( true ) {
      piVar6 = ppiVar5[2];
      if (((piVar6[0x26] == 0) || (*(int *)(piVar6[0x26] + 4) == 0)) &&
         (fVar9 = (float)piVar6[0x29], fVar9 != 0.0 && fVar9 < 0.0 == NAN(fVar9))) break;
      ppiVar5 = (int **)*ppiVar5;
      if (ppiVar5 == ppiVar3) {
        return;
      }
    }
    if (*(uint **)(param_1 + 0x20) != (uint *)0x0) {
      puVar1 = (uint *)0x0;
      puVar4 = *(uint **)(param_1 + 0x20);
      do {
        if (*puVar4 < (uint)piVar6[4]) {
          puVar2 = (uint *)puVar4[4];
        }
        else {
          puVar2 = (uint *)puVar4[3];
          puVar1 = puVar4;
        }
        puVar4 = puVar2;
      } while (puVar2 != (uint *)0x0);
      if ((puVar1 != (uint *)0x0) && (*puVar1 <= (uint)piVar6[4])) {
        local_28 = iVar8;
        local_24 = puVar1;
        FUN_0007c5c4(auStack_30,iVar8,iVar8,puVar1);
      }
    }
    FUN_00079fc4(piVar6,0);
    FUN_0007bc60(piVar6);
    FUN_0007bce0(piVar6);
    operator_delete(piVar6);
    ppiVar3 = *(int ***)(param_1 + 0x14);
    ppiVar7 = ppiVar3;
    if (ppiVar5 != ppiVar3) {
      ppiVar7 = (int **)*ppiVar5;
      *ppiVar5[1] = (int)ppiVar7;
      (*ppiVar5)[1] = (int)ppiVar5[1];
      operator_delete(ppiVar5);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      ppiVar3 = *(int ***)(param_1 + 0x14);
    }
  } while( true );
}



