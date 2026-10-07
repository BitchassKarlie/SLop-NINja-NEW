/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b0c30 FUN_000b0c30 */

void FUN_000b0c30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auStack_ac [4];
  int local_a8;
  int local_a4;
  int local_a0;
  undefined *local_9c;
  int local_98;
  undefined *local_94;
  int local_90;
  undefined *local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined auStack_7c [4];
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined auStack_6c [40];
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_3c [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  iVar2 = DAT_000b0d20;
  iVar6 = DAT_000b0d1c + 0xb0c3e;
  local_2c = **(int **)(iVar6 + DAT_000b0d20);
  local_74 = 0;
  local_70 = 0;
  iVar4 = FUN_000ae974(param_1,param_2,&local_74);
  iVar5 = local_70;
  uVar3 = local_74;
  uVar1 = DAT_000b0d18;
  if (iVar4 == 0) {
    local_a8 = iVar4;
    local_a4 = iVar4;
    local_a0 = iVar4;
    FUN_0009e7a4(auStack_6c,param_2);
    local_98 = local_a4;
    local_44 = uVar1;
    local_40 = uVar1;
    local_90 = local_a8;
    local_9c = auStack_ac;
    local_94 = auStack_ac;
    local_8c = auStack_3c;
    local_88 = iVar4;
    local_38 = iVar4;
    local_34 = iVar4;
    local_30 = iVar4;
    FUN_000af610(auStack_3c,auStack_3c,0,auStack_ac,local_a8,auStack_ac,local_a4);
    local_80 = iVar5;
    local_84 = uVar3;
    FUN_000b0af8(auStack_7c,param_1,uVar3,iVar5,auStack_6c);
    FUN_00093ad8(auStack_3c);
    FUN_0009e858(auStack_6c);
    FUN_00093ad8(auStack_ac);
    iVar5 = local_78;
  }
  if (local_2c != **(int **)(iVar6 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5 + 0x28);
  }
  return;
}



