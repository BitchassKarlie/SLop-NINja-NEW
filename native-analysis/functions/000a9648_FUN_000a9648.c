/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9648 FUN_000a9648 */

void FUN_000a9648(int param_1,int param_2,int param_3)

{
  void *__dest;
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x2c);
  *(int *)(param_2 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(param_1 + 3U & 0xfffffffc);
  }
  *(void **)(param_2 + 0x28) = __dest;
  memcpy(__dest,*(void **)(param_3 + 0x28),iVar1 * 0xc);
  FUN_000a9610((void *)((int)__dest + iVar1 * 0xc),param_2,param_3);
  return;
}



