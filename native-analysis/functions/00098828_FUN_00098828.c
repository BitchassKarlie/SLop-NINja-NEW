/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00098828 FUN_00098828 */

void * FUN_00098828(int param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  
  pvVar2 = param_2;
  if (param_3 != 0) {
    pvVar5 = *(void **)(param_1 + 4);
    pvVar1 = *(void **)(param_1 + 8);
    uVar6 = *(int *)(param_1 + 0xc) - (int)pvVar5;
    uVar3 = (int)pvVar1 + (param_3 - (int)pvVar5);
    if (uVar6 <= uVar3) {
      uVar6 = uVar6 + (uVar6 >> 1);
      if (uVar6 < uVar3) {
        uVar6 = uVar3;
      }
      pvVar5 = operator_new(uVar6);
      pvVar2 = *(void **)(param_1 + 4);
      if (pvVar2 < param_2) {
        iVar4 = 0;
        do {
          *(undefined *)((int)pvVar5 + iVar4) = *(undefined *)((int)pvVar2 + iVar4);
          iVar4 = iVar4 + 1;
        } while (iVar4 != (int)param_2 - (int)pvVar2);
        pvVar1 = *(void **)(param_1 + 8);
        pvVar2 = (void *)((int)pvVar5 + ((int)param_2 - (int)pvVar2));
      }
      else {
        pvVar1 = *(void **)(param_1 + 8);
        pvVar2 = pvVar5;
      }
    }
    param_3 = param_3 + (int)pvVar2;
    if (param_2 < pvVar1) {
      iVar4 = 0;
      do {
        *(undefined *)(param_3 + iVar4) = *(undefined *)((int)param_2 + iVar4);
        iVar4 = iVar4 + 1;
      } while (iVar4 != (int)pvVar1 - (int)param_2);
      param_3 = (int)pvVar1 + (param_3 - (int)param_2);
    }
    *(int *)(param_1 + 8) = param_3;
    if (*(void **)(param_1 + 4) != pvVar5) {
      operator_delete(*(void **)(param_1 + 4));
      *(void **)(param_1 + 4) = pvVar5;
      *(uint *)(param_1 + 0xc) = (int)pvVar5 + uVar6;
    }
  }
  return pvVar2;
}



