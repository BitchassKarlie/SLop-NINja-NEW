/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a96f4 FUN_000a96f4 */

void FUN_000a96f4(int param_1,int param_2,int param_3)

{
  void *__dest;
  size_t __n;
  
  __n = *(size_t *)(param_3 + 0x14);
  *(size_t *)(param_2 + 0x14) = __n;
  if (__n == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(param_1 + 3U & 0xfffffffc);
  }
  *(void **)(param_2 + 0x10) = __dest;
  memcpy(__dest,*(void **)(param_3 + 0x10),__n);
  FUN_000a96bc((int)__dest + __n,param_2,param_3);
  return;
}



