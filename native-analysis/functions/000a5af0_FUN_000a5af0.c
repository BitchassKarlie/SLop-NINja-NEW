/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5af0 FUN_000a5af0 */

void FUN_000a5af0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *(int *)(param_1 + 0x10);
  piVar3 = **(int ***)(DAT_000a5b6c + 0xa5af8 + DAT_000a5b70);
  if ((piVar3 != (int *)0x0) && (iVar4 != 0)) {
    uVar1 = (**(code **)(*piVar3 + 0x7c))(piVar3,iVar4);
    uVar5 = 1 - uVar1;
    if (1 < uVar1) {
      uVar5 = 0;
    }
    iVar2 = (**(code **)(*piVar3 + 0x84))
                      (piVar3,uVar1,DAT_000a5b74 + 0xa5b1c,DAT_000a5b78 + 0xa5b1e);
    if (iVar2 == 0) {
      uVar5 = uVar5 | 1;
    }
    if (uVar5 == 0) {
      (**(code **)(*piVar3 + 0x44))(piVar3);
      FUN_000a399c(piVar3,iVar4,iVar2);
      iVar4 = (**(code **)(*piVar3 + 0x3c))(piVar3);
      if (iVar4 != 0) {
        (**(code **)(*piVar3 + 0x40))(piVar3);
        (**(code **)(*piVar3 + 0x44))(piVar3);
      }
    }
  }
  return;
}



