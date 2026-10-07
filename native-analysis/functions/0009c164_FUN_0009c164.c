/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c164 FUN_0009c164 */

int * FUN_0009c164(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0009c1c4;
  param_1[3] = 0;
  param_1[2] = -1;
  param_1[1] = -1;
  iVar3 = DAT_0009c1c8;
  param_1[0xd] = -1;
  param_1[0xc] = -1;
  iVar1 = DAT_0009c1d0;
  iVar3 = *(int *)(iVar2 + 0x9c17a + iVar3);
  iVar2 = *(int *)(iVar2 + 0x9c17a + DAT_0009c1cc);
  param_1[5] = 1;
  param_1[8] = iVar3;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = iVar1 + 0x9c3b2;
  param_1[0xe] = 0;
  param_1[0xb] = iVar2 + 8;
  param_1[0x10] = iVar3;
  param_1[0x11] = iVar3;
  param_1[0xf] = 0;
  param_1[0x13] = (int)(param_1 + 0xb);
  param_1[0x12] = (int)(param_1 + 0xb);
  FUN_0009c068(param_2,param_1);
  return param_1;
}



