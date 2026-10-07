/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00085854 FUN_00085854 */

void * FUN_00085854(int param_1,void *param_2,int param_3)

{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  
  pvVar2 = param_2;
  if (param_3 != 0) {
    pvVar5 = *(void **)(param_1 + 4);
    pvVar1 = *(void **)(param_1 + 8);
    uVar7 = *(int *)(param_1 + 0xc) - (int)pvVar5 >> 2;
    uVar3 = param_3 + ((int)pvVar1 - (int)pvVar5 >> 2);
    if (uVar7 <= uVar3) {
      uVar7 = uVar7 + (uVar7 >> 1);
      if (uVar7 < uVar3) {
        uVar7 = uVar3;
      }
      pvVar5 = operator_new(uVar7 << 2);
      pvVar2 = *(void **)(param_1 + 4);
      if (pvVar2 < param_2) {
        iVar4 = 0;
        do {
          *(undefined4 *)((int)pvVar5 + iVar4) = *(undefined4 *)((int)pvVar2 + iVar4);
          iVar4 = iVar4 + 4;
        } while ((void *)((int)pvVar2 + iVar4) < param_2);
        pvVar1 = *(void **)(param_1 + 8);
        pvVar2 = (void *)((~(uint)pvVar2 + (int)param_2 & 0xfffffffc) + 4 + (int)pvVar5);
      }
      else {
        pvVar1 = *(void **)(param_1 + 8);
        pvVar2 = pvVar5;
      }
    }
    pvVar6 = (void *)((int)pvVar2 + param_3 * 4);
    if (param_2 < pvVar1) {
      iVar4 = 0;
      do {
        *(undefined4 *)((int)pvVar6 + iVar4) = *(undefined4 *)((int)param_2 + iVar4);
        iVar4 = iVar4 + 4;
      } while ((void *)((int)param_2 + iVar4) < pvVar1);
      pvVar6 = (void *)((int)pvVar6 + ((int)pvVar1 + ~(uint)param_2 & 0xfffffffc) + 4);
    }
    *(void **)(param_1 + 8) = pvVar6;
    if (*(void **)(param_1 + 4) != pvVar5) {
      operator_delete(*(void **)(param_1 + 4));
      *(void **)(param_1 + 4) = pvVar5;
      *(void **)(param_1 + 0xc) = (void *)((int)pvVar5 + uVar7 * 4);
    }
  }
  return pvVar2;
}



