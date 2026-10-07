/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007bb48 FUN_0007bb48 */

void FUN_0007bb48(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x14);
  if (*(int **)(param_1 + 0x14) != piVar1) {
    do {
      FUN_0007b9bc(piVar1[2]);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x14));
  }
  return;
}



