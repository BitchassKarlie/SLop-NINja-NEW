/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000331cc FUN_000331cc */

void FUN_000331cc(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74 [8];
  undefined local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  piVar7 = *(int **)(DAT_000332b0 + 0x331d4 + DAT_000332b4);
  local_2c = *piVar7;
  FUN_000a3a68();
  FUN_00094b68();
  uVar2 = FUN_000a3a68();
  uVar3 = FUN_00083098(0x7f,0);
  local_30 = 1;
  iVar5 = DAT_000332b8 + 0x33210;
  local_78 = DAT_000332bc + 0x33212;
  pcVar6 = *(code **)(DAT_000332b8 + 0x33218);
  local_50[0] = 0;
  local_7c = iVar5;
  (*pcVar6)(&local_7c,local_50);
  FUN_000951d0(uVar2,0,uVar3,local_50);
  iVar1 = DAT_000332c0;
  FUN_0001d358(local_50);
  local_7c = iVar1 + 0x33240;
  uVar2 = FUN_000a3a68();
  uVar3 = FUN_00083098(0x7e,0);
  local_80 = DAT_000332c4 + 0x33252;
  local_54 = 1;
  local_74[0] = 0;
  local_84 = iVar5;
  (*pcVar6)(&local_84,local_74);
  FUN_000951d0(uVar2,1,uVar3,local_74);
  FUN_0001d358(local_74);
  local_84 = iVar1 + 0x33240;
  uVar2 = FUN_000a3a68();
  uVar3 = FUN_00083098(0x7c,0);
  uVar4 = FUN_00083098(0x7d,0);
  FUN_000a3724(uVar2,uVar3,uVar4,0,1);
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



