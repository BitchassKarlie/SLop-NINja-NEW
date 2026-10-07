/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009bc20 FUN_0009bc20 */

int * FUN_0009bc20(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0009bc60;
  param_1[3] = 0;
  param_1[2] = -1;
  param_1[1] = -1;
  iVar3 = DAT_0009bc64;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar1 = DAT_0009bc68;
  iVar3 = *(int *)(iVar2 + 0x9bc34 + iVar3);
  param_1[0x10] = -1;
  iVar2 = *(int *)(iVar2 + 0x9bc34 + iVar1);
  param_1[8] = iVar3;
  param_1[0xd] = iVar3;
  *param_1 = iVar2 + 8;
  param_1[0xf] = -1;
  FUN_0009bb60(param_2,param_1);
  return param_1;
}



