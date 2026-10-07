/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1700 FUN_000a1700 */

int * FUN_000a1700(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_000a1734;
  FUN_000b42fc();
  iVar1 = *(int *)(iVar1 + 0xa1712 + DAT_000a1738);
  *param_1 = iVar1 + 8;
  param_1[3] = iVar1 + 0x38;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_000a1594(param_1,param_2);
  return param_1;
}



