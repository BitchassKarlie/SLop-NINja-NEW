/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001e148 FUN_0001e148 */

void FUN_0001e148(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar1 = FUN_0007e454();
    FUN_0007d8e8(uVar1,*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x84);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x120) == param_1)) {
    *(undefined4 *)(iVar2 + 0x120) = 0;
  }
  if (*(int *)(DAT_0001e190 + 0x1e952) == param_1) {
    *(undefined4 *)(DAT_0001e190 + 0x1e952) = 0;
  }
  FUN_0008e4e0(param_1);
  return;
}



