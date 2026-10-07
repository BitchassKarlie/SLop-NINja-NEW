/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007c168 FUN_0007c168 */

void FUN_0007c168(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  undefined auStack_9c [96];
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  iVar1 = DAT_0007c2a0;
  iVar8 = DAT_0007c29c + 0x7c17a;
  local_2c = **(int **)(iVar8 + DAT_0007c2a0);
  puVar2 = (uint *)operator_new(0x74);
  uVar5 = *param_5;
  FUN_0007b468(auStack_9c,param_5 + 1);
  local_3c = 1;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  *puVar2 = uVar5;
  FUN_0007b468(puVar2 + 1,auStack_9c);
  puVar2[0x19] = local_3c;
  puVar2[0x1a] = local_38;
  puVar2[0x1b] = local_34;
  puVar2[0x1c] = local_30;
  FUN_00082438(auStack_9c);
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  puVar6 = *(uint **)(param_2 + 4);
  if (puVar6 == (uint *)0x0) {
    *(uint **)(param_2 + 4) = puVar2;
    *(uint **)(param_2 + 8) = puVar2;
    goto LAB_0007c23a;
  }
  puVar4 = puVar6;
  if (param_4 == (uint *)0x0) {
    do {
      puVar3 = puVar4;
      puVar4 = (uint *)puVar3[0x1b];
    } while (puVar4 != (uint *)0x0);
    uVar5 = *param_5;
    if (uVar5 <= *puVar3) goto LAB_0007c1fe;
LAB_0007c254:
    do {
      puVar4 = puVar6;
      puVar6 = (uint *)puVar4[0x1b];
    } while ((uint *)puVar4[0x1b] != (uint *)0x0);
    puVar2[0x1c] = (uint)puVar4;
    puVar4[0x1b] = (uint)puVar2;
    *(uint **)(param_2 + 8) = puVar2;
    puVar4 = (uint *)0x0;
  }
  else {
    uVar5 = *param_5;
    if (uVar5 < *param_4) {
      puVar4 = (uint *)param_4[0x1a];
      if (puVar4 == (uint *)0x0) {
        puVar4 = (uint *)0x0;
LAB_0007c290:
        puVar2[0x1c] = (uint)param_4;
        param_4[0x1a] = (uint)puVar2;
        goto LAB_0007c22e;
      }
      if (uVar5 <= *puVar4) goto LAB_0007c1fe;
    }
    else {
LAB_0007c1fe:
      param_4 = (uint *)0x0;
      puVar4 = puVar6;
      do {
        if (*puVar4 < uVar5) {
          puVar3 = (uint *)puVar4[0x1b];
        }
        else {
          puVar3 = (uint *)puVar4[0x1a];
          param_4 = puVar4;
        }
        puVar4 = puVar3;
      } while (puVar4 != (uint *)0x0);
      if (param_4 == (uint *)0x0) goto LAB_0007c254;
      puVar4 = (uint *)param_4[0x1a];
      if (puVar4 == (uint *)0x0) goto LAB_0007c290;
    }
    do {
      puVar6 = puVar4;
      puVar4 = (uint *)puVar6[0x1b];
    } while ((uint *)puVar6[0x1b] != (uint *)0x0);
    puVar2[0x1c] = (uint)puVar6;
    puVar6[0x1b] = (uint)puVar2;
    puVar4 = (uint *)0x0;
  }
LAB_0007c22e:
  puVar2[0x19] = 0;
  FUN_0007c0ec(param_2,puVar2,puVar4,0,param_3);
LAB_0007c23a:
  piVar7 = *(int **)(iVar8 + iVar1);
  *param_1 = param_2;
  param_1[1] = (int)puVar2;
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}



