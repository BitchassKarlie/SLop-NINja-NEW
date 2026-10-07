/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b2150 FUN_000b2150 */

void FUN_000b2150(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_a0 [16];
  undefined auStack_60 [68];
  
  puVar1 = local_a0;
  iVar8 = DAT_000b2284 + 0xb2166;
  if ((*(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x38) >> 2) * -0xf0f0f0f == 1) {
    iVar5 = *(int *)(param_1 + 0x6c);
    FUN_000b1424(auStack_60,param_1,0);
    FUN_0001d16c(param_2,auStack_60,local_a0);
    if (*(int *)(iVar5 + 4) == 3) {
      puVar2 = (undefined4 *)
               FUN_000b1ee8(*(int *)(iVar5 + 0xc) + 0x18,*(undefined4 *)(iVar5 + 0x10));
      goto LAB_000b21f8;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x6c);
    if (*(int *)(iVar5 + 4) == 3) {
      puVar2 = (undefined4 *)
               FUN_000b1ee8(*(int *)(iVar5 + 0xc) + 0x18,*(undefined4 *)(iVar5 + 0x10));
      puVar1 = param_2;
LAB_000b21f8:
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar7 = puVar1[3];
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar7;
      uVar3 = puVar1[5];
      uVar4 = puVar1[6];
      uVar7 = puVar1[7];
      puVar2[4] = puVar1[4];
      puVar2[5] = uVar3;
      puVar2[6] = uVar4;
      puVar2[7] = uVar7;
      uVar3 = puVar1[9];
      uVar4 = puVar1[10];
      uVar7 = puVar1[0xb];
      puVar2[8] = puVar1[8];
      puVar2[9] = uVar3;
      puVar2[10] = uVar4;
      puVar2[0xb] = uVar7;
      uVar3 = puVar1[0xd];
      uVar4 = puVar1[0xe];
      uVar7 = puVar1[0xf];
      puVar2[0xc] = puVar1[0xc];
      puVar2[0xd] = uVar3;
      puVar2[0xe] = uVar4;
      puVar2[0xf] = uVar7;
      iVar6 = *(int *)(param_1 + 0x70);
      iVar5 = *(int *)(iVar6 + 0xc);
      uVar3 = *(undefined4 *)(iVar6 + 0x10);
      iVar6 = *(int *)(iVar6 + 4);
      goto joined_r0x000b2190;
    }
  }
  iVar6 = *(int *)(param_1 + 0x70);
  iVar5 = *(int *)(iVar6 + 0xc);
  uVar3 = *(undefined4 *)(iVar6 + 0x10);
  iVar6 = *(int *)(iVar6 + 4);
joined_r0x000b2190:
  if (iVar6 == 3) {
    puVar1 = (undefined4 *)FUN_000b1ee8(iVar5 + 0x18,uVar3);
    iVar5 = *(int *)(iVar8 + DAT_000b2288);
    uVar3 = *(undefined4 *)(iVar5 + 0x1050);
    uVar4 = *(undefined4 *)(iVar5 + 0x1054);
    uVar7 = *(undefined4 *)(iVar5 + 0x1058);
    *puVar1 = *(undefined4 *)(iVar5 + 0x104c);
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar7;
    uVar3 = *(undefined4 *)(iVar5 + 0x1060);
    uVar4 = *(undefined4 *)(iVar5 + 0x1064);
    uVar7 = *(undefined4 *)(iVar5 + 0x1068);
    puVar1[4] = *(undefined4 *)(iVar5 + 0x105c);
    puVar1[5] = uVar3;
    puVar1[6] = uVar4;
    puVar1[7] = uVar7;
    uVar3 = *(undefined4 *)(iVar5 + 0x1070);
    uVar4 = *(undefined4 *)(iVar5 + 0x1074);
    uVar7 = *(undefined4 *)(iVar5 + 0x1078);
    puVar1[8] = *(undefined4 *)(iVar5 + 0x106c);
    puVar1[9] = uVar3;
    puVar1[10] = uVar4;
    puVar1[0xb] = uVar7;
    uVar3 = *(undefined4 *)(iVar5 + 0x1080);
    uVar4 = *(undefined4 *)(iVar5 + 0x1084);
    uVar7 = *(undefined4 *)(iVar5 + 0x1088);
    puVar1[0xc] = *(undefined4 *)(iVar5 + 0x107c);
    puVar1[0xd] = uVar3;
    puVar1[0xe] = uVar4;
    puVar1[0xf] = uVar7;
    iVar6 = *(int *)(param_1 + 0x74);
    iVar5 = *(int *)(iVar6 + 0xc);
    uVar3 = *(undefined4 *)(iVar6 + 0x10);
    iVar6 = *(int *)(iVar6 + 4);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x74);
    iVar5 = *(int *)(iVar6 + 0xc);
    uVar3 = *(undefined4 *)(iVar6 + 0x10);
    iVar6 = *(int *)(iVar6 + 4);
  }
  if (iVar6 == 3) {
    puVar1 = (undefined4 *)FUN_000b1ee8(iVar5 + 0x18,uVar3);
    iVar8 = *(int *)(iVar8 + DAT_000b2288);
    uVar3 = *(undefined4 *)(iVar8 + 0x808);
    uVar4 = *(undefined4 *)(iVar8 + 0x80c);
    uVar7 = *(undefined4 *)(iVar8 + 0x810);
    *puVar1 = *(undefined4 *)(iVar8 + 0x804);
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar7;
    uVar3 = *(undefined4 *)(iVar8 + 0x818);
    uVar4 = *(undefined4 *)(iVar8 + 0x81c);
    uVar7 = *(undefined4 *)(iVar8 + 0x820);
    puVar1[4] = *(undefined4 *)(iVar8 + 0x814);
    puVar1[5] = uVar3;
    puVar1[6] = uVar4;
    puVar1[7] = uVar7;
    uVar3 = *(undefined4 *)(iVar8 + 0x828);
    uVar4 = *(undefined4 *)(iVar8 + 0x82c);
    uVar7 = *(undefined4 *)(iVar8 + 0x830);
    puVar1[8] = *(undefined4 *)(iVar8 + 0x824);
    puVar1[9] = uVar3;
    puVar1[10] = uVar4;
    puVar1[0xb] = uVar7;
    uVar3 = *(undefined4 *)(iVar8 + 0x838);
    uVar4 = *(undefined4 *)(iVar8 + 0x83c);
    uVar7 = *(undefined4 *)(iVar8 + 0x840);
    puVar1[0xc] = *(undefined4 *)(iVar8 + 0x834);
    puVar1[0xd] = uVar3;
    puVar1[0xe] = uVar4;
    puVar1[0xf] = uVar7;
  }
  iVar8 = *(int *)(param_1 + 0x48);
  if ((uint)(*(int *)(param_1 + 0x4c) - iVar8) >> 2 != 0) {
    uVar9 = 0;
    do {
      iVar5 = uVar9 * 4;
      uVar9 = uVar9 + 1;
      FUN_000b5be8(*(undefined4 *)(iVar8 + iVar5));
      iVar8 = *(int *)(param_1 + 0x48);
    } while (uVar9 < (uint)(*(int *)(param_1 + 0x4c) - iVar8 >> 2));
  }
  return;
}



