/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009be34 FUN_0009be34 */

int * FUN_0009be34(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  
  iVar4 = DAT_0009bea0;
  param_1[3] = 0;
  param_1[2] = -1;
  param_1[1] = -1;
  iVar2 = DAT_0009bea4;
  param_1[0xd] = -1;
  param_1[0xc] = -1;
  iVar1 = DAT_0009beac;
  iVar2 = *(int *)(iVar4 + 0x9be4e + iVar2);
  iVar4 = *(int *)(iVar4 + 0x9be4e + DAT_0009bea8);
  param_1[8] = iVar2;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = iVar4 + 8;
  param_1[0x10] = iVar2;
  param_1[0x11] = iVar2;
  param_1[0xf] = 0;
  param_1[0x13] = (int)(param_1 + 0xb);
  param_1[0x12] = (int)(param_1 + 0xb);
  param_1[5] = 1;
  *param_1 = iVar1 + 0x9c084;
  sVar3 = strlen(param_2);
  FUN_00099d70(param_1 + 8,param_2,sVar3);
  return param_1;
}



