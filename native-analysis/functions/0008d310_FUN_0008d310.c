/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d310 FUN_0008d310 */

void FUN_0008d310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar1 = DAT_0008d384;
  iVar7 = 0;
  puVar6 = (undefined4 *)(param_1 + 0x804);
  puVar8 = (undefined4 *)(DAT_0008d384 + 0x8d328);
  do {
    *(undefined *)(puVar6 + 0x10) = 0;
    iVar5 = param_1 + iVar7;
    uVar2 = *(undefined4 *)(iVar1 + 0x8d32c);
    uVar3 = *(undefined4 *)(iVar1 + 0x8d330);
    uVar4 = *(undefined4 *)(iVar1 + 0x8d334);
    iVar7 = iVar7 + 0x848;
    *(undefined4 *)(iVar5 + 4) = *puVar8;
    *(undefined4 *)(iVar5 + 8) = uVar2;
    *(undefined4 *)(iVar5 + 0xc) = uVar3;
    *(undefined4 *)(iVar5 + 0x10) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x8d33c);
    uVar3 = *(undefined4 *)(iVar1 + 0x8d340);
    uVar4 = *(undefined4 *)(iVar1 + 0x8d344);
    *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar1 + 0x8d338);
    *(undefined4 *)(iVar5 + 0x18) = uVar2;
    *(undefined4 *)(iVar5 + 0x1c) = uVar3;
    *(undefined4 *)(iVar5 + 0x20) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x8d34c);
    uVar3 = *(undefined4 *)(iVar1 + 0x8d350);
    uVar4 = *(undefined4 *)(iVar1 + 0x8d354);
    *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar1 + 0x8d348);
    *(undefined4 *)(iVar5 + 0x28) = uVar2;
    *(undefined4 *)(iVar5 + 0x2c) = uVar3;
    *(undefined4 *)(iVar5 + 0x30) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x8d35c);
    uVar3 = *(undefined4 *)(iVar1 + 0x8d360);
    uVar4 = *(undefined4 *)(iVar1 + 0x8d364);
    *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(iVar1 + 0x8d358);
    *(undefined4 *)(iVar5 + 0x38) = uVar2;
    *(undefined4 *)(iVar5 + 0x3c) = uVar3;
    *(undefined4 *)(iVar5 + 0x40) = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x8d32c);
    uVar3 = *(undefined4 *)(iVar1 + 0x8d330);
    uVar4 = *(undefined4 *)(iVar1 + 0x8d334);
    *puVar6 = *puVar8;
    puVar6[1] = uVar2;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x8d33c);
    uVar3 = *(undefined4 *)(iVar1 + 0x8d340);
    uVar4 = *(undefined4 *)(iVar1 + 0x8d344);
    puVar6[4] = *(undefined4 *)(iVar1 + 0x8d338);
    puVar6[5] = uVar2;
    puVar6[6] = uVar3;
    puVar6[7] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x8d34c);
    uVar3 = *(undefined4 *)(iVar1 + 0x8d350);
    uVar4 = *(undefined4 *)(iVar1 + 0x8d354);
    puVar6[8] = *(undefined4 *)(iVar1 + 0x8d348);
    puVar6[9] = uVar2;
    puVar6[10] = uVar3;
    puVar6[0xb] = uVar4;
    uVar2 = *(undefined4 *)(iVar1 + 0x8d35c);
    uVar3 = *(undefined4 *)(iVar1 + 0x8d360);
    uVar4 = *(undefined4 *)(iVar1 + 0x8d364);
    puVar6[0xc] = *(undefined4 *)(iVar1 + 0x8d358);
    puVar6[0xd] = uVar2;
    puVar6[0xe] = uVar3;
    puVar6[0xf] = uVar4;
    puVar6[0x11] = puVar6[0x11] + 1;
    puVar6 = puVar6 + 0x212;
  } while (iVar7 != 0x2120);
  return;
}



