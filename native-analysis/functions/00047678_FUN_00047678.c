/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00047678 FUN_00047678 */

void FUN_00047678(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  code *pcVar10;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  uint local_74 [8];
  undefined local_54;
  uint local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_000477f4;
  iVar5 = DAT_000477f0 + 0x47686;
  iVar7 = DAT_000477f8 + 0x47694;
  local_2c = **(int **)(iVar5 + DAT_000477f4);
  iVar2 = FUN_0002f60c(0);
  iVar6 = *(int *)(iVar5 + DAT_000477fc);
  uVar9 = *(undefined4 *)(iVar6 + 0x50);
  uVar3 = FUN_0008f414(iVar7);
  iVar7 = FUN_00072d2c(uVar9,iVar7,uVar3,1,1,1);
  uVar8 = (uint)*(byte *)(*(int *)(iVar6 + 0x50) + 0x22);
  if (((uVar8 == 0) && (0x32 < iVar2 && 5 < iVar7)) && (iVar7 = FUN_0002f508(), iVar7 + -10 < iVar2)
     ) {
    *(undefined *)(*(int *)(iVar6 + 0x50) + 0x22) = 1;
    uVar3 = FUN_000a3a68();
    uVar9 = FUN_00017b68(0xffffffff);
    FUN_000a4ca4(uVar3,uVar9,iVar2,iVar2 >> 0x1f,0,0);
    uVar3 = FUN_000a3a68();
    uVar9 = FUN_00083098(0x93,0);
    local_30 = 1;
    iVar7 = DAT_00047800 + 0x47746;
    local_78 = DAT_00047804 + 0x47748;
    pcVar10 = *(code **)(DAT_00047800 + 0x4774e);
    local_7c = iVar7;
    local_50[0] = uVar8;
    (*pcVar10)(&local_7c,local_50);
    iVar2 = DAT_00047808;
    FUN_000951d0(uVar3,1,uVar9,local_50);
    FUN_0001d358(local_50);
    local_7c = iVar2 + 0x4777a;
    uVar3 = FUN_000a3a68();
    uVar9 = FUN_00083098(0x91,0);
    local_80 = DAT_0004780c + 0x4779a;
    local_54 = 1;
    local_84 = iVar7;
    local_74[0] = uVar8;
    (*pcVar10)(&local_84,local_74);
    FUN_000951d0(uVar3,0,uVar9,local_74);
    FUN_0001d358(local_74);
    local_84 = iVar2 + 0x4777a;
    uVar3 = FUN_000a3a68();
    uVar9 = FUN_00083098(0x8e,0);
    uVar4 = FUN_00083098(0x92,0);
    FUN_000a3724(uVar3,uVar9,uVar4,0,1);
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = 6;
  }
  if (local_2c != **(int **)(iVar5 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



