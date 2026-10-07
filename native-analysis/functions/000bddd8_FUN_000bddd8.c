/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bddd8 FUN_000bddd8 */

void FUN_000bddd8(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_34;
  int local_2c;
  int local_28 [2];
  
  local_28[1] = param_2[1];
  local_28[0] = *param_2;
  uVar7 = *(uint *)(param_3 + param_4 * 4);
  uVar8 = *(uint *)(param_3 + param_5 * 4);
  uVar9 = uVar7 + 3 & (int)uVar7 >> 0x20;
  if (uVar7 < 0xfffffffd) {
    uVar9 = uVar7;
  }
  uVar3 = *(uint *)(param_3 + param_6 * 4);
  uVar5 = uVar8 + 3 & (int)uVar8 >> 0x20;
  if (uVar8 < 0xfffffffd) {
    uVar5 = uVar8;
  }
  iVar2 = ((int)uVar5 >> 2) - ((int)uVar9 >> 2);
  iVar11 = iVar2 + (int)uVar7 / 2;
  uVar9 = uVar3 + 3 & (int)uVar3 >> 0x20;
  if (uVar3 < 0xfffffffd) {
    uVar9 = uVar3;
  }
  uVar7 = (((int)uVar5 >> 2) + (int)uVar8 / 2) - ((int)uVar9 >> 2);
  uVar9 = uVar7 + (int)uVar3 / 2;
  if (iVar2 < 1) {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      *(undefined4 *)(param_1 + iVar4 * 4) = 0;
      iVar4 = iVar4 + 1;
    } while (iVar4 != iVar2);
  }
  if (iVar4 < iVar11) {
    iVar2 = param_1 + iVar4 * 4;
    iVar10 = local_28[param_4];
    iVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      local_2c = (int)((ulonglong)
                       ((longlong)*(int *)(iVar10 + iVar6) * (longlong)*(int *)(iVar2 + iVar6)) >>
                      0x20);
      *(int *)(iVar2 + iVar6) = local_2c << 1;
      iVar6 = iVar6 + 4;
    } while (iVar4 != iVar11);
  }
  if ((int)uVar7 < (int)uVar9) {
    iVar2 = param_1 + uVar7 * 4;
    iVar11 = 0;
    iVar4 = local_28[param_6];
    uVar5 = uVar7;
    do {
      uVar5 = uVar5 + 1;
      local_34 = (int)((ulonglong)
                       ((longlong)*(int *)(((iVar4 + ((int)uVar3 / 2) * 4) - iVar11) + -4) *
                       (longlong)*(int *)(iVar2 + iVar11)) >> 0x20);
      *(int *)(iVar2 + iVar11) = local_34 << 1;
      iVar11 = iVar11 + 4;
    } while (uVar5 != uVar9);
    uVar7 = uVar7 + 1 + uVar5 + ~uVar7;
  }
  if ((int)uVar7 < (int)uVar8) {
    puVar1 = (undefined4 *)(param_1 + uVar7 * 4);
    do {
      uVar7 = uVar7 + 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (uVar7 != uVar8);
  }
  return;
}



