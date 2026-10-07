/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099538 FUN_00099538 */

void FUN_00099538(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined auStack_64 [68];
  undefined4 local_20;
  int local_1c;
  
  iVar1 = DAT_0009958c;
  iVar3 = DAT_00099588 + 0x99546;
  local_1c = **(int **)(iVar3 + DAT_0009958c);
  FUN_0009f2b4(param_2,auStack_64,0x48);
  iVar2 = FUN_00099454(auStack_64,param_1);
  if (iVar2 != 0) {
    FUN_00099338(param_1 + 0x40,param_2,local_20);
    iVar2 = 1;
  }
  if (local_1c == **(int **)(iVar3 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}



