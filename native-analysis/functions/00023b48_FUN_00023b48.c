/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00023b48 FUN_00023b48 */

void FUN_00023b48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  undefined auStack_54 [4];
  undefined auStack_50 [36];
  int local_2c;
  
  iVar1 = DAT_00023d44;
  iVar6 = DAT_00023d40 + 0x23b56;
  local_2c = **(int **)(iVar6 + DAT_00023d44);
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar3 = FUN_0007e454();
    FUN_0007d8e8(uVar3,*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar3 = FUN_0007e454();
    FUN_0007d8e8(uVar3,*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  iVar2 = DAT_00023d54;
  iVar5 = DAT_00023d50;
  if ((*(char *)(param_1 + 0xb4) == '\0') && (*(char *)(param_1 + 0x3d) == '\0')) {
    if (*(int *)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00023d50 + 0x23c02) + 0x2d0)
        < 5) {
      iVar8 = *(int *)(iVar6 + DAT_00023d54);
      if (*(int *)(iVar8 + 4) == 2) {
        if (param_2 != 0) {
          if (-1 < *(int *)(DAT_00023d50 + 0x23c5a) << 0x1f) {
            iVar7 = DAT_00023d50 + 0x23c5a;
            iVar8 = __cxa_guard_acquire(iVar7);
            if (iVar8 != 0) {
              uVar3 = FUN_0008f414(DAT_00023d78 + 0x23d2c);
              *(undefined4 *)(iVar5 + 0x23c5e) = uVar3;
              __cxa_guard_release(iVar7);
            }
          }
          FUN_00072d2c(*(undefined4 *)(*(int *)(iVar6 + iVar2) + 0x50),DAT_00023d58 + 0x23c38,
                       *(undefined4 *)(DAT_00023d5c + 0x23c98),1,0,0);
        }
      }
      else {
        iVar5 = FUN_0002f5a4();
        if ((iVar5 != 0) && (param_2 != 0)) {
          if (*(char *)(iVar8 + 8) == '\0') {
            uVar3 = FUN_00055e9c();
            uVar9 = *(undefined4 *)(param_1 + 0x90);
            local_68 = *(undefined4 *)(param_1 + 0x10);
            local_64 = *(undefined4 *)(param_1 + 0x14);
            local_60 = *(undefined4 *)(param_1 + 0x18);
            FUN_00023650(auStack_54);
            FUN_00056f04(uVar3,&local_68,uVar9,auStack_54);
            FUN_00017d90(auStack_54);
            local_5c = DAT_00023d68 + 0x23ce8;
            uVar3 = *(undefined4 *)(iVar8 + 0x18c);
            local_58 = *(undefined4 *)(iVar6 + DAT_00023d6c);
            FUN_00021db4(auStack_50,&local_5c);
            FUN_00073a7c(uVar3,DAT_00023d70 + 0x23d00,0x3f800000,auStack_50);
            FUN_0001d388(auStack_50);
            local_5c = DAT_00023d74 + 0x23d16;
            *(undefined *)(iVar8 + 0x20) = 1;
          }
          iVar5 = *(int *)(iVar6 + iVar2);
          bVar4 = *(char *)(iVar5 + 0x18) + 1;
          *(byte *)(iVar5 + 0x18) = bVar4;
          if (2 < bVar4) {
            FUN_000318fc(0xffffffff,0xbf800000,0xffffffff);
            *(undefined4 *)(DAT_00023d60 + 0x23ce6) = 0;
            *(undefined4 *)(DAT_00023d64 + 0x23c90) = 0xffffffff;
          }
        }
      }
    }
  }
  iVar5 = *(int *)(param_1 + 0x108);
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0x120) == param_1)) {
    *(undefined4 *)(iVar5 + 0x120) = 0;
  }
  if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
    if (*(int *)((uint)*(byte *)(param_1 + 0x3c) * 0x2ec + *(int *)(DAT_00023d48 + 0x23bb6) + 0x2e8)
        != 0) {
      iVar5 = 0;
      if (1 < *(int *)(DAT_00023d48 + 0x23bd2)) {
        iVar5 = *(int *)(DAT_00023d48 + 0x23bd2) + -1;
      }
      *(int *)(DAT_00023d4c + 0x23bea) = iVar5;
    }
  }
  if (*(short *)(param_1 + 8) != 0) {
    FUN_0002157c(0);
  }
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x10;
  if (local_2c == **(int **)(iVar6 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



