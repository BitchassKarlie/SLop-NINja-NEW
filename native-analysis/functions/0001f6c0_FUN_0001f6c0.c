/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001f6c0 FUN_0001f6c0 */

void FUN_0001f6c0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(param_1 + 0x70);
  if (*(char *)(param_1 + 0x90) != '\0') {
    piVar1 = *(int **)(param_1 + 0x70);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_1);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar2 = FUN_0007e454();
    FUN_0007d8e8(uVar2,*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 0x11;
  return;
}



