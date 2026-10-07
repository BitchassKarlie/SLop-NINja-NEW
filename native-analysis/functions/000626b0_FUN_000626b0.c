/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000626b0 FUN_000626b0 */

void FUN_000626b0(int param_1)

{
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(DAT_000626f4 + 0x626be + DAT_000626f8) + 0x40));
    if (*(int **)(param_1 + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x88) + 4))();
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
  }
  FUN_00017d64(param_1 + 0x68,0);
  *(undefined4 *)(param_1 + 0x70) = DAT_000626f0;
  return;
}



