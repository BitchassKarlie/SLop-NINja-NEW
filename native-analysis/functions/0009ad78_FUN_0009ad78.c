/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009ad78 FUN_0009ad78 */

int * FUN_0009ad78(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar1 = DAT_0009adc8;
  iVar3 = DAT_0009adc0 + 0x9ad86;
  *param_1 = DAT_0009adc4 + 0x9af58;
  pvVar2 = (void *)param_1[0xd];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[0xc];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[0xb];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  FUN_0009ac4c(param_1);
  return param_1;
}



