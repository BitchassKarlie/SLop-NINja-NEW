/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000994e8 FUN_000994e8 */

void FUN_000994e8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_5c [64];
  int local_1c;
  
  iVar1 = DAT_00099534;
  iVar3 = DAT_00099530 + 0x994f4;
  local_1c = **(int **)(iVar3 + DAT_00099534);
  FUN_0009faf4(auStack_5c,param_2,0);
  iVar2 = FUN_0009f718(auStack_5c);
  if (iVar2 != 0) {
    iVar2 = FUN_00099490(param_1,auStack_5c);
  }
  FUN_000ab448(auStack_5c);
  if (local_1c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}



