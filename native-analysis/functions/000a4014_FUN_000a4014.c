/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a4014 FUN_000a4014 */

undefined4 FUN_000a4014(int **param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = *param_1;
  if (piVar4 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4,param_1[1]);
    uVar5 = 1 - uVar1;
    if (1 < uVar1) {
      uVar5 = 0;
    }
    iVar2 = (**(code **)(*piVar4 + 0x178))
                      (piVar4,uVar1,DAT_000a4094 + 0xa4036,DAT_000a4098 + 0xa4038);
    if (iVar2 == 0) {
      uVar5 = uVar5 | 1;
    }
    if (uVar5 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      uVar3 = (**(code **)(*piVar4 + 400))(piVar4,param_1[1],iVar2);
      iVar2 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      if (iVar2 == 0) {
        return uVar3;
      }
      (**(code **)(*piVar4 + 0x40))(piVar4);
      (**(code **)(*piVar4 + 0x44))(piVar4);
      return 0;
    }
  }
  return 0;
}



