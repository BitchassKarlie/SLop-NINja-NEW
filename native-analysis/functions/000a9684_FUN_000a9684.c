/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9684 FUN_000a9684 */

void FUN_000a9684(int param_1,int param_2,int param_3)

{
  void *__dest;
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x24);
  *(int *)(param_2 + 0x24) = iVar1;
  if (iVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(param_1 + 3U & 0xfffffffc);
  }
  *(void **)(param_2 + 0x20) = __dest;
  memcpy(__dest,*(void **)(param_3 + 0x20),iVar1 * 8);
  FUN_000a9648((void *)((int)__dest + iVar1 * 8),param_2,param_3);
  return;
}



