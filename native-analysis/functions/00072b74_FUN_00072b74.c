/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072b74 FUN_00072b74 */

void FUN_00072b74(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  undefined auStack_84 [88];
  int local_2c;
  
  iVar1 = DAT_00072c94;
  iVar8 = DAT_00072c90 + 0x72b86;
  local_2c = **(int **)(iVar8 + DAT_00072c94);
  puVar2 = (uint *)operator_new(0x5c);
  uVar5 = *param_5;
  memcpy(auStack_84,param_5 + 1,0x48);
  *puVar2 = uVar5;
  memcpy(puVar2 + 1,auStack_84,0x48);
  puVar2[0x13] = 1;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  puVar6 = *(uint **)(param_2 + 4);
  if (puVar6 == (uint *)0x0) {
    *(uint **)(param_2 + 4) = puVar2;
    *(uint **)(param_2 + 8) = puVar2;
    goto LAB_00072c2e;
  }
  puVar4 = puVar6;
  if (param_4 == (uint *)0x0) {
    do {
      puVar3 = puVar4;
      puVar4 = (uint *)puVar3[0x15];
    } while (puVar4 != (uint *)0x0);
    uVar5 = *param_5;
    if (uVar5 <= *puVar3) goto LAB_00072bf2;
LAB_00072c48:
    do {
      puVar4 = puVar6;
      puVar6 = (uint *)puVar4[0x15];
    } while ((uint *)puVar4[0x15] != (uint *)0x0);
    puVar2[0x16] = (uint)puVar4;
    puVar4[0x15] = (uint)puVar2;
    *(uint **)(param_2 + 8) = puVar2;
  }
  else {
    uVar5 = *param_5;
    if (uVar5 < *param_4) {
      puVar4 = (uint *)param_4[0x14];
      if (puVar4 == (uint *)0x0) {
LAB_00072c84:
        puVar2[0x16] = (uint)param_4;
        param_4[0x14] = (uint)puVar2;
        goto LAB_00072c22;
      }
      if (uVar5 <= *puVar4) goto LAB_00072bf2;
    }
    else {
LAB_00072bf2:
      param_4 = (uint *)0x0;
      puVar4 = puVar6;
      do {
        if (*puVar4 < uVar5) {
          puVar3 = (uint *)puVar4[0x15];
        }
        else {
          puVar3 = (uint *)puVar4[0x14];
          param_4 = puVar4;
        }
        puVar4 = puVar3;
      } while (puVar4 != (uint *)0x0);
      if (param_4 == (uint *)0x0) goto LAB_00072c48;
      puVar4 = (uint *)param_4[0x14];
      if ((uint *)param_4[0x14] == (uint *)0x0) goto LAB_00072c84;
    }
    do {
      puVar6 = puVar4;
      puVar4 = (uint *)puVar6[0x15];
    } while ((uint *)puVar6[0x15] != (uint *)0x0);
    puVar2[0x16] = (uint)puVar6;
    puVar6[0x15] = (uint)puVar2;
  }
LAB_00072c22:
  puVar2[0x13] = 0;
  FUN_00072af8(param_2,puVar2);
LAB_00072c2e:
  piVar7 = *(int **)(iVar8 + iVar1);
  *param_1 = param_2;
  param_1[1] = (int)puVar2;
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



