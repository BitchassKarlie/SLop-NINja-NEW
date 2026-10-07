/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00032dc8 FUN_00032dc8 */

void FUN_00032dc8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_60;
  undefined auStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_00032e3c;
  iVar3 = DAT_00032e38 + 0x32dd4;
  local_1c = **(int **)(iVar3 + DAT_00032e3c);
  if (param_1 == 0) {
    param_1 = DAT_00032e50 + 0x32e34;
  }
  iVar2 = FUN_0006e130();
  if (iVar2 == 0) {
    iVar2 = DAT_00032e40 + 0x32dec;
  }
  else {
    iVar2 = DAT_00032e4c + 0x32e2e;
  }
  FUN_0008f060(auStack_5c,0x40,DAT_00032e44 + 0x32df6,param_1,iVar2);
  FUN_0002fa48(&local_60,auStack_5c);
  FUN_00017d64(DAT_00032e48 + 0x32f0e,local_60);
  FUN_00017d90(&local_60);
  if (local_1c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



