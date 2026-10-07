/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00076010 FUN_00076010 */

void FUN_00076010(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined auStack_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30;
  undefined4 local_2c [2];
  
  piVar1 = (int *)operator_new(0x48);
  FUN_0009c1d4(piVar1,DAT_000760fc + 0x76024);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_0009b0e4(piVar1,0);
    iVar4 = DAT_00076104;
    if (iVar2 != 0) {
      uVar3 = FUN_0009a5d8(piVar1,DAT_00076100 + 0x7604e);
      iVar2 = FUN_0009a5d8(uVar3,iVar4 + 0x76054);
      if (iVar2 != 0) {
        do {
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_3c = 0;
          local_38 = 0;
          local_34 = 0;
          local_30 = 0;
          FUN_00075ea4(auStack_50,iVar2);
          FUN_00075870(param_1);
          FUN_00075784(*(undefined4 *)(param_1 + 8),auStack_50);
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x24;
          FUN_0007499c(auStack_40);
          FUN_000747c8(auStack_50);
          iVar2 = FUN_0009a4f0(iVar2,iVar4 + 0x76054);
        } while (iVar2 != 0);
      }
      local_2c[0] = 0;
      iVar2 = DAT_00076108 + 0x760ba;
      iVar4 = FUN_0009a5d8(uVar3,iVar2);
      if (iVar4 != 0) {
        iVar5 = DAT_0007610c + 0x760d2;
        do {
          FUN_0009a8bc(iVar4,iVar5,local_2c);
          FUN_00074640(param_1 + 0x1c);
          **(undefined4 **)(param_1 + 0x24) = local_2c[0];
          *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 4;
          iVar4 = FUN_0009a4f0(iVar4,iVar2);
        } while (iVar4 != 0);
      }
    }
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  return;
}



