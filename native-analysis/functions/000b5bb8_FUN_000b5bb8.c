/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5bb8 FUN_000b5bb8 */

bool FUN_000b5bb8(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  iVar1 = FUN_000b5a58(*(undefined4 *)(param_1 + 0x10));
  return uVar2 < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) * -0x33333333);
}



