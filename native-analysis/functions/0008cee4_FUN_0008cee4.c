/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008cee4 FUN_0008cee4 */

int FUN_0008cee4(int param_1,int *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar1 == 1) {
    iVar1 = FUN_0008cc78(param_1,param_2,param_3);
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0x10) = 1;
      *(undefined *)(param_2 + 4) = 1;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_0008cb8c(param_1,param_2,param_3);
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0x10) = 1;
      *(undefined *)(param_2 + 4) = 1;
    }
  }
  else if (iVar1 == 0) {
    iVar1 = FUN_000aab54(param_2,param_1,param_3);
    *param_3 = -*param_3;
    param_3[1] = -param_3[1];
    param_3[2] = -param_3[2];
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0x10) = 1;
      *(undefined *)(param_2 + 4) = 1;
    }
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0xc))(param_2,param_1,param_3);
  }
  return iVar1;
}



