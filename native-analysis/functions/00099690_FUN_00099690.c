/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099690 FUN_00099690 */

void FUN_00099690(int **param_1,int **param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_00099618(param_1 + 1,0);
  piVar1 = *param_2;
  *param_1 = piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    uVar2 = FUN_00099644();
    FUN_00099618(param_1 + 1,uVar2);
  }
  return;
}



