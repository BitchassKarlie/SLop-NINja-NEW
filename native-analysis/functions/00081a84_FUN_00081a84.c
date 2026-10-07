/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00081a84 FUN_00081a84 */

int FUN_00081a84(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  
  FUN_000844c8();
  iVar1 = DAT_00081b4c;
  *(undefined *)(param_1 + 0x73) = 0xff;
  iVar2 = DAT_00081b50;
  *(undefined *)(param_1 + 0x70) = 0;
  uVar3 = DAT_00081b44;
  *(undefined *)(param_1 + 0x71) = 0;
  uVar5 = DAT_00081b48;
  puVar7 = *(undefined **)(iVar1 + 0x81aa0 + iVar2);
  *(undefined *)(param_1 + 0x72) = 0;
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0x73) = puVar7[3];
  *(undefined *)(param_1 + 0x72) = puVar7[2];
  *(undefined *)(param_1 + 0x71) = puVar7[1];
  *(undefined *)(param_1 + 0x70) = *puVar7;
  iVar1 = DAT_00081b54;
  puVar8 = (undefined4 *)(DAT_00081b54 + 0x81ae0);
  uVar4 = *(undefined4 *)(DAT_00081b54 + 0x81ae4);
  uVar6 = *(undefined4 *)(DAT_00081b54 + 0x81ae8);
  *(undefined4 *)(param_1 + 100) = *puVar8;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined *)(param_1 + 0xc) = 1;
  uVar3 = *puVar8;
  uVar5 = *(undefined4 *)(iVar1 + 0x81ae4);
  uVar4 = *(undefined4 *)(iVar1 + 0x81ae8);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar4;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  uVar3 = *(undefined4 *)(iVar1 + 0x81ae4);
  uVar5 = *(undefined4 *)(iVar1 + 0x81ae8);
  *(undefined4 *)(param_1 + 0x10) = *puVar8;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 0x18) = uVar5;
  uVar3 = *(undefined4 *)(iVar1 + 0x81ae4);
  uVar5 = *(undefined4 *)(iVar1 + 0x81ae8);
  *(undefined4 *)(param_1 + 0x1c) = *puVar8;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  FUN_00084cd8(param_1,0);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined *)(param_1 + 0x78) = 0;
  return param_1;
}



