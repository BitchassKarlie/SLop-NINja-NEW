/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0002f528 FUN_0002f528 */

undefined4 FUN_0002f528(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(uint *)(DAT_0002f54c + 0x2f536) < 4) &&
      (iVar3 = *(int *)(DAT_0002f54c + 0x2f582), iVar3 != 0)) &&
     (iVar2 = *(uint *)(DAT_0002f54c + 0x2f536) + 0xe, *(int *)(iVar3 + iVar2 * 4) < param_1)) {
    *(int *)(iVar3 + iVar2 * 4) = param_1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



