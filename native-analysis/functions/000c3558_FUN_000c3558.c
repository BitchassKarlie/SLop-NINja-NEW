/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3558 FUN_000c3558 */

undefined4 FUN_000c3558(void **param_1,int param_2)

{
  void *pvVar1;
  
  if ((int)param_1[1] <= param_2 + (int)param_1[2]) {
    pvVar1 = realloc(*param_1,(int)param_1[1] + param_2 + 0x400);
    if (pvVar1 == (void *)0x0) {
      FUN_000c3210(param_1);
      return 0xffffffff;
    }
    *param_1 = pvVar1;
    param_1[1] = (void *)((int)param_1[1] + param_2 + 0x400);
  }
  return 0;
}



