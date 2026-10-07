/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000c3af4 FUN_000c3af4 */

int FUN_000c3af4(void **param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  void *__n;
  void *pvVar3;
  
  pvVar3 = param_1[1];
  if ((int)pvVar3 < 0) {
    iVar1 = 0;
  }
  else {
    pvVar2 = param_1[3];
    if (pvVar2 == (void *)0x0) {
      __n = param_1[2];
    }
    else {
      __n = (void *)((int)param_1[2] - (int)pvVar2);
      param_1[2] = __n;
      if (0 < (int)__n) {
        memmove(*param_1,(void *)((int)*param_1 + (int)pvVar2),(size_t)__n);
        pvVar3 = param_1[1];
        __n = param_1[2];
      }
      param_1[3] = (void *)0x0;
    }
    if ((int)pvVar3 - (int)__n < param_2) {
      pvVar2 = (void *)((int)__n + param_2 + 0x1000);
      if (*param_1 == (void *)0x0) {
        pvVar3 = malloc((size_t)pvVar2);
      }
      else {
        pvVar3 = realloc(*param_1,(size_t)pvVar2);
      }
      if (pvVar3 == (void *)0x0) {
        FUN_000c31a8(param_1);
        return 0;
      }
      __n = param_1[2];
      *param_1 = pvVar3;
      param_1[1] = pvVar2;
    }
    else {
      pvVar3 = *param_1;
    }
    iVar1 = (int)pvVar3 + (int)__n;
  }
  return iVar1;
}



