/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00077640 FUN_00077640 */

void FUN_00077640(int *param_1)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  iVar4 = DAT_000776ec;
  iVar3 = DAT_000776e8;
  iVar2 = DAT_000776e4;
  *(undefined *)((int)param_1 + 0x2f) = 0xff;
  *(undefined *)((int)param_1 + 0x33) = 0xff;
  param_1[4] = -1;
  iVar6 = DAT_000776f4;
  iVar5 = DAT_000776f0;
  *(undefined *)(param_1 + 0xd) = 1;
  puVar7 = *(undefined **)(iVar4 + 0x77658 + iVar5);
  *param_1 = iVar6 + 0x77674;
  *(undefined *)(param_1 + 0xb) = 0;
  *(undefined *)((int)param_1 + 0x2d) = 0;
  *(undefined *)((int)param_1 + 0x2e) = 0;
  *(undefined *)(param_1 + 0xc) = 0;
  *(undefined *)((int)param_1 + 0x31) = 0;
  *(undefined *)((int)param_1 + 0x32) = 0;
  param_1[1] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  *(undefined *)((int)param_1 + 0x2f) = puVar7[3];
  *(undefined *)((int)param_1 + 0x2e) = puVar7[2];
  *(undefined *)((int)param_1 + 0x2d) = puVar7[1];
  uVar1 = *puVar7;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined *)(param_1 + 0xb) = uVar1;
  *param_1 = iVar6 + 0x7768c;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = iVar2;
  param_1[0x13] = 0;
  param_1[0x17] = iVar2;
  param_1[0x14] = 0;
  param_1[0x18] = iVar3;
  param_1[0x15] = 0;
  param_1[0x19] = iVar2;
  param_1[0x16] = 0;
  param_1[0x1a] = iVar2;
  *(undefined *)(param_1 + 0x1b) = 0;
  return;
}



