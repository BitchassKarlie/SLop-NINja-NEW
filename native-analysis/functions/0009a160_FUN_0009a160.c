/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009a160 FUN_0009a160 */

void FUN_0009a160(int param_1)

{
  int *piVar1;
  
  FUN_0009a038();
  while ((piVar1 = *(int **)(param_1 + 0x4c), piVar1 != (int *)(param_1 + 0x2c) &&
         (piVar1 != (int *)0x0))) {
    *(int *)(piVar1[7] + 0x20) = piVar1[8];
    *(int *)(piVar1[8] + 0x1c) = piVar1[7];
    piVar1[8] = 0;
    piVar1[7] = 0;
    (**(code **)(*piVar1 + 4))();
  }
  return;
}



