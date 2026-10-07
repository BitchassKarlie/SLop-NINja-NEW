/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6038 FUN_000a6038 */

void FUN_000a6038(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int **ppiVar5;
  
  ppiVar5 = *(int ***)(DAT_000a60c8 + 680000 + DAT_000a60cc);
  piVar4 = *ppiVar5;
  if (param_2 != 0) {
    param_2 = (**(code **)(*piVar4 + 0x29c))(piVar4);
    piVar4 = *ppiVar5;
  }
  if (piVar4 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,DAT_000a60d0 + 0xa6066);
    iVar2 = (**(code **)(*piVar4 + 0x1c4))
                      (piVar4,uVar1,DAT_000a60d4 + 0xa6074,DAT_000a60d8 + 0xa6076);
    uVar3 = 1 - uVar1;
    if (1 < uVar1) {
      uVar3 = 0;
    }
    if (iVar2 == 0) {
      uVar3 = uVar3 | 1;
    }
    if (uVar3 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      FUN_000a395c(piVar4,uVar1,iVar2,param_2);
      iVar2 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      if (iVar2 != 0) {
        (**(code **)(*piVar4 + 0x40))(piVar4);
        (**(code **)(*piVar4 + 0x44))(piVar4);
      }
    }
  }
  return;
}



