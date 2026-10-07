/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001e0c0 FUN_0001e0c0 */

void FUN_0001e0c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x10;
  iVar2 = *(int *)(param_1 + 0x84);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x120) == param_1)) {
    *(undefined4 *)(iVar2 + 0x120) = 0;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    uVar1 = FUN_0007e454();
    FUN_0007d8e8(uVar1,*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



