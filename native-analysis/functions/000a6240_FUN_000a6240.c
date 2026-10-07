/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6240 FUN_000a6240 */

void FUN_000a6240(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined param_5,
                 undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int **ppiVar5;
  uint uVar6;
  
  ppiVar5 = *(int ***)(DAT_000a62fc + 0xa624e + DAT_000a6300);
  piVar4 = *ppiVar5;
  if (param_2 != 0) {
    param_2 = (**(code **)(*piVar4 + 0x29c))(piVar4);
    piVar4 = *ppiVar5;
  }
  if (piVar4 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,DAT_000a6304 + 0xa628a);
    iVar2 = (**(code **)(*piVar4 + 0x1c4))
                      (piVar4,uVar1,DAT_000a6308 + 0xa6298,DAT_000a630c + 0xa629a);
    uVar6 = 1 - uVar1;
    if (1 < uVar1) {
      uVar6 = 0;
    }
    if (iVar2 == 0) {
      uVar6 = uVar6 | 1;
    }
    if (uVar6 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      uVar3 = FUN_000a38bc(piVar4,uVar1,iVar2,param_2,param_3,param_5,param_6);
      iVar2 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      if (iVar2 != 0) {
        (**(code **)(*piVar4 + 0x40))(piVar4,uVar3);
        (**(code **)(*piVar4 + 0x44))(piVar4);
        uVar3 = 0;
      }
      goto LAB_000a626e;
    }
  }
  uVar3 = 0;
LAB_000a626e:
  if (param_4 != 0) {
    FUN_000a5e1c(param_4 + 0x10,uVar3);
  }
  return;
}



