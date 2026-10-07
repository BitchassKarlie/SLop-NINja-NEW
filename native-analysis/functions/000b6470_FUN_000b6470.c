/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b6470 FUN_000b6470 */

int * FUN_000b6470(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *__s1;
  uint uVar7;
  undefined auStack_4c [4];
  void *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined auStack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  pvVar1 = operator_new(0x24);
  FUN_000b51e8(auStack_4c,param_5);
  local_34 = 0;
  local_38 = 1;
  local_30 = 0;
  local_2c = 0;
  FUN_000b51e8(pvVar1,auStack_4c);
  *(undefined4 *)((int)pvVar1 + 0x14) = local_38;
  *(undefined4 *)((int)pvVar1 + 0x18) = local_34;
  *(undefined4 *)((int)pvVar1 + 0x1c) = local_30;
  *(undefined4 *)((int)pvVar1 + 0x20) = local_2c;
  FUN_000a0778(auStack_3c);
  if (local_48 != (void *)0x0) {
    operator_delete(local_48);
    local_44 = 0;
    local_40 = 0;
    local_48 = (void *)0x0;
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  iVar5 = *(int *)(param_2 + 4);
  if (iVar5 == 0) {
    *(void **)(param_2 + 4) = pvVar1;
    *(void **)(param_2 + 8) = pvVar1;
    goto LAB_000b6596;
  }
  iVar2 = iVar5;
  if (param_4 == 0) {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 0x1c);
    } while (iVar2 != 0);
    iVar2 = FUN_000b5508(param_2,iVar3);
    if (iVar2 == 0) {
      __s1 = *(void **)(param_5 + 4);
      uVar7 = *(int *)(param_5 + 0xc) - (int)__s1;
      goto LAB_000b6520;
    }
LAB_000b65b8:
    do {
      iVar2 = iVar5;
      iVar5 = *(int *)(iVar2 + 0x1c);
    } while (*(int *)(iVar2 + 0x1c) != 0);
    *(int *)((int)pvVar1 + 0x20) = iVar2;
    *(void **)(iVar2 + 0x1c) = pvVar1;
    *(void **)(param_2 + 8) = pvVar1;
  }
  else {
    __s1 = *(void **)(param_5 + 4);
    uVar7 = *(int *)(param_5 + 0xc) - (int)__s1;
    uVar6 = *(int *)(param_4 + 0xc) - (int)*(void **)(param_4 + 4);
    uVar4 = uVar6;
    if (uVar7 <= uVar6) {
      uVar4 = uVar7;
    }
    iVar2 = memcmp(__s1,*(void **)(param_4 + 4),uVar4);
    if (iVar2 == 0) {
      if (uVar7 < uVar6) goto LAB_000b650c;
LAB_000b6520:
      param_4 = 0;
      iVar2 = iVar5;
      do {
        uVar6 = *(int *)(iVar2 + 0xc) - (int)*(void **)(iVar2 + 4);
        uVar4 = uVar7;
        if (uVar6 <= uVar7) {
          uVar4 = uVar6;
        }
        iVar3 = memcmp(*(void **)(iVar2 + 4),__s1,uVar4);
        if (iVar3 == 0) {
          if (uVar6 < uVar7) goto LAB_000b6540;
LAB_000b6572:
          iVar3 = *(int *)(iVar2 + 0x18);
          param_4 = iVar2;
        }
        else {
          if (-1 < iVar3) goto LAB_000b6572;
LAB_000b6540:
          iVar3 = *(int *)(iVar2 + 0x1c);
        }
        iVar2 = iVar3;
      } while (iVar2 != 0);
      if (param_4 == 0) goto LAB_000b65b8;
      iVar2 = *(int *)(param_4 + 0x18);
      if (*(int *)(param_4 + 0x18) != 0) goto LAB_000b657e;
LAB_000b65a6:
      *(int *)((int)pvVar1 + 0x20) = param_4;
      *(void **)(param_4 + 0x18) = pvVar1;
    }
    else {
      if (-1 < iVar2) goto LAB_000b6520;
LAB_000b650c:
      iVar2 = *(int *)(param_4 + 0x18);
      if (iVar2 == 0) goto LAB_000b65a6;
      iVar3 = FUN_000b5508(param_2,iVar2);
      if (iVar3 == 0) goto LAB_000b6520;
LAB_000b657e:
      do {
        iVar5 = iVar2;
        iVar2 = *(int *)(iVar5 + 0x1c);
      } while (*(int *)(iVar5 + 0x1c) != 0);
      *(int *)((int)pvVar1 + 0x20) = iVar5;
      *(void **)(iVar5 + 0x1c) = pvVar1;
    }
  }
  *(undefined4 *)((int)pvVar1 + 0x14) = 0;
  FUN_000b63f4(param_2,pvVar1);
LAB_000b6596:
  *param_1 = param_2;
  param_1[1] = (int)pvVar1;
  return param_1;
}



