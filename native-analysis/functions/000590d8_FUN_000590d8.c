/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000590d8 FUN_000590d8 */

void FUN_000590d8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74 [8];
  undefined local_54;
  int local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar2 = DAT_00059230;
  iVar6 = DAT_0005922c + 0x590e6;
  local_2c = **(int **)(iVar6 + DAT_00059230);
  if (*(float *)(param_1 + 0xa8) == 0.0) {
    iVar4 = *(int *)(param_1 + 200);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 200) = 2;
      iVar8 = DAT_00059234;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      uVar7 = *(undefined4 *)(*(int *)(iVar6 + iVar8) + 0x18c);
      local_7c = DAT_00059238 + 0x59128;
      local_78 = *(undefined4 *)(iVar6 + DAT_0005923c);
      local_30 = 1;
      local_50[0] = iVar4;
      (**(code **)(DAT_00059238 + 0x59130))(&local_7c,local_50);
      FUN_00073a7c(uVar7,DAT_00059240 + 0x59140,0,local_50);
      FUN_0001d388(local_50);
      local_7c = DAT_00059244 + 0x59158;
      iVar4 = FUN_0002f5f0();
      if (iVar4 == 0) {
        FUN_00030184();
      }
    }
    else if (iVar4 == 3) {
      *(undefined4 *)(param_1 + 0xc4) = DAT_00059228;
      if (*(int *)(param_1 + 0x8c) != 0) {
        *(undefined *)(*(int *)(param_1 + 0x8c) + 0x11d) = 0;
      }
      iVar4 = DAT_00059234;
      local_84 = DAT_00059248 + 0x59198;
      iVar8 = *(int *)(iVar6 + DAT_00059234);
      local_80 = *(undefined4 *)(iVar6 + DAT_0005923c);
      local_74[0] = 0;
      uVar7 = *(undefined4 *)(iVar8 + 0x18c);
      local_54 = 1;
      (**(code **)(DAT_00059248 + 0x591a0))(&local_84,local_74);
      FUN_00073a7c(uVar7,DAT_0005924c + 0x591c0,0,local_74);
      FUN_0001d388(local_74);
      local_84 = DAT_00059250 + 0x591d8;
      *(undefined4 *)(param_1 + 200) = 4;
      uVar7 = DAT_0005921c;
      if (*(char *)(iVar8 + 0x89) != '\0') {
        uVar3 = *(undefined4 *)(iVar8 + 0x198);
        puVar5 = *(undefined4 **)(iVar6 + DAT_00059254);
        puVar5[2] = DAT_00059218;
        puVar5[3] = uVar7;
        uVar1 = DAT_00059224;
        uVar7 = DAT_00059220;
        *puVar5 = uVar3;
        puVar5[1] = 0;
        puVar5[4] = uVar7;
        puVar5[5] = uVar1;
      }
      *(undefined *)(*(int *)(iVar6 + iVar4) + 0x89) = 0;
    }
  }
  if (local_2c == **(int **)(iVar6 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



