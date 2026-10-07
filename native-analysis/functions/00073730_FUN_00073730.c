/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00073730 FUN_00073730 */

undefined4 FUN_00073730(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int **ppiVar3;
  int iVar4;
  int **ppiVar5;
  int **ppiVar6;
  int local_68 [13];
  void *local_34;
  
  iVar4 = DAT_00073818 + 0x7373e;
  FUN_00070060();
  iVar1 = FUN_0009fac8();
  if (iVar1 != 0) {
    uVar2 = FUN_00070060();
    FUN_0009c1d4(local_68,uVar2);
    ppiVar6 = *(int ***)(param_1 + 0x28);
    ppiVar3 = (int **)*ppiVar6;
    while (ppiVar6 != ppiVar3) {
      if ((int **)*(int **)(param_1 + 0x28) == ppiVar3) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      ppiVar5 = (int **)*ppiVar3;
      *ppiVar3[1] = (int)ppiVar5;
      *(int **)((int)*ppiVar3 + 4) = ppiVar3[1];
      operator_delete(ppiVar3);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      ppiVar3 = ppiVar5;
    }
    uVar2 = FUN_00070060();
    iVar1 = FUN_0009b064(local_68,uVar2,0);
    if ((iVar1 != 0) && (FUN_00072de4(local_68,param_1), 3 < *(int *)(param_1 + 0x50))) {
      *(undefined4 *)(param_1 + 0x50) = 0;
    }
    local_68[0] = *(int *)(iVar4 + DAT_00073820) + 8;
    if ((local_34 != *(void **)(iVar4 + DAT_00073824)) && (local_34 != (void *)0x0)) {
      operator_delete__(local_34);
    }
    FUN_0009ac4c(local_68);
  }
  iVar4 = *(int *)(param_1 + 0x1ac);
  iVar1 = FUN_0006e174();
  if (iVar4 != iVar1) {
    uVar2 = FUN_0008f414(DAT_0007381c + 0x73758);
    FUN_00072a80(param_1,uVar2);
    FUN_000305fc(param_1 + 0x16c);
    FUN_000305fc(param_1 + 0x17c);
    FUN_000305fc(param_1 + 0x18c);
    FUN_000305fc(param_1 + 0x19c);
    *(undefined *)(param_1 + 0x22) = 0;
  }
  return 0;
}



