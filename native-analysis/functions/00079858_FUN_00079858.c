/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079858 FUN_00079858 */

undefined4 * FUN_00079858(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  puVar3 = param_2;
  if (param_3 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 4);
    puVar1 = *(undefined4 **)(param_1 + 8);
    uVar9 = *(int *)(param_1 + 0xc) - (int)puVar7 >> 5;
    uVar4 = param_3 + ((int)puVar1 - (int)puVar7 >> 5);
    if (uVar9 <= uVar4) {
      uVar9 = uVar9 + (uVar9 >> 1);
      if (uVar9 < uVar4) {
        uVar9 = uVar4;
      }
      puVar7 = (undefined4 *)operator_new(uVar9 << 5);
      puVar2 = *(undefined4 **)(param_1 + 4);
      puVar3 = puVar7;
      puVar1 = puVar2;
      if (puVar2 < param_2) {
        do {
          *puVar3 = *puVar1;
          puVar3[1] = puVar1[1];
          puVar3[2] = puVar1[2];
          puVar3[3] = puVar1[3];
          puVar3[4] = puVar1[4];
          puVar3[5] = puVar1[5];
          puVar3[6] = puVar1[6];
          puVar5 = puVar1 + 8;
          puVar3[7] = puVar1[7];
          puVar3 = puVar3 + 8;
          puVar1 = puVar5;
        } while (puVar5 < param_2);
        puVar1 = *(undefined4 **)(param_1 + 8);
        puVar3 = (undefined4 *)((~(uint)puVar2 + (int)param_2 & 0xffffffe0) + 0x20 + (int)puVar7);
      }
      else {
        puVar1 = *(undefined4 **)(param_1 + 8);
      }
    }
    puVar8 = puVar3 + param_3 * 8;
    puVar2 = puVar8;
    puVar5 = param_2;
    if (param_2 < puVar1) {
      do {
        *puVar2 = *puVar5;
        puVar2[1] = puVar5[1];
        puVar2[2] = puVar5[2];
        puVar2[3] = puVar5[3];
        puVar2[4] = puVar5[4];
        puVar2[5] = puVar5[5];
        puVar2[6] = puVar5[6];
        puVar6 = puVar5 + 8;
        puVar2[7] = puVar5[7];
        puVar2 = puVar2 + 8;
        puVar5 = puVar6;
      } while (puVar6 < puVar1);
      puVar8 = (undefined4 *)((int)puVar8 + ((int)puVar1 + ~(uint)param_2 & 0xffffffe0) + 0x20);
    }
    *(undefined4 **)(param_1 + 8) = puVar8;
    if (*(undefined4 **)(param_1 + 4) != puVar7) {
      operator_delete(*(undefined4 **)(param_1 + 4));
      *(undefined4 **)(param_1 + 4) = puVar7;
      *(undefined4 **)(param_1 + 0xc) = puVar7 + uVar9 * 8;
    }
  }
  return puVar3;
}



