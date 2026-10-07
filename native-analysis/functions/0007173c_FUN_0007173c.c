/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0007173c FUN_0007173c */

int FUN_0007173c(int param_1)

{
  void **ppvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  void **ppvVar9;
  int iVar10;
  void **ppvVar11;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_20;
  int *local_1c;
  
  iVar7 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  iVar10 = param_1 + 0x134;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  pvVar4 = operator_new(0x38);
  *(undefined4 *)((int)pvVar4 + 8) = local_58;
  *(undefined4 *)((int)pvVar4 + 0xc) = local_54;
  *(undefined4 *)((int)pvVar4 + 0x10) = local_50;
  *(undefined4 *)((int)pvVar4 + 0x14) = local_4c;
  *(undefined4 *)((int)pvVar4 + 0x18) = local_48;
  *(undefined4 *)((int)pvVar4 + 0x1c) = local_44;
  *(undefined4 *)((int)pvVar4 + 0x20) = local_40;
  *(undefined4 *)((int)pvVar4 + 0x24) = local_3c;
  *(undefined *)((int)pvVar4 + 0x2c) = 0;
  *(undefined4 *)((int)pvVar4 + 0x28) = local_38;
  *(undefined4 *)((int)pvVar4 + 0x30) = 0;
  *(void **)pvVar4 = pvVar4;
  uVar5 = DAT_0007195c;
  *(void **)((int)pvVar4 + 4) = pvVar4;
  *(undefined4 *)((int)pvVar4 + 0x34) = uVar5;
  *(void **)(param_1 + 0x28) = pvVar4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar5 = FUN_00030f60(iVar10);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x138) = uVar5;
  iVar6 = param_1 + 0x16c;
  do {
    *(undefined4 *)(iVar6 + 4) = 0;
    *(undefined4 *)(iVar6 + 8) = 0;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    uVar3 = DAT_00071964;
    uVar2 = DAT_00071960;
    uVar5 = DAT_0007195c;
    iVar6 = iVar6 + 0x10;
  } while (iVar6 != param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0xfc) = uVar2;
  *(undefined *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x114) = uVar5;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11c) = uVar5;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf0) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = uVar5;
  *(undefined *)(param_1 + 0x110) = 0;
  *(undefined *)(param_1 + 0x111) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x46;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  do {
    iVar6 = param_1 + iVar7;
    iVar7 = iVar7 + 4;
    *(undefined4 *)(iVar6 + 100) = 0xffffffff;
  } while (iVar7 != 0x80);
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_000305fc();
  *(undefined4 *)(param_1 + 0x3c) = 0;
  FUN_000305fc(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x40) = 0;
  FUN_000305fc(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_000305fc(param_1 + 0x19c);
  piVar8 = *(int **)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x130) = DAT_00071964;
  uVar5 = DAT_0007195c;
  *(undefined4 *)(param_1 + 0x128) = DAT_0007195c;
  *(undefined4 *)(param_1 + 300) = uVar5;
  local_1c = (int *)*piVar8;
  local_20 = iVar10;
  while (local_1c != piVar8) {
    FUN_00030568(&local_20,iVar10,local_20,local_1c);
  }
  FUN_00030650(param_1 + 0x140);
  FUN_00030650(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined *)(param_1 + 0x30) = 0;
  *(undefined *)(param_1 + 0x20) = 0;
  *(undefined *)(param_1 + 0x21) = 0;
  *(undefined *)(param_1 + 0x54) = 0;
  FUN_000306b8(param_1);
  ppvVar11 = *(void ***)(param_1 + 0x28);
  ppvVar1 = (void **)*ppvVar11;
  while( true ) {
    if (ppvVar11 == ppvVar1) {
      iVar6 = 0;
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      do {
        iVar7 = param_1 + iVar6;
        iVar6 = iVar6 + 4;
        *(undefined4 *)(iVar7 + 0x1b4) = 0xffffffff;
        uVar5 = DAT_0007195c;
      } while (iVar6 != 0x2c);
      *(undefined4 *)(param_1 + 0xe8) = DAT_0007195c;
      *(undefined4 *)(param_1 + 0xe4) = uVar5;
      *(undefined4 *)(param_1 + 0xec) = uVar5;
      return param_1;
    }
    if ((void **)*(void **)(param_1 + 0x28) == ppvVar1) break;
    ppvVar9 = (void **)*ppvVar1;
    *(void ***)ppvVar1[1] = ppvVar9;
    *(void **)((int)*ppvVar1 + 4) = ppvVar1[1];
    operator_delete(ppvVar1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    ppvVar1 = ppvVar9;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



