/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004c9f4 FUN_0004c9f4 */

void FUN_0004c9f4(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined auStack_a4 [128];
  int local_24;
  
  piVar2 = *(int **)(DAT_0004ca84 + 0x4ca02 + DAT_0004ca88);
  local_24 = *piVar2;
  FUN_0005fb88();
  iVar1 = DAT_0004ca90 + 0x4ca28;
  *param_1 = DAT_0004ca8c + 0x4ca2e;
  FUN_0008f060(auStack_a4,0x80,iVar1,param_3,param_2,param_4);
  FUN_00084478(auStack_a4);
  FUN_0003e474(param_1 + 0x15,auStack_a4);
  iVar1 = DAT_0004ca80;
  *(undefined *)((int)param_1 + 0x17) = 0xff;
  param_1[9] = iVar1;
  param_1[0x17] = param_3;
  *(undefined *)((int)param_1 + 0x16) = 0x74;
  param_1[0x16] = param_4;
  *(undefined *)((int)param_1 + 0x15) = 0x5d;
  *(undefined *)(param_1 + 5) = 0x3b;
  if (local_24 == *piVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



