/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00075ea4 FUN_00075ea4 */

void FUN_00075ea4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  undefined auStack_120 [4];
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined auStack_110 [4];
  uint *local_10c;
  uint local_108;
  undefined4 local_104;
  int local_100;
  uint *local_fc;
  undefined4 local_f8;
  undefined auStack_f4 [192];
  int local_34;
  int local_30;
  int local_2c;
  
  iVar1 = DAT_00076000;
  iVar9 = DAT_00075ffc + 0x75eb4;
  iVar8 = 0;
  local_2c = **(int **)(iVar9 + DAT_00076000);
  iVar4 = DAT_00076004 + 0x75ec6;
  *(undefined *)(param_1 + 0x20) = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = 0;
  uVar2 = FUN_0009a4a0(param_2,iVar4);
  iVar4 = FUN_00084f38(uVar2,auStack_120);
  if (0 < iVar4) {
    do {
      uVar3 = FUN_0008f414(*(undefined4 *)(local_11c + iVar8 * 0x10 + 4));
      puVar7 = *(uint **)(param_1 + 4);
      puVar5 = puVar7;
      if (puVar7 == (uint *)0x0) {
LAB_00075fce:
        local_104 = 0;
        local_108 = uVar3;
        local_100 = param_1;
        local_fc = puVar5;
        FUN_00075b48(auStack_110,param_1,param_1,puVar5,&local_108);
        puVar5 = local_10c;
      }
      else {
        puVar5 = (uint *)0x0;
        do {
          if (*puVar7 < uVar3) {
            puVar6 = (uint *)puVar7[4];
          }
          else {
            puVar6 = (uint *)puVar7[3];
            puVar5 = puVar7;
          }
          puVar7 = puVar6;
        } while (puVar6 != (uint *)0x0);
        if ((puVar5 == (uint *)0x0) || (uVar3 < *puVar5)) goto LAB_00075fce;
      }
      iVar8 = iVar8 + 1;
      puVar5[1] = 0;
    } while (iVar8 != iVar4);
  }
  iVar4 = DAT_0007600c;
  uVar2 = FUN_0009a4a0(param_2,DAT_00076008 + 0x75f3e);
  FUN_00084948(&local_f8,uVar2);
  iVar8 = FUN_0009a5d8(param_2,iVar4 + 0x75f48);
  if (iVar8 != 0) {
    do {
      FUN_0007481c(auStack_f4);
      FUN_00075c1c(auStack_f4,iVar8);
      if (local_30 == 0) {
        FUN_00017d64(&local_30,local_f8);
      }
      if (local_34 != 0) {
        *(undefined *)(param_1 + 0x20) = 1;
      }
      FUN_00075644(param_1 + 0x10);
      FUN_000750d4(*(undefined4 *)(param_1 + 0x18),auStack_f4);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 200;
      FUN_0007489c(auStack_f4);
      iVar8 = FUN_0009a4f0(iVar8,iVar4 + 0x75f48);
    } while (iVar8 != 0);
  }
  FUN_00017d90(&local_f8);
  FUN_000223ec(auStack_120);
  if (local_2c != **(int **)(iVar9 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



