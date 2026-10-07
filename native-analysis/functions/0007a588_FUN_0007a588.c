/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007a588 FUN_0007a588 */

void FUN_0007a588(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char acStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_0007a6ac;
  iVar4 = DAT_0007a6a8 + 0x7a598;
  local_1c = **(int **)(iVar4 + DAT_0007a6ac);
  FUN_0009a8bc(param_2,DAT_0007a6b0 + 0x7a5a4,param_1);
  iVar3 = DAT_0007a6b4;
  param_1[0x30] = *param_1;
  FUN_0009a8bc(param_2,iVar3 + 0x7a5be,param_1 + 1);
  pcVar2 = (char *)FUN_0009a4a0(param_2,DAT_0007a6b8 + 0x7a5c8);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    strcpy((char *)(param_1 + 0x22),pcVar2);
  }
  pcVar2 = (char *)FUN_0009a4a0(param_2,DAT_0007a6bc + 0x7a5dc);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar2 = (char *)(DAT_0007a6e0 + 0x7a698);
  }
  sprintf(acStack_5c,(char *)(DAT_0007a6c0 + 0x7a5f4),pcVar2);
  FUN_00084cd8(param_1 + 0x2a,acStack_5c);
  pcVar2 = (char *)FUN_0009a4a0(param_2,DAT_0007a6c4 + 0x7a608);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar2 = (char *)(DAT_0007a6dc + 0x7a692);
  }
  sprintf(acStack_5c,(char *)(DAT_0007a6c8 + 0x7a61e),pcVar2);
  FUN_00084cd8(param_1 + 0x2c,acStack_5c);
  pcVar2 = (char *)FUN_0009a4a0(param_2,DAT_0007a6cc + 0x7a632);
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    pcVar2 = (char *)(DAT_0007a6d8 + 0x7a68c);
  }
  sprintf(acStack_5c,(char *)(DAT_0007a6d0 + 0x7a648),pcVar2);
  FUN_00084cd8(param_1 + 0x2e,acStack_5c);
  iVar3 = FUN_0009a5d8(param_2,DAT_0007a6d4 + 0x7a65c);
  if (((iVar3 != 0) && (pcVar2 = (char *)FUN_0009a1d4(), pcVar2 != (char *)0x0)) &&
     (*pcVar2 != '\0')) {
    strcpy((char *)(param_1 + 2),pcVar2);
  }
  if (local_1c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



