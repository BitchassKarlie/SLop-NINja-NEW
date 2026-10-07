/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000be2c4 FUN_000be2c4 */

undefined4 FUN_000be2c4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 8) < 1) || (iVar2 = FUN_000bdee8(), iVar2 < 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x18) + iVar2 * 4);
  }
  return uVar1;
}



