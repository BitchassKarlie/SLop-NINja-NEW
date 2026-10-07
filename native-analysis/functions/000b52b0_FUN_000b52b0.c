/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b52b0 FUN_000b52b0 */

void FUN_000b52b0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar4 = *(int ***)(param_1 + 0x14);
  ppiVar5 = *(int ***)(param_1 + 0x18);
  do {
    if (ppiVar4 == ppiVar5) {
      return;
    }
    iVar1 = (**(code **)(**ppiVar4 + 0x20))();
    iVar3 = *(int *)(iVar1 + 8);
    for (iVar1 = *(int *)(iVar1 + 4); iVar1 != iVar3; iVar1 = iVar1 + 0x10) {
      iVar2 = FUN_000b433c(iVar1,param_2);
      if (iVar2 != 0) {
        iVar2 = *(int *)(iVar1 + 4);
        if (((iVar2 == *(int *)(param_2 + 4)) || (iVar2 == 0)) || (*(int *)(param_2 + 4) == 0)) {
          *param_3 = iVar2;
          param_3[1] = *(int *)(iVar1 + 0xc);
          iVar3 = (**(code **)(**ppiVar4 + 0x10))();
          param_3[2] = iVar3;
          param_3[3] = *(int *)(iVar1 + 8);
          FUN_000b4cb4(param_3 + 4,*ppiVar4);
          return;
        }
      }
    }
    ppiVar4 = ppiVar4 + 1;
  } while( true );
}



