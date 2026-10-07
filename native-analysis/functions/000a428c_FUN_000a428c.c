/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a428c FUN_000a428c */

void FUN_000a428c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = **(int ***)(DAT_000a4304 + 0xa4294 + DAT_000a4308);
  if (piVar4 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,DAT_000a430c + 0xa42a6);
    iVar2 = (**(code **)(*piVar4 + 0x1c4))
                      (piVar4,uVar1,DAT_000a4310 + 0xa42b4,DAT_000a4314 + 0xa42b6);
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



