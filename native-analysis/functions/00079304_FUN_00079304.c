/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079304 FUN_00079304 */

undefined4 FUN_00079304(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200);
  if (iVar1 < 0) {
    iVar1 = 0;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  *(int *)(param_1 + 200) = iVar1 + param_2;
  return 0;
}



