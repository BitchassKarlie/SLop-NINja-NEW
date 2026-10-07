/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a527c FUN_000a527c */

undefined4 FUN_000a527c(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = **(int ***)(DAT_000a5304 + 0xa5284 + DAT_000a5308);
  if (piVar4 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,DAT_000a530c + 0xa5298);
    iVar2 = (**(code **)(*piVar4 + 0x1c4))
                      (piVar4,uVar1,DAT_000a5310 + 0xa52a6,DAT_000a5314 + 0xa52a8);
    uVar5 = 1 - uVar1;
    if (1 < uVar1) {
      uVar5 = 0;
    }
    if (iVar2 == 0) {
      uVar5 = uVar5 | 1;
    }
    if (uVar5 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      iVar2 = FUN_000a38dc(piVar4,uVar1,iVar2);
      iVar3 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      if (iVar3 != 0) {
        (**(code **)(*piVar4 + 0x40))(piVar4);
        (**(code **)(*piVar4 + 0x44))(piVar4);
        return 0;
      }
      if (iVar2 == 0) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



