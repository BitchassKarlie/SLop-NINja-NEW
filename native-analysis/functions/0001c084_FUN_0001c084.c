/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c084 FUN_0001c084 */

void FUN_0001c084(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  uVar2 = (uint)*(byte *)((int)param_2 + 0x35);
  iVar1 = *(int *)(param_1 + 0x1010);
  ppvVar3 = *(void ***)(iVar1 + uVar2 * 0xc + 4);
  ppvVar4 = (void **)*ppvVar3;
  while( true ) {
    if (ppvVar3 == ppvVar4) {
      return;
    }
    if (param_2 == (int *)ppvVar4[2]) break;
    ppvVar4 = (void **)*ppvVar4;
  }
  if (-1 < (int)((uint)*(byte *)(param_2 + 3) << 0x1a)) {
    (**(code **)(*param_2 + 0xc))(param_2);
    if ((int *)ppvVar4[2] != (int *)0x0) {
                    /* WARNING: Load size is inaccurate */
      (**(code **)(*ppvVar4[2] + 4))();
    }
    iVar1 = *(int *)(param_1 + 0x1010);
    uVar2 = (uint)*(byte *)((int)param_2 + 0x35);
  }
  iVar1 = iVar1 + uVar2 * 0xc;
  if ((void **)*(void **)(iVar1 + 4) == ppvVar4) {
    return;
  }
  *(void **)ppvVar4[1] = *ppvVar4;
  *(void **)((int)*ppvVar4 + 4) = ppvVar4[1];
  operator_delete(ppvVar4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  return;
}



