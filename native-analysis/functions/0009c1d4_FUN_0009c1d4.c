/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c1d4 FUN_0009c1d4 */

int * FUN_0009c1d4(int *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_0009c244;
  iVar4 = DAT_0009c240 + 0x9c1e4;
  param_1[2] = -1;
  param_1[1] = -1;
  param_1[3] = 0;
  iVar3 = DAT_0009c248;
  iVar1 = *(int *)(iVar4 + iVar1);
  param_1[0x10] = -1;
  param_1[8] = iVar1;
  iVar3 = *(int *)(iVar4 + iVar3);
  param_1[0xd] = iVar1;
  param_1[0xe] = 4;
  *param_1 = iVar3 + 8;
  param_1[0xf] = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined *)(param_1 + 0x11) = 0;
  sVar2 = strlen(param_2);
  FUN_00099d70(param_1 + 8,param_2,sVar2);
  iVar1 = DAT_0009c24c;
  *(undefined *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  FUN_00099d70(param_1 + 0xd,iVar1 + 0x9c234,0);
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  return param_1;
}



