/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a320 FUN_0009a320 */

void FUN_0009a320(int param_1,int param_2)

{
  *(int *)(param_2 + 0x20) = param_1;
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(*(int *)(param_1 + 0x1c) + 0x20) = param_2;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}



