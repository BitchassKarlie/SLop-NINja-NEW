/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1ec8 FUN_000a1ec8 */

undefined4 FUN_000a1ec8(int *param_1)

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
  iVar1 = *(int *)(iVar3 + 0xc);
  iVar5 = iVar1;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 8);
  }
  iVar4 = *(int *)(iVar3 + 0x10);
  iVar7 = iVar4;
  if (iVar4 != 0) {
    iVar7 = *(int *)(iVar4 + 8);
  }
  if (iVar7 - iVar5 < -1) {
    iVar5 = *(int *)(iVar1 + 0xc);
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 8);
    }
    iVar7 = *(int *)(iVar1 + 0x10);
    iVar4 = iVar7;
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 8);
    }
    if (iVar4 - iVar5 < 1) {
      *(int *)(iVar3 + 0xc) = iVar7;
      iVar5 = *param_1;
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      if (*(int *)(iVar5 + 0xc) != 0) {
        *(int *)(*(int *)(iVar5 + 0xc) + 0x14) = iVar5;
        iVar5 = *param_1;
      }
      *(int *)(iVar1 + 0x10) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x14) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x10);
      }
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 8);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 8))) {
        uVar2 = *(uint *)(iVar5 + 8);
      }
      *(uint *)(iVar1 + 8) = uVar2 + 1;
      iVar5 = *param_1;
      uVar2 = *(uint *)(iVar5 + 0xc);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 8);
      }
      if ((*(int *)(iVar5 + 0x10) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x10) + 8), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 8) = uVar2 + 1;
      *param_1 = iVar1;
      *(undefined4 *)(iVar1 + 0x14) = uVar8;
    }
    else {
      uVar8 = *(undefined4 *)(iVar1 + 0x14);
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar7 + 0xc);
      iVar5 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar5 + 0x10) != 0) {
        *(int *)(*(int *)(iVar5 + 0x10) + 0x14) = iVar5;
        iVar5 = *(int *)(iVar3 + 0xc);
      }
      *(int *)(iVar7 + 0xc) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x14) = iVar7;
      }
      iVar5 = *(int *)(iVar3 + 0xc);
      uVar2 = *(uint *)(iVar5 + 0xc);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 8);
      }
      if ((*(int *)(iVar5 + 0x10) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x10) + 8), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 8) = uVar2 + 1;
      uVar2 = *(uint *)(iVar7 + 0xc);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 8);
      }
      if ((*(int *)(iVar7 + 0x10) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar7 + 0x10) + 8), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar7 + 8) = uVar2 + 1;
      *(int *)(iVar3 + 0xc) = iVar7;
      *(undefined4 *)(iVar7 + 0x14) = uVar8;
      iVar1 = *param_1;
      iVar5 = *(int *)(iVar1 + 0xc);
      uVar8 = *(undefined4 *)(iVar1 + 0x14);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar5 + 0x10);
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0xc) != 0) {
        *(int *)(*(int *)(iVar1 + 0xc) + 0x14) = iVar1;
        iVar1 = *param_1;
      }
      *(int *)(iVar5 + 0x10) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = iVar5;
        iVar1 = *(int *)(iVar5 + 0x10);
      }
      uVar2 = *(uint *)(iVar5 + 0xc);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 8);
      }
      if ((iVar1 != 0) && (uVar2 < *(uint *)(iVar1 + 8))) {
        uVar2 = *(uint *)(iVar1 + 8);
      }
      *(uint *)(iVar5 + 8) = uVar2 + 1;
      iVar1 = *param_1;
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 8);
      }
      if ((*(int *)(iVar1 + 0x10) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar1 + 0x10) + 8), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar1 + 8) = uVar2 + 1;
      *param_1 = iVar5;
      *(undefined4 *)(iVar5 + 0x14) = uVar8;
    }
  }
  else {
    if (iVar7 - iVar5 < 2) {
      return 0;
    }
    iVar1 = *(int *)(iVar4 + 0xc);
    iVar5 = iVar1;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 8);
    }
    iVar7 = *(int *)(iVar4 + 0x10);
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar7 + 8);
    }
    if (iVar7 - iVar5 < 1) {
      uVar8 = *(undefined4 *)(iVar4 + 0x14);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar1 + 0x10);
      iVar5 = *(int *)(iVar3 + 0x10);
      if (*(int *)(iVar5 + 0xc) != 0) {
        *(int *)(*(int *)(iVar5 + 0xc) + 0x14) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x10);
      }
      *(int *)(iVar1 + 0x10) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x14) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x10);
      }
      uVar2 = *(uint *)(iVar1 + 0xc);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 8);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 8))) {
        uVar2 = *(uint *)(iVar5 + 8);
      }
      *(uint *)(iVar1 + 8) = uVar2 + 1;
      iVar5 = *(int *)(iVar3 + 0x10);
      uVar2 = *(uint *)(iVar5 + 0xc);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 8);
      }
      if ((*(int *)(iVar5 + 0x10) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x10) + 8), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 8) = uVar2 + 1;
      *(int *)(iVar3 + 0x10) = iVar1;
      *(undefined4 *)(iVar1 + 0x14) = uVar8;
      iVar5 = *param_1;
      iVar4 = *(int *)(iVar5 + 0x10);
      uVar8 = *(undefined4 *)(iVar5 + 0x14);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar4 + 0xc);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x10);
    }
    else {
      *(int *)(iVar3 + 0x10) = iVar1;
      uVar8 = *(undefined4 *)(iVar3 + 0x14);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x10);
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x14) = iVar5;
      iVar5 = *param_1;
    }
    *(int *)(iVar4 + 0xc) = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x14) = iVar4;
    }
    iVar5 = *param_1;
    uVar2 = *(uint *)(iVar5 + 0xc);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 8);
    }
    if ((*(int *)(iVar5 + 0x10) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar5 + 0x10) + 8), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar5 + 8) = uVar2 + 1;
    uVar2 = *(uint *)(iVar4 + 0xc);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 8);
    }
    if ((*(int *)(iVar4 + 0x10) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar4 + 0x10) + 8), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar4 + 8) = uVar2 + 1;
    *param_1 = iVar4;
    *(undefined4 *)(iVar4 + 0x14) = uVar8;
  }
  iVar5 = *param_1;
  uVar2 = *(uint *)(iVar5 + 0xc);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 8);
  }
  if ((*(int *)(iVar5 + 0x10) != 0) &&
     (uVar6 = *(uint *)(*(int *)(iVar5 + 0x10) + 8), uVar2 < uVar6)) {
    uVar2 = uVar6;
  }
  *(uint *)(iVar5 + 8) = uVar2 + 1;
  return 1;
}



