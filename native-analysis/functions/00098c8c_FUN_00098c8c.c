/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098c8c FUN_00098c8c */

void FUN_00098c8c(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    for (piVar1 = *(int **)(param_1 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      if (param_2 == *piVar1) {
        FUN_00098c2c(param_1 + 4);
        break;
      }
    }
    FUN_00098b50(param_2);
  }
  return;
}



