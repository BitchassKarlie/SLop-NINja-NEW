/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002a068 FUN_0002a068 */

void FUN_0002a068(int param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined local_1c;
  undefined local_1b;
  undefined local_1a;
  undefined local_19;
  
  puVar6 = *(undefined **)(DAT_0002a140 + 0x2a070 + DAT_0002a144);
  local_1c = *puVar6;
  iVar8 = 0;
  local_1b = puVar6[1];
  local_1a = puVar6[2];
  local_19 = puVar6[3];
  uVar1 = FUN_0009e880(&local_1c);
  uVar3 = *(undefined4 *)(DAT_0002a148 + 0x2a0a6);
  uVar4 = *(undefined4 *)(DAT_0002a148 + 0x2a0aa);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(DAT_0002a148 + 0x2a0a2);
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  *(undefined4 *)(param_1 + 0x140) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(int *)(param_1 + 0x50) = param_2;
  pvVar2 = operator_new__(param_2 * 0x24);
  uVar3 = DAT_0002a134;
  *(void **)(param_1 + 0x5c) = pvVar2;
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  *(undefined4 *)(param_1 + 0x148) = uVar3;
  *(undefined4 *)(param_1 + 0x14c) = uVar3;
  uVar4 = DAT_0002a13c;
  uVar3 = DAT_0002a138;
  if (0 < param_2) {
    iVar7 = 0;
    do {
      iVar7 = iVar7 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8 + 4) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8 + 8) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8 + 0xc) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8 + 0x10) = uVar3;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8 + 0x14) = uVar4;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8 + 0x18) = uVar1;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar8 + 0x1c) = uVar3;
      iVar5 = *(int *)(param_1 + 0x5c) + iVar8;
      iVar8 = iVar8 + 0x24;
      *(undefined4 *)(iVar5 + 0x20) = uVar3;
    } while (iVar7 != param_2);
  }
  return;
}



