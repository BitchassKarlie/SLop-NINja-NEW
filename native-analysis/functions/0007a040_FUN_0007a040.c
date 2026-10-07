/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007a040 FUN_0007a040 */

void FUN_0007a040(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  int **ppiVar6;
  int *piVar7;
  int **ppiVar8;
  uint uVar9;
  
  FUN_00079fc4(param_2,1);
  if (*(uint **)(param_1 + 4) != (uint *)0x0) {
    puVar2 = (uint *)0x0;
    puVar4 = *(uint **)(param_1 + 4);
    do {
      if (*puVar4 < *(uint *)(param_2 + 0x10)) {
        puVar3 = (uint *)puVar4[4];
      }
      else {
        puVar3 = (uint *)puVar4[3];
        puVar2 = puVar4;
      }
      puVar4 = puVar3;
    } while (puVar3 != (uint *)0x0);
    if ((puVar2 != (uint *)0x0) && (*puVar2 <= *(uint *)(param_2 + 0x10))) {
      uVar9 = puVar2[1];
      piVar5 = *(int **)(uVar9 + 8);
      piVar7 = (int *)*piVar5;
      if (piVar5 != piVar7) {
        do {
          if ((int *)piVar7[2] == (int *)0x0) break;
          uVar1 = (**(code **)(*(int *)piVar7[2] + 0x24))();
          FUN_00079b74(param_2,uVar1);
          piVar7 = (int *)*piVar7;
        } while (piVar7 != (int *)*(int *)(uVar9 + 8));
      }
      ppiVar6 = *(int ***)(param_2 + 8);
      ppiVar8 = (int **)*ppiVar6;
      if (ppiVar6 != ppiVar8) {
        do {
          while( true ) {
            piVar5 = ppiVar8[2];
            if (piVar5 == (int *)0x0) goto LAB_0007a0c6;
            if (*(char *)(piVar5 + 6) != '\0') break;
            (**(code **)(*piVar5 + 0x14))(piVar5,0,0);
            ppiVar6 = *(int ***)(param_2 + 8);
            ppiVar8 = (int **)*ppiVar8;
            if (ppiVar8 == ppiVar6) goto LAB_0007a0c6;
          }
          ppiVar8 = (int **)*ppiVar8;
        } while (ppiVar8 != ppiVar6);
      }
    }
  }
LAB_0007a0c6:
  *(int *)(*(int *)(param_2 + 0x98) + 0xc0) = *(int *)(*(int *)(param_2 + 0x98) + 0xc0) + -1;
  return;
}



