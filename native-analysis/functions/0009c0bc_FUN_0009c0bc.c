/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009c0bc FUN_0009c0bc */

void * FUN_0009c0bc(int param_1)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x20);
  pvVar1 = operator_new(0x50);
  FUN_0009bdb8(pvVar1,iVar2 + 8);
  if (pvVar1 != (void *)0x0) {
    FUN_0009c068(param_1,pvVar1);
  }
  return pvVar1;
}



