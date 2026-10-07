/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099ef0 FUN_00099ef0 */

int * FUN_00099ef0(int *param_1,int **param_2,char *param_3)

{
  size_t sVar1;
  
  *param_1 = DAT_00099f34 + 0x99efa;
  sVar1 = strlen(param_3);
  FUN_00099ddc(param_1,sVar1 + **param_2);
  FUN_00099e28(param_1,*param_2 + 2,**param_2);
  FUN_00099e28(param_1,param_3,sVar1);
  return param_1;
}



