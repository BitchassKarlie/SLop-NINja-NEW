/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b21c FUN_0009b21c */

void FUN_0009b21c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    iVar2 = DAT_0009b254 + 0x9b232;
    do {
      (**(code **)(*piVar1 + 8))(piVar1,param_2,param_3,param_4);
      if (param_2 != 0) {
        FUN_0009f224(param_2,iVar2,1);
      }
      piVar1 = (int *)piVar1[10];
    } while (piVar1 != (int *)0x0);
  }
  return;
}



