/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008d6f0 FUN_0008d6f0 */

void FUN_0008d6f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 auStack_48 [13];
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = auStack_48;
  }
  FUN_0008d580(param_2,param_3,param_4,param_5);
  uVar2 = DAT_0008d7b4;
  uVar1 = DAT_0008d7b0;
  uVar9 = param_5[1];
  uVar10 = param_5[2];
  uVar3 = param_5[3];
  uVar4 = param_5[4];
  uVar5 = param_5[5];
  uVar6 = param_5[6];
  uVar7 = param_5[7];
  uVar8 = param_5[8];
  uVar11 = param_5[9];
  uVar12 = param_5[10];
  uVar13 = param_5[0xb];
  *(undefined4 *)(param_1 + 0x104c) = *param_5;
  *(undefined4 *)(param_1 + 0x1050) = uVar9;
  *(undefined4 *)(param_1 + 0x1054) = uVar10;
  *(undefined4 *)(param_1 + 0x1058) = uVar1;
  *(undefined4 *)(param_1 + 0x105c) = uVar3;
  *(undefined4 *)(param_1 + 0x1060) = uVar4;
  *(undefined4 *)(param_1 + 0x1064) = uVar5;
  *(undefined4 *)(param_1 + 0x1068) = uVar1;
  *(undefined4 *)(param_1 + 0x106c) = uVar6;
  *(undefined4 *)(param_1 + 0x1070) = uVar7;
  *(undefined4 *)(param_1 + 0x1074) = uVar8;
  *(undefined4 *)(param_1 + 0x1078) = uVar1;
  *(undefined4 *)(param_1 + 0x107c) = uVar11;
  *(undefined4 *)(param_1 + 0x1080) = uVar12;
  *(undefined4 *)(param_1 + 0x1084) = uVar13;
  *(undefined4 *)(param_1 + 0x1088) = uVar2;
  *(int *)(param_1 + 0x1090) = *(int *)(param_1 + 0x1090) + 1;
  return;
}



