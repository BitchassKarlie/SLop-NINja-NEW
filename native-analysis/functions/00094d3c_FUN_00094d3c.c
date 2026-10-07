/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094d3c FUN_00094d3c */

void FUN_00094d3c(int param_1,int **param_2,int **param_3,int **param_4)

{
  int iVar1;
  int ****ppppiVar2;
  int **ppiVar3;
  int iVar4;
  int *local_90 [8];
  char local_70;
  int ****local_6c [8];
  char local_4c;
  int ****local_48 [8];
  char local_28;
  int local_24;
  
  iVar1 = DAT_00094e3c;
  iVar4 = DAT_00094e38 + 0x94d4c;
  local_24 = **(int **)(iVar4 + DAT_00094e3c);
  local_28 = '\x01';
  local_48[0] = (int ****)0x0;
  if (*(char *)(param_2 + 8) != '\0') {
    param_2 = (int **)*param_2;
  }
  if (param_2 == (int **)0x0) {
LAB_00094e30:
    ppppiVar2 = local_48[0];
  }
  else {
    (**(code **)((int)*param_2 + 8))(param_2,local_48);
    ppppiVar2 = (int ****)local_48;
    if (local_28 != '\0') goto LAB_00094e30;
  }
  if (ppppiVar2 != (int ****)0x0) {
    (*(code *)(*ppppiVar2)[2])(ppppiVar2,param_1 + 0xe4);
  }
  FUN_0006c7e8(local_48);
  local_4c = '\x01';
  local_6c[0] = (int ****)0x0;
  if (*(char *)(param_3 + 8) != '\0') {
    param_3 = (int **)*param_3;
  }
  if (param_3 != (int **)0x0) {
    (**(code **)((int)*param_3 + 8))(param_3,local_6c);
    ppppiVar2 = (int ****)local_6c;
    if (local_4c == '\0') goto LAB_00094dc6;
  }
  ppppiVar2 = local_6c[0];
LAB_00094dc6:
  if (ppppiVar2 != (int ****)0x0) {
    (*(code *)(*ppppiVar2)[2])(ppppiVar2,param_1 + 0xc0);
  }
  FUN_0006c814(local_6c);
  local_70 = '\x01';
  local_90[0] = (int *)0x0;
  if (*(char *)(param_4 + 8) != '\0') {
    param_4 = (int **)*param_4;
  }
  if ((param_4 == (int **)0x0) ||
     ((**(code **)((int)*param_4 + 8))(param_4,local_90), ppiVar3 = local_90, local_70 != '\0')) {
    ppiVar3 = (int **)local_90[0];
  }
  if (ppiVar3 != (int **)0x0) {
    (**(code **)((int)*ppiVar3 + 8))(ppiVar3,param_1 + 300);
  }
  FUN_0006c840(local_90);
  if (local_24 == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



