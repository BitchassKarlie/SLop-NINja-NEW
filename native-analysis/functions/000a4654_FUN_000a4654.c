/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a4654 FUN_000a4654 */

void FUN_000a4654(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  
  iVar1 = DAT_000a467c;
  iVar2 = DAT_000a4678 + 0xa4660;
  **(undefined4 **)(iVar2 + DAT_000a467c) = param_1;
  if (param_2 != 0) {
    local_18 = param_1;
    local_14 = param_2;
    FUN_000a462c(&local_18);
  }
  **(undefined4 **)(iVar2 + iVar1) = 0;
  return;
}



