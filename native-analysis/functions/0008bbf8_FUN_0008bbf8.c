/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008bbf8 FUN_0008bbf8 */

void * FUN_0008bbf8(int param_1,void *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  
  pvVar5 = param_2;
  if (param_3 != 0) {
    pvVar6 = *(void **)(param_1 + 4);
    pvVar4 = *(void **)(param_1 + 8);
    uVar7 = (*(int *)(param_1 + 0xc) - (int)pvVar6 >> 2) * -0x42108421;
    uVar2 = ((int)pvVar4 - (int)pvVar6 >> 2) * -0x42108421 + param_3;
    if (uVar7 <= uVar2) {
      uVar7 = uVar7 + (uVar7 >> 1);
      if (uVar7 < uVar2) {
        uVar7 = uVar2;
      }
      pvVar6 = operator_new(uVar7 * 0x7c);
      pvVar5 = pvVar6;
      for (pvVar4 = *(void **)(param_1 + 4); pvVar4 < param_2; pvVar4 = (void *)((int)pvVar4 + 0x7c)
          ) {
        FUN_00086a14(pvVar5,pvVar4);
        FUN_000223ec((int)pvVar4 + 0xc);
        pvVar5 = (void *)((int)pvVar5 + 0x7c);
      }
      pvVar4 = *(void **)(param_1 + 8);
    }
    pvVar3 = (void *)((int)pvVar5 + param_3 * 0x7c);
    if (param_2 < pvVar4) {
      do {
        FUN_00086a14(pvVar3,param_2);
        iVar1 = (int)param_2 + 0xc;
        param_2 = (void *)((int)param_2 + 0x7c);
        FUN_000223ec(iVar1);
        pvVar3 = (void *)((int)pvVar3 + 0x7c);
      } while (param_2 < pvVar4);
    }
    *(void **)(param_1 + 8) = pvVar3;
    if (*(void **)(param_1 + 4) != pvVar6) {
      operator_delete(*(void **)(param_1 + 4));
      *(void **)(param_1 + 4) = pvVar6;
      *(void **)(param_1 + 0xc) = (void *)((int)pvVar6 + uVar7 * 0x7c);
    }
  }
  return pvVar5;
}



