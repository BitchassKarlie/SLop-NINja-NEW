/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00069964 FUN_00069964 */

undefined4 * FUN_00069964(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 *puVar10;
  undefined local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  
  uVar2 = DAT_00069ad8;
  uVar1 = DAT_00069ad4;
  iVar8 = 0;
  param_1[7] = 0;
  param_1[8] = uVar1;
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar2;
  FUN_00083d08(param_1 + 0xd);
  param_1[0x17] = 0;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar2;
  param_1[0x1d] = 0;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = uVar1;
  param_1[0x20] = uVar2;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar2;
  FUN_00083d08(param_1 + 0x23);
  FUN_00083d08(param_1 + 0x32);
  param_1[0x3c] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = uVar1;
  param_1[0x46] = uVar1;
  param_1[0x47] = uVar2;
  param_1[0x48] = uVar1;
  param_1[0x49] = uVar2;
  iVar3 = DAT_00069adc;
  FUN_00083d08(param_1 + 0x4a);
  uVar5 = FUN_0006978c(param_1 + 0x54);
  iVar4 = DAT_00069ae0;
  param_1[0x56] = 0;
  param_1[0x55] = uVar5;
  uVar5 = *(undefined4 *)(iVar4 + 0x69a10);
  uVar6 = *(undefined4 *)(iVar4 + 0x69a14);
  uVar7 = *(undefined4 *)(iVar4 + 0x69a18);
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar2;
  *(undefined *)(param_1 + 3) = 1;
  param_1[0x3f] = uVar1;
  iVar4 = DAT_00069ae4;
  param_1[0x3d] = uVar1;
  *param_1 = uVar5;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[0x40] = uVar2;
  param_1[0xe7] = 0;
  param_1[0x3e] = uVar2;
  uVar5 = *(undefined4 *)(iVar3 + 0x69a12 + iVar4);
  param_1[0x2f] = uVar2;
  param_1[0x30] = uVar1;
  param_1[0x1c] = uVar2;
  param_1[0x1b] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x17] = uVar5;
  param_1[0x19] = uVar1;
  param_1[0x18] = uVar2;
  param_1[0x22] = uVar2;
  param_1[0x21] = uVar1;
  param_1[0x20] = uVar2;
  param_1[0x1f] = uVar1;
  param_1[0x1e] = uVar2;
  param_1[0x1d] = uVar5;
  param_1[0x35] = uVar1;
  puVar9 = *(undefined **)(iVar3 + 0x69a12 + DAT_00069ae8);
  puVar10 = param_1;
  do {
    local_24 = *puVar9;
    iVar8 = iVar8 + 1;
    local_23 = puVar9[1];
    local_22 = puVar9[2];
    local_21 = puVar9[3];
    uVar5 = FUN_0009e880(&local_24);
    puVar10[0x5b] = uVar1;
    puVar10[0x5a] = uVar1;
    puVar10[0x59] = uVar1;
    puVar10[0x58] = uVar1;
    puVar10[0x57] = uVar1;
    puVar10[0x5c] = uVar2;
    puVar10[0x5d] = uVar5;
    puVar10 = puVar10 + 9;
  } while (iVar8 != 0x10);
  return param_1;
}



