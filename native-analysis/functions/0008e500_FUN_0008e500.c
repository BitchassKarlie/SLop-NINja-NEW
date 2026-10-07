/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008e500 FUN_0008e500 */

void FUN_0008e500(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_3,param_5);
  }
  return;
}



