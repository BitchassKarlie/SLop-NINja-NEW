/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a8d4 FUN_0009a8d4 */

void FUN_0009a8d4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined auStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_0009a92c;
  iVar4 = DAT_0009a928 + 0x9a8e0;
  local_1c = **(int **)(iVar4 + DAT_0009a92c);
  FUN_0009faf4(auStack_5c,param_2,7);
  iVar2 = FUN_0009f718(auStack_5c);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0009a1f0(param_1,auStack_5c);
    FUN_0009f378(auStack_5c);
  }
  FUN_000ab448(auStack_5c);
  if (local_1c == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}



