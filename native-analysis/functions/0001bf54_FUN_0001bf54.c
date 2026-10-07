/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001bf54 FUN_0001bf54 */

void FUN_0001bf54(int param_1,int param_2)

{
  void **ppvVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1010) + (uint)*(byte *)(param_2 + 0x35) * 0xc;
  ppvVar1 = (void **)**(void ***)(iVar2 + 4);
  while( true ) {
    if (*(void ***)(iVar2 + 4) == ppvVar1) {
      return;
    }
    if ((void *)param_2 == ppvVar1[2]) break;
    ppvVar1 = (void **)*ppvVar1;
  }
  *(void **)ppvVar1[1] = *ppvVar1;
  *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
  operator_delete(ppvVar1);
  *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  iVar2 = *(int *)(param_1 + 0x808);
  *(int *)(param_1 + (iVar2 + 2) * 4) = param_2;
  *(int *)(param_1 + 0x808) = iVar2 + 1;
  return;
}



