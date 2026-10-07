/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088910 FUN_00088910 */

void FUN_00088910(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int **ppiVar3;
  uint uVar4;
  int **ppiVar5;
  int **ppiVar6;
  int iVar7;
  undefined auStack_54 [4];
  void *local_50;
  void *local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined auStack_34 [4];
  int **local_30;
  undefined4 local_2c;
  
  if (param_2 != 0) {
    iVar7 = 0;
    local_30 = (int **)FUN_000885c0(auStack_34);
    local_2c = 0;
    FUN_00088894(auStack_34,param_1);
    ppiVar6 = (int **)*local_30;
    if (local_30 != ppiVar6) {
      do {
        FUN_00085940(auStack_54,ppiVar6 + 2);
        uVar1 = local_38;
        if ((uint)((int)local_4c - (int)local_50) >> 2 != 0) {
          uVar4 = 0;
          do {
            while( true ) {
              iVar2 = *(int *)((int)local_50 + uVar4 * 4);
              if (iVar2 != 1) break;
              *(undefined4 *)((int)local_50 + uVar4 * 4) = 2;
              uVar4 = uVar4 + 1;
              if ((uint)((int)local_4c - (int)local_50 >> 2) <= uVar4) goto LAB_00088998;
            }
            if (iVar2 == 2) {
              *(undefined4 *)((int)local_50 + uVar4 * 4) = 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)((int)local_4c - (int)local_50 >> 2));
        }
LAB_00088998:
        local_38 = local_3c;
        ppiVar3 = *(int ***)(param_1 + 4);
        local_3c = uVar1;
        ppiVar5 = (int **)*ppiVar3;
        iVar2 = iVar7;
        if (ppiVar3 != ppiVar5) {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            ppiVar5 = (int **)*ppiVar5;
            if (ppiVar3 == ppiVar5) goto LAB_000889bc;
          }
          ppiVar3 = (int **)FUN_000885fc(param_1,auStack_54);
          *ppiVar3 = (int *)ppiVar5;
          ppiVar3[1] = ppiVar5[1];
          ppiVar5[1] = (int *)ppiVar3;
          *ppiVar3[1] = (int)ppiVar3;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        }
LAB_000889bc:
        local_4c = local_50;
        if (local_50 != (void *)0x0) {
          operator_delete(local_50);
        }
        ppiVar6 = (int **)*ppiVar6;
        iVar7 = iVar7 + 2;
      } while (ppiVar6 != local_30);
    }
    FUN_00088848(auStack_34);
  }
  return;
}



