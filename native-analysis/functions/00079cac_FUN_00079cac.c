/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00079cac FUN_00079cac */

undefined4 * FUN_00079cac(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *local_2c;
  
  puVar5 = param_2;
  if (param_3 != 0) {
    puVar9 = *(undefined4 **)(param_1 + 4);
    local_2c = *(undefined4 **)(param_1 + 8);
    uVar10 = (*(int *)(param_1 + 0xc) - (int)puVar9 >> 2) * -0x45d1745d;
    uVar3 = ((int)local_2c - (int)puVar9 >> 2) * -0x45d1745d + param_3;
    if (uVar10 <= uVar3) {
      uVar10 = uVar10 + (uVar10 >> 1);
      if (uVar10 < uVar3) {
        uVar10 = uVar3;
      }
      puVar9 = (undefined4 *)operator_new(uVar10 * 0x2c);
      puVar6 = *(undefined4 **)(param_1 + 4);
      puVar8 = puVar9;
      if (puVar6 < param_2) {
        do {
          uVar1 = puVar6[1];
          uVar2 = puVar6[2];
          uVar4 = puVar6[3];
          puVar5 = puVar8 + 0xb;
          *puVar8 = *puVar6;
          puVar8[1] = uVar1;
          puVar8[2] = uVar2;
          puVar8[3] = uVar4;
          uVar1 = puVar6[5];
          uVar2 = puVar6[6];
          uVar4 = puVar6[7];
          puVar8[4] = puVar6[4];
          puVar8[5] = uVar1;
          puVar8[6] = uVar2;
          puVar8[7] = uVar4;
          uVar1 = puVar6[9];
          uVar2 = puVar6[10];
          puVar8[8] = puVar6[8];
          puVar8[9] = uVar1;
          puVar8[10] = uVar2;
          puVar7 = puVar6 + 0xb;
          FUN_000812b0(puVar6);
          puVar6 = puVar7;
          puVar8 = puVar5;
        } while (puVar7 < param_2);
        local_2c = *(undefined4 **)(param_1 + 8);
      }
      else {
        local_2c = *(undefined4 **)(param_1 + 8);
        puVar5 = puVar9;
      }
    }
    puVar8 = puVar5 + param_3 * 0xb;
    puVar6 = puVar8;
    if (param_2 < local_2c) {
      do {
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar4 = param_2[3];
        puVar8 = puVar6 + 0xb;
        *puVar6 = *param_2;
        puVar6[1] = uVar1;
        puVar6[2] = uVar2;
        puVar6[3] = uVar4;
        uVar1 = param_2[5];
        uVar2 = param_2[6];
        uVar4 = param_2[7];
        puVar6[4] = param_2[4];
        puVar6[5] = uVar1;
        puVar6[6] = uVar2;
        puVar6[7] = uVar4;
        uVar1 = param_2[9];
        uVar2 = param_2[10];
        puVar6[8] = param_2[8];
        puVar6[9] = uVar1;
        puVar6[10] = uVar2;
        FUN_000812b0(param_2);
        param_2 = param_2 + 0xb;
        puVar6 = puVar8;
      } while (param_2 < local_2c);
    }
    *(undefined4 **)(param_1 + 8) = puVar8;
    if (*(undefined4 **)(param_1 + 4) != puVar9) {
      operator_delete(*(undefined4 **)(param_1 + 4));
      *(undefined4 **)(param_1 + 4) = puVar9;
      *(undefined4 **)(param_1 + 0xc) = puVar9 + uVar10 * 0xb;
    }
  }
  return puVar5;
}



