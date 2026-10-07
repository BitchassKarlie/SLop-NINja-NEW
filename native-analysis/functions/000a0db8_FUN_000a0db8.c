/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a0db8 FUN_000a0db8 */

int * FUN_000a0db8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_000b6800();
  iVar2 = DAT_000a0df4 + 0xa0e04;
  *param_1 = DAT_000a0df4 + 0xa0dd4;
  param_1[3] = iVar2;
  iVar1 = FUN_000a0390(param_1 + 7);
  param_1[9] = 0;
  iVar2 = DAT_000a0df8;
  param_1[10] = param_2;
  *param_1 = iVar2 + 0xa0dec;
  param_1[3] = iVar2 + 0xa0e1c;
  param_1[8] = iVar1;
  return param_1;
}



