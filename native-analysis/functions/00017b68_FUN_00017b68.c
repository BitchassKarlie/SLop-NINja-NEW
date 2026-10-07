/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00017b68 FUN_00017b68 */

undefined4 FUN_00017b68(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(DAT_00017b8c + 0x17b70 + DAT_00017b90) + 4);
  if (uVar2 < 4) {
    if (-1 < param_1) {
      uVar2 = uVar2 + param_1;
    }
    uVar1 = *(undefined4 *)(DAT_00017b94 + 0x17b82 + uVar2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



