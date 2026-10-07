/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aea14 FUN_000aea14 */

int * FUN_000aea14(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  int local_14;
  
  iVar2 = *(int *)(param_2 + 0x30) + 0xc;
  local_18 = 0;
  local_14 = 0;
  iVar1 = FUN_000ae974(iVar2,param_3,&local_18);
  if (iVar1 == 0) {
    *param_1 = iVar2;
    param_1[1] = 0;
  }
  else {
    *param_1 = local_18;
    param_1[1] = local_14;
  }
  return param_1;
}



