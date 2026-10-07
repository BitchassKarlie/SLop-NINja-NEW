/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9a90 FUN_000b9a90 */

undefined4 FUN_000b9a90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x58) < 4) {
    if (*(int *)(param_1 + 0x58) != 3) {
      return 0xffffff7f;
    }
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = FUN_000bbfc4(param_1 + 0x1e0,*(undefined4 *)(param_1 + 0x48));
    }
    else {
      iVar1 = FUN_000bbfc4(param_1 + 0x1e0,
                           *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x60) * 0x20);
    }
    if (iVar1 != 0) {
      return 0xffffff77;
    }
    FUN_000bbfac(param_1 + 0x1e0,param_1 + 0x230);
    *(undefined4 *)(param_1 + 0x58) = 4;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return 0;
}



