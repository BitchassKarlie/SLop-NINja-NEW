/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00094044 FUN_00094044 */

void FUN_00094044(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = (*(int *)(param_1 + 8) - iVar2 >> 2) * 0x2fa0be83;
  if (iVar1 != 0) {
    iVar5 = 0;
    local_f8 = 0;
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x10);
      iVar4 = iVar5 * 0x40;
      puVar6 = (undefined4 *)(iVar3 + iVar4);
      local_68 = *puVar6;
      uStack_64 = puVar6[1];
      uStack_60 = puVar6[2];
      uStack_5c = puVar6[3];
      local_58 = puVar6[4];
      uStack_54 = puVar6[5];
      uStack_50 = puVar6[6];
      uStack_4c = puVar6[7];
      local_48 = puVar6[8];
      uStack_44 = puVar6[9];
      uStack_40 = puVar6[10];
      uStack_3c = puVar6[0xb];
      local_38 = puVar6[0xc];
      uStack_34 = puVar6[0xd];
      uStack_30 = puVar6[0xe];
      uStack_2c = puVar6[0xf];
      iVar2 = *(int *)(iVar2 + local_f8 + 0x28);
      if (-1 < iVar2) {
        while( true ) {
          FUN_0001d16c(&local_68,iVar3 + iVar2 * 0x40,&local_a8);
          local_68 = local_a8;
          uStack_64 = uStack_a4;
          uStack_60 = uStack_a0;
          uStack_5c = uStack_9c;
          local_58 = local_98;
          uStack_54 = uStack_94;
          uStack_50 = uStack_90;
          uStack_4c = uStack_8c;
          local_48 = local_88;
          uStack_44 = uStack_84;
          uStack_40 = uStack_80;
          uStack_3c = uStack_7c;
          local_38 = local_78;
          uStack_34 = uStack_74;
          uStack_30 = uStack_70;
          uStack_2c = uStack_6c;
          iVar2 = *(int *)(iVar2 * 0xac + *(int *)(param_1 + 4) + 0x28);
          if (iVar2 < 0) break;
          iVar3 = *(int *)(param_1 + 0x10);
        }
      }
      iVar5 = iVar5 + 1;
      puVar6 = (undefined4 *)(*(int *)(param_1 + 0x14) + iVar4);
      *puVar6 = local_68;
      puVar6[1] = uStack_64;
      puVar6[2] = uStack_60;
      puVar6[3] = uStack_5c;
      puVar6[4] = local_58;
      puVar6[5] = uStack_54;
      puVar6[6] = uStack_50;
      puVar6[7] = uStack_4c;
      puVar6[8] = local_48;
      puVar6[9] = uStack_44;
      puVar6[10] = uStack_40;
      puVar6[0xb] = uStack_3c;
      puVar6[0xc] = local_38;
      puVar6[0xd] = uStack_34;
      puVar6[0xe] = uStack_30;
      puVar6[0xf] = uStack_2c;
      puVar6 = (undefined4 *)(iVar4 + *(int *)(param_1 + 0x18));
      FUN_0001d16c(*(int *)(param_1 + 4) + local_f8 + 0x2c,&local_68,&local_e8);
      *puVar6 = local_e8;
      puVar6[1] = uStack_e4;
      puVar6[2] = uStack_e0;
      puVar6[3] = uStack_dc;
      puVar6[4] = local_d8;
      puVar6[5] = uStack_d4;
      puVar6[6] = uStack_d0;
      puVar6[7] = uStack_cc;
      puVar6[8] = local_c8;
      puVar6[9] = uStack_c4;
      puVar6[10] = uStack_c0;
      puVar6[0xb] = uStack_bc;
      puVar6[0xc] = local_b8;
      puVar6[0xd] = uStack_b4;
      puVar6[0xe] = uStack_b0;
      puVar6[0xf] = uStack_ac;
      local_f8 = local_f8 + 0xac;
      if (iVar5 == iVar1) break;
      iVar2 = *(int *)(param_1 + 4);
    }
  }
  return;
}



