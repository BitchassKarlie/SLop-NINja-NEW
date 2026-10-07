/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007c5c4 FUN_0007c5c4 */

undefined4 * FUN_0007c5c4(undefined4 *param_1,int param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  bool bVar5;
  
  if (param_4 == (void *)0x0) goto LAB_0007c642;
  pvVar3 = *(void **)(param_2 + 8);
  bVar5 = pvVar3 == param_4;
  if (bVar5) {
    pvVar3 = *(void **)((int)param_4 + 0x14);
  }
  if (bVar5) {
    *(void **)(param_2 + 8) = pvVar3;
  }
  iVar4 = *(int *)((int)param_4 + 0x10);
  iVar1 = *(int *)((int)param_4 + 0xc);
  if (iVar4 == iVar1) {
    if (iVar4 != 0) goto LAB_0007c5f2;
    iVar4 = *(int *)((int)param_4 + 0x14);
    if (iVar4 != 0) {
      bVar5 = *(void **)(iVar4 + 0xc) == param_4;
      if (bVar5) {
        *(undefined4 *)(iVar4 + 0xc) = 0;
      }
      if (!bVar5) {
        *(undefined4 *)(iVar4 + 0x10) = 0;
      }
      *(undefined4 *)((int)param_4 + 0x14) = 0;
    }
    operator_delete(param_4);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
    if (*(void **)(param_2 + 4) == param_4) {
      *(undefined4 *)(param_2 + 4) = 0;
    }
  }
  else {
    iVar2 = iVar1;
    if (iVar4 == 0) {
      while (iVar4 = iVar1, iVar4 != 0) {
        iVar2 = iVar4;
        iVar1 = *(int *)(iVar4 + 0x10);
      }
      pvVar3 = *(void **)(iVar2 + 0x14);
      if (pvVar3 == param_4) {
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      else {
        iVar4 = *(int *)(iVar2 + 0xc);
        *(int *)((int)pvVar3 + 0x10) = iVar4;
        if (iVar4 != 0) {
          *(void **)(iVar4 + 0x14) = pvVar3;
        }
        iVar4 = *(int *)((int)param_4 + 0xc);
        *(int *)(iVar2 + 0xc) = iVar4;
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x14) = iVar2;
        }
        iVar4 = *(int *)((int)param_4 + 0x10);
        *(int *)(iVar2 + 0x10) = iVar4;
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x14) = iVar2;
        }
      }
    }
    else {
LAB_0007c5f2:
      do {
        iVar2 = iVar4;
        iVar4 = *(int *)(iVar2 + 0xc);
      } while (*(int *)(iVar2 + 0xc) != 0);
      pvVar3 = *(void **)(iVar2 + 0x14);
      if (pvVar3 != param_4) {
        iVar4 = *(int *)(iVar2 + 0x10);
        *(int *)((int)pvVar3 + 0xc) = iVar4;
        if (iVar4 != 0) {
          *(void **)(iVar4 + 0x14) = pvVar3;
        }
        iVar4 = *(int *)((int)param_4 + 0x10);
        *(int *)(iVar2 + 0x10) = iVar4;
        if (iVar4 != 0) {
          *(int *)(iVar4 + 0x14) = iVar2;
        }
        iVar1 = *(int *)((int)param_4 + 0xc);
      }
      *(int *)(iVar2 + 0xc) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar2;
      }
    }
    iVar4 = *(int *)((int)param_4 + 0x14);
    *(int *)(iVar2 + 0x14) = iVar4;
    if (iVar4 == 0) {
      *(int *)(param_2 + 4) = iVar2;
    }
    else {
      bVar5 = *(void **)(iVar4 + 0xc) == param_4;
      if (bVar5) {
        *(int *)(iVar4 + 0xc) = iVar2;
      }
      if (!bVar5) {
        *(int *)(iVar4 + 0x10) = iVar2;
      }
    }
    operator_delete(param_4);
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + -1;
  }
  do {
    iVar4 = FUN_0007c578(param_2 + 4);
  } while (iVar4 != 0);
LAB_0007c642:
  *param_1 = param_3;
  param_1[1] = param_4;
  return param_1;
}



