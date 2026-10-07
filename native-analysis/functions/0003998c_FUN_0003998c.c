/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003998c FUN_0003998c */

undefined4 * FUN_0003998c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  *(undefined *)(param_1 + 0x14) = *(undefined *)(param_2 + 0x14);
  *(undefined *)((int)param_1 + 0x51) = *(undefined *)((int)param_2 + 0x51);
  *(undefined *)((int)param_1 + 0x52) = *(undefined *)((int)param_2 + 0x52);
  *(undefined *)((int)param_1 + 0x53) = *(undefined *)((int)param_2 + 0x53);
  param_1[0x15] = param_2[0x15];
  *(undefined *)(param_1 + 0x16) = *(undefined *)(param_2 + 0x16);
  *(undefined *)((int)param_1 + 0x59) = *(undefined *)((int)param_2 + 0x59);
  *(undefined *)((int)param_1 + 0x5a) = *(undefined *)((int)param_2 + 0x5a);
  *(undefined *)((int)param_1 + 0x5b) = *(undefined *)((int)param_2 + 0x5b);
  param_1[0x17] = 0;
  FUN_00017d64(param_1 + 0x17,param_2[0x17]);
  return param_1;
}



