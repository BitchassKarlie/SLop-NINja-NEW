/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00095c74 FUN_00095c74 */

int * FUN_00095c74(int *param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar1 = *(int *)(DAT_00095d74 + 0x95c80 + DAT_00095d78);
  param_1[1] = 0;
  param_1[0xb] = 0;
  *param_1 = iVar1 + 8;
  param_1[0x14] = 0;
  *(undefined *)(param_1 + 9) = 1;
  *(undefined *)(param_1 + 0x13) = 1;
  *(undefined *)(param_1 + 0x1c) = 1;
  *(undefined *)(param_1 + 0x25) = 1;
  param_1[0x1d] = 0;
  *(undefined *)(param_1 + 0x2e) = 1;
  param_1[0x26] = 0;
  *(undefined *)(param_1 + 0x38) = 1;
  param_1[0x30] = 0;
  *(undefined *)(param_1 + 0x41) = 1;
  param_1[0x39] = 0;
  *(undefined *)(param_1 + 0x4a) = 1;
  param_1[0x42] = 0;
  *(undefined *)(param_1 + 0x53) = 1;
  param_1[0x4b] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined *)(param_1 + 0x61) = 1;
  param_1[0x59] = 0;
  *(undefined *)(param_1 + 0x7a) = 1;
  param_1[0x72] = 0;
  *(undefined *)(param_1 + 0x93) = 1;
  param_1[0x8b] = 0;
  *(undefined *)(param_1 + 0xa4) = 0;
  *(undefined *)((int)param_1 + 0x291) = 0;
  *(undefined *)((int)param_1 + 0x292) = 0;
  *(undefined *)((int)param_1 + 0x293) = 0;
  local_10 = DAT_00095d7c + 0x95d12;
  local_c = DAT_00095d80 + 0x95d16;
  (**(code **)(DAT_00095d7c + 0x95d1a))(&local_10,param_1 + 0xb);
  local_10 = DAT_00095d84 + 0x95d2c;
  local_18 = DAT_00095d88 + 0x95d34;
  local_14 = DAT_00095d8c + 0x95d38;
  (**(code **)(DAT_00095d88 + 0x95d3c))(&local_18,param_1 + 0x14);
  local_18 = DAT_00095d90 + 0x95d4c;
  local_20 = DAT_00095d94 + 0x95d54;
  local_1c = DAT_00095d98 + 0x95d58;
  (**(code **)(DAT_00095d94 + 0x95d5c))(&local_20,param_1 + 1);
  local_20 = DAT_00095d9c + 0x95d6a;
  FUN_00094b68(param_1);
  FUN_00095a84(param_1);
  return param_1;
}



