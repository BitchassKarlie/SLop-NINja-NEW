/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072724 FUN_00072724 */

undefined4 FUN_00072724(int *param_1)

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
  iVar1 = *(int *)(iVar3 + 0x50);
  iVar5 = iVar1;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x4c);
  }
  iVar4 = *(int *)(iVar3 + 0x54);
  iVar7 = iVar4;
  if (iVar4 != 0) {
    iVar7 = *(int *)(iVar4 + 0x4c);
  }
  if (iVar7 - iVar5 < -1) {
    iVar5 = *(int *)(iVar1 + 0x50);
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 0x4c);
    }
    iVar7 = *(int *)(iVar1 + 0x54);
    iVar4 = iVar7;
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 0x4c);
    }
    if (iVar4 - iVar5 < 1) {
      *(int *)(iVar3 + 0x50) = iVar7;
      iVar5 = *param_1;
      uVar8 = *(undefined4 *)(iVar3 + 0x58);
      if (*(int *)(iVar5 + 0x50) != 0) {
        *(int *)(*(int *)(iVar5 + 0x50) + 0x58) = iVar5;
        iVar5 = *param_1;
      }
      *(int *)(iVar1 + 0x54) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x58) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x54);
      }
      uVar2 = *(uint *)(iVar1 + 0x50);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x4c);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 0x4c))) {
        uVar2 = *(uint *)(iVar5 + 0x4c);
      }
      *(uint *)(iVar1 + 0x4c) = uVar2 + 1;
      iVar5 = *param_1;
      uVar2 = *(uint *)(iVar5 + 0x50);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x4c);
      }
      if ((*(int *)(iVar5 + 0x54) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x54) + 0x4c), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x4c) = uVar2 + 1;
      *param_1 = iVar1;
      *(undefined4 *)(iVar1 + 0x58) = uVar8;
    }
    else {
      uVar8 = *(undefined4 *)(iVar1 + 0x58);
      *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar7 + 0x50);
      iVar5 = *(int *)(iVar3 + 0x50);
      if (*(int *)(iVar5 + 0x54) != 0) {
        *(int *)(*(int *)(iVar5 + 0x54) + 0x58) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x50);
      }
      *(int *)(iVar7 + 0x50) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x58) = iVar7;
      }
      iVar5 = *(int *)(iVar3 + 0x50);
      uVar2 = *(uint *)(iVar5 + 0x50);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x4c);
      }
      if ((*(int *)(iVar5 + 0x54) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x54) + 0x4c), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x4c) = uVar2 + 1;
      uVar2 = *(uint *)(iVar7 + 0x50);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x4c);
      }
      if ((*(int *)(iVar7 + 0x54) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar7 + 0x54) + 0x4c), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar7 + 0x4c) = uVar2 + 1;
      *(int *)(iVar3 + 0x50) = iVar7;
      *(undefined4 *)(iVar7 + 0x58) = uVar8;
      iVar1 = *param_1;
      iVar5 = *(int *)(iVar1 + 0x50);
      uVar8 = *(undefined4 *)(iVar1 + 0x58);
      *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar5 + 0x54);
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x50) != 0) {
        *(int *)(*(int *)(iVar1 + 0x50) + 0x58) = iVar1;
        iVar1 = *param_1;
      }
      *(int *)(iVar5 + 0x54) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x58) = iVar5;
        iVar1 = *(int *)(iVar5 + 0x54);
      }
      uVar2 = *(uint *)(iVar5 + 0x50);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x4c);
      }
      if ((iVar1 != 0) && (uVar2 < *(uint *)(iVar1 + 0x4c))) {
        uVar2 = *(uint *)(iVar1 + 0x4c);
      }
      *(uint *)(iVar5 + 0x4c) = uVar2 + 1;
      iVar1 = *param_1;
      uVar2 = *(uint *)(iVar1 + 0x50);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x4c);
      }
      if ((*(int *)(iVar1 + 0x54) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar1 + 0x54) + 0x4c), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar1 + 0x4c) = uVar2 + 1;
      *param_1 = iVar5;
      *(undefined4 *)(iVar5 + 0x58) = uVar8;
    }
  }
  else {
    if (iVar7 - iVar5 < 2) {
      return 0;
    }
    iVar1 = *(int *)(iVar4 + 0x50);
    iVar5 = iVar1;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x4c);
    }
    iVar7 = *(int *)(iVar4 + 0x54);
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar7 + 0x4c);
    }
    if (iVar7 - iVar5 < 1) {
      uVar8 = *(undefined4 *)(iVar4 + 0x58);
      *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar1 + 0x54);
      iVar5 = *(int *)(iVar3 + 0x54);
      if (*(int *)(iVar5 + 0x50) != 0) {
        *(int *)(*(int *)(iVar5 + 0x50) + 0x58) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x54);
      }
      *(int *)(iVar1 + 0x54) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x58) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x54);
      }
      uVar2 = *(uint *)(iVar1 + 0x50);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x4c);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 0x4c))) {
        uVar2 = *(uint *)(iVar5 + 0x4c);
      }
      *(uint *)(iVar1 + 0x4c) = uVar2 + 1;
      iVar5 = *(int *)(iVar3 + 0x54);
      uVar2 = *(uint *)(iVar5 + 0x50);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x4c);
      }
      if ((*(int *)(iVar5 + 0x54) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x54) + 0x4c), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x4c) = uVar2 + 1;
      *(int *)(iVar3 + 0x54) = iVar1;
      *(undefined4 *)(iVar1 + 0x58) = uVar8;
      iVar5 = *param_1;
      iVar4 = *(int *)(iVar5 + 0x54);
      uVar8 = *(undefined4 *)(iVar5 + 0x58);
      *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x50);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x54);
    }
    else {
      *(int *)(iVar3 + 0x54) = iVar1;
      uVar8 = *(undefined4 *)(iVar3 + 0x58);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x54);
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x58) = iVar5;
      iVar5 = *param_1;
    }
    *(int *)(iVar4 + 0x50) = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x58) = iVar4;
    }
    iVar5 = *param_1;
    uVar2 = *(uint *)(iVar5 + 0x50);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 0x4c);
    }
    if ((*(int *)(iVar5 + 0x54) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar5 + 0x54) + 0x4c), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar5 + 0x4c) = uVar2 + 1;
    uVar2 = *(uint *)(iVar4 + 0x50);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 0x4c);
    }
    if ((*(int *)(iVar4 + 0x54) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar4 + 0x54) + 0x4c), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar4 + 0x4c) = uVar2 + 1;
    *param_1 = iVar4;
    *(undefined4 *)(iVar4 + 0x58) = uVar8;
  }
  iVar5 = *param_1;
  uVar2 = *(uint *)(iVar5 + 0x50);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 0x4c);
  }
  if ((*(int *)(iVar5 + 0x54) != 0) &&
     (uVar6 = *(uint *)(*(int *)(iVar5 + 0x54) + 0x4c), uVar2 < uVar6)) {
    uVar2 = uVar6;
  }
  *(uint *)(iVar5 + 0x4c) = uVar2 + 1;
  return 1;
}



