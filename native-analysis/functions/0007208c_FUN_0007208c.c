/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007208c FUN_0007208c */

void FUN_0007208c(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  undefined auStack_c0 [148];
  int local_2c;
  
  iVar1 = DAT_000721cc;
  iVar8 = DAT_000721c8 + 0x7209e;
  local_2c = **(int **)(iVar8 + DAT_000721cc);
  puVar2 = (uint *)operator_new(0x98);
  uVar5 = *param_5;
  memcpy(auStack_c0,param_5 + 1,0x84);
  *puVar2 = uVar5;
  memcpy(puVar2 + 1,auStack_c0,0x84);
  puVar2[0x22] = 1;
  puVar2[0x23] = 0;
  puVar2[0x24] = 0;
  puVar2[0x25] = 0;
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  puVar6 = *(uint **)(param_2 + 4);
  if (puVar6 == (uint *)0x0) {
    *(uint **)(param_2 + 4) = puVar2;
    *(uint **)(param_2 + 8) = puVar2;
    goto LAB_0007215c;
  }
  puVar4 = puVar6;
  if (param_4 == (uint *)0x0) {
    do {
      puVar3 = puVar4;
      puVar4 = (uint *)puVar3[0x24];
    } while (puVar4 != (uint *)0x0);
    uVar5 = *param_5;
    if (uVar5 <= *puVar3) goto LAB_00072112;
LAB_00072176:
    do {
      puVar4 = puVar6;
      puVar6 = (uint *)puVar4[0x24];
    } while ((uint *)puVar4[0x24] != (uint *)0x0);
    puVar2[0x25] = (uint)puVar4;
    puVar4[0x24] = (uint)puVar2;
    *(uint **)(param_2 + 8) = puVar2;
  }
  else {
    uVar5 = *param_5;
    if (uVar5 < *param_4) {
      puVar4 = (uint *)param_4[0x23];
      if (puVar4 == (uint *)0x0) {
LAB_000721ba:
        puVar2[0x25] = (uint)param_4;
        param_4[0x23] = (uint)puVar2;
        goto LAB_0007214e;
      }
      if (uVar5 <= *puVar4) goto LAB_00072112;
    }
    else {
LAB_00072112:
      param_4 = (uint *)0x0;
      puVar4 = puVar6;
      do {
        if (*puVar4 < uVar5) {
          puVar3 = (uint *)puVar4[0x24];
        }
        else {
          puVar3 = (uint *)puVar4[0x23];
          param_4 = puVar4;
        }
        puVar4 = puVar3;
      } while (puVar4 != (uint *)0x0);
      if (param_4 == (uint *)0x0) goto LAB_00072176;
      puVar4 = (uint *)param_4[0x23];
      if ((uint *)param_4[0x23] == (uint *)0x0) goto LAB_000721ba;
    }
    do {
      puVar6 = puVar4;
      puVar4 = (uint *)puVar6[0x24];
    } while ((uint *)puVar6[0x24] != (uint *)0x0);
    puVar2[0x25] = (uint)puVar6;
    puVar6[0x24] = (uint)puVar2;
  }
LAB_0007214e:
  puVar2[0x22] = 0;
  FUN_00071ff4(param_2,puVar2);
LAB_0007215c:
  piVar7 = *(int **)(iVar8 + iVar1);
  *param_1 = param_2;
  param_1[1] = (int)puVar2;
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



