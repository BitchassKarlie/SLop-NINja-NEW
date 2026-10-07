/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a6bf8 FUN_000a6bf8 */

void FUN_000a6bf8(undefined4 param_1,undefined4 param_2,void *param_3,void *param_4,char param_5)

{
  undefined4 uVar1;
  undefined auStack_3c [4];
  void *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  void *local_28;
  undefined local_24;
  undefined auStack_20 [4];
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = *(undefined4 *)(DAT_000a6c80 + 0xa6c14);
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_24 = 0;
  local_38 = (void *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_2c = uVar1;
  local_28 = param_3;
  if (param_3 != (void *)0x0) {
    local_24 = 1;
    FUN_000a65e8(uVar1,param_3,auStack_20);
    param_3 = local_1c;
  }
  if (param_4 != (void *)0x0) {
    FUN_000a65e8(uVar1,param_4,auStack_3c);
    param_4 = local_38;
  }
  if (param_5 != '\0') {
    param_5 = '\x01';
  }
  FUN_0009f940(param_3,param_4,param_5);
  if (local_38 != (void *)0x0) {
    operator_delete(local_38);
    local_34 = 0;
    local_30 = 0;
    local_38 = (void *)0x0;
  }
  if (local_1c != (void *)0x0) {
    operator_delete(local_1c);
  }
  return;
}



