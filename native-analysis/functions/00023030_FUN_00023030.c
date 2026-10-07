/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00023030 FUN_00023030 */

void FUN_00023030(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar1 = FUN_0007e454();
    FUN_0007d8e8(uVar1,*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = FUN_0007e454();
    FUN_0007d8e8(uVar1,*(undefined4 *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x108);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x120) == param_1)) {
    *(undefined4 *)(iVar2 + 0x120) = 0;
  }
  FUN_0008e4e0(param_1);
  return;
}



