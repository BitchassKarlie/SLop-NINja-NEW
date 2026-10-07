/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bdee8 FUN_000bdee8 */

uint FUN_000bdee8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar1 = FUN_000c270c(param_2,*(undefined4 *)(param_1 + 0x24));
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar5 = 0;
  }
  else {
    uVar7 = *(uint *)(*(int *)(param_1 + 0x20) + iVar1 * 4);
    if (-1 < (int)uVar7) {
      FUN_000c2850(param_2,*(undefined *)(*(int *)(param_1 + 0x1c) + uVar7 + -1));
      return uVar7 - 1;
    }
    uVar5 = (uVar7 << 2) >> 0x11;
    iVar1 = *(int *)(param_1 + 8) - (uVar7 & 0x7fff);
  }
  uVar7 = FUN_000c270c(param_2,iVar6);
  uVar2 = (uint)(1 < iVar6) & uVar7 >> 0x1f;
  while (uVar2 != 0) {
    iVar6 = iVar6 + -1;
    uVar7 = FUN_000c270c(param_2,iVar6);
    uVar2 = uVar7 >> 0x1f;
    if (iVar6 < 2) {
      uVar2 = 0;
    }
  }
  if ((int)uVar7 < 0) {
    FUN_000c2850(param_2,1);
    uVar5 = 0xffffffff;
  }
  else {
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
    uVar7 = (uVar7 & 0xff00ff) << 8 | uVar7 >> 8 & 0xff00ff;
    uVar7 = (uVar7 & 0xf0f0f0f) << 4 | uVar7 >> 4 & 0xf0f0f0f;
    uVar7 = (uVar7 & 0x33333333) << 2 | uVar7 >> 2 & 0x33333333;
    iVar3 = iVar1 - uVar5;
    if (1 < iVar3) {
      do {
        iVar3 = iVar3 >> 1;
        if (((uVar7 & 0x55555555) << 1 | uVar7 >> 1 & 0x55555555) <
            *(uint *)(*(int *)(param_1 + 0x14) + (iVar3 + uVar5) * 4)) {
          iVar4 = iVar3;
          iVar3 = 0;
        }
        else {
          iVar4 = 0;
        }
        uVar5 = uVar5 + iVar3;
        iVar1 = iVar1 - iVar4;
        iVar3 = iVar1 - uVar5;
      } while (1 < iVar3);
    }
    if (iVar6 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x1c) + uVar5)) {
      FUN_000c2850(param_2,iVar6 + 1);
      uVar5 = 0xffffffff;
    }
    else {
      FUN_000c2850(param_2);
    }
  }
  return uVar5;
}



