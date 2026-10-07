/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009f860 FUN_0009f860 */

void FUN_0009f860(int **param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *param_1;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    *piVar2 = iVar1 + -1;
    if ((iVar1 + -1 == 0) && (piVar2 = *param_1, piVar2 != (int *)0x0)) {
      FUN_000ac5dc(piVar2);
      operator_delete(piVar2);
    }
  }
  *param_1 = (int *)0x0;
  return;
}



