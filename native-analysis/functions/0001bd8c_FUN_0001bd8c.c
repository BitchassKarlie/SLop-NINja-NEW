/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001bd8c FUN_0001bd8c */

undefined4 FUN_0001bd8c(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1010) + param_2 * 0xc;
  iVar2 = **(int **)(iVar3 + 4);
  *param_3 = iVar3;
  param_3[1] = iVar2;
  if (iVar2 == *(int *)(*(int *)(param_1 + 0x1010) + param_2 * 0xc + 4)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 8);
  }
  return uVar1;
}



