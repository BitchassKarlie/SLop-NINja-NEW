/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bc434 FUN_000bc434 */

int FUN_000bc434(int *param_1,void **param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  void *pvVar10;
  void **ppvVar11;
  int iVar12;
  int iVar13;
  undefined auStack_44 [20];
  undefined4 local_30;
  undefined2 local_2c;
  
  iVar8 = DAT_000bc7f0 + 0xbc442;
  if (param_3 == (undefined4 *)0x0) {
    return -0x85;
  }
  FUN_000c2ab8(auStack_44,*param_3,param_3[1]);
  iVar1 = FUN_000c28b4(auStack_44,8);
  local_30 = 0;
  local_2c = 0;
  FUN_000bc1f0(auStack_44,&local_30,6);
  iVar2 = memcmp(&local_30,(void *)(DAT_000bc7f4 + 0xbc488),6);
  if (iVar2 != 0) {
    return -0x84;
  }
  if (iVar1 == 3) {
    if (param_1[2] == 0) {
      return -0x85;
    }
    iVar8 = FUN_000c28b4(auStack_44,0x20);
    if (iVar8 < 0) {
LAB_000bc556:
      FUN_000bc2b4(param_2);
      return -0x85;
    }
    pvVar3 = calloc(iVar8 + 1,1);
    param_2[3] = pvVar3;
    FUN_000bc1f0(auStack_44,pvVar3,iVar8);
    pvVar3 = (void *)FUN_000c28b4(auStack_44,0x20);
    param_2[2] = pvVar3;
    if ((int)pvVar3 < 0) goto LAB_000bc556;
    pvVar3 = calloc((int)pvVar3 + 1,4);
    *param_2 = pvVar3;
    pvVar3 = calloc((int)param_2[2] + 1,4);
    param_2[1] = pvVar3;
    if (0 < (int)param_2[2]) {
      iVar8 = 0;
      do {
        iVar1 = FUN_000c28b4(auStack_44,0x20);
        if (iVar1 < 0) goto LAB_000bc556;
        *(int *)((int)param_2[1] + iVar8 * 4) = iVar1;
        pvVar10 = *param_2;
        pvVar3 = calloc(iVar1 + 1,1);
        *(void **)((int)pvVar10 + iVar8 * 4) = pvVar3;
        iVar2 = iVar8 * 4;
        iVar8 = iVar8 + 1;
        FUN_000bc1f0(auStack_44,*(undefined4 *)((int)*param_2 + iVar2),iVar1);
      } while (iVar8 < (int)param_2[2]);
    }
    iVar8 = FUN_000c28b4(auStack_44,1);
    if (iVar8 != 1) goto LAB_000bc556;
  }
  else {
    if (iVar1 == 5) {
      if (param_1[2] == 0) {
        return -0x85;
      }
      if (param_2[3] == (void *)0x0) {
        return -0x85;
      }
      iVar1 = param_1[7];
      if (iVar1 == 0) {
        return -0x81;
      }
      iVar2 = FUN_000c28b4(auStack_44,8);
      *(int *)(iVar1 + 0x1c) = iVar2 + 1;
      ppvVar11 = (void **)(iVar1 + 0x820);
      for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 0x1c); iVar2 = iVar2 + 1) {
        pvVar3 = calloc(1,0x24);
        *ppvVar11 = pvVar3;
        iVar12 = FUN_000be488(auStack_44,pvVar3);
        if (iVar12 != 0) goto LAB_000bc720;
        ppvVar11 = ppvVar11 + 1;
      }
      iVar2 = FUN_000c28b4(auStack_44,6);
      *(int *)(iVar1 + 0x10) = iVar2 + 1;
      iVar2 = iVar1;
      for (iVar12 = 0; iVar12 < *(int *)(iVar1 + 0x10); iVar12 = iVar12 + 1) {
        iVar13 = FUN_000c28b4(auStack_44,0x10);
        *(int *)(iVar2 + 800) = iVar13;
        iVar2 = iVar2 + 4;
        if (iVar13 != 0) goto LAB_000bc720;
      }
      iVar12 = FUN_000c28b4(auStack_44,6);
      iVar2 = DAT_000bc7f8;
      *(int *)(iVar1 + 0x14) = iVar12 + 1;
      iVar12 = iVar1;
      for (iVar13 = 0; iVar13 < *(int *)(iVar1 + 0x14); iVar13 = iVar13 + 1) {
        uVar5 = FUN_000c28b4(auStack_44,0x10);
        *(uint *)(iVar12 + 0x420) = uVar5;
        if (1 < uVar5) goto LAB_000bc720;
        iVar4 = (***(code ***)(*(int *)(iVar8 + iVar2) + uVar5 * 4))(param_1,auStack_44);
        *(int *)(iVar12 + 0x520) = iVar4;
        iVar12 = iVar12 + 4;
        if (iVar4 == 0) goto LAB_000bc720;
      }
      iVar12 = FUN_000c28b4(auStack_44,6);
      iVar2 = DAT_000bc7fc;
      *(int *)(iVar1 + 0x18) = iVar12 + 1;
      iVar12 = iVar1;
      for (iVar13 = 0; iVar13 < *(int *)(iVar1 + 0x18); iVar13 = iVar13 + 1) {
        uVar5 = FUN_000c28b4(auStack_44,0x10);
        *(uint *)(iVar12 + 0x620) = uVar5;
        if (2 < uVar5) goto LAB_000bc720;
        iVar4 = (***(code ***)(*(int *)(iVar8 + iVar2) + uVar5 * 4))(param_1,auStack_44);
        *(int *)(iVar12 + 0x720) = iVar4;
        iVar12 = iVar12 + 4;
        if (iVar4 == 0) goto LAB_000bc720;
      }
      iVar12 = FUN_000c28b4(auStack_44,6);
      iVar2 = DAT_000bc800;
      *(int *)(iVar1 + 0xc) = iVar12 + 1;
      iVar12 = iVar1;
      for (iVar13 = 0; iVar13 < *(int *)(iVar1 + 0xc); iVar13 = iVar13 + 1) {
        iVar4 = FUN_000c28b4(auStack_44,0x10);
        *(int *)(iVar12 + 0x120) = iVar4;
        if (iVar4 != 0) goto LAB_000bc720;
        iVar4 = (**(code **)**(undefined4 **)(iVar8 + iVar2))(param_1,auStack_44);
        *(int *)(iVar12 + 0x220) = iVar4;
        iVar12 = iVar12 + 4;
        if (iVar4 == 0) goto LAB_000bc720;
      }
      iVar8 = FUN_000c28b4(auStack_44,6);
      *(int *)(iVar1 + 8) = iVar8 + 1;
      iVar8 = iVar1;
      for (iVar2 = 0; iVar2 < *(int *)(iVar1 + 8); iVar2 = iVar2 + 1) {
        puVar6 = (undefined4 *)calloc(1,0x10);
        *(undefined4 **)(iVar8 + 0x20) = puVar6;
        uVar7 = FUN_000c28b4(auStack_44,1);
        *puVar6 = uVar7;
        iVar12 = *(int *)(iVar8 + 0x20);
        uVar7 = FUN_000c28b4(auStack_44,0x10);
        *(undefined4 *)(iVar12 + 4) = uVar7;
        iVar12 = *(int *)(iVar8 + 0x20);
        uVar7 = FUN_000c28b4(auStack_44,0x10);
        *(undefined4 *)(iVar12 + 8) = uVar7;
        iVar12 = *(int *)(iVar8 + 0x20);
        uVar7 = FUN_000c28b4(auStack_44,8);
        *(undefined4 *)(iVar12 + 0xc) = uVar7;
        iVar12 = *(int *)(iVar8 + 0x20);
        if (((0 < *(int *)(iVar12 + 4)) || (0 < *(int *)(iVar12 + 8))) ||
           (iVar8 = iVar8 + 4, *(int *)(iVar1 + 0xc) <= *(int *)(iVar12 + 0xc))) goto LAB_000bc720;
      }
    }
    else {
      if (iVar1 != 1) {
        return -0x85;
      }
      if (param_3[2] == 0) {
        return -0x85;
      }
      if (param_1[2] != 0) {
        return -0x85;
      }
      piVar9 = (int *)param_1[7];
      if (piVar9 == (int *)0x0) {
        return -0x81;
      }
      iVar8 = FUN_000c28b4(auStack_44,0x20);
      *param_1 = iVar8;
      if (iVar8 != 0) {
        return -0x86;
      }
      iVar8 = FUN_000c28b4(auStack_44,8);
      param_1[1] = iVar8;
      iVar8 = FUN_000c28b4(auStack_44,0x20);
      param_1[2] = iVar8;
      iVar8 = FUN_000c28b4(auStack_44,0x20);
      param_1[3] = iVar8;
      iVar8 = FUN_000c28b4(auStack_44,0x20);
      param_1[4] = iVar8;
      iVar8 = FUN_000c28b4(auStack_44,0x20);
      param_1[5] = iVar8;
      uVar5 = FUN_000c28b4(auStack_44,4);
      *piVar9 = 1 << (uVar5 & 0xff);
      uVar5 = FUN_000c28b4(auStack_44,4);
      iVar8 = 1 << (uVar5 & 0xff);
      piVar9[1] = iVar8;
      if (((param_1[2] < 1) || (param_1[1] < 1)) ||
         ((*piVar9 < 0x40 || ((iVar8 < *piVar9 || (0x2000 < iVar8)))))) goto LAB_000bc720;
    }
    iVar8 = FUN_000c28b4(auStack_44,1);
    if (iVar8 != 1) {
LAB_000bc720:
      FUN_000bc308(param_1);
      return -0x85;
    }
  }
  return iVar8 + -1;
}



