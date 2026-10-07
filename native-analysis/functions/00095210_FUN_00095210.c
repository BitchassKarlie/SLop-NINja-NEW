/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00095210 FUN_00095210 */

void FUN_00095210(undefined4 param_1,undefined4 param_2,int **param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_40 [8];
  undefined local_20;
  int local_1c;
  
  iVar1 = DAT_00095274;
  iVar2 = DAT_00095270 + 0x9521e;
  local_1c = **(int **)(iVar2 + DAT_00095274);
  local_20 = 1;
  local_40[0] = 0;
  if (*(char *)(param_3 + 8) != '\0') {
    param_3 = (int **)*param_3;
  }
  if (param_3 != (int **)0x0) {
    (**(code **)((int)*param_3 + 8))(param_3,local_40);
  }
  FUN_000a372c(param_1,param_2,0,0,local_40);
  FUN_00094ce4(local_40);
  if (local_1c == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



