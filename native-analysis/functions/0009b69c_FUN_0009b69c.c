/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b69c FUN_0009b69c */

int * FUN_0009b69c(int *param_1,char *param_2,char *param_3,char *param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_0009b718 + 0x9b6aa + DAT_0009b71c);
  iVar2 = DAT_0009b720 + 0x9b886;
  param_1[2] = -1;
  param_1[1] = -1;
  param_1[8] = iVar3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[5] = 5;
  *param_1 = iVar2;
  param_1[0xb] = iVar3;
  param_1[0xc] = iVar3;
  param_1[0xd] = iVar3;
  sVar1 = strlen(param_2);
  FUN_00099d70(param_1 + 0xb,param_2,sVar1);
  sVar1 = strlen(param_3);
  FUN_00099d70(param_1 + 0xc,param_3,sVar1);
  sVar1 = strlen(param_4);
  FUN_00099d70(param_1 + 0xd,param_4,sVar1);
  return param_1;
}



