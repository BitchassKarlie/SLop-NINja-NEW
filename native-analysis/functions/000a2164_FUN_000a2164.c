/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a2164 FUN_000a2164 */

int * FUN_000a2164(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar7 = param_4;
  puVar1 = (uint *)operator_new(0x18);
  uVar4 = param_5[1];
  uVar2 = *param_5;
  param_5[1] = 0;
  puVar1[1] = uVar4;
  *puVar1 = uVar2;
  puVar1[2] = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  puVar6 = *(uint **)(param_2 + 4);
  if (puVar6 == (uint *)0x0) {
    *(uint **)(param_2 + 4) = puVar1;
    *(uint **)(param_2 + 8) = puVar1;
    goto LAB_000a21ec;
  }
  puVar5 = puVar6;
  if (param_4 == (uint *)0x0) {
    do {
      puVar3 = puVar5;
      puVar5 = (uint *)puVar3[4];
    } while (puVar5 != (uint *)0x0);
    uVar2 = *param_5;
    if (uVar2 <= *puVar3) goto LAB_000a21b2;
LAB_000a21fa:
    do {
      puVar5 = puVar6;
      puVar6 = (uint *)puVar5[4];
    } while ((uint *)puVar5[4] != (uint *)0x0);
    puVar1[5] = (uint)puVar5;
    puVar5[4] = (uint)puVar1;
    *(uint **)(param_2 + 8) = puVar1;
    puVar5 = (uint *)0x0;
  }
  else {
    uVar2 = *param_5;
    if (uVar2 < *param_4) {
      puVar5 = (uint *)param_4[3];
      if (puVar5 == (uint *)0x0) {
        puVar5 = (uint *)0x0;
LAB_000a2234:
        puVar1[5] = (uint)param_4;
        param_4[3] = (uint)puVar1;
        goto LAB_000a21e0;
      }
      if (uVar2 <= *puVar5) goto LAB_000a21b2;
    }
    else {
LAB_000a21b2:
      param_4 = (uint *)0x0;
      puVar5 = puVar6;
      do {
        if (*puVar5 < uVar2) {
          puVar3 = (uint *)puVar5[4];
        }
        else {
          puVar3 = (uint *)puVar5[3];
          param_4 = puVar5;
        }
        puVar5 = puVar3;
      } while (puVar5 != (uint *)0x0);
      if (param_4 == (uint *)0x0) goto LAB_000a21fa;
      puVar5 = (uint *)param_4[3];
      if (puVar5 == (uint *)0x0) goto LAB_000a2234;
    }
    do {
      puVar6 = puVar5;
      puVar5 = (uint *)puVar6[4];
    } while ((uint *)puVar6[4] != (uint *)0x0);
    puVar1[5] = (uint)puVar6;
    puVar6[4] = (uint)puVar1;
    puVar5 = (uint *)0x0;
  }
LAB_000a21e0:
  puVar1[2] = 0;
  FUN_000a20e8(param_2,puVar1,puVar5,0,param_3,puVar7);
LAB_000a21ec:
  *param_1 = param_2;
  param_1[1] = (int)puVar1;
  return param_1;
}



