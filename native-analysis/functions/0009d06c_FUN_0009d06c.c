/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009d06c FUN_0009d06c */

int * FUN_0009d06c(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar1 = DAT_0009d0a8;
  iVar3 = DAT_0009d0a0 + 0x9d07a;
  *param_1 = DAT_0009d0a4 + 0x9d084;
  pvVar2 = (void *)param_1[6];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[5];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  return param_1;
}



