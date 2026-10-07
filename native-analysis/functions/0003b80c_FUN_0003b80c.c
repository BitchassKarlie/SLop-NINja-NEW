/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003b80c FUN_0003b80c */

int * FUN_0003b80c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_0004a8dc();
  iVar2 = DAT_0003b840;
  iVar1 = DAT_0003b83c;
  param_1[0x1d] = DAT_0003b83c;
  param_1[0x1f] = iVar1;
  param_1[0x21] = iVar1;
  *param_1 = iVar2 + 0x3b82c;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined *)(param_1 + 1) = 1;
  return param_1;
}



