/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3f88 FUN_000a3f88 */

undefined4 FUN_000a3f88(int **param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
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
                      (piVar4,uVar1,DAT_000a400c + 0xa3faa,DAT_000a4010 + 0xa3fac);
    if (iVar2 == 0) {
      uVar5 = uVar5 | 1;
    }
    if (uVar5 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      iVar2 = (**(code **)(*piVar4 + 0x180))(piVar4,param_1[1],iVar2);
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



