/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002a980 FUN_0002a980 */

void FUN_0002a980(int param_1)

{
  undefined4 uVar1;
  
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    uVar1 = FUN_0007e454();
    FUN_0007d8e8(uVar1,*(undefined4 *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN_0008e4e0(param_1);
  return;
}



