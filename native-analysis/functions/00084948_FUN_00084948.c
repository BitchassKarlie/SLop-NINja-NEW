/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00084948 FUN_00084948 */

void FUN_00084948(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char acStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_00084990;
  iVar2 = DAT_0008498c + 0x84954;
  local_1c = **(int **)(iVar2 + DAT_00084990);
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    sprintf(acStack_5c,(char *)(DAT_00084994 + 0x84968),param_2);
    FUN_0002fa48(param_1,acStack_5c);
  }
  if (local_1c == **(int **)(iVar2 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



