/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00046fe4 FUN_00046fe4 */

void FUN_00046fe4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined auStack_ac [128];
  int local_2c;
  
  iVar3 = DAT_000471c4;
  iVar2 = DAT_000471bc;
  iVar1 = DAT_000471b8;
  iVar5 = DAT_000471b4 + 0x46ff4;
  local_2c = **(int **)(iVar5 + DAT_000471b8);
  if (*(char *)(DAT_000471bc + 0x470a0) == '\0') {
    FUN_0002fa48(&local_b0,DAT_000471c0 + 0x47026);
    FUN_00017d64(iVar2 + 0x4704c,local_b0);
    FUN_00017d90(&local_b0);
    FUN_0002fa48(&local_b4,DAT_000471c8 + 0x4704c);
    FUN_00017d64(iVar2 + 0x47044,local_b4);
    FUN_00017d90(&local_b4);
    FUN_0002fa48(&local_b8,DAT_000471cc + 0x47068);
    FUN_00017d64(iVar2 + 0x47048,local_b8);
    FUN_00017d90(&local_b8);
    FUN_0002fa48(&local_bc,DAT_000471d0 + 0x47084);
    FUN_00017d64(iVar2 + 0x47084,local_bc);
    FUN_00017d90(&local_bc);
    FUN_0002fa48(&local_c0,DAT_000471d4 + 0x470a0);
    FUN_00017d64(iVar2 + 0x47088,local_c0);
    FUN_00017d90(&local_c0);
    FUN_0002fa48(&local_c4,DAT_000471d8 + 0x470bc);
    FUN_00017d64(iVar2 + 0x4708c,local_c4);
    FUN_00017d90(&local_c4);
    FUN_0002fa48(&local_c8,DAT_000471dc + 0x470d8);
    FUN_00017d64(iVar2 + 0x4709c,local_c8);
    FUN_00017d90(&local_c8);
    FUN_0002fa48(&local_cc,DAT_000471e0 + 0x470f4);
    FUN_00017d64(iVar2 + 0x47068,local_cc);
    FUN_00017d90(&local_cc);
    FUN_0002fa48(&local_d0,DAT_000471e4 + 0x47110);
    FUN_00017d64(iVar2 + 0x4706c,local_d0);
    FUN_00017d90(&local_d0);
    FUN_00017d64(iVar2 + 0x47078,0);
    FUN_00017d64(iVar2 + 0x4707c,0);
    iVar4 = DAT_000471e8 + 0x47144;
    iVar7 = 0;
    do {
      iVar6 = iVar7 + 1;
      FUN_0008f060(auStack_ac,0x80,iVar3 + 0x47048,iVar6);
      FUN_0002fa48(&local_d4,auStack_ac);
      FUN_00017d64(iVar2 + 0x4705c + iVar7 * 4,local_d4);
      FUN_00017d90(&local_d4);
      FUN_0008f060(auStack_ac,0x80,iVar4,iVar6);
      FUN_0002fa48(&local_d8,auStack_ac);
      FUN_00017d64(iVar2 + 0x47050 + iVar7 * 4,local_d8);
      FUN_00017d90(&local_d8);
      iVar7 = iVar6;
    } while (iVar6 != 3);
    *(undefined *)(iVar2 + 0x470a0) = 1;
  }
  if (local_2c != **(int **)(iVar5 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



