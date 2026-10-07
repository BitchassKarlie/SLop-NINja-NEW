/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0001c368 FUN_0001c368 */

void FUN_0001c368(void **param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pvVar1 = operator_new(0x24);
  FUN_0009376c(pvVar1,param_3);
  param_1[1] = param_3;
  *param_1 = pvVar1;
  param_1[0x408] = param_2;
  pvVar1 = (void *)FUN_00093714(pvVar1,((int)param_2 + 1) * 0xc,DAT_0001c3e4 + 0x1c39e);
  pvVar5 = param_1[0x408];
  if (pvVar5 != (void *)0x0) {
    pvVar4 = (void *)0x0;
    pvVar3 = pvVar1;
    do {
      pvVar4 = (void *)((int)pvVar4 + 1);
      puVar2 = (undefined4 *)operator_new(0xc);
      *puVar2 = local_2c;
      puVar2[1] = uStack_28;
      puVar2[2] = uStack_24;
      *puVar2 = puVar2;
      puVar2[1] = puVar2;
      *(undefined4 **)((int)pvVar3 + 4) = puVar2;
      *(undefined4 *)((int)pvVar3 + 8) = 0;
      pvVar3 = (void *)((int)pvVar3 + 0xc);
    } while (pvVar4 != pvVar5);
  }
  param_1[0x404] = pvVar1;
  FUN_0008e540();
  return;
}



