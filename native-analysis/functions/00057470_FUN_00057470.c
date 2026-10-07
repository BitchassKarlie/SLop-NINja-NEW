/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00057470 FUN_00057470 */

void FUN_00057470(int *param_1)

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
  
  iVar6 = DAT_000575a0;
  iVar1 = DAT_0005759c;
  iVar7 = DAT_00057598 + 0x57480;
  local_2c = **(int **)(iVar7 + DAT_0005759c);
  FUN_0004a8dc();
  iVar5 = DAT_000575a4;
  *(undefined *)(param_1 + 1) = 1;
  *param_1 = iVar5 + 0x574a4;
  iVar5 = *(int *)(iVar6 + 0x574d6);
  if (iVar5 == 0) {
    FUN_0002fa48(&local_b0,DAT_000575ac + 0x574d8);
    FUN_00017d64(iVar6 + 0x574a2,local_b0);
    FUN_00017d90(&local_b0);
    FUN_0002fa48(&local_b4,DAT_000575b0 + 0x574f6);
    FUN_00017d64(iVar6 + 0x574a6,local_b4);
    FUN_00017d90(&local_b4);
    FUN_0002fa48(&local_b8,DAT_000575b4 + 0x57514);
    FUN_00017d64(iVar6 + 0x574aa,local_b8);
    FUN_00017d90(&local_b8);
    iVar2 = DAT_000575b8 + 0x57554;
    iVar8 = DAT_000575bc + 0x5753c;
    iVar3 = DAT_000575c0 + 0x5755e;
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
        if (iVar4 == 0xb) goto LAB_0005758c;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      FUN_00017d64(iVar3 + iVar4,0);
    } while (iVar5 != 0xb);
LAB_0005758c:
    iVar5 = *(int *)(DAT_000575c4 + 0x575da);
  }
  *(int *)(DAT_000575a8 + 0x574f6) = iVar5 + 1;
  FUN_000570e8(param_1);
  *(undefined *)(param_1 + 9) = 0;
  if (local_2c == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



