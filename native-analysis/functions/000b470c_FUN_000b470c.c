/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b470c FUN_000b470c */

void * FUN_000b470c(int param_1,void *param_2,int param_3)

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
    uVar7 = (*(int *)(param_1 + 0xc) - (int)pvVar6 >> 3) * -0x33333333;
    uVar1 = ((int)pvVar4 - (int)pvVar6 >> 3) * -0x33333333 + param_3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar7 + (uVar7 >> 1);
      if (uVar7 < uVar1) {
        uVar7 = uVar1;
      }
      pvVar6 = operator_new(uVar7 * 0x28);
      pvVar5 = pvVar6;
      for (pvVar4 = *(void **)(param_1 + 4); pvVar4 < param_2; pvVar4 = (void *)((int)pvVar4 + 0x28)
          ) {
        FUN_000b4640(pvVar5,pvVar4);
        FUN_000a7d48(pvVar4);
        pvVar5 = (void *)((int)pvVar5 + 0x28);
      }
      pvVar4 = *(void **)(param_1 + 8);
    }
    pvVar3 = (void *)((int)pvVar5 + param_3 * 0x28);
    if (param_2 < pvVar4) {
      do {
        FUN_000b4640(pvVar3,param_2);
        pvVar2 = (void *)((int)param_2 + 0x28);
        FUN_000a7d48(param_2);
        pvVar3 = (void *)((int)pvVar3 + 0x28);
        param_2 = pvVar2;
      } while (pvVar2 < pvVar4);
    }
    *(void **)(param_1 + 8) = pvVar3;
    if (*(void **)(param_1 + 4) != pvVar6) {
      operator_delete(*(void **)(param_1 + 4));
      *(void **)(param_1 + 4) = pvVar6;
      *(void **)(param_1 + 0xc) = (void *)((int)pvVar6 + uVar7 * 0x28);
    }
  }
  return pvVar5;
}



