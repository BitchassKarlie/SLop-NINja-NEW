/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009b1b8 FUN_0009b1b8 */

int * FUN_0009b1b8(int *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  iVar3 = DAT_0009b20c;
  *param_1 = DAT_0009b208 + 0x9b3e0;
  FUN_0009a160();
  iVar1 = DAT_0009b214;
  iVar3 = iVar3 + 0x9b1d2;
  pvVar2 = (void *)param_1[0x11];
  param_1[0xb] = *(int *)(iVar3 + DAT_0009b210) + 8;
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  pvVar2 = (void *)param_1[0x10];
  if ((pvVar2 != *(void **)(iVar3 + iVar1)) && (pvVar2 != (void *)0x0)) {
    operator_delete__(pvVar2);
  }
  param_1[0xb] = DAT_0009b218 + 0x9b204;
  FUN_0009ac4c(param_1);
  return param_1;
}



