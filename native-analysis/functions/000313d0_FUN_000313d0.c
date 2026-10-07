/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000313d0 FUN_000313d0 */

void FUN_000313d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined auStack_200 [33];
  char local_1df;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  undefined local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined local_f0;
  undefined local_ef;
  float local_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  
  iVar4 = DAT_000315fc + 0x313de;
  iVar1 = FUN_0002f5ec();
  iVar3 = DAT_00031604;
  iVar5 = DAT_00031600;
  if ((iVar1 != 0) && (*(int *)(*(int *)(iVar4 + DAT_00031600) + 4) == 7)) {
    param_1 = 0;
  }
  *(undefined *)(DAT_00031604 + 0x3140c) = 1;
  FUN_0007832c();
  FUN_00077b20();
  iVar1 = *(int *)(iVar4 + iVar5);
  FUN_0003113c(auStack_200,*(undefined4 *)(iVar1 + 0x50));
  local_1ac = *(undefined *)(iVar1 + 0x20);
  local_1b8 = FUN_0002f60c(0);
  local_1b4 = FUN_0002f624(0);
  local_10c = *(undefined4 *)(iVar1 + 0x34);
  local_1a8 = **(undefined4 **)(iVar4 + DAT_00031608);
  local_1a4 = **(undefined4 **)(iVar4 + DAT_0003160c);
  local_1b0 = *(int *)(iVar1 + 4);
  if (local_1b0 == 2) {
    if (((-1 < (int)((uint)(*(float *)(iVar1 + 0x10) < DAT_000315f4) << 0x1f)) ||
        (local_ec = *(float *)(iVar1 + 0x14), local_ec == 0.0 || local_ec < 0.0 != NAN(local_ec)))
       || (*(int *)(*(int *)(iVar3 + 0x31488) + 0x11c) != 0x11)) goto LAB_00031446;
  }
  else if ((*(char *)(iVar3 + 0x3148c) != '\0') ||
          (local_ec = *(float *)(iVar1 + 0x14), local_ec == 0.0 || local_ec < 0.0 != NAN(local_ec)))
  {
LAB_00031446:
    local_ec = DAT_000315ec;
  }
  iVar1 = *(int *)(iVar4 + iVar5);
  iVar3 = *(int *)(iVar1 + 0x168);
  if (iVar3 == 0) {
    if (*(char *)(iVar1 + 9) != '\0') {
      local_1df = '\0';
    }
  }
  else {
    if (*(char *)(iVar1 + 9) == '\0') {
      local_108 = *(int *)(iVar3 + 0x74);
      if (local_108 == 0) {
        local_e8 = *(float *)(iVar1 + 0x10);
      }
      else if ((6 < local_108) ||
              (local_e8 = *(float *)(iVar1 + 0x10),
              -1 < (int)((uint)(local_e8 < DAT_000315f8) << 0x1f))) goto LAB_00031538;
      local_104 = *(undefined4 *)(iVar3 + 0x78);
      local_fc = *(undefined4 *)(iVar3 + 0x11c);
      local_100 = *(undefined4 *)(iVar3 + 0x120);
      local_f8 = *(undefined4 *)(iVar3 + 0x124);
      local_f4 = *(undefined4 *)(iVar3 + 0x128);
      local_ef = *(undefined *)(iVar3 + 0x118);
      goto LAB_00031498;
    }
LAB_00031538:
    local_1df = '\0';
    local_1b8 = FUN_0002f60c();
  }
  local_108 = -1;
  local_104 = DAT_000315f0;
  local_fc = 0xffffffff;
  local_100 = 0xffffffff;
  local_e8 = DAT_000315ec;
  local_f8 = 0xffffffff;
  local_f4 = 0xffffffff;
  local_f0 = 0;
  local_ef = 0;
LAB_00031498:
  iVar3 = *(int *)(*(int *)(iVar4 + iVar5) + 0x4c);
  local_e0 = *(undefined4 *)(iVar3 + 0x168);
  local_e4 = *(undefined4 *)(iVar3 + 0x164);
  if ((local_1df != '\0') && (*(int *)(*(int *)(*(int *)(iVar4 + iVar5) + 0x164) + 0x11c) != 0x11))
  {
    local_1df = '\0';
  }
  if (param_1 == 0) {
    local_1df = '\0';
  }
  else {
    uVar2 = FUN_00086780();
    FUN_00088314(uVar2,auStack_200);
  }
  if (*(char *)(*(int *)(iVar4 + iVar5) + 0x48) == '\0') {
    iVar3 = DAT_00031618 + 0x31576;
    uVar2 = FUN_0008f414(iVar3);
    FUN_00072d2c(auStack_200,iVar3,uVar2,1,0,1);
  }
  if (*(char *)(*(int *)(iVar4 + iVar5) + 0x49) == '\0') {
    iVar5 = DAT_00031610 + 0x314e6;
    uVar2 = FUN_0008f414(iVar5);
    FUN_00072d2c(auStack_200,iVar5,uVar2,1,0,1);
  }
  FUN_00070880(auStack_200);
  *(undefined *)(DAT_00031614 + 0x31522) = 0;
  FUN_0003070c(auStack_200);
  return;
}



