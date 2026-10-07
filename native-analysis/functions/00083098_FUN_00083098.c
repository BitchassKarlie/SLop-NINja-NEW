/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00083098 FUN_00083098 */

undefined * FUN_00083098(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000830d4 + 0x830a8 + DAT_000830d8) + param_2 * 0x50;
  iVar1 = *(int *)(iVar2 + 0x5f0) + param_1 * 0x28;
  if (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x24);
    iVar2 = *(int *)(iVar2 + 0x5f8);
    if (iVar2 + iVar1 * 0xc != 0) {
      return *(undefined **)(iVar2 + iVar1 * 0xc);
    }
  }
  return &UNK_000830d2 + DAT_000830dc;
}



