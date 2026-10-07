/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004d720 FUN_0004d720 */

void FUN_0004d720(int param_1)

{
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(DAT_0004d74c + 0x4d72e + DAT_0004d750) + 0x40));
    if (*(int **)(param_1 + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x94) + 4))();
      *(undefined4 *)(param_1 + 0x94) = 0;
    }
  }
  return;
}



