/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004f6dc FUN_0004f6dc */

void FUN_0004f6dc(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0004f74c + 0x4f6ea;
  if (*(int *)(param_1 + 0xb8) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar1 + DAT_0004f750) + 0x40));
    if (*(int **)(param_1 + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xb8) + 4))();
      *(undefined4 *)(param_1 + 0xb8) = 0;
    }
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar1 + DAT_0004f750) + 0x40));
    if (*(int **)(param_1 + 0xbc) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xbc) + 4))();
      *(undefined4 *)(param_1 + 0xbc) = 0;
    }
  }
  if (*(int *)(param_1 + 0xc4) != 0) {
    FUN_00049d14(*(undefined4 *)(*(int *)(iVar1 + DAT_0004f750) + 0x40));
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 4))();
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
  }
  return;
}



