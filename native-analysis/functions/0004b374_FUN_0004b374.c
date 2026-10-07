/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004b374 FUN_0004b374 */

int FUN_0004b374(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x26) == '\0') {
      *(undefined *)(iVar1 + 0x27) = 1;
    }
    else {
      FUN_00049d14(*(undefined4 *)(*(int *)(DAT_0004b3b0 + 0x4b380 + DAT_0004b3b4) + 0x40));
      if (*(int **)(param_1 + 8) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 8) + 4))();
        *(undefined4 *)(param_1 + 8) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}



