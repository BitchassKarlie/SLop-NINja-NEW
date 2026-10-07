/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003cae4 FUN_0003cae4 */

void FUN_0003cae4(int param_1)

{
  int iVar1;
  
  FUN_00017d64(param_1 + 0x68,0);
  iVar1 = DAT_0003cb28 + 0x3cb00;
  *(undefined4 *)(param_1 + 0x88) = DAT_0003cb24;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar1 + DAT_0003cb2c) + 0x40));
    if (*(int **)(param_1 + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x9c) + 4))();
      *(undefined4 *)(param_1 + 0x9c) = 0;
    }
  }
  return;
}



