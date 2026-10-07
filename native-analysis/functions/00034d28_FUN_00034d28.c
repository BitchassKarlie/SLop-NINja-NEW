/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00034d28 FUN_00034d28 */

void FUN_00034d28(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int local_58;
  undefined4 local_54;
  int local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar2 = DAT_00034e80;
  iVar1 = DAT_00034e7c;
  iVar9 = DAT_00034e78 + 0x34d38;
  local_2c = **(int **)(iVar9 + DAT_00034e7c);
  FUN_000a3a68();
  iVar3 = FUN_00094c30();
  uVar4 = FUN_000a3a68();
  FUN_00094c28(uVar4,param_1);
  if (-1 < *(int *)(iVar2 + 0x34e72) << 0x1f) {
    iVar5 = __cxa_guard_acquire(iVar2 + 0x34e72);
    if (iVar5 != 0) {
      uVar4 = FUN_0008f414(DAT_00034ea0 + 0x34e58);
      *(undefined4 *)(&UNK_00034e76 + iVar2) = uVar4;
      __cxa_guard_release(iVar2 + 0x34e72);
    }
  }
  iVar2 = DAT_00034e88;
  iVar10 = *(int *)(iVar9 + DAT_00034e84);
  iVar5 = FUN_0006fbdc(*(undefined4 *)(iVar10 + 0x50),
                       *(undefined4 *)((int)&DAT_00034ea0 + DAT_00034e88));
  FUN_00072d2c(*(undefined4 *)(iVar10 + 0x50),DAT_00034e8c + 0x34d82,
               *(undefined4 *)((int)&DAT_00034ea0 + iVar2),param_1 - iVar5,1,1);
  if (iVar5 == 0) {
    FUN_000a3a68();
    FUN_00094b68();
    uVar4 = FUN_000a3a68();
    uVar7 = FUN_00083098(0x2c3,0);
    local_30 = 1;
    local_58 = DAT_00034e94 + 0x34dee;
    local_54 = *(undefined4 *)(iVar9 + DAT_00034e98);
    local_50[0] = iVar5;
    (**(code **)(DAT_00034e94 + 0x34df6))(&local_58,local_50);
    FUN_000951d0(uVar4,0,uVar7,local_50);
    FUN_0001d358(local_50);
    local_58 = DAT_00034e9c + 0x34e1c;
    uVar4 = FUN_000a3a68();
    if (param_1 == 1) {
      uVar7 = FUN_00083098(0x79,0);
    }
    else {
      uVar7 = FUN_00083098(0x7a,0);
    }
    uVar8 = FUN_00083098(0x7b,0);
    FUN_000a3724(uVar4,uVar7,uVar8,0,1);
  }
  uVar6 = *(uint *)(DAT_00034e90 + 0x34e2c);
  if (uVar6 != 0) {
    uVar6 = 1;
  }
  if (param_1 == iVar3) {
    uVar6 = 0;
  }
  else {
    uVar6 = uVar6 & 1;
  }
  if (uVar6 != 0) {
    FUN_00050c18();
  }
  if (local_2c != **(int **)(iVar9 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



