/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099e68 FUN_00099e68 */

int * FUN_00099e68(int *param_1,char *param_2,int **param_3)

{
  size_t sVar1;
  
  *param_1 = DAT_00099eac + 0x99e72;
  sVar1 = strlen(param_2);
  FUN_00099ddc(param_1,sVar1 + **param_3);
  FUN_00099e28(param_1,param_2,sVar1);
  FUN_00099e28(param_1,*param_3 + 2,**param_3);
  return param_1;
}



