/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007becc FUN_0007becc */

undefined4 FUN_0007becc(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  
  iVar3 = *param_1;
  iVar1 = *(int *)(iVar3 + 0x68);
  iVar5 = iVar1;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 100);
  }
  iVar4 = *(int *)(iVar3 + 0x6c);
  iVar7 = iVar4;
  if (iVar4 != 0) {
    iVar7 = *(int *)(iVar4 + 100);
  }
  if (iVar7 - iVar5 < -1) {
    iVar5 = *(int *)(iVar1 + 0x68);
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 100);
    }
    iVar7 = *(int *)(iVar1 + 0x6c);
    iVar4 = iVar7;
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 100);
    }
    if (iVar4 - iVar5 < 1) {
      *(int *)(iVar3 + 0x68) = iVar7;
      iVar5 = *param_1;
      uVar8 = *(undefined4 *)(iVar3 + 0x70);
      if (*(int *)(iVar5 + 0x68) != 0) {
        *(int *)(*(int *)(iVar5 + 0x68) + 0x70) = iVar5;
        iVar5 = *param_1;
      }
      *(int *)(iVar1 + 0x6c) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x70) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x6c);
      }
      uVar2 = *(uint *)(iVar1 + 0x68);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 100);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 100))) {
        uVar2 = *(uint *)(iVar5 + 100);
      }
      *(uint *)(iVar1 + 100) = uVar2 + 1;
      iVar5 = *param_1;
      uVar2 = *(uint *)(iVar5 + 0x68);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 100);
      }
      if ((*(int *)(iVar5 + 0x6c) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x6c) + 100), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 100) = uVar2 + 1;
      *param_1 = iVar1;
      *(undefined4 *)(iVar1 + 0x70) = uVar8;
    }
    else {
      uVar8 = *(undefined4 *)(iVar1 + 0x70);
      *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(iVar7 + 0x68);
      iVar5 = *(int *)(iVar3 + 0x68);
      if (*(int *)(iVar5 + 0x6c) != 0) {
        *(int *)(*(int *)(iVar5 + 0x6c) + 0x70) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x68);
      }
      *(int *)(iVar7 + 0x68) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x70) = iVar7;
      }
      iVar5 = *(int *)(iVar3 + 0x68);
      uVar2 = *(uint *)(iVar5 + 0x68);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 100);
      }
      if ((*(int *)(iVar5 + 0x6c) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x6c) + 100), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 100) = uVar2 + 1;
      uVar2 = *(uint *)(iVar7 + 0x68);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 100);
      }
      if ((*(int *)(iVar7 + 0x6c) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar7 + 0x6c) + 100), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar7 + 100) = uVar2 + 1;
      *(int *)(iVar3 + 0x68) = iVar7;
      *(undefined4 *)(iVar7 + 0x70) = uVar8;
      iVar1 = *param_1;
      iVar5 = *(int *)(iVar1 + 0x68);
      uVar8 = *(undefined4 *)(iVar1 + 0x70);
      *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(iVar5 + 0x6c);
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x68) != 0) {
        *(int *)(*(int *)(iVar1 + 0x68) + 0x70) = iVar1;
        iVar1 = *param_1;
      }
      *(int *)(iVar5 + 0x6c) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x70) = iVar5;
        iVar1 = *(int *)(iVar5 + 0x6c);
      }
      uVar2 = *(uint *)(iVar5 + 0x68);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 100);
      }
      if ((iVar1 != 0) && (uVar2 < *(uint *)(iVar1 + 100))) {
        uVar2 = *(uint *)(iVar1 + 100);
      }
      *(uint *)(iVar5 + 100) = uVar2 + 1;
      iVar1 = *param_1;
      uVar2 = *(uint *)(iVar1 + 0x68);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 100);
      }
      if ((*(int *)(iVar1 + 0x6c) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar1 + 0x6c) + 100), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar1 + 100) = uVar2 + 1;
      *param_1 = iVar5;
      *(undefined4 *)(iVar5 + 0x70) = uVar8;
    }
  }
  else {
    if (iVar7 - iVar5 < 2) {
      return 0;
    }
    iVar1 = *(int *)(iVar4 + 0x68);
    iVar5 = iVar1;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 100);
    }
    iVar7 = *(int *)(iVar4 + 0x6c);
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar7 + 100);
    }
    if (iVar7 - iVar5 < 1) {
      uVar8 = *(undefined4 *)(iVar4 + 0x70);
      *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)(iVar1 + 0x6c);
      iVar5 = *(int *)(iVar3 + 0x6c);
      if (*(int *)(iVar5 + 0x68) != 0) {
        *(int *)(*(int *)(iVar5 + 0x68) + 0x70) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x6c);
      }
      *(int *)(iVar1 + 0x6c) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x70) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x6c);
      }
      uVar2 = *(uint *)(iVar1 + 0x68);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 100);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 100))) {
        uVar2 = *(uint *)(iVar5 + 100);
      }
      *(uint *)(iVar1 + 100) = uVar2 + 1;
      iVar5 = *(int *)(iVar3 + 0x6c);
      uVar2 = *(uint *)(iVar5 + 0x68);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 100);
      }
      if ((*(int *)(iVar5 + 0x6c) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x6c) + 100), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 100) = uVar2 + 1;
      *(int *)(iVar3 + 0x6c) = iVar1;
      *(undefined4 *)(iVar1 + 0x70) = uVar8;
      iVar5 = *param_1;
      iVar4 = *(int *)(iVar5 + 0x6c);
      uVar8 = *(undefined4 *)(iVar5 + 0x70);
      *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)(iVar4 + 0x68);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x6c);
    }
    else {
      *(int *)(iVar3 + 0x6c) = iVar1;
      uVar8 = *(undefined4 *)(iVar3 + 0x70);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x6c);
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x70) = iVar5;
      iVar5 = *param_1;
    }
    *(int *)(iVar4 + 0x68) = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x70) = iVar4;
    }
    iVar5 = *param_1;
    uVar2 = *(uint *)(iVar5 + 0x68);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 100);
    }
    if ((*(int *)(iVar5 + 0x6c) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar5 + 0x6c) + 100), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar5 + 100) = uVar2 + 1;
    uVar2 = *(uint *)(iVar4 + 0x68);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 100);
    }
    if ((*(int *)(iVar4 + 0x6c) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar4 + 0x6c) + 100), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar4 + 100) = uVar2 + 1;
    *param_1 = iVar4;
    *(undefined4 *)(iVar4 + 0x70) = uVar8;
  }
  iVar5 = *param_1;
  uVar2 = *(uint *)(iVar5 + 0x68);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 100);
  }
  if ((*(int *)(iVar5 + 0x6c) != 0) &&
     (uVar6 = *(uint *)(*(int *)(iVar5 + 0x6c) + 100), uVar2 < uVar6)) {
    uVar2 = uVar6;
  }
  *(uint *)(iVar5 + 100) = uVar2 + 1;
  return 1;
}



