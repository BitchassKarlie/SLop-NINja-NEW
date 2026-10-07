/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a4b94 FUN_000a4b94 */

void FUN_000a4b94(void)

{
  int iVar1;
  int in_r3;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 param_5;
  uint param_9;
  undefined auStack_30 [4];
  undefined4 local_2c;
  undefined auStack_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  puVar2 = *(undefined4 **)(DAT_000a4c10 + 0xa4b9e + DAT_000a4c14);
  uVar3 = *puVar2;
  if (param_9 < 2) {
    local_14 = FUN_000a3cf4(uVar3);
    if (local_14 != 0) {
      local_18 = uVar3;
      if (in_r3 == 0) {
        uVar3 = *puVar2;
        FUN_000a4744(auStack_28,uVar3,param_5);
        FUN_000a49f8(&local_18,uVar3,local_24);
      }
      else {
        uVar3 = *puVar2;
        FUN_000a4744(auStack_30,uVar3,param_5);
        local_1c = local_2c;
        local_20 = uVar3;
        iVar1 = FUN_000a409c(&local_20);
        *(undefined *)(iVar1 + 0x4c) = 1;
        FUN_000a4a84(&local_18,local_20,local_1c);
      }
    }
  }
  return;
}



