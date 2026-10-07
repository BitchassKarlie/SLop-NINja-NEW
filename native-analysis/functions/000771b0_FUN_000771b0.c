/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000771b0 FUN_000771b0 */

void FUN_000771b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 local_44 [16];
  int local_24;
  
  iVar1 = DAT_00077240;
  iVar4 = DAT_0007723c + 0x771be;
  local_24 = **(int **)(iVar4 + DAT_00077240);
  FUN_000a3a68();
  iVar2 = FUN_00094c30();
  if (iVar2 == 1) {
    FUN_000a3a68();
    uVar3 = FUN_000a5890();
    FUN_00076fc8(param_1,uVar3,param_3,param_4,1,0);
  }
  else {
    uVar3 = FUN_000a3a68();
    FUN_00094f90(uVar3,0,local_44,0x1f);
    if ((char)local_44[0] == '\0') {
      local_44[0] = 0x20;
    }
    FUN_00076fc8(param_1,local_44,param_3,param_4,1,0);
  }
  if (local_24 == **(int **)(iVar4 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



