/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aae94 FUN_000aae94 */

int FUN_000aae94(int param_1,int *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (iVar1 == 1) {
    iVar1 = FUN_000aab54(param_1,param_2,param_3);
    *param_3 = -*param_3;
    param_3[1] = -param_3[1];
    param_3[2] = -param_3[2];
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0x10) = 1;
      *(undefined *)(param_2 + 4) = 1;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_000aa7b0(param_1,param_2,param_3);
    *param_3 = -*param_3;
    param_3[1] = -param_3[1];
    param_3[2] = -param_3[2];
    if (iVar1 != 0) {
      *(undefined *)(param_1 + 0x10) = 1;
      *(undefined *)(param_2 + 4) = 1;
    }
  }
  else if (iVar1 == 0) {
    iVar1 = FUN_000aa684(param_1,param_2,param_3);
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



