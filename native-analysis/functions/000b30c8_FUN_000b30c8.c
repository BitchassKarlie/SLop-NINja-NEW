/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b30c8 FUN_000b30c8 */

void FUN_000b30c8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined auStack_68 [4];
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined auStack_58 [40];
  int local_30;
  int local_2c;
  
  iVar1 = DAT_000b3148;
  iVar4 = DAT_000b3144 + 0xb30d6;
  local_2c = **(int **)(iVar4 + DAT_000b3148);
  local_60 = 0;
  local_5c = 0;
  iVar3 = FUN_000b15c8(param_1,param_2,&local_60);
  iVar5 = local_5c;
  uVar2 = local_60;
  if (iVar3 == 0) {
    FUN_0009e7a4(auStack_58,param_2);
    local_30 = iVar3;
    FUN_000b2f68(auStack_68,param_1,uVar2,iVar5,auStack_58);
    FUN_0009e858(auStack_58);
    iVar5 = local_64;
  }
  if (local_2c != **(int **)(iVar4 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar5 + 0x28);
  }
  return;
}



