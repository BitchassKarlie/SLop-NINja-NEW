/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099590 FUN_00099590 */

void FUN_00099590(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_000995dc;
  iVar3 = DAT_000995d8 + 0x9959c;
  local_1c = **(int **)(iVar3 + DAT_000995dc);
  FUN_0009faf4(auStack_5c,param_2,0);
  iVar2 = FUN_0009f718(auStack_5c);
  if (iVar2 != 0) {
    iVar2 = FUN_00099538(param_1,auStack_5c);
  }
  FUN_000ab448(auStack_5c);
  if (local_1c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}



