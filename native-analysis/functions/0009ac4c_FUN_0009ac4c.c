/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ac4c FUN_0009ac4c */

int * FUN_0009ac4c(int *param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  
  iVar1 = DAT_0009ac88;
  *param_1 = DAT_0009ac84 + 0x9ac5c;
  piVar2 = (int *)param_1[6];
  while (piVar2 != (int *)0x0) {
    iVar4 = *piVar2;
    piVar2 = (int *)piVar2[10];
    (**(code **)(iVar4 + 4))();
  }
  pvVar3 = (void *)param_1[8];
  if ((pvVar3 != *(void **)(iVar1 + 0x9ac60 + DAT_0009ac8c)) && (pvVar3 != (void *)0x0)) {
    operator_delete__(pvVar3);
  }
  return param_1;
}



