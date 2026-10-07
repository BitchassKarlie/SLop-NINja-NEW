/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a60dc FUN_000a60dc */

void FUN_000a60dc(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = **(int ***)(DAT_000a616c + 0xa60e4 + DAT_000a6170);
  if (piVar4 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,DAT_000a6174 + 0xa6100);
    iVar2 = (**(code **)(*piVar4 + 0x1c4))
                      (piVar4,uVar1,DAT_000a6178 + 0xa610e,DAT_000a617c + 0xa6110);
    uVar3 = 1 - uVar1;
    if (1 < uVar1) {
      uVar3 = 0;
    }
    if (iVar2 == 0) {
      uVar3 = uVar3 | 1;
    }
    if (uVar3 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      FUN_000a395c(piVar4,uVar1,iVar2);
      iVar2 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      if (iVar2 != 0) {
        (**(code **)(*piVar4 + 0x40))(piVar4);
        (**(code **)(*piVar4 + 0x44))(piVar4);
      }
    }
  }
  return;
}



