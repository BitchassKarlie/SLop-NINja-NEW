/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00029f40 FUN_00029f40 */

void FUN_00029f40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  iVar5 = DAT_0002a04c;
  puVar6 = *(undefined **)(DAT_0002a044 + 0x29f48 + DAT_0002a048);
  local_1c = *puVar6;
  puVar9 = (undefined4 *)(DAT_0002a04c + 0x29f5c);
  local_1b = puVar6[1];
  local_1a = puVar6[2];
  local_19 = puVar6[3];
  uVar1 = FUN_0009e880(&local_1c);
  uVar3 = DAT_0002a038;
  uVar2 = *(undefined4 *)(iVar5 + 0x29f60);
  uVar4 = *(undefined4 *)(iVar5 + 0x29f64);
  *(undefined4 *)(param_1 + 0x138) = *puVar9;
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  *(undefined4 *)(param_1 + 0x148) = uVar3;
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  do {
    uVar3 = *(undefined4 *)(iVar5 + 0x29f60);
    uVar2 = *(undefined4 *)(iVar5 + 0x29f64);
    iVar8 = param_1 + iVar7;
    iVar7 = iVar7 + 0xc;
    *(undefined4 *)(iVar8 + 0x184) = *puVar9;
    *(undefined4 *)(iVar8 + 0x188) = uVar3;
    *(undefined4 *)(iVar8 + 0x18c) = uVar2;
    uVar2 = DAT_0002a040;
    uVar3 = DAT_0002a03c;
  } while (iVar7 != 0x48);
  if (0 < *(int *)(param_1 + 0x50)) {
    iVar7 = 0;
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 4) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 8) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 0xc) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 0x10) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 0x14) = uVar2;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 0x18) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 0x1c) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar7 + 0x20) = uVar3;
      iVar7 = iVar7 + 0x24;
    } while (iVar5 < *(int *)(param_1 + 0x50));
  }
  iVar5 = 0;
  do {
    iVar7 = param_1 + iVar5;
    iVar5 = iVar5 + 4;
    *(undefined4 *)(iVar7 + 0x210) = 0xffffffff;
  } while (iVar5 != 0x2c);
  return;
}



