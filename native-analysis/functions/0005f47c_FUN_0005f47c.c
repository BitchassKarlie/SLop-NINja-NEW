/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005f47c FUN_0005f47c */

void FUN_0005f47c(int param_1)

{
  int *piVar1;
  
  *(undefined *)(param_1 + 0x7f) = *(undefined *)(param_1 + 0x82);
  if (*(char *)(param_1 + 0x72) == '\0') {
    *(undefined *)(param_1 + 0x70) = 0;
  }
  *(undefined *)(param_1 + 0x71) = 0;
  if (*(char *)(param_1 + 0xa4) == '\0') {
    piVar1 = (int *)(param_1 + 0x84);
  }
  else {
    piVar1 = *(int **)(param_1 + 0x84);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  return;
}



