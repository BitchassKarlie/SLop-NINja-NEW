/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008464c FUN_0008464c */

int FUN_0008464c(char *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 == (char *)0x0) || (*param_1 == '\0')) || (iVar2 = FUN_0008f414(), param_3 == 0))
     || (iVar2 == *param_2)) {
LAB_00084658:
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      if (iVar1 == param_3) goto LAB_00084658;
    } while (iVar2 != param_2[iVar1]);
  }
  return iVar1;
}



