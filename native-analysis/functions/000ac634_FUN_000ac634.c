/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000ac634 FUN_000ac634 */

undefined4 * FUN_000ac634(undefined4 *param_1,int **param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  
  param_1[2] = 0;
  uVar1 = FUN_0008f414(param_4);
  param_1[1] = param_4;
  *param_1 = uVar1;
  FUN_0009f860(param_1 + 2);
  piVar2 = *param_2;
  param_1[2] = piVar2;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  param_1[3] = param_3;
  return param_1;
}



