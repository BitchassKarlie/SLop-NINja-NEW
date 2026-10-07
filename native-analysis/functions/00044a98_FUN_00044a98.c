/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00044a98 FUN_00044a98 */

void FUN_00044a98(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60 [4];
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar2 = DAT_00044b98;
  iVar1 = DAT_00044b94;
  iVar7 = DAT_00044b90 + 0x44aa8;
  iVar8 = *(int *)(iVar7 + DAT_00044b98);
  local_2c = **(int **)(iVar7 + DAT_00044b94);
  *(undefined4 *)(param_1 + 0x8c) = 10;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  local_60[0] = *(undefined4 *)(DAT_00044b9c + 0x44ace);
  local_60[1] = *(undefined4 *)(DAT_00044b9c + 0x44ad2);
  local_60[2] = *(undefined4 *)(DAT_00044b9c + 0x44ad6);
  local_60[3] = *(undefined4 *)(DAT_00044b9c + 0x44ada);
  uVar6 = *(undefined4 *)(iVar8 + 0x50);
  uVar9 = local_60[param_2];
  uVar3 = FUN_0008f414(uVar9);
  iVar4 = FUN_00072d2c(uVar6,uVar9,uVar3,1,1,1);
  if (iVar4 < 2) {
    uVar6 = *(undefined4 *)(iVar8 + 0x50);
    iVar4 = DAT_00044bac + 0x44b74;
    uVar3 = FUN_0008f414(iVar4);
    FUN_00072d2c(uVar6,iVar4,uVar3,1,1,1);
  }
  local_70 = DAT_00044ba0 + 0x44b14;
  local_68 = DAT_00044ba4 + 0x44b1c;
  local_64 = 0;
  local_50[0] = 0;
  local_30 = 1;
  local_6c = param_1;
  (**(code **)(DAT_00044ba0 + 0x44b1c))(&local_70,local_50);
  pvVar5 = operator_new(0x1e4);
  FUN_00069b30(pvVar5,local_50,param_2);
  FUN_0001d358(local_50);
  local_70 = DAT_00044ba8 + 0x44b52;
  FUN_00049d7c(*(undefined4 *)(*(int *)(iVar7 + iVar2) + 0x40),pvVar5,0);
  if (local_2c == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



