/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a412c FUN_000a412c */

undefined8 FUN_000a412c(int **param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  
  piVar3 = *param_1;
  if (piVar3 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar3 + 0x7c))(piVar3,param_1[1]);
    uVar4 = 1 - uVar1;
    if (1 < uVar1) {
      uVar4 = 0;
    }
    iVar2 = (**(code **)(*piVar3 + 0x178))
                      (piVar3,uVar1,DAT_000a41b4 + 0xa414e,DAT_000a41b8 + 0xa4150);
    if (iVar2 == 0) {
      uVar4 = uVar4 | 1;
    }
    if (uVar4 == 0) {
      (**(code **)(*piVar3 + 0x44))(piVar3);
      uVar5 = (**(code **)(*piVar3 + 0x194))(piVar3,param_1[1],iVar2);
      iVar2 = (**(code **)(*piVar3 + 0x3c))(piVar3);
      if (iVar2 == 0) {
        return uVar5;
      }
      (**(code **)(*piVar3 + 0x40))(piVar3);
      (**(code **)(*piVar3 + 0x44))(piVar3);
      return 0;
    }
  }
  return 0;
}



