/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3b64 FUN_000c3b64 */

undefined4 FUN_000c3b64(void **param_1,void *param_2)

{
  void *pvVar1;
  
  if (param_1 != (void **)0x0) {
    memset(param_1,0,0x168);
    param_1[6] = (void *)0x400;
    param_1[1] = (void *)0x4000;
    pvVar1 = malloc(0x4000);
    *param_1 = pvVar1;
    pvVar1 = malloc((int)param_1[6] << 2);
    param_1[4] = pvVar1;
    pvVar1 = malloc((int)param_1[6] << 3);
    param_1[5] = pvVar1;
    if (((*param_1 != (void *)0x0) && (param_1[4] != (void *)0x0)) && (pvVar1 != (void *)0x0)) {
      param_1[0x54] = param_2;
      return 0;
    }
    FUN_000c3210(param_1);
  }
  return 0xffffffff;
}



