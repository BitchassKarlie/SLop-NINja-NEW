/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000abea0 FUN_000abea0 */

void * FUN_000abea0(int param_1,void *param_2,int param_3)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  
  pvVar5 = param_2;
  if (param_3 != 0) {
    pvVar6 = *(void **)(param_1 + 4);
    pvVar4 = *(void **)(param_1 + 8);
    uVar7 = (*(int *)(param_1 + 0xc) - (int)pvVar6 >> 2) * 0x286bca1b;
    uVar1 = param_3 + ((int)pvVar4 - (int)pvVar6 >> 2) * 0x286bca1b;
    if (uVar7 <= uVar1) {
      uVar7 = uVar7 + (uVar7 >> 1);
      if (uVar7 < uVar1) {
        uVar7 = uVar1;
      }
      pvVar6 = operator_new(uVar7 * 0x4c);
      pvVar5 = pvVar6;
      for (pvVar4 = *(void **)(param_1 + 4); pvVar4 < param_2; pvVar4 = (void *)((int)pvVar4 + 0x4c)
          ) {
        FUN_000abfc8(pvVar5,pvVar4);
        FUN_000abe04(pvVar4);
        pvVar5 = (void *)((int)pvVar5 + 0x4c);
      }
      pvVar4 = *(void **)(param_1 + 8);
    }
    pvVar3 = (void *)(param_3 * 0x4c + (int)pvVar5);
    if (param_2 < pvVar4) {
      do {
        FUN_000abfc8(pvVar3,param_2);
        pvVar2 = (void *)((int)param_2 + 0x4c);
        FUN_000abe04(param_2);
        pvVar3 = (void *)((int)pvVar3 + 0x4c);
        param_2 = pvVar2;
      } while (pvVar2 < pvVar4);
    }
    *(void **)(param_1 + 8) = pvVar3;
    if (*(void **)(param_1 + 4) != pvVar6) {
      operator_delete(*(void **)(param_1 + 4));
      *(void **)(param_1 + 4) = pvVar6;
      *(void **)(param_1 + 0xc) = (void *)(uVar7 * 0x4c + (int)pvVar6);
    }
  }
  return pvVar5;
}



