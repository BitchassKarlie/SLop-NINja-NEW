/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006696c FUN_0006696c */

int * FUN_0006696c(int *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  FUN_0004a8dc();
  *param_1 = DAT_00066a28 + 0x66986;
  FUN_00066894(param_1 + 0x1a);
  iVar1 = DAT_00066a10;
  param_1[0x2d] = DAT_00066a0c;
  fVar4 = DAT_00066a20;
  fVar3 = DAT_00066a1c;
  fVar5 = DAT_00066a18;
  iVar2 = DAT_00066a14;
  param_1[5] = DAT_00066a14;
  param_1[6] = iVar1;
  param_1[7] = iVar2;
  fVar5 = ((float)param_1[6] + fVar5) * fVar3 - DAT_00066a24;
  param_1[2] = (int)((fVar4 - (float)param_1[5]) * fVar3 - DAT_00066a24);
  param_1[3] = (int)fVar5;
  param_1[4] = iVar2;
  *(undefined *)((int)param_1 + 0x26) = 0;
  *(undefined *)(param_1 + 0x2f) = 0;
  FUN_000667f4(param_1);
  return param_1;
}



