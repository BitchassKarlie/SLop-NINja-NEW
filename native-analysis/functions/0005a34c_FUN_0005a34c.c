/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005a34c FUN_0005a34c */

int * FUN_0005a34c(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  
  iVar6 = DAT_0005a4e0;
  FUN_0004a8dc();
  iVar7 = DAT_0005a4f0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *param_1 = iVar7 + 0x5a376;
  param_1[0x2f] = -1;
  param_1[0x2e] = 0;
  FUN_00017d64(param_1 + 0x1a,0);
  FUN_0002fa48(local_24,DAT_0005a4f4 + 0x5a396);
  FUN_00017d64(param_1 + 0x1a,local_24[0]);
  FUN_00017d90(local_24);
  FUN_0002fa48(&local_28,DAT_0005a4f8 + 0x5a3b0);
  FUN_00017d64(param_1 + 0x2b,local_28);
  FUN_00017d90(&local_28);
  FUN_0002fa48(&local_2c,DAT_0005a4fc + 0x5a3cc);
  FUN_00017d64(param_1 + 0x2e,local_2c);
  FUN_00017d90(&local_2c);
  FUN_0002fa48(&local_30,DAT_0005a500 + 0x5a3e8);
  FUN_00017d64(param_1 + 0x2c,local_30);
  FUN_00017d90(&local_30);
  FUN_0002fa48(&local_34,DAT_0005a504 + 0x5a404);
  FUN_00017d64(param_1 + 0x2d,local_34);
  FUN_00017d90(&local_34);
  param_1[0x31] = iVar6;
  uVar4 = (**(code **)(*(int *)param_1[0x1a] + 0x14))();
  uVar5 = (**(code **)(*(int *)param_1[0x1a] + 0x18))();
  iVar7 = DAT_0005a4e8;
  fVar1 = DAT_0005a4e4;
  param_1[5] = (int)(float)(ulonglong)uVar4;
  param_1[6] = (int)(float)(ulonglong)uVar5;
  param_1[7] = iVar7;
  param_1[0x1d] = (int)(float)(ulonglong)uVar4;
  param_1[0x1e] = (int)(float)(ulonglong)uVar5;
  param_1[0x1f] = iVar7;
  fVar2 = DAT_0005a4ec;
  param_1[0x32] = 0;
  *(undefined *)((int)param_1 + 0x26) = 0;
  param_1[0x1c] = iVar6;
  param_1[2] = iVar6;
  param_1[3] = (int)((fVar1 - (float)param_1[6]) * fVar2);
  param_1[4] = iVar6;
  iVar3 = DAT_0005a508;
  *(undefined *)((int)param_1 + 0x27) = 0;
  param_1[0x30] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x1c] = iVar6;
  param_1[0x2a] = iVar7;
  iVar6 = *(int *)(iVar3 + 0x5a4a8);
  iVar7 = *(int *)(iVar3 + 0x5a4ac);
  param_1[0x20] = *(int *)(iVar3 + 0x5a4a4);
  param_1[0x21] = iVar6;
  param_1[0x22] = iVar7;
  param_1[10] = 1;
  return param_1;
}



