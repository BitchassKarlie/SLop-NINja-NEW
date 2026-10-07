/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5a58 FUN_000b5a58 */

int FUN_000b5a58(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_38;
  int local_34;
  int local_2c;
  
  if (((*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2) * -0x33333333 == 0) &&
     (*(int *)(param_1 + 0xc) != 0)) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x24) - *(int *)(*(int *)(param_1 + 0xc) + 0x20) >> 2
    ;
    FUN_000b5970(param_1 + 0x34,iVar2);
    if (iVar2 != 0) {
      local_38 = 0;
      local_34 = 0;
      do {
        iVar9 = *(int *)(param_1 + 0x38) + local_38;
        iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x20) + local_34 * 4);
        *(int *)(*(int *)(param_1 + 0x38) + local_38) = iVar8;
        iVar1 = (*(int *)(iVar8 + 0x14) - *(int *)(iVar8 + 0x10) >> 3) * -0x33333333;
        FUN_000b5a20(iVar9 + 4,iVar1);
        if (iVar1 != 0) {
          iVar5 = 0;
          iVar7 = 0;
          iVar6 = 0;
          do {
            iVar6 = iVar6 + 1;
            iVar3 = *(int *)(iVar9 + 8) + iVar7;
            iVar4 = *(int *)(iVar8 + 0x10) + iVar5;
            FUN_000b4d6c(iVar3 + 100,*(undefined4 *)(param_1 + 0x20));
            FUN_000b52b0(param_1,iVar4,iVar3);
            FUN_000b52b0(param_1,iVar4 + 8,iVar3 + 0x14);
            FUN_000b52b0(param_1,iVar4 + 0x10,iVar3 + 0x28);
            FUN_000b52b0(param_1,iVar4 + 0x18,iVar3 + 0x3c);
            FUN_000b52b0(param_1,iVar4 + 0x20,iVar3 + 0x50);
            iVar5 = iVar5 + 0x28;
            iVar7 = iVar7 + 0x68;
          } while (iVar6 != iVar1);
        }
        local_34 = local_34 + 1;
        local_38 = local_38 + 0x14;
      } while (local_34 != iVar2);
    }
  }
  local_2c = param_1 + 0x34;
  return local_2c;
}



