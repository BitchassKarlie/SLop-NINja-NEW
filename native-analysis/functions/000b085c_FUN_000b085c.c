/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b085c FUN_000b085c */

undefined4 FUN_000b085c(int *param_1)

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
  iVar1 = *(int *)(iVar3 + 0x44);
  iVar5 = iVar1;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 0x40);
  }
  iVar4 = *(int *)(iVar3 + 0x48);
  iVar7 = iVar4;
  if (iVar4 != 0) {
    iVar7 = *(int *)(iVar4 + 0x40);
  }
  if (iVar7 - iVar5 < -1) {
    iVar5 = *(int *)(iVar1 + 0x44);
    if (iVar5 != 0) {
      iVar5 = *(int *)(iVar5 + 0x40);
    }
    iVar7 = *(int *)(iVar1 + 0x48);
    iVar4 = iVar7;
    if (iVar7 != 0) {
      iVar4 = *(int *)(iVar7 + 0x40);
    }
    if (iVar4 - iVar5 < 1) {
      *(int *)(iVar3 + 0x44) = iVar7;
      iVar5 = *param_1;
      uVar8 = *(undefined4 *)(iVar3 + 0x4c);
      if (*(int *)(iVar5 + 0x44) != 0) {
        *(int *)(*(int *)(iVar5 + 0x44) + 0x4c) = iVar5;
        iVar5 = *param_1;
      }
      *(int *)(iVar1 + 0x48) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x4c) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x48);
      }
      uVar2 = *(uint *)(iVar1 + 0x44);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x40);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 0x40))) {
        uVar2 = *(uint *)(iVar5 + 0x40);
      }
      *(uint *)(iVar1 + 0x40) = uVar2 + 1;
      iVar5 = *param_1;
      uVar2 = *(uint *)(iVar5 + 0x44);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x40);
      }
      if ((*(int *)(iVar5 + 0x48) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x48) + 0x40), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x40) = uVar2 + 1;
      *param_1 = iVar1;
      *(undefined4 *)(iVar1 + 0x4c) = uVar8;
    }
    else {
      uVar8 = *(undefined4 *)(iVar1 + 0x4c);
      *(undefined4 *)(iVar1 + 0x48) = *(undefined4 *)(iVar7 + 0x44);
      iVar5 = *(int *)(iVar3 + 0x44);
      if (*(int *)(iVar5 + 0x48) != 0) {
        *(int *)(*(int *)(iVar5 + 0x48) + 0x4c) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x44);
      }
      *(int *)(iVar7 + 0x44) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x4c) = iVar7;
      }
      iVar5 = *(int *)(iVar3 + 0x44);
      uVar2 = *(uint *)(iVar5 + 0x44);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x40);
      }
      if ((*(int *)(iVar5 + 0x48) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x48) + 0x40), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x40) = uVar2 + 1;
      uVar2 = *(uint *)(iVar7 + 0x44);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x40);
      }
      if ((*(int *)(iVar7 + 0x48) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar7 + 0x48) + 0x40), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar7 + 0x40) = uVar2 + 1;
      *(int *)(iVar3 + 0x44) = iVar7;
      *(undefined4 *)(iVar7 + 0x4c) = uVar8;
      iVar1 = *param_1;
      iVar5 = *(int *)(iVar1 + 0x44);
      uVar8 = *(undefined4 *)(iVar1 + 0x4c);
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar5 + 0x48);
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x44) != 0) {
        *(int *)(*(int *)(iVar1 + 0x44) + 0x4c) = iVar1;
        iVar1 = *param_1;
      }
      *(int *)(iVar5 + 0x48) = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x4c) = iVar5;
        iVar1 = *(int *)(iVar5 + 0x48);
      }
      uVar2 = *(uint *)(iVar5 + 0x44);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x40);
      }
      if ((iVar1 != 0) && (uVar2 < *(uint *)(iVar1 + 0x40))) {
        uVar2 = *(uint *)(iVar1 + 0x40);
      }
      *(uint *)(iVar5 + 0x40) = uVar2 + 1;
      iVar1 = *param_1;
      uVar2 = *(uint *)(iVar1 + 0x44);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x40);
      }
      if ((*(int *)(iVar1 + 0x48) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar1 + 0x48) + 0x40), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar1 + 0x40) = uVar2 + 1;
      *param_1 = iVar5;
      *(undefined4 *)(iVar5 + 0x4c) = uVar8;
    }
  }
  else {
    if (iVar7 - iVar5 < 2) {
      return 0;
    }
    iVar1 = *(int *)(iVar4 + 0x44);
    iVar5 = iVar1;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0x40);
    }
    iVar7 = *(int *)(iVar4 + 0x48);
    if (iVar7 != 0) {
      iVar7 = *(int *)(iVar7 + 0x40);
    }
    if (iVar7 - iVar5 < 1) {
      uVar8 = *(undefined4 *)(iVar4 + 0x4c);
      *(undefined4 *)(iVar4 + 0x44) = *(undefined4 *)(iVar1 + 0x48);
      iVar5 = *(int *)(iVar3 + 0x48);
      if (*(int *)(iVar5 + 0x44) != 0) {
        *(int *)(*(int *)(iVar5 + 0x44) + 0x4c) = iVar5;
        iVar5 = *(int *)(iVar3 + 0x48);
      }
      *(int *)(iVar1 + 0x48) = iVar5;
      if (iVar5 != 0) {
        *(int *)(iVar5 + 0x4c) = iVar1;
        iVar5 = *(int *)(iVar1 + 0x48);
      }
      uVar2 = *(uint *)(iVar1 + 0x44);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x40);
      }
      if ((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 0x40))) {
        uVar2 = *(uint *)(iVar5 + 0x40);
      }
      *(uint *)(iVar1 + 0x40) = uVar2 + 1;
      iVar5 = *(int *)(iVar3 + 0x48);
      uVar2 = *(uint *)(iVar5 + 0x44);
      if (uVar2 != 0) {
        uVar2 = *(uint *)(uVar2 + 0x40);
      }
      if ((*(int *)(iVar5 + 0x48) != 0) &&
         (uVar6 = *(uint *)(*(int *)(iVar5 + 0x48) + 0x40), uVar2 < uVar6)) {
        uVar2 = uVar6;
      }
      *(uint *)(iVar5 + 0x40) = uVar2 + 1;
      *(int *)(iVar3 + 0x48) = iVar1;
      *(undefined4 *)(iVar1 + 0x4c) = uVar8;
      iVar5 = *param_1;
      iVar4 = *(int *)(iVar5 + 0x48);
      uVar8 = *(undefined4 *)(iVar5 + 0x4c);
      *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar4 + 0x44);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x48);
    }
    else {
      *(int *)(iVar3 + 0x48) = iVar1;
      uVar8 = *(undefined4 *)(iVar3 + 0x4c);
      iVar5 = *param_1;
      iVar1 = *(int *)(iVar5 + 0x48);
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x4c) = iVar5;
      iVar5 = *param_1;
    }
    *(int *)(iVar4 + 0x44) = iVar5;
    if (iVar5 != 0) {
      *(int *)(iVar5 + 0x4c) = iVar4;
    }
    iVar5 = *param_1;
    uVar2 = *(uint *)(iVar5 + 0x44);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 0x40);
    }
    if ((*(int *)(iVar5 + 0x48) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar5 + 0x48) + 0x40), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar5 + 0x40) = uVar2 + 1;
    uVar2 = *(uint *)(iVar4 + 0x44);
    if (uVar2 != 0) {
      uVar2 = *(uint *)(uVar2 + 0x40);
    }
    if ((*(int *)(iVar4 + 0x48) != 0) &&
       (uVar6 = *(uint *)(*(int *)(iVar4 + 0x48) + 0x40), uVar2 < uVar6)) {
      uVar2 = uVar6;
    }
    *(uint *)(iVar4 + 0x40) = uVar2 + 1;
    *param_1 = iVar4;
    *(undefined4 *)(iVar4 + 0x4c) = uVar8;
  }
  iVar5 = *param_1;
  uVar2 = *(uint *)(iVar5 + 0x44);
  if (uVar2 != 0) {
    uVar2 = *(uint *)(uVar2 + 0x40);
  }
  if ((*(int *)(iVar5 + 0x48) != 0) &&
     (uVar6 = *(uint *)(*(int *)(iVar5 + 0x48) + 0x40), uVar2 < uVar6)) {
    uVar2 = uVar6;
  }
  *(uint *)(iVar5 + 0x40) = uVar2 + 1;
  return 1;
}



