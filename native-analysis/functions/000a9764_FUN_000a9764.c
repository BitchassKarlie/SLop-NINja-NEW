/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a9764 FUN_000a9764 */

void FUN_000a9764(int param_1,void **param_2,void **param_3)

{
  void *__dest;
  void *pvVar1;
  
  pvVar1 = param_3[1];
  param_2[1] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)(param_1 + 3U & 0xfffffffc);
  }
  *param_2 = __dest;
  memcpy(__dest,*param_3,(int)pvVar1 * 4);
  FUN_000a972c((void *)((int)__dest + (int)pvVar1 * 4),param_2,param_3);
  return;
}



