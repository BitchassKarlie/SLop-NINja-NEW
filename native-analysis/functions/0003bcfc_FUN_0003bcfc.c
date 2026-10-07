/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003bcfc FUN_0003bcfc */

int * FUN_0003bcfc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0004a8dc();
  iVar2 = DAT_0003bd3c;
  iVar1 = DAT_0003bd38;
  param_1[0x1d] = param_2;
  *param_1 = iVar1 + 0x3bd1c;
  *(undefined *)((int)param_1 + 0x26) = 0;
  FUN_0008f060(param_1 + 0x1e,8,iVar2 + 0x3bd1a,param_2);
  param_1[0x1c] = DAT_0003bd34;
  return param_1;
}



