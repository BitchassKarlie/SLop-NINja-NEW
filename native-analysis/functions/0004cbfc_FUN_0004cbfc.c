/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004cbfc FUN_0004cbfc */

void FUN_0004cbfc(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined auStack_a4 [128];
  int local_24;
  
  piVar2 = *(int **)(DAT_0004cc8c + 0x4cc0a + DAT_0004cc90);
  local_24 = *piVar2;
  FUN_0005fb88();
  iVar1 = DAT_0004cc98 + 0x4cc30;
  *param_1 = DAT_0004cc94 + 0x4cc36;
  FUN_0008f060(auStack_a4,0x80,iVar1,param_3,param_2,param_4);
  FUN_00084478(auStack_a4);
  FUN_0003e474(param_1 + 0x15,auStack_a4);
  iVar1 = DAT_0004cc88;
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



