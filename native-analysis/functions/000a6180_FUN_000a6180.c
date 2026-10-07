/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6180 FUN_000a6180 */

void FUN_000a6180(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  piVar4 = **(int ***)(DAT_000a622c + 0xa618e + DAT_000a6230);
  if (piVar4 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar4 + 0x18))(piVar4,DAT_000a6234 + 0xa61ba);
    iVar2 = (**(code **)(*piVar4 + 0x1c4))
                      (piVar4,uVar1,DAT_000a6238 + 0xa61c8,DAT_000a623c + 0xa61ca);
    uVar5 = 1 - uVar1;
    if (1 < uVar1) {
      uVar5 = 0;
    }
    if (iVar2 == 0) {
      uVar5 = uVar5 | 1;
    }
    if (uVar5 == 0) {
      (**(code **)(*piVar4 + 0x44))(piVar4);
      uVar3 = FUN_000a38bc(piVar4,uVar1,iVar2,param_2,param_3,param_5,param_6);
      iVar2 = (**(code **)(*piVar4 + 0x3c))(piVar4);
      if (iVar2 != 0) {
        (**(code **)(*piVar4 + 0x40))(piVar4,uVar3);
        (**(code **)(*piVar4 + 0x44))(piVar4);
        uVar3 = 0;
      }
      goto LAB_000a619e;
    }
  }
  uVar3 = 0;
LAB_000a619e:
  if (param_4 != 0) {
    FUN_000a5e1c(param_4 + 0x10,uVar3);
  }
  return;
}



