/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094abc FUN_00094abc */

void FUN_00094abc(int param_1)

{
  int *piVar1;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(char *)(param_1 + 0x24) == '\0') {
      piVar1 = (int *)(param_1 + 4);
    }
    else {
      piVar1 = *(int **)(param_1 + 4);
    }
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))();
    }
  }
  return;
}



