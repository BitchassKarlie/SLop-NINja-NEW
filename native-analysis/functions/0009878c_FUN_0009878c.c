/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0009878c FUN_0009878c */

void * FUN_0009878c(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  pvVar1 = *(void **)(param_1 + 0x14);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = operator_new__(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8));
    iVar4 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 8);
    *(void **)(param_1 + 0x14) = pvVar1;
    if (iVar4 != iVar2) {
      iVar3 = 0;
      while( true ) {
        *(undefined *)((int)pvVar1 + iVar3) = *(undefined *)(iVar2 + iVar3);
        iVar3 = iVar3 + 1;
        if (iVar3 == iVar4 - iVar2) break;
        pvVar1 = *(void **)(param_1 + 0x14);
      }
      pvVar1 = *(void **)(param_1 + 0x14);
    }
  }
  return pvVar1;
}



