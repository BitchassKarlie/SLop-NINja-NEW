/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007af9c FUN_0007af9c */

void * FUN_0007af9c(int param_1,void *param_2,int param_3)

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
    pvVar3 = *(void **)(param_1 + 8);
    uVar7 = (*(int *)(param_1 + 0xc) - (int)pvVar6 >> 2) * -0x42108421;
    uVar1 = ((int)pvVar3 - (int)pvVar6 >> 2) * -0x42108421 + param_3;
    if (uVar7 <= uVar1) {
      uVar7 = uVar7 + (uVar7 >> 1);
      if (uVar7 < uVar1) {
        uVar7 = uVar1;
      }
      pvVar6 = operator_new(uVar7 * 0x7c);
      pvVar3 = *(void **)(param_1 + 4);
      pvVar5 = pvVar6;
      if (pvVar3 < param_2) {
        do {
          FUN_00079bac(pvVar5,pvVar3);
          pvVar5 = (void *)((int)pvVar5 + 0x7c);
          FUN_00084cd8(pvVar3,0);
          pvVar4 = (void *)((int)pvVar3 + 0x7c);
          FUN_00017d90(pvVar3);
          pvVar3 = pvVar4;
        } while (pvVar4 < param_2);
        pvVar3 = *(void **)(param_1 + 8);
      }
      else {
        pvVar3 = *(void **)(param_1 + 8);
      }
    }
    pvVar4 = (void *)((int)pvVar5 + param_3 * 0x7c);
    if (param_2 < pvVar3) {
      do {
        FUN_00079bac(pvVar4,param_2);
        pvVar4 = (void *)((int)pvVar4 + 0x7c);
        FUN_00084cd8(param_2,0);
        pvVar2 = (void *)((int)param_2 + 0x7c);
        FUN_00017d90(param_2);
        param_2 = pvVar2;
      } while (pvVar2 < pvVar3);
    }
    *(void **)(param_1 + 8) = pvVar4;
    if (*(void **)(param_1 + 4) != pvVar6) {
      operator_delete(*(void **)(param_1 + 4));
      *(void **)(param_1 + 4) = pvVar6;
      *(void **)(param_1 + 0xc) = (void *)((int)pvVar6 + uVar7 * 0x7c);
    }
  }
  return pvVar5;
}



