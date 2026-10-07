/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008fe40 FUN_0008fe40 */

void ** FUN_0008fe40(void **param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  if (param_1[0x10b] != (void *)0x0) {
    operator_delete__(param_1[0x10b]);
    param_1[0x10b] = (void *)0x0;
  }
  if (param_1[0x104] != (void *)0x0) {
    operator_delete__(param_1[0x104]);
    param_1[0x104] = (void *)0x0;
  }
  if (*param_1 != (void *)0x0) {
    operator_delete__(*param_1);
    *param_1 = (void *)0x0;
  }
  pvVar3 = param_1[0x102];
  if (pvVar3 != (void *)0x0) {
    pvVar1 = (void *)((int)pvVar3 + *(int *)((int)pvVar3 + -4) * 8);
    pvVar2 = pvVar1;
    if (pvVar3 != pvVar1) {
      do {
        pvVar1 = (void *)((int)pvVar1 + -8);
        FUN_0008fe10(pvVar1);
        pvVar2 = param_1[0x102];
      } while (param_1[0x102] != pvVar1);
    }
    operator_delete__((void *)((int)pvVar2 + -8));
    param_1[0x102] = (void *)0x0;
  }
  return param_1;
}



