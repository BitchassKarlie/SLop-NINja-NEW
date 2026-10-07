/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abcc4 FUN_000abcc4 */

int FUN_000abcc4(int param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  FUN_000abca4(param_1,&local_c,4);
  if (local_c != 0) {
    iVar1 = *(int *)(param_1 + 0x40);
    if (local_c - 1U < (uint)((*(int *)(param_1 + 0x44) - iVar1 >> 2) * 0x286bca1b)) {
      iVar2 = (local_c - 1U) * 0x4c;
      *(undefined4 *)(iVar1 + iVar2) = 0;
      return iVar1 + iVar2;
    }
  }
  return 0;
}



