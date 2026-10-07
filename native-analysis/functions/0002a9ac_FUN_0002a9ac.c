/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002a9ac FUN_0002a9ac */

void FUN_0002a9ac(int param_1)

{
  undefined uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  iVar8 = DAT_0002aab8;
  pvVar2 = operator_new(0x20);
  FUN_0008c4fc();
  uVar4 = DAT_0002aaa8;
  *(void **)(param_1 + 0x38) = pvVar2;
  *(undefined4 *)(param_1 + 0x150) = uVar4;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
  FUN_0002a068(param_1,0xa0);
  iVar7 = DAT_0002aabc;
  uVar4 = DAT_0002aaac;
  *(undefined4 *)(param_1 + 0x154) = DAT_0002aaac;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  puVar5 = *(undefined **)(iVar8 + 0x2a9bc + iVar7);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar8 = DAT_0002aac0;
  uVar3 = DAT_0002aab0;
  puVar10 = (undefined4 *)(DAT_0002aac0 + 0x2aa06);
  *(undefined *)(param_1 + 0x4b) = puVar5[3];
  *(undefined *)(param_1 + 0x4a) = puVar5[2];
  *(undefined *)(param_1 + 0x49) = puVar5[1];
  *(undefined *)(param_1 + 0x48) = *puVar5;
  *(undefined *)(param_1 + 0x47) = puVar5[3];
  *(undefined *)(param_1 + 0x46) = puVar5[2];
  *(undefined *)(param_1 + 0x45) = puVar5[1];
  uVar1 = *puVar5;
  *(undefined4 *)(param_1 + 0x1e0) = uVar3;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined *)(param_1 + 0x44) = uVar1;
  uVar3 = *(undefined4 *)(iVar8 + 0x2aa0a);
  uVar6 = *(undefined4 *)(iVar8 + 0x2aa0e);
  *(undefined4 *)(param_1 + 0x1d4) = *puVar10;
  *(undefined4 *)(param_1 + 0x1d8) = uVar3;
  *(undefined4 *)(param_1 + 0x1dc) = uVar6;
  *(undefined4 *)(param_1 + 0x1f0) = uVar4;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(undefined *)(param_1 + 500) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  do {
    uVar4 = *(undefined4 *)(iVar8 + 0x2aa0a);
    uVar3 = *(undefined4 *)(iVar8 + 0x2aa0e);
    iVar9 = param_1 + iVar7;
    iVar7 = iVar7 + 0xc;
    *(undefined4 *)(iVar9 + 0x184) = *puVar10;
    *(undefined4 *)(iVar9 + 0x188) = uVar4;
    *(undefined4 *)(iVar9 + 0x18c) = uVar3;
  } while (iVar7 != 0x48);
  iVar8 = 0;
  do {
    iVar7 = param_1 + iVar8;
    iVar8 = iVar8 + 4;
    *(undefined4 *)(iVar7 + 0x210) = 0xffffffff;
  } while (iVar8 != 0x2c);
  *(undefined4 *)(param_1 + 0x204) = DAT_0002aab4;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  uVar4 = DAT_0002aaac;
  *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x180) = uVar4;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  return;
}



