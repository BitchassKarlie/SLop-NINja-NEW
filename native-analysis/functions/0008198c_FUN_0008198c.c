/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008198c FUN_0008198c */

void FUN_0008198c(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  pvVar1 = operator_new(param_2 * 0x2c);
  pvVar9 = *(void **)(param_1 + 8);
  pvVar8 = *(void **)(param_1 + 4);
  iVar10 = (int)pvVar9 - (int)pvVar8;
  if (pvVar8 != (void *)0x0) {
    if (pvVar8 < pvVar9) {
      iVar5 = 0;
      pvVar6 = pvVar8;
      do {
        puVar11 = (undefined4 *)((int)pvVar8 + iVar5);
        puVar12 = (undefined4 *)((int)pvVar1 + iVar5);
        iVar5 = iVar5 + 0x2c;
        uVar2 = puVar11[1];
        uVar3 = puVar11[2];
        uVar4 = puVar11[3];
        *puVar12 = *puVar11;
        puVar12[1] = uVar2;
        puVar12[2] = uVar3;
        puVar12[3] = uVar4;
        uVar2 = puVar11[5];
        uVar3 = puVar11[6];
        uVar4 = puVar11[7];
        puVar12[4] = puVar11[4];
        puVar12[5] = uVar2;
        puVar12[6] = uVar3;
        puVar12[7] = uVar4;
        uVar2 = puVar11[9];
        uVar3 = puVar11[10];
        puVar12[8] = puVar11[8];
        puVar12[9] = uVar2;
        puVar12[10] = uVar3;
        pvVar7 = (void *)((int)pvVar6 + 0x2c);
        FUN_000812b0(pvVar6);
        pvVar6 = pvVar7;
      } while (pvVar7 < pvVar9);
      pvVar8 = *(void **)(param_1 + 4);
    }
    operator_delete(pvVar8);
  }
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x2c);
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 8) = (void *)((iVar10 >> 2) * 4 + (int)pvVar1);
  return;
}



