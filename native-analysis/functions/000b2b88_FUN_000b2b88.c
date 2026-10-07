/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b2b88 FUN_000b2b88 */

void FUN_000b2b88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8c;
  undefined auStack_88 [4];
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined auStack_70 [4];
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined auStack_60 [40];
  undefined auStack_38 [20];
  int local_24;
  
  iVar1 = DAT_000b2c28;
  iVar5 = DAT_000b2c24 + 0xb2b96;
  local_24 = **(int **)(iVar5 + DAT_000b2c28);
  local_68 = 0;
  local_64 = 0;
  iVar3 = FUN_000b154c(param_1,param_2,&local_68);
  iVar4 = local_64;
  uVar2 = local_68;
  if (iVar3 == 0) {
    local_8c = iVar3;
    local_84 = iVar3;
    local_80 = iVar3;
    local_7c = iVar3;
    FUN_0009e7a4(auStack_60,param_2);
    FUN_000b1668(auStack_38,&local_8c);
    local_74 = iVar4;
    local_78 = uVar2;
    FUN_000b2a58(auStack_70,param_1,uVar2,iVar4,auStack_60);
    FUN_000b18ac(auStack_60);
    FUN_000b1848(auStack_88);
    FUN_000a121c(&local_8c);
    iVar4 = local_6c;
  }
  if (local_24 != **(int **)(iVar5 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4 + 0x28);
  }
  return;
}



