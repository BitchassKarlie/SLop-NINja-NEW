/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003e634 FUN_0003e634 */

undefined4 FUN_0003e634(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x7c) + -1;
  *(int *)(param_1 + 0x7c) = iVar2;
  if (iVar2 < 0) {
    iVar2 = FUN_00021680(*(undefined4 *)(param_1 + 0x78));
    *(int *)(param_1 + 0x7c) = *(int *)(iVar2 + 0x22c) + -1;
  }
  uVar1 = FUN_0002285c(0,0,*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  return 1;
}



