/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b4264 FUN_000b4264 */

void FUN_000b4264(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x38) + 0x14))();
    uVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x1c))();
    FUN_000b6858(param_1,uVar2,uVar1);
    (**(code **)(**(int **)(param_1 + 0x38) + 0x20))();
  }
  return;
}



