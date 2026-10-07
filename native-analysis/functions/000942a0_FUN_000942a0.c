/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000942a0 FUN_000942a0 */

void FUN_000942a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_184;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar3 = DAT_0009449c;
  uVar2 = DAT_00094498;
  iVar4 = *(int *)(param_1 + 4);
  iVar1 = (*(int *)(param_1 + 8) - iVar4 >> 2) * 0x2fa0be83;
  if (iVar1 != 0) {
    iVar5 = 0;
    local_184 = 0;
    while( true ) {
      iVar4 = iVar4 + iVar5;
      iVar5 = iVar5 + 0xac;
      iVar6 = *(int *)(param_1 + 0x10) + local_184 * 0x40;
      FUN_00094164(&local_f0,iVar4 + 0x78);
      local_c0 = uVar2;
      local_bc = uVar2;
      local_b8 = uVar2;
      local_b4 = uVar3;
      local_c4 = uVar2;
      local_d4 = uVar2;
      local_e4 = uVar2;
      local_b0 = local_f0;
      uStack_ac = local_e0;
      uStack_a8 = local_d0;
      uStack_a4 = uVar2;
      local_a0 = local_ec;
      uStack_9c = local_dc;
      uStack_98 = local_cc;
      uStack_94 = uVar2;
      local_90 = local_e8;
      uStack_8c = local_d8;
      uStack_88 = local_c8;
      uStack_84 = uVar2;
      local_80 = uVar2;
      uStack_7c = uVar2;
      uStack_78 = uVar2;
      uStack_74 = uVar3;
      local_40 = *(undefined4 *)(iVar4 + 0x6c);
      local_3c = *(undefined4 *)(iVar4 + 0x70);
      local_38 = *(undefined4 *)(iVar4 + 0x74);
      local_70 = uVar3;
      local_5c = uVar3;
      local_48 = uVar3;
      local_34 = uVar3;
      local_6c = uVar2;
      local_68 = uVar2;
      local_64 = uVar2;
      local_60 = uVar2;
      local_58 = uVar2;
      local_54 = uVar2;
      local_50 = uVar2;
      local_4c = uVar2;
      local_44 = uVar2;
      local_130 = *(undefined4 *)(iVar4 + 0x88);
      local_12c = *(undefined4 *)(iVar4 + 0x8c);
      local_128 = *(undefined4 *)(iVar4 + 0x90);
      local_124 = uVar2;
      local_120 = *(undefined4 *)(iVar4 + 0x94);
      local_11c = *(undefined4 *)(iVar4 + 0x98);
      local_118 = *(undefined4 *)(iVar4 + 0x9c);
      local_114 = uVar2;
      local_110 = *(undefined4 *)(iVar4 + 0xa0);
      local_10c = *(undefined4 *)(iVar4 + 0xa4);
      local_108 = *(undefined4 *)(iVar4 + 0xa8);
      local_104 = uVar2;
      local_100 = uVar2;
      local_fc = uVar2;
      local_f8 = uVar2;
      local_f4 = uVar3;
      FUN_0001d16c(&local_130,&local_b0,iVar6);
      FUN_0001d16c(iVar6,&local_70,iVar6);
      local_184 = local_184 + 1;
      if (local_184 == iVar1) break;
      iVar4 = *(int *)(param_1 + 4);
    }
  }
  return;
}



