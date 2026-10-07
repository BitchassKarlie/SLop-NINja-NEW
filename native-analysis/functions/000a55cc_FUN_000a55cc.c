/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a55cc FUN_000a55cc */

undefined4 FUN_000a55cc(int **param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = *param_1;
  if ((piVar4 != (int *)0x0) && (param_1[1] != (int *)0x0)) {
    uVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar5 = 1 - uVar1;
    if (1 < uVar1) {
      uVar5 = 0;
    }
    iVar2 = (**(code **)(*piVar4 + 0x84))
                      (piVar4,uVar1,DAT_000a564c + 0xa55f0,DAT_000a5650 + 0xa55f2);
    if (iVar2 == 0) {
      uVar5 = uVar5 | 1;
    }
    if (uVar5 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      iVar2 = FUN_000a393c(piVar4,param_1[1],iVar2);
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



