/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00099b04 FUN_00099b04 */

int * FUN_00099b04(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  puVar1 = (uint *)operator_new(0x1c);
  uVar5 = *param_5;
  local_34 = 0;
  uVar6 = param_5[1];
  FUN_00099618(&local_34,param_5[2]);
  local_30 = 1;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  *puVar1 = uVar5;
  puVar1[2] = 0;
  puVar1[1] = uVar6;
  FUN_00099618(puVar1 + 2,local_34);
  puVar1[3] = local_30;
  puVar1[4] = local_2c;
  puVar1[5] = local_28;
  puVar1[6] = local_24;
  iVar2 = FUN_000a75e0(&local_34,0);
  if (iVar2 != 0) {
    FUN_00017d24();
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  puVar7 = *(uint **)(param_2 + 4);
  if (puVar7 == (uint *)0x0) {
    *(uint **)(param_2 + 4) = puVar1;
    *(uint **)(param_2 + 8) = puVar1;
    goto LAB_00099bd4;
  }
  puVar4 = puVar7;
  if (param_4 == (uint *)0x0) {
    do {
      puVar3 = puVar4;
      puVar4 = (uint *)puVar3[5];
    } while (puVar4 != (uint *)0x0);
    uVar5 = *param_5;
    if (uVar5 <= *puVar3) goto LAB_00099b9a;
LAB_00099be2:
    do {
      puVar4 = puVar7;
      puVar7 = (uint *)puVar4[5];
    } while ((uint *)puVar4[5] != (uint *)0x0);
    puVar1[6] = (uint)puVar4;
    puVar4[5] = (uint)puVar1;
    *(uint **)(param_2 + 8) = puVar1;
  }
  else {
    uVar5 = *param_5;
    if (uVar5 < *param_4) {
      puVar4 = (uint *)param_4[4];
      if (puVar4 == (uint *)0x0) {
LAB_00099c1e:
        puVar1[6] = (uint)param_4;
        param_4[4] = (uint)puVar1;
        goto LAB_00099bc8;
      }
      if (uVar5 <= *puVar4) goto LAB_00099b9a;
    }
    else {
LAB_00099b9a:
      param_4 = (uint *)0x0;
      puVar4 = puVar7;
      do {
        if (*puVar4 < uVar5) {
          puVar3 = (uint *)puVar4[5];
        }
        else {
          puVar3 = (uint *)puVar4[4];
          param_4 = puVar4;
        }
        puVar4 = puVar3;
      } while (puVar4 != (uint *)0x0);
      if (param_4 == (uint *)0x0) goto LAB_00099be2;
      puVar4 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) goto LAB_00099c1e;
    }
    do {
      puVar7 = puVar4;
      puVar4 = (uint *)puVar7[5];
    } while ((uint *)puVar7[5] != (uint *)0x0);
    puVar1[6] = (uint)puVar7;
    puVar7[5] = (uint)puVar1;
  }
LAB_00099bc8:
  puVar1[3] = 0;
  FUN_00099a88(param_2,puVar1);
LAB_00099bd4:
  *param_1 = param_2;
  param_1[1] = (int)puVar1;
  return param_1;
}



