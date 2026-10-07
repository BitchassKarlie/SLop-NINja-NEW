/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00071cd8 FUN_00071cd8 */

undefined4 FUN_00071cd8(int *param_1)

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
  iVar1 = *(int *)(iVar3 + 0x8c);
  iVar5 = iVar1;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x88);
  }
  iVar4 = *(int *)(iVar3 + 0x90);
  iVar7 = iVar4;
  if (iVar4 != 0) {
    iVar7 = *(int *)(iVar4 + 0x88);
  }
  if (iVar7 - iVar5 < -1) {
    iVar5 = *(int *)(iVar1 + 0x8c);
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 0x88);
    }
    iVar7 = *(int *)(iVar1 + 0x90);
    iVar4 = iVar7;
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 0x88);
    }
    if (iVar4 - iVar5 < 1) {
      *(int *)(iVar3 + 0x8c) = iVar7;
      iVar5 = *param_1;
      uVar8 = *(undefined4 *)(iVar3 + 0x94);
      if (*(int *)(iVar5 + 0x8c) != 0) {
        *(int *)(*(int *)(iVar5 + 0x8c) + 0x94) = iVar5;
        iVar5 = *param_1;
      }
      *(int *)(iVar1 + 0x90) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x94) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x90);
      }
      uVar2 = *(uint *)(iVar1 + 0x8c);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x88);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 0x88))) {
        uVar2 = *(uint *)(iVar5 + 0x88);
      }
      *(uint *)(iVar1 + 0x88) = uVar2 + 1;
      iVar5 = *param_1;
      uVar2 = *(uint *)(iVar5 + 0x8c);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x88);
      }
      if ((*(int *)(iVar5 + 0x90) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x90) + 0x88), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x88) = uVar2 + 1;
      *param_1 = iVar1;
      *(undefined4 *)(iVar1 + 0x94) = uVar8;
    }
    else {
      uVar8 = *(undefined4 *)(iVar1 + 0x94);
      *(undefined4 *)(iVar1 + 0x90) = *(undefined4 *)(iVar7 + 0x8c);
      iVar5 = *(int *)(iVar3 + 0x8c);
      if (*(int *)(iVar5 + 0x90) != 0) {
        *(int *)(*(int *)(iVar5 + 0x90) + 0x94) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x8c);
      }
      *(int *)(iVar7 + 0x8c) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x94) = iVar7;
      }
      iVar5 = *(int *)(iVar3 + 0x8c);
      uVar2 = *(uint *)(iVar5 + 0x8c);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x88);
      }
      if ((*(int *)(iVar5 + 0x90) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x90) + 0x88), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x88) = uVar2 + 1;
      uVar2 = *(uint *)(iVar7 + 0x8c);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x88);
      }
      if ((*(int *)(iVar7 + 0x90) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar7 + 0x90) + 0x88), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar7 + 0x88) = uVar2 + 1;
      *(int *)(iVar3 + 0x8c) = iVar7;
      *(undefined4 *)(iVar7 + 0x94) = uVar8;
      iVar1 = *param_1;
      iVar5 = *(int *)(iVar1 + 0x8c);
      uVar8 = *(undefined4 *)(iVar1 + 0x94);
      *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(iVar5 + 0x90);
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x8c) != 0) {
        *(int *)(*(int *)(iVar1 + 0x8c) + 0x94) = iVar1;
        iVar1 = *param_1;
      }
      *(int *)(iVar5 + 0x90) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x94) = iVar5;
        iVar1 = *(int *)(iVar5 + 0x90);
      }
      uVar2 = *(uint *)(iVar5 + 0x8c);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x88);
      }
      if ((iVar1 != 0) && (uVar2 < *(uint *)(iVar1 + 0x88))) {
        uVar2 = *(uint *)(iVar1 + 0x88);
      }
      *(uint *)(iVar5 + 0x88) = uVar2 + 1;
      iVar1 = *param_1;
      uVar2 = *(uint *)(iVar1 + 0x8c);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x88);
      }
      if ((*(int *)(iVar1 + 0x90) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar1 + 0x90) + 0x88), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar1 + 0x88) = uVar2 + 1;
      *param_1 = iVar5;
      *(undefined4 *)(iVar5 + 0x94) = uVar8;
    }
  }
  else {
    if (iVar7 - iVar5 < 2) {
      return 0;
    }
    iVar1 = *(int *)(iVar4 + 0x8c);
    iVar5 = iVar1;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x88);
    }
    iVar7 = *(int *)(iVar4 + 0x90);
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar7 + 0x88);
    }
    if (iVar7 - iVar5 < 1) {
      uVar8 = *(undefined4 *)(iVar4 + 0x94);
      *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iVar1 + 0x90);
      iVar5 = *(int *)(iVar3 + 0x90);
      if (*(int *)(iVar5 + 0x8c) != 0) {
        *(int *)(*(int *)(iVar5 + 0x8c) + 0x94) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x90);
      }
      *(int *)(iVar1 + 0x90) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x94) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x90);
      }
      uVar2 = *(uint *)(iVar1 + 0x8c);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x88);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 0x88))) {
        uVar2 = *(uint *)(iVar5 + 0x88);
      }
      *(uint *)(iVar1 + 0x88) = uVar2 + 1;
      iVar5 = *(int *)(iVar3 + 0x90);
      uVar2 = *(uint *)(iVar5 + 0x8c);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x88);
      }
      if ((*(int *)(iVar5 + 0x90) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x90) + 0x88), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x88) = uVar2 + 1;
      *(int *)(iVar3 + 0x90) = iVar1;
      *(undefined4 *)(iVar1 + 0x94) = uVar8;
      iVar5 = *param_1;
      iVar4 = *(int *)(iVar5 + 0x90);
      uVar8 = *(undefined4 *)(iVar5 + 0x94);
      *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(iVar4 + 0x8c);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x90);
    }
    else {
      *(int *)(iVar3 + 0x90) = iVar1;
      uVar8 = *(undefined4 *)(iVar3 + 0x94);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x90);
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x94) = iVar5;
      iVar5 = *param_1;
    }
    *(int *)(iVar4 + 0x8c) = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x94) = iVar4;
    }
    iVar5 = *param_1;
    uVar2 = *(uint *)(iVar5 + 0x8c);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 0x88);
    }
    if ((*(int *)(iVar5 + 0x90) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar5 + 0x90) + 0x88), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar5 + 0x88) = uVar2 + 1;
    uVar2 = *(uint *)(iVar4 + 0x8c);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 0x88);
    }
    if ((*(int *)(iVar4 + 0x90) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar4 + 0x90) + 0x88), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar4 + 0x88) = uVar2 + 1;
    *param_1 = iVar4;
    *(undefined4 *)(iVar4 + 0x94) = uVar8;
  }
  iVar5 = *param_1;
  uVar2 = *(uint *)(iVar5 + 0x8c);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 0x88);
  }
  if ((*(int *)(iVar5 + 0x90) != 0) &&
     (uVar6 = *(uint *)(*(int *)(iVar5 + 0x90) + 0x88), uVar2 < uVar6)) {
    uVar2 = uVar6;
  }
  *(uint *)(iVar5 + 0x88) = uVar2 + 1;
  return 1;
}



