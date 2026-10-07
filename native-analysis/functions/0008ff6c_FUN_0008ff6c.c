/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008ff6c FUN_0008ff6c */

void FUN_0008ff6c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_54;
  undefined4 local_50;
  undefined auStack_4c [32];
  int local_2c;
  
  iVar1 = DAT_0009000c;
  iVar5 = 0;
  iVar4 = DAT_00090008 + 0x8ff80;
  local_2c = **(int **)(iVar4 + DAT_0009000c);
  *param_2 = 0;
  FUN_00022208(param_2 + 1,0);
  if (0 < param_3) {
    iVar6 = DAT_00090010 + 0x8ffb2;
    do {
      local_54 = 0;
      local_50 = 0xffff5542;
      iVar2 = FUN_0008f7dc(param_1 + iVar5,auStack_4c,&local_50,&local_54);
      iVar3 = FUN_0008f77c(auStack_4c,iVar6);
      if ((iVar3 != 0) && (local_54 != 0)) {
        *param_2 = local_54;
      }
      if (iVar2 < 0) {
        iVar5 = (iVar5 + 2) - iVar2;
        break;
      }
      iVar5 = iVar5 + iVar2;
    } while (iVar5 < param_3);
  }
  if (local_2c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
}



