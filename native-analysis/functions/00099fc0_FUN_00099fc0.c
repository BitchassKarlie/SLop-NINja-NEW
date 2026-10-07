/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099fc0 FUN_00099fc0 */

void FUN_00099fc0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00099ff4;
  iVar2 = DAT_00099ff0;
  param_1[2] = -1;
  *param_1 = iVar2 + 0x99fd6;
  iVar2 = DAT_00099ff8;
  param_1[1] = -1;
  param_1[5] = param_2;
  iVar2 = *(int *)(iVar1 + 0x99fd8 + iVar2);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = iVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  return;
}



