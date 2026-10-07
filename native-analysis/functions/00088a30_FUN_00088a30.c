/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088a30 FUN_00088a30 */

void FUN_00088a30(int param_1)

{
  void *pvVar1;
  void **ppvVar2;
  void *pvVar3;
  void **ppvVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = param_1;
  do {
    ppvVar2 = *(void ***)(iVar5 + 0xb0);
    ppvVar4 = *(void ***)(iVar5 + 0xb4);
    if (ppvVar2 != ppvVar4) {
      do {
        pvVar3 = *ppvVar2;
        if (pvVar3 != (void *)0x0) {
          FUN_00087fe4(pvVar3);
          operator_delete(pvVar3);
          *ppvVar2 = (void *)0x0;
        }
        ppvVar2 = ppvVar2 + 1;
      } while (ppvVar4 != ppvVar2);
      ppvVar4 = *(void ***)(iVar5 + 0xb0);
    }
    iVar6 = iVar6 + 1;
    *(void ***)(iVar5 + 0xb4) = ppvVar4;
    iVar5 = iVar5 + 0x10;
  } while (iVar6 != 4);
  pvVar3 = *(void **)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24c) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_00088848(pvVar3);
    operator_delete(pvVar3);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    pvVar1 = *(void **)((int)pvVar3 + 4);
    *(void **)((int)pvVar3 + 8) = pvVar1;
    if (pvVar1 != (void *)0x0) {
      operator_delete(pvVar1);
    }
    operator_delete(pvVar3);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}



