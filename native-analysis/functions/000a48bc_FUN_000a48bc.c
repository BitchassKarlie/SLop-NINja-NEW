/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a48bc FUN_000a48bc */

void FUN_000a48bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  
  iVar1 = DAT_000a48e4;
  iVar2 = DAT_000a48e0 + 0xa48c8;
  **(undefined4 **)(iVar2 + DAT_000a48e4) = param_1;
  if (param_2 != 0) {
    local_18 = param_1;
    local_14 = param_2;
    FUN_000a4894(&local_18);
  }
  **(undefined4 **)(iVar2 + iVar1) = 0;
  return;
}



