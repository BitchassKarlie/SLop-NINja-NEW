/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5d84 FUN_000a5d84 */

undefined4 FUN_000a5d84(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x10);
  piVar3 = **(int ***)(DAT_000a5e0c + 0xa5d8c + DAT_000a5e10);
  if ((piVar3 != (int *)0x0) && (iVar4 != 0)) {
    uVar1 = (**(code **)(*piVar3 + 0x7c))(piVar3,iVar4);
    uVar5 = 1 - uVar1;
    if (1 < uVar1) {
      uVar5 = 0;
    }
    iVar2 = (**(code **)(*piVar3 + 0x84))
                      (piVar3,uVar1,DAT_000a5e14 + 0xa5db0,DAT_000a5e18 + 0xa5db2);
    if (iVar2 == 0) {
      uVar5 = uVar5 | 1;
    }
    if (uVar5 == 0) {
      (**(code **)(*piVar3 + 0x44))(piVar3);
      iVar4 = FUN_000a393c(piVar3,iVar4,iVar2);
      iVar2 = (**(code **)(*piVar3 + 0x3c))(piVar3);
      if (iVar2 != 0) {
        (**(code **)(*piVar3 + 0x40))(piVar3);
        (**(code **)(*piVar3 + 0x44))(piVar3);
        return 0;
      }
      if (iVar4 == 0) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



