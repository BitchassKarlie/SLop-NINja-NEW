/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003d160 FUN_0003d160 */

undefined4 * FUN_0003d160(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  iVar4 = DAT_0003d270;
  FUN_0003c240(param_1 + 2);
  iVar1 = DAT_0003d278;
  iVar4 = iVar4 + 0x3d182;
  local_1c = *(undefined4 *)(iVar4 + DAT_0003d274);
  local_20 = DAT_0003d278 + 0x3d194;
  *(undefined *)(param_1 + 0xb) = 1;
  param_1[3] = 0;
  (**(code **)(iVar1 + 0x3d19c))(&local_20,param_1 + 3);
  iVar1 = DAT_0003d280;
  local_20 = DAT_0003d27c;
  *(undefined *)(param_1 + 0x14) = 1;
  iVar2 = DAT_0003d284;
  local_20 = local_20 + 0x3d1ae;
  local_24 = *(undefined4 *)(iVar4 + iVar1);
  local_28 = DAT_0003d284 + 0x3d1be;
  param_1[0xc] = 0;
  (**(code **)(iVar2 + 0x3d1c6))(&local_28,param_1 + 0xc);
  iVar1 = DAT_0003d28c;
  local_28 = DAT_0003d288;
  *(undefined *)(param_1 + 0x1d) = 1;
  iVar2 = DAT_0003d290;
  local_28 = local_28 + 0x3d1d4;
  local_2c = *(undefined4 *)(iVar4 + iVar1);
  local_30 = DAT_0003d290 + 0x3d1e4;
  param_1[0x15] = 0;
  (**(code **)(iVar2 + 0x3d1ec))(&local_30,param_1 + 0x15);
  iVar1 = DAT_0003d298;
  local_30 = DAT_0003d294;
  *(undefined *)(param_1 + 0x26) = 1;
  iVar2 = DAT_0003d29c;
  local_30 = local_30 + 0x3d1fa;
  local_34 = *(undefined4 *)(iVar4 + iVar1);
  local_38 = DAT_0003d29c + 0x3d20a;
  param_1[0x1e] = 0;
  (**(code **)(iVar2 + 0x3d212))(&local_38,param_1 + 0x1e);
  iVar4 = DAT_0003d2a0;
  puVar3 = (undefined4 *)(DAT_0003d2a0 + 0x3d216);
  param_1[0x27] = *puVar3;
  param_1[0x28] = *(undefined4 *)(iVar4 + 0x3d21a);
  param_1[0x29] = *(undefined4 *)(iVar4 + 0x3d21e);
  param_1[0x2a] = *puVar3;
  param_1[0x2b] = *(undefined4 *)(iVar4 + 0x3d21a);
  param_1[0x2c] = *(undefined4 *)(iVar4 + 0x3d21e);
  param_1[0x2d] = DAT_0003d26c;
  param_1[0x2e] = *puVar3;
  param_1[0x2f] = *(undefined4 *)(iVar4 + 0x3d21a);
  uVar5 = *(undefined4 *)(iVar4 + 0x3d21e);
  *(undefined *)(param_1 + 0x31) = 0;
  param_1[0x30] = uVar5;
  return param_1;
}



