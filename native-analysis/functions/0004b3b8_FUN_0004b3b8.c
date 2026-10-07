/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004b3b8 FUN_0004b3b8 */

void * FUN_0004b3b8(undefined4 param_1,undefined4 *param_2)

{
  void *pvVar1;
  undefined **local_40;
  undefined **local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  pvVar1 = operator_new(0x30);
  local_28 = param_2[4];
  local_38 = *param_2;
  local_24 = param_2[5];
  local_20 = param_2[6];
  local_34 = param_2[1];
  local_1c = param_2[7];
  local_18 = param_2[8];
  local_14 = param_2[9];
  local_30 = param_2[2];
  local_2c = *(undefined *)(param_2 + 3);
  *(undefined ****)pvVar1 = &local_40;
  *(undefined ****)((int)pvVar1 + 4) = &local_40;
  *(undefined4 *)((int)pvVar1 + 8) = local_38;
  *(undefined4 *)((int)pvVar1 + 0xc) = local_34;
  *(undefined4 *)((int)pvVar1 + 0x10) = local_30;
  *(undefined *)((int)pvVar1 + 0x14) = local_2c;
  *(undefined4 *)((int)pvVar1 + 0x18) = local_28;
  *(undefined4 *)((int)pvVar1 + 0x1c) = local_24;
  *(undefined4 *)((int)pvVar1 + 0x20) = local_20;
  *(undefined4 *)((int)pvVar1 + 0x24) = local_1c;
  *(undefined4 *)((int)pvVar1 + 0x28) = local_18;
  *(undefined4 *)((int)pvVar1 + 0x2c) = local_14;
  local_40 = (undefined **)&local_40;
  local_3c = (undefined **)&local_40;
  FUN_0004b374(&local_38);
  return pvVar1;
}



