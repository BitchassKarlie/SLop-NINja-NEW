/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a45a0 FUN_000a45a0 */

void FUN_000a45a0(int **param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = *param_1;
  if (piVar3 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar3 + 0x7c))(piVar3,param_1[1]);
    uVar4 = 1 - uVar1;
    if (1 < uVar1) {
      uVar4 = 0;
    }
    iVar2 = (**(code **)(*piVar3 + 0x178))
                      (piVar3,uVar1,DAT_000a4624 + 0xa45c6,DAT_000a4628 + 0xa45c8);
    if (iVar2 == 0) {
      uVar4 = uVar4 | 1;
    }
    if (uVar4 == 0) {
      (**(code **)(*piVar3 + 0x44))(piVar3);
      (**(code **)(*piVar3 + 0x1b8))
                (piVar3,param_1[1],iVar2,*(code **)(*piVar3 + 0x1b8),*param_2,param_2[1]);
      iVar2 = (**(code **)(*piVar3 + 0x3c))(piVar3);
      if (iVar2 != 0) {
        (**(code **)(*piVar3 + 0x40))(piVar3);
        (**(code **)(*piVar3 + 0x44))(piVar3);
      }
    }
  }
  return;
}



