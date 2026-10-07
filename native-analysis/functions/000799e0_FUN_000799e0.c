/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000799e0 FUN_000799e0 */

undefined4 * FUN_000799e0(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint local_30;
  undefined4 *local_2c;
  
  if (param_3 != 0) {
    puVar10 = *(undefined4 **)(param_1 + 4);
    puVar9 = *(undefined4 **)(param_1 + 8);
    local_30 = (*(int *)(param_1 + 0xc) - (int)puVar10 >> 3) * -0x33333333;
    uVar1 = ((int)puVar9 - (int)puVar10 >> 3) * -0x33333333 + param_3;
    local_2c = param_2;
    if (local_30 <= uVar1) {
      local_30 = local_30 + (local_30 >> 1);
      if (local_30 < uVar1) {
        local_30 = uVar1;
      }
      puVar10 = (undefined4 *)operator_new(local_30 * 0x28);
      puVar9 = *(undefined4 **)(param_1 + 4);
      if (puVar9 < param_2) {
        iVar8 = 0;
        puVar7 = puVar9;
        do {
          uVar2 = puVar7[1];
          uVar3 = puVar7[2];
          uVar4 = puVar7[3];
          puVar5 = (undefined4 *)((int)puVar10 + iVar8);
          iVar8 = iVar8 + 0x28;
          *puVar5 = *puVar7;
          puVar5[1] = uVar2;
          puVar5[2] = uVar3;
          puVar5[3] = uVar4;
          uVar2 = puVar7[5];
          uVar3 = puVar7[6];
          uVar4 = puVar7[7];
          puVar6 = puVar7 + 8;
          puVar5[4] = puVar7[4];
          puVar5[5] = uVar2;
          puVar5[6] = uVar3;
          puVar5[7] = uVar4;
          uVar2 = puVar7[9];
          puVar7 = (undefined4 *)((int)puVar9 + iVar8);
          puVar5[8] = *puVar6;
          puVar5[9] = uVar2;
        } while (puVar7 < param_2);
        puVar9 = *(undefined4 **)(param_1 + 8);
        local_2c = (undefined4 *)(iVar8 + (int)puVar10);
      }
      else {
        puVar9 = *(undefined4 **)(param_1 + 8);
        local_2c = puVar10;
      }
    }
    puVar7 = local_2c + param_3 * 10;
    if (param_2 < puVar9) {
      iVar8 = 0;
      puVar5 = param_2;
      do {
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        uVar4 = puVar5[3];
        puVar6 = (undefined4 *)((int)puVar7 + iVar8);
        iVar8 = iVar8 + 0x28;
        *puVar6 = *puVar5;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        uVar2 = puVar5[5];
        uVar3 = puVar5[6];
        uVar4 = puVar5[7];
        puVar11 = puVar5 + 8;
        puVar6[4] = puVar5[4];
        puVar6[5] = uVar2;
        puVar6[6] = uVar3;
        puVar6[7] = uVar4;
        uVar2 = puVar5[9];
        puVar5 = (undefined4 *)((int)param_2 + iVar8);
        puVar6[8] = *puVar11;
        puVar6[9] = uVar2;
      } while (puVar5 < puVar9);
      puVar7 = (undefined4 *)((int)puVar7 + iVar8);
    }
    *(undefined4 **)(param_1 + 8) = puVar7;
    param_2 = local_2c;
    if (*(undefined4 **)(param_1 + 4) != puVar10) {
      operator_delete(*(undefined4 **)(param_1 + 4));
      *(undefined4 **)(param_1 + 4) = puVar10;
      *(undefined4 **)(param_1 + 0xc) = puVar10 + local_30 * 10;
    }
  }
  return param_2;
}



