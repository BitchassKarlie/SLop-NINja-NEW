/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00080f7c FUN_00080f7c */

void FUN_00080f7c(int param_1,int param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  pvVar1 = operator_new(param_2 * 0x28);
  puVar7 = *(undefined4 **)(param_1 + 8);
  puVar6 = *(undefined4 **)(param_1 + 4);
  iVar4 = (int)puVar7 - (int)puVar6;
  if (puVar6 != (undefined4 *)0x0) {
    if (puVar6 < puVar7) {
      iVar9 = 0;
      puVar10 = puVar6;
      do {
        uVar2 = puVar10[1];
        uVar3 = puVar10[2];
        uVar5 = puVar10[3];
        puVar8 = (undefined4 *)((int)pvVar1 + iVar9);
        iVar9 = iVar9 + 0x28;
        *puVar8 = *puVar10;
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar5;
        uVar2 = puVar10[5];
        uVar3 = puVar10[6];
        uVar5 = puVar10[7];
        puVar11 = puVar10 + 8;
        puVar8[4] = puVar10[4];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar5;
        uVar2 = puVar10[9];
        puVar10 = (undefined4 *)((int)puVar6 + iVar9);
        puVar8[8] = *puVar11;
        puVar8[9] = uVar2;
      } while (puVar10 < puVar7);
      puVar6 = *(undefined4 **)(param_1 + 4);
    }
    operator_delete(puVar6);
  }
  *(void **)(param_1 + 4) = pvVar1;
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar1 + param_2 * 0x28);
  *(void **)(param_1 + 8) = (void *)((int)pvVar1 + (iVar4 >> 3) * 8);
  return;
}



