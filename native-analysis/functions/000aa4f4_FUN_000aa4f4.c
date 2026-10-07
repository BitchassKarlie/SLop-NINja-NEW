/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aa4f4 FUN_000aa4f4 */

int * FUN_000aa4f4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = DAT_000aa550;
  *(undefined *)(param_1 + 4) = 0;
  *param_1 = iVar1 + 0xaa52c;
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  param_1[1] = *param_2;
  param_1[2] = iVar1;
  param_1[3] = iVar2;
  iVar1 = param_3[1];
  iVar2 = param_3[2];
  param_1[5] = *param_3;
  param_1[6] = iVar1;
  param_1[7] = iVar2;
  *(undefined *)(param_1 + 4) = 0;
  FUN_000aa460(param_1);
  return param_1;
}



