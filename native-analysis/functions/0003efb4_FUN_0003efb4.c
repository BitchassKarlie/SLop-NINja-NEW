/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003efb4 FUN_0003efb4 */

void FUN_0003efb4(int param_1)

{
  int iVar1;
  
  FUN_00017d64(param_1 + 0x68,0);
  iVar1 = DAT_0003f064;
  FUN_00017d64(param_1 + 0x80,0);
  iVar1 = iVar1 + 0x3efd8;
  FUN_00017d64(param_1 + 0xd0,0);
  if (*(int *)(param_1 + 0xdc) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar1 + DAT_0003f068) + 0x40));
    if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xdc) + 4))();
      *(undefined4 *)(param_1 + 0xdc) = 0;
    }
  }
  if (*(int *)(param_1 + 0xf0) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar1 + DAT_0003f068) + 0x40));
    if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xf0) + 4))();
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
  }
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar1 + DAT_0003f068) + 0x40));
    if (*(int **)(param_1 + 0xf4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xf4) + 4))();
      *(undefined4 *)(param_1 + 0xf4) = 0;
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar1 + DAT_0003f068) + 0x40));
    if (*(int **)(param_1 + 0xe0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xe0) + 4))();
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
  }
  return;
}



