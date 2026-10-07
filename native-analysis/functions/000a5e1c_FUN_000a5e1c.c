/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a5e1c FUN_000a5e1c */

void FUN_000a5e1c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_000a5e50 + 0xa5e28;
  if (*param_1 != 0) {
    (**(code **)(***(int ***)(iVar2 + DAT_000a5e54) + 0x58))();
    *param_1 = 0;
  }
  if (param_2 != 0) {
    piVar1 = **(int ***)(iVar2 + DAT_000a5e54);
    iVar2 = (**(code **)(*piVar1 + 0x54))(piVar1,param_2);
    *param_1 = iVar2;
  }
  return;
}



