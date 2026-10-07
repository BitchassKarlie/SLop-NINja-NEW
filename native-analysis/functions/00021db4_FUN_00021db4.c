/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00021db4 FUN_00021db4 */

undefined4 * FUN_00021db4(undefined4 *param_1,int *param_2)

{
  *(undefined *)(param_1 + 8) = 1;
  *param_1 = 0;
  (**(code **)(*param_2 + 8))(param_2,param_1);
  return param_1;
}



