/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00087e10 FUN_00087e10 */

void FUN_00087e10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar1 = DAT_00087ea8;
  iVar4 = DAT_00087ea4 + 0x87e1e;
  iVar3 = *(int *)(*(int *)(iVar4 + DAT_00087ea8) + 4);
  local_28 = param_1 + iVar3 * 0x10 + 0x20c;
  iVar2 = *(int *)(param_1 + iVar3 * 0x10 + 0x214);
  local_24 = *(int *)(param_1 + iVar3 * 0x10 + 0x210);
  while (local_24 != iVar2) {
    if (*(int *)(local_24 + 0x78) < 0) {
      local_24 = local_24 + 0x7c;
    }
    else {
      FUN_00087dac(&local_30,param_1 + iVar3 * 0x10 + 0x20c,local_28,local_24,local_28,
                   local_24 + 0x7c);
      iVar2 = *(int *)(param_1 + *(int *)(*(int *)(iVar4 + iVar1) + 4) * 0x10 + 0x214);
      local_24 = local_2c;
      local_28 = local_30;
    }
    iVar3 = *(int *)(*(int *)(iVar4 + iVar1) + 4);
  }
  *(undefined4 *)(param_1 + 0x74) = param_2;
  return;
}



