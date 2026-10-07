/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b9648 FUN_000b9648 */

int FUN_000b9648(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
  }
  if (*(int *)(param_1 + 0x58) < 2) {
    iVar1 = -0x83;
  }
  else if ((*(uint *)(param_1 + 0x70) | *(uint *)(param_1 + 0x74)) == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = __aeabi_ldivmod(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    iVar1 = iVar1 * *(int *)(*(int *)(param_1 + 0x48) + iVar2 * 0x20 + 8);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return iVar1;
}



