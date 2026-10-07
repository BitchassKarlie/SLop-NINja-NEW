/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006e8d0 FUN_0006e8d0 */

int * FUN_0006e8d0(int *param_1,int param_2,undefined2 param_3,undefined2 param_4,int param_5,
                  int param_6)

{
  int iVar1;
  
  FUN_00095dd0(param_1,0x65,0x24);
  iVar1 = DAT_0006e904;
  param_1[5] = param_2;
  param_1[7] = param_5;
  *(undefined2 *)(param_1 + 6) = param_3;
  *param_1 = iVar1 + 0x6e8fc;
  *(undefined2 *)((int)param_1 + 0x1a) = param_4;
  param_1[8] = param_6;
  return param_1;
}



