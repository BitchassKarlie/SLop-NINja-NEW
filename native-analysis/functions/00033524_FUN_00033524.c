/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00033524 FUN_00033524 */

void FUN_00033524(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_58;
  int local_54;
  int local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_0003367c;
  iVar7 = DAT_00033678 + 0x33536;
  local_2c = **(int **)(iVar7 + DAT_0003367c);
  iVar8 = *(int *)(iVar7 + DAT_00033680);
  *(undefined4 *)(iVar8 + 0x1a4) = DAT_00033674;
  *(undefined *)(iVar8 + 0x174) = 0;
  *(undefined *)(iVar8 + 0x19e) = 0;
  *(undefined *)(iVar8 + 0x19f) = 0;
  *(undefined *)(iVar8 + 0x1a0) = 0;
  *(undefined *)(iVar8 + 0x1a1) = 0;
  iVar2 = FUN_0002f5ec();
  if (param_1 == 2) {
    uVar3 = FUN_00083098(0x76,0);
  }
  else if (param_1 == 6) {
    uVar3 = FUN_00083098(0x77,0);
  }
  else if (param_1 == 1) {
    piVar6 = *(int **)(iVar8 + 0x168);
    if (piVar6 != (int *)0x0) {
      if (piVar6[0x1d] == 7) {
        FUN_00049d14(*(undefined4 *)(iVar8 + 0x40));
        if (*(int **)(iVar8 + 0x168) != (int *)0x0) {
          (**(code **)(**(int **)(iVar8 + 0x168) + 4))();
          *(undefined4 *)(iVar8 + 0x168) = 0;
        }
      }
      else {
        iVar2 = 0;
        (**(code **)(*piVar6 + 0x34))(piVar6);
      }
    }
    uVar3 = FUN_00083098(0x75,0);
  }
  else {
    uVar3 = FUN_00083098(0x78,0);
  }
  if (iVar2 != 0) {
    FUN_000334a0();
    FUN_000a3a68();
    iVar2 = FUN_00094aec();
    if (iVar2 == 0) {
      uVar4 = FUN_000a3a68();
      uVar5 = FUN_00083098(0x2c3,0);
      local_30 = 1;
      local_58 = DAT_00033684 + 0x335f6;
      local_54 = DAT_00033688 + 0x335fc;
      local_50[0] = iVar2;
      (**(code **)(DAT_00033684 + 0x335fe))(&local_58,local_50);
      FUN_000951d0(uVar4,0,uVar5,local_50);
      FUN_0001d358(local_50);
      local_58 = DAT_0003368c + 0x33622;
      uVar4 = FUN_000a3a68();
      uVar5 = FUN_00083098(0x6d,0);
      FUN_000a3724(uVar4,uVar5,uVar3,0x3e800000,1);
    }
  }
  if (local_2c == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



