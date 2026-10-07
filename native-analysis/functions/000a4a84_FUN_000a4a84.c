/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a4a84 FUN_000a4a84 */

void FUN_000a4a84(int **param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  
  piVar3 = *param_1;
  if ((piVar3 != (int *)0x0) && (param_1[1] != (int *)0x0)) {
    uVar5 = param_3;
    uVar1 = (**(code **)(*piVar3 + 0x7c))(piVar3);
    uVar4 = 1 - uVar1;
    if (1 < uVar1) {
      uVar4 = 0;
    }
    iVar2 = (**(code **)(*piVar3 + 0x84))
                      (piVar3,uVar1,DAT_000a4b08 + 0xa4ab2,DAT_000a4b0c + 0xa4ab4,param_2,uVar5);
    if (iVar2 == 0) {
      uVar4 = uVar4 | 1;
    }
    if (uVar4 == 0) {
      (**(code **)(*piVar3 + 0x44))(piVar3);
      FUN_000a399c(piVar3,param_1[1],iVar2,param_3);
      iVar2 = (**(code **)(*piVar3 + 0x3c))(piVar3);
      if (iVar2 != 0) {
        (**(code **)(*piVar3 + 0x40))(piVar3);
        (**(code **)(*piVar3 + 0x44))(piVar3);
      }
    }
  }
  return;
}



