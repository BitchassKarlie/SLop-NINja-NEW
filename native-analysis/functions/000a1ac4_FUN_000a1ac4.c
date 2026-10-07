/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000a1ac4 FUN_000a1ac4 */

undefined4 FUN_000a1ac4(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_74 [4];
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_54 [4];
  int local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  int *local_30;
  int local_2c [2];
  
  iVar3 = DAT_000a1ea4 + 0xa1ad2;
  FUN_000abca4(param_2,&local_34,1);
  uVar9 = local_34 & 0xff;
  if (uVar9 != 0) {
    uVar5 = 0;
    do {
      uVar5 = uVar5 + 1 & 0xff;
      FUN_000abca4(param_2,&local_34,4);
    } while (uVar5 != uVar9);
  }
  FUN_000abca4(param_2,&local_34,4);
  iVar7 = DAT_000a1ea8;
  piVar6 = (int *)(DAT_000a1ea8 + 0xa1b14);
  uVar8 = (local_34 << 0x1b) >> 0x1d;
  uVar9 = (local_34 << 0x17) >> 0x1e;
  uVar5 = (local_34 << 0x15) >> 0x1e;
  uVar4 = local_34 & 3;
  uVar11 = (local_34 << 0x19) >> 0x1e;
  FUN_000abca4(param_2,local_2c,4);
  uVar13 = (local_34 << 0xf) >> 0x1d;
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  local_44 = *(int *)(iVar7 + 0xa1b24);
  uStack_40 = *(undefined4 *)(iVar7 + 0xa1b28);
  uStack_3c = *(undefined4 *)(iVar7 + 0xa1b2c);
  uStack_38 = *(undefined4 *)(iVar7 + 0xa1b30);
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  uVar12 = local_2c[0] *
           (uVar13 * local_54[uVar5] + local_54[uVar5] +
           (local_54[uVar11] + local_54[uVar9]) * 3 + local_54[uVar8] + local_54[uVar4] * 2);
  pvVar1 = operator_new__(uVar12);
  FUN_000abca4(param_2,pvVar1,uVar12);
  piVar2 = (int *)operator_new(0x44);
  uVar5 = uVar13 << 0xe | uVar5 << 9 | uVar9 << 7 | uVar11 << 5 | uVar8 * 4;
  uVar9 = (uVar5 << 0x17) >> 0x1e;
  uVar11 = (uVar5 << 0x19) >> 0x1e;
  FUN_000a04ec();
  iVar10 = DAT_000a1eac;
  piVar2[9] = (int)pvVar1;
  piVar2[0xb] = local_2c[0];
  *piVar2 = iVar10 + 0xa1cc2;
  *(undefined *)(piVar2 + 10) = 1;
  piVar2[0xd] = 0;
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  piVar2[0xe] = 0;
  piVar2[0xf] = 0;
  local_44 = *(int *)(iVar7 + 0xa1b24);
  uStack_40 = *(undefined4 *)(iVar7 + 0xa1b28);
  uStack_3c = *(undefined4 *)(iVar7 + 0xa1b2c);
  uStack_38 = *(undefined4 *)(iVar7 + 0xa1b30);
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(undefined4 *)(iVar7 + 0xa1b1c);
  local_54[3] = *(undefined4 *)(iVar7 + 0xa1b20);
  local_54[0] = *piVar6;
  local_54[1] = *(undefined4 *)(iVar7 + 0xa1b18);
  local_54[2] = *(int *)(iVar7 + 0xa1b1c);
  local_54[3] = *(int *)(iVar7 + 0xa1b20);
  piVar6 = piVar2 + 0xc;
  piVar2[0x10] = (local_54[uVar11] + local_54[uVar9]) * 3 +
                 ((uVar5 << 0xf) >> 0x1d) * local_54[(uVar5 << 0x15) >> 0x1e] +
                 local_54[(uVar5 << 0x15) >> 0x1e] + local_54[uVar4] * 2 + local_54[uVar8];
  FUN_000a0874(piVar6,4);
  local_54[1] = 0;
  local_74[0] = *(int *)(iVar7 + 0xa1b34);
  local_74[1] = *(undefined4 *)(iVar7 + 0xa1b38);
  local_74[2] = *(undefined4 *)(iVar7 + 0xa1b3c);
  local_74[3] = *(undefined4 *)(iVar7 + 0xa1b40);
  local_64 = *(undefined4 *)(iVar7 + 0xa1b44);
  uStack_60 = *(undefined4 *)(iVar7 + 0xa1b48);
  uStack_5c = *(undefined4 *)(iVar7 + 0xa1b4c);
  uStack_58 = *(undefined4 *)(iVar7 + 0xa1b50);
  local_54[0] = DAT_000a1eb0 + 0xa1d7a;
  iVar7 = local_74[uVar4];
  if (iVar7 == 0xffff) {
    iVar7 = 0;
  }
  else {
    FUN_000a173c(local_54 + 1,*(undefined4 *)(iVar3 + DAT_000a1eb4));
    local_54[2] = 2;
    local_44 = 0;
    local_54[3] = iVar7;
    FUN_000a1a88(piVar6,local_54);
    iVar7 = FUN_000aa294(local_54[3]);
    iVar7 = local_54[2] * iVar7;
  }
  iVar10 = local_74[uVar8];
  if (iVar10 != 0xffff) {
    FUN_000a173c(local_54 + 1,*(undefined4 *)(iVar3 + DAT_000a1eb8));
    local_54[2] = 4;
    local_54[3] = iVar10;
    local_44 = iVar7;
    FUN_000a1a88(piVar6,local_54);
    iVar10 = FUN_000aa294(local_54[3]);
    iVar7 = local_54[2] * iVar10 + iVar7;
  }
  iVar10 = local_74[uVar11];
  if (iVar10 != 0xffff) {
    FUN_000a173c(local_54 + 1,*(undefined4 *)(iVar3 + DAT_000a1ebc));
    local_54[2] = 3;
    local_54[3] = iVar10;
    local_44 = iVar7;
    FUN_000a1a88(piVar6,local_54);
    iVar10 = FUN_000aa294(local_54[3]);
    iVar7 = local_54[2] * iVar10 + iVar7;
  }
  iVar10 = local_74[uVar9];
  if (iVar10 != 0xffff) {
    FUN_000a173c(local_54 + 1,*(undefined4 *)(iVar3 + DAT_000a1ec0));
    local_54[2] = 3;
    local_54[3] = iVar10;
    local_44 = iVar7;
    FUN_000a1a88(piVar6,local_54);
    FUN_000aa294(local_54[3]);
  }
  local_54[0] = DAT_000a1ec4 + 0xa1e70;
  FUN_000a08c8(local_54 + 1);
  local_30 = piVar2;
  iVar3 = (**(code **)(*piVar2 + 8))(piVar2);
  FUN_000a751c(iVar3 + 4);
  pvVar1 = operator_new(0x40);
  FUN_000a1700(pvVar1,&local_30);
  FUN_000a0718(param_1,pvVar1);
  FUN_000a0a18(&local_30);
  return param_1;
}



