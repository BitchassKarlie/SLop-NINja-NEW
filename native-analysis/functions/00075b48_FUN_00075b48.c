/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00075b48 FUN_00075b48 */

int * FUN_00075b48(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar6 = param_4;
  puVar1 = (uint *)operator_new(0x18);
  uVar3 = *param_5;
  puVar1[1] = param_5[1];
  *puVar1 = uVar3;
  puVar1[2] = 1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  puVar5 = *(uint **)(param_2 + 4);
  if (puVar5 == (uint *)0x0) {
    *(uint **)(param_2 + 4) = puVar1;
    *(uint **)(param_2 + 8) = puVar1;
    goto LAB_00075bce;
  }
  puVar4 = puVar5;
  if (param_4 == (uint *)0x0) {
    do {
      puVar2 = puVar4;
      puVar4 = (uint *)puVar2[4];
    } while (puVar4 != (uint *)0x0);
    uVar3 = *param_5;
    if (uVar3 <= *puVar2) goto LAB_00075b94;
LAB_00075bdc:
    do {
      puVar4 = puVar5;
      puVar5 = (uint *)puVar4[4];
    } while ((uint *)puVar4[4] != (uint *)0x0);
    puVar1[5] = (uint)puVar4;
    puVar4[4] = (uint)puVar1;
    *(uint **)(param_2 + 8) = puVar1;
    puVar4 = (uint *)0x0;
  }
  else {
    uVar3 = *param_5;
    if (uVar3 < *param_4) {
      puVar4 = (uint *)param_4[3];
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
LAB_00075c16:
        puVar1[5] = (uint)param_4;
        param_4[3] = (uint)puVar1;
        goto LAB_00075bc2;
      }
      if (uVar3 <= *puVar4) goto LAB_00075b94;
    }
    else {
LAB_00075b94:
      param_4 = (uint *)0x0;
      puVar4 = puVar5;
      do {
        if (*puVar4 < uVar3) {
          puVar2 = (uint *)puVar4[4];
        }
        else {
          puVar2 = (uint *)puVar4[3];
          param_4 = puVar4;
        }
        puVar4 = puVar2;
      } while (puVar4 != (uint *)0x0);
      if (param_4 == (uint *)0x0) goto LAB_00075bdc;
      puVar4 = (uint *)param_4[3];
      if (puVar4 == (uint *)0x0) goto LAB_00075c16;
    }
    do {
      puVar5 = puVar4;
      puVar4 = (uint *)puVar5[4];
    } while ((uint *)puVar5[4] != (uint *)0x0);
    puVar1[5] = (uint)puVar5;
    puVar5[4] = (uint)puVar1;
    puVar4 = (uint *)0x0;
  }
LAB_00075bc2:
  puVar1[2] = 0;
  FUN_00075acc(param_2,puVar1,puVar4,0,param_3,puVar6);
LAB_00075bce:
  *param_1 = param_2;
  param_1[1] = (int)puVar1;
  return param_1;
}



