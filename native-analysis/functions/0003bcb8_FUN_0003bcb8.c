/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003bcb8 FUN_0003bcb8 */

int * FUN_0003bcb8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0004a8dc();
  iVar2 = DAT_0003bcf8;
  iVar1 = DAT_0003bcf4;
  param_1[0x1d] = param_2;
  *param_1 = iVar1 + 0x3bcd8;
  *(undefined *)((int)param_1 + 0x26) = 0;
  FUN_0008f060(param_1 + 0x1e,8,iVar2 + 0x3bcd6,param_2);
  param_1[0x1c] = DAT_0003bcf0;
  return param_1;
}



