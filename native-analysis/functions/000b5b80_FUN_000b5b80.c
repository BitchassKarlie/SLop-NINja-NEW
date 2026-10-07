/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b5b80 FUN_000b5b80 */

bool FUN_000b5b80(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_000b5a58(*(undefined4 *)(param_1 + 0x10));
  bVar2 = param_2 < (uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2) * -0x33333333);
  if (bVar2) {
    *(uint *)(param_1 + 0xc) = param_2;
  }
  return bVar2;
}



