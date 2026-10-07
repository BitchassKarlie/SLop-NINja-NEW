/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00093e6c FUN_00093e6c */

undefined4 * FUN_00093e6c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 4);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      FUN_00093c74(param_1);
      return param_1;
    }
    iVar1 = FUN_00093c34(*piVar2 + 0xc,param_3);
    if (iVar1 != 0) break;
    piVar2 = (int *)piVar2[2];
  }
  *param_1 = 0;
  FUN_0001f2f8(param_1,*piVar2);
  return param_1;
}



