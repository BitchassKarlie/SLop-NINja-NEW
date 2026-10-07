/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093e3c FUN_00093e3c */

undefined4 * FUN_00093e3c(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_2 + 4);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_00093c74(param_1);
      return param_1;
    }
    if (*param_3 == *piVar1) break;
    piVar1 = (int *)piVar1[2];
  }
  *param_1 = 0;
  FUN_0001f2f8(param_1,*piVar1);
  return param_1;
}



