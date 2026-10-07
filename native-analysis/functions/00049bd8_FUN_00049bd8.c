/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00049bd8 FUN_00049bd8 */

void FUN_00049bd8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 4);
  if (*(int **)(param_1 + 4) != piVar1) {
    do {
      (**(code **)(*(int *)piVar1[2] + 0x10))();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 4));
  }
  return;
}



