/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a2ed8 FUN_000a2ed8 */

void FUN_000a2ed8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined auStack_78 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined auStack_58 [4];
  undefined auStack_54 [40];
  int local_2c;
  
  iVar1 = DAT_000a2fdc;
  iVar9 = DAT_000a2fd8 + 0xa2ee6;
  local_2c = **(int **)(iVar9 + DAT_000a2fdc);
  FUN_000abd0c(auStack_54);
  pvVar2 = operator_new(0x60);
  FUN_000946dc(pvVar2,auStack_54);
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = (void *)0x0;
  local_64 = 0;
  local_60 = 0;
  FUN_000a1a08(auStack_78,param_2);
  uVar6 = *(undefined4 *)((int)pvVar2 + 0x48);
  *(undefined4 *)((int)pvVar2 + 0x48) = local_74;
  uVar7 = *(undefined4 *)((int)pvVar2 + 0x4c);
  *(undefined4 *)((int)pvVar2 + 0x4c) = local_70;
  uVar8 = *(undefined4 *)((int)pvVar2 + 0x50);
  *(undefined4 *)((int)pvVar2 + 0x50) = local_6c;
  pvVar3 = *(void **)((int)pvVar2 + 0x54);
  *(void **)((int)pvVar2 + 0x54) = local_68;
  uVar4 = *(undefined4 *)((int)pvVar2 + 0x58);
  *(undefined4 *)((int)pvVar2 + 0x58) = local_64;
  uVar5 = *(undefined4 *)((int)pvVar2 + 0x5c);
  *(undefined4 *)((int)pvVar2 + 0x5c) = local_60;
  local_74 = uVar6;
  local_70 = uVar7;
  local_6c = uVar8;
  local_68 = pvVar3;
  local_64 = uVar4;
  local_60 = uVar5;
  FUN_00094024(pvVar2);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_68 = (void *)0x0;
  }
  FUN_000946b0(auStack_78);
  FUN_000abca4(param_2,&local_5c,4);
  if (local_5c != 0) {
    iVar10 = 0;
    do {
      FUN_000a2e68(auStack_58,param_2);
      iVar10 = iVar10 + 1;
      FUN_00094968(pvVar2,auStack_58);
      FUN_00022234(auStack_58);
    } while (iVar10 != local_5c);
  }
  FUN_000a0670(param_1,pvVar2);
  FUN_0009e858(auStack_54);
  if (local_2c == **(int **)(iVar9 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



