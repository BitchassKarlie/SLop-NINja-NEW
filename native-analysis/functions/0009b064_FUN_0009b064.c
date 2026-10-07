/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b064 FUN_0009b064 */

void FUN_0009b064(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *local_60;
  undefined auStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_0009b0dc;
  iVar3 = DAT_0009b0d8 + 0x9b072;
  local_1c = **(int **)(iVar3 + DAT_0009b0dc);
  FUN_0009a694(&local_60);
  FUN_00099d70(param_1 + 0x20,local_60 + 2,*local_60);
  FUN_0009faf4(auStack_5c,*(int *)(param_1 + 0x20) + 8,0);
  uVar2 = FUN_0009aef0(param_1,auStack_5c,param_3);
  FUN_000ab448(auStack_5c);
  if ((local_60 != *(undefined4 **)(iVar3 + DAT_0009b0e0)) && (local_60 != (undefined4 *)0x0)) {
    operator_delete__(local_60);
  }
  if (local_1c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}



