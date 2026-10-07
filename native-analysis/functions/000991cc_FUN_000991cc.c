/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000991cc FUN_000991cc */

int * FUN_000991cc(int *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00099200 + 0x991de;
  memset(param_1 + 4,0,0x80);
  iVar1 = DAT_000991fc;
  param_1[2] = 3;
  param_1[3] = iVar1;
  *(undefined *)(param_1 + 1) = 1;
  *(undefined2 *)((int)param_1 + 6) = 0x3c;
  return param_1;
}



