/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00057674 FUN_00057674 */

void FUN_00057674(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined auStack_ac [128];
  int local_2c;
  
  iVar6 = DAT_000577a4;
  iVar1 = DAT_000577a0;
  iVar7 = DAT_0005779c + 0x57684;
  local_2c = **(int **)(iVar7 + DAT_000577a0);
  FUN_0004a8dc();
  iVar5 = DAT_000577a8;
  *(undefined *)(param_1 + 1) = 1;
  *param_1 = iVar5 + 0x576a8;
  iVar5 = *(int *)(iVar6 + 0x576da);
  if (iVar5 == 0) {
    FUN_0002fa48(&local_b0,DAT_000577b0 + 0x576dc);
    FUN_00017d64(iVar6 + 0x576a6,local_b0);
    FUN_00017d90(&local_b0);
    FUN_0002fa48(&local_b4,DAT_000577b4 + 0x576fa);
    FUN_00017d64(iVar6 + 0x576aa,local_b4);
    FUN_00017d90(&local_b4);
    FUN_0002fa48(&local_b8,DAT_000577b8 + 0x57718);
    FUN_00017d64(iVar6 + 0x576ae,local_b8);
    FUN_00017d90(&local_b8);
    iVar2 = DAT_000577bc + 0x57758;
    iVar8 = DAT_000577c0 + 0x57740;
    iVar3 = DAT_000577c4 + 0x57762;
    iVar6 = 0;
    iVar5 = 1;
    do {
      while (2 < iVar5) {
        iVar4 = iVar5 + 1;
        FUN_0008f060(auStack_ac,0x80,iVar8,iVar5);
        FUN_0002fa48(&local_bc,auStack_ac);
        iVar5 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        FUN_00017d64(iVar2 + iVar5,local_bc);
        FUN_00017d90(&local_bc);
        iVar5 = iVar4;
        if (iVar4 == 0xb) goto LAB_00057790;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      FUN_00017d64(iVar3 + iVar4,0);
    } while (iVar5 != 0xb);
LAB_00057790:
    iVar5 = *(int *)(DAT_000577c8 + 0x577de);
  }
  *(int *)(DAT_000577ac + 0x576fa) = iVar5 + 1;
  FUN_000570e8(param_1);
  *(undefined *)(param_1 + 9) = 0;
  if (local_2c == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



