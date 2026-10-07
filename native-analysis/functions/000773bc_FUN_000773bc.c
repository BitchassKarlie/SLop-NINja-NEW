/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000773bc FUN_000773bc */

void FUN_000773bc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int local_a4 [4];
  int local_94 [4];
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74 [8];
  undefined local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_000775a0;
  iVar6 = DAT_0007759c + 0x773cc;
  iVar8 = param_2 * 4;
  iVar7 = iVar8 + param_3;
  local_2c = **(int **)(iVar6 + DAT_000775a0);
  if (*(int *)(param_1 + iVar7 * 4) == 0) {
    pvVar3 = operator_new(0x14);
    FUN_000772a0();
    *(void **)(param_1 + iVar7 * 4) = pvVar3;
    if ((param_3 == 0 || param_3 == 2) || (param_3 == 3)) {
      *(undefined *)((int)pvVar3 + 0xf) = 1;
      if (param_3 == 2) {
        *(undefined *)(*(int *)(param_1 + param_2 * 0x10 + 8) + 0x10) = 1;
      }
      goto LAB_000773e8;
    }
    FUN_00077324(param_1,param_2,param_3);
    iVar7 = *(int *)(param_1 + iVar7 * 4);
    *(undefined *)(iVar7 + 0xe) = 0;
    *(undefined *)(iVar7 + 0xc) = 0;
    *(undefined *)(iVar7 + 0xd) = 0;
    bVar9 = false;
  }
  else {
LAB_000773e8:
    FUN_00077324(param_1,param_2,param_3);
    bVar9 = param_3 == 3;
    iVar7 = *(int *)(param_1 + (iVar8 + param_3) * 4);
    *(undefined *)(iVar7 + 0xe) = 0;
    *(undefined *)(iVar7 + 0xc) = 0;
    *(undefined *)(iVar7 + 0xd) = 0;
    if (*(int *)(*(int *)(iVar6 + DAT_000775a4) + 4) == 2 && bVar9) {
      uVar2 = FUN_000a3a68();
      local_7c = DAT_000775a8 + 0x77438;
      local_78 = 0;
      FUN_000768a8(local_94,*(undefined4 *)(param_1 + param_2 * 0x10 + 0xc),local_7c,0);
      local_30 = 1;
      local_50[0] = 0;
      (**(code **)(local_94[0] + 8))(local_94,local_50);
      FUN_000a4b94(uVar2,DAT_000775ac + 0x77470,1,1,local_50,0x19,0,1,0);
      FUN_000768d0(local_50);
      local_94[0] = DAT_000775b0 + 0x77498;
      goto LAB_00077492;
    }
  }
  uVar2 = FUN_000a3a68();
  uVar4 = FUN_00017b68(0xffffffff);
  bVar5 = bVar9;
  if (param_3 == 0) {
    bVar5 = true;
  }
  local_80 = 0;
  local_84 = DAT_000775b4 + 0x77528;
  FUN_000768a8(local_a4,*(undefined4 *)(param_1 + (iVar8 + param_3) * 4),local_84,0);
  local_54 = 1;
  local_74[0] = 0;
  (**(code **)(local_a4[0] + 8))(local_a4,local_74);
  FUN_000a4b94(uVar2,uVar4,1,bVar5,local_74,0x19,param_3 == 2,bVar9,0);
  FUN_000768d0(local_74);
  local_a4[0] = DAT_000775b8 + 0x77588;
LAB_00077492:
  if (local_2c != **(int **)(iVar6 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined4 *)(param_1 + (param_3 + iVar8) * 4));
  }
  return;
}



