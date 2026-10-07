/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000aeae4 FUN_000aeae4 */

undefined4 * FUN_000aeae4(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  
  puVar8 = param_2;
  if (param_3 != 0) {
    puVar10 = *(undefined4 **)(param_1 + 4);
    puVar9 = *(undefined4 **)(param_1 + 8);
    uVar11 = (*(int *)(param_1 + 0xc) - (int)puVar10 >> 2) * -0x55555555;
    uVar2 = ((int)puVar9 - (int)puVar10 >> 2) * -0x55555555 + param_3;
    if (uVar11 <= uVar2) {
      uVar11 = uVar11 + (uVar11 >> 1);
      if (uVar11 < uVar2) {
        uVar11 = uVar2;
      }
      puVar10 = (undefined4 *)operator_new(uVar11 * 0xc);
      puVar8 = *(undefined4 **)(param_1 + 4);
      if (puVar8 < param_2) {
        iVar5 = 0;
        puVar9 = puVar8;
        do {
          uVar1 = puVar9[1];
          uVar3 = puVar9[2];
          puVar6 = (undefined4 *)((int)puVar10 + iVar5);
          iVar5 = iVar5 + 0xc;
          *puVar6 = *puVar9;
          puVar6[1] = uVar1;
          puVar6[2] = uVar3;
          puVar9 = (undefined4 *)((int)puVar8 + iVar5);
        } while (puVar9 < param_2);
        puVar9 = *(undefined4 **)(param_1 + 8);
        puVar8 = (undefined4 *)((int)puVar10 + iVar5);
      }
      else {
        puVar9 = *(undefined4 **)(param_1 + 8);
        puVar8 = puVar10;
      }
    }
    puVar6 = puVar8 + param_3 * 3;
    if (param_2 < puVar9) {
      iVar5 = 0;
      puVar4 = param_2;
      do {
        uVar1 = puVar4[1];
        uVar3 = puVar4[2];
        puVar7 = (undefined4 *)((int)puVar6 + iVar5);
        iVar5 = iVar5 + 0xc;
        *puVar7 = *puVar4;
        puVar7[1] = uVar1;
        puVar7[2] = uVar3;
        puVar4 = (undefined4 *)((int)param_2 + iVar5);
      } while (puVar4 < puVar9);
      puVar6 = (undefined4 *)((int)puVar6 + iVar5);
    }
    *(undefined4 **)(param_1 + 8) = puVar6;
    if (*(undefined4 **)(param_1 + 4) != puVar10) {
      operator_delete(*(undefined4 **)(param_1 + 4));
      *(undefined4 **)(param_1 + 4) = puVar10;
      *(undefined4 **)(param_1 + 0xc) = puVar10 + uVar11 * 3;
    }
  }
  return puVar8;
}



