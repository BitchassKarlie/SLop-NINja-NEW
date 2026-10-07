/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a3ef0 FUN_000a3ef0 */

void FUN_000a3ef0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined *)(param_1 + 6) = 1;
  if (param_3 != 0) {
    *(undefined *)(param_1 + 6) = 0;
    FUN_00017cb8(param_1 + 2);
    FUN_000a3e60(*param_1,param_1[1],param_1 + 2);
  }
  return;
}



