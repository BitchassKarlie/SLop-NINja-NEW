/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5120 FUN_000a5120 */

undefined4 * FUN_000a5120(undefined4 *param_1,int **param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  
  piVar4 = *param_2;
  iVar6 = DAT_000a51c8 + 0xa5130;
  if (piVar4 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar1 = (**(code **)(*piVar4 + 0x7c))(piVar4,param_2[1]);
    uVar7 = 1 - uVar1;
    if (1 < uVar1) {
      uVar7 = 0;
    }
    iVar2 = (**(code **)(*piVar4 + 0x178))
                      (piVar4,uVar1,DAT_000a51cc + 0xa514c,DAT_000a51d0 + 0xa514e);
    if (iVar2 == 0) {
      uVar7 = uVar7 | 1;
    }
    if (uVar7 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      uVar3 = (**(code **)(*piVar4 + 0x17c))(piVar4,param_2[1],iVar2);
      uVar5 = **(undefined4 **)(iVar6 + DAT_000a51d4);
      iVar6 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      if (iVar6 == 0) {
        param_1[1] = uVar3;
        *param_1 = uVar5;
      }
      else {
        (**(code **)(*piVar4 + 0x40))(piVar4);
        (**(code **)(*piVar4 + 0x44))(piVar4);
        *param_1 = 0;
        param_1[1] = 0;
      }
    }
    else {
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  return param_1;
}



