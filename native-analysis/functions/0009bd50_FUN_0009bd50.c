/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009bd50 FUN_0009bd50 */

int * FUN_0009bd50(int *param_1,char *param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  
  iVar3 = DAT_0009bdac;
  param_1[2] = -1;
  param_1[1] = -1;
  iVar1 = DAT_0009bdb0;
  param_1[3] = 0;
  *param_1 = *(int *)(iVar3 + 0x9bd64 + iVar1) + 8;
  iVar3 = *(int *)(iVar3 + 0x9bd64 + DAT_0009bdb4);
  param_1[5] = iVar3;
  param_1[6] = iVar3;
  sVar2 = strlen(param_2);
  FUN_00099d70(param_1 + 5,param_2,sVar2);
  sVar2 = strlen(param_3);
  FUN_00099d70(param_1 + 6,param_3,sVar2);
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return param_1;
}



