/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a96bc FUN_000a96bc */

void FUN_000a96bc(int param_1,int param_2,int param_3)

{
  void *__dest;
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  *(int *)(param_2 + 0x1c) = iVar1;
  if (iVar1 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(param_1 + 3U & 0xfffffffc);
  }
  *(void **)(param_2 + 0x18) = __dest;
  memcpy(__dest,*(void **)(param_3 + 0x18),iVar1 * 0x40);
  FUN_000a9684((void *)((int)__dest + iVar1 * 0x40),param_2,param_3);
  return;
}



