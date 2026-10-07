/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00028240 FUN_00028240 */

void FUN_00028240(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 local_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  float local_18c;
  float fStack_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  float local_14c;
  float fStack_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined auStack_13c [64];
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
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined auStack_bc [64];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  
  iVar2 = DAT_000285b8;
  iVar9 = DAT_000285bc + 0x28258;
  *(undefined *)(DAT_000285b8 + 0x282e8) = 0;
  iVar7 = DAT_000285d8;
  iVar8 = DAT_000285d4;
  iVar3 = DAT_000285c0;
  uVar1 = DAT_000285b0;
  uVar5 = DAT_000285ac;
  fVar10 = *(float *)(param_1 + 0x80);
  if (fVar10 == 0.0 || fVar10 < 0.0 != NAN(fVar10)) {
    if ((*(char *)(param_1 + 0xb4) == '\0') || (*(char *)(param_1 + 0x114) != '\0')) {
      if (*(int *)(*(int *)(DAT_000285c0 + 0x282e8) + (uint)*(byte *)(param_1 + 0x3c) * 0x24 + 0x18)
          != 0) {
        local_68 = *(undefined4 *)(param_1 + 0x2c);
        local_7c = *(undefined4 *)(param_1 + 0x28);
        local_54 = *(undefined4 *)(param_1 + 0x30);
        local_40 = DAT_000285ac;
        local_78 = DAT_000285b0;
        local_74 = DAT_000285b0;
        local_70 = DAT_000285b0;
        local_6c = DAT_000285b0;
        local_64 = DAT_000285b0;
        local_60 = DAT_000285b0;
        local_5c = DAT_000285b0;
        local_58 = DAT_000285b0;
        local_50 = DAT_000285b0;
        local_4c = (float)DAT_000285b0;
        local_48 = (float)DAT_000285b0;
        local_44 = (float)DAT_000285b0;
        FUN_000220bc(auStack_bc,param_1 + 0xd0);
        FUN_0001d16c(&local_7c,auStack_bc,&local_17c);
        local_7c = local_17c;
        local_78 = uStack_178;
        local_74 = uStack_174;
        local_70 = uStack_170;
        local_6c = local_16c;
        local_68 = uStack_168;
        local_64 = uStack_164;
        local_60 = uStack_160;
        local_5c = local_15c;
        local_58 = uStack_158;
        local_54 = uStack_154;
        local_50 = uStack_150;
        local_40 = uStack_140;
        fVar10 = *(float *)(param_1 + 0x98);
        local_4c = local_14c +
                   *(float *)(param_1 + 0x10) + fVar10 * *(float *)(DAT_000285c4 + 0x28336);
        local_48 = fStack_148 +
                   *(float *)(param_1 + 0x14) + fVar10 * *(float *)(DAT_000285c4 + 0x2833a);
        local_44 = fStack_144 +
                   *(float *)(param_1 + 0x18) + fVar10 * *(float *)(DAT_000285c4 + 0x2833e);
        iVar2 = FUN_0002f5f0();
        if ((((iVar2 != 0) &&
             ((int)((uint)(*(float *)(*(int *)(iVar9 + DAT_000285c8) + 0x10) < DAT_000285b4) << 0x1f
                   ) < 0)) && (iVar2 = *(int *)(param_1 + 0x90), -1 < iVar2)) &&
           (iVar8 = *(int *)(iVar3 + 0x282e8) + (uint)*(byte *)(param_1 + 0x3c) * 0x24,
           *(int *)(iVar8 + 0x1c) != 0)) {
          iVar7 = *(int *)(iVar8 + 0xc);
          if (*(int *)(iVar7 + 4) == 7) {
            uVar5 = FUN_000227c0(*(int *)(iVar7 + 0xc) + 0x38,*(undefined4 *)(iVar7 + 0x10));
            FUN_00022208(uVar5,*(undefined4 *)(iVar3 + iVar2 * 4 + 0x28294));
            iVar8 = *(int *)(iVar3 + 0x282e8) + (uint)*(byte *)(param_1 + 0x3c) * 0x24;
          }
          FUN_00094538(*(undefined4 *)(iVar8 + 0x1c),&local_7c);
        }
        iVar3 = FUN_0002f5f0();
        iVar2 = DAT_00028684;
        if (iVar3 == 0) {
          iVar8 = *(int *)(DAT_000285cc + 0x28440) + (uint)*(byte *)(param_1 + 0x3c) * 0x24;
        }
        else if (*(int *)(param_1 + 0x90) == 2) {
          iVar8 = *(int *)(DAT_00028684 + 0x28652) + (uint)*(byte *)(param_1 + 0x3c) * 0x24;
          iVar3 = *(int *)(iVar8 + 8);
          if (*(int *)(iVar3 + 4) == 7) {
            uVar5 = FUN_000227c0(*(int *)(iVar3 + 0xc) + 0x38,*(undefined4 *)(iVar3 + 0x10));
            FUN_00022208(uVar5,*(undefined4 *)(iVar2 + 0x285fe));
            iVar8 = *(int *)(iVar2 + 0x28652) + (uint)*(byte *)(param_1 + 0x3c) * 0x24;
          }
        }
        else {
          iVar8 = *(int *)(DAT_000285dc + 0x2860a) + (uint)*(byte *)(param_1 + 0x3c) * 0x24;
        }
        FUN_00094538(*(undefined4 *)(iVar8 + 0x18),&local_7c);
        iVar3 = FUN_0002f5f0();
        iVar2 = DAT_000285d0;
        if ((iVar3 != 0) && (*(int *)(param_1 + 0x90) == 2)) {
          iVar3 = *(int *)(*(int *)(DAT_000285d0 + 0x28468) + (uint)*(byte *)(param_1 + 0x3c) * 0x24
                          + 8);
          if (*(int *)(iVar3 + 4) == 7) {
            uVar5 = FUN_000227c0(*(int *)(iVar3 + 0xc) + 0x38,*(undefined4 *)(iVar3 + 0x10));
            FUN_00022208(uVar5,*(undefined4 *)(iVar2 + 0x2840c));
          }
        }
      }
    }
    else {
      iVar9 = DAT_000285d4 + 0x28446;
      iVar6 = DAT_000285d8 + 0x28452;
      iVar3 = 0;
      do {
        if (*(int *)(*(int *)(iVar2 + 0x282bc) + (uint)*(byte *)(param_1 + 0x3c) * 0x24 +
                    (iVar3 + 4) * 4) != 0) {
          local_d4 = *(undefined4 *)(param_1 + 0x30);
          local_e8 = *(undefined4 *)(param_1 + 0x2c);
          local_fc = *(undefined4 *)(param_1 + 0x28);
          local_c0 = uVar5;
          local_f8 = uVar1;
          local_f4 = uVar1;
          local_f0 = uVar1;
          local_ec = uVar1;
          local_e4 = uVar1;
          local_e0 = uVar1;
          local_dc = uVar1;
          local_d8 = uVar1;
          local_d0 = uVar1;
          local_cc = (float)uVar1;
          local_c8 = (float)uVar1;
          local_c4 = (float)uVar1;
          FUN_000220bc(auStack_13c,param_1 + (iVar3 + 0xd) * 0x10);
          FUN_0001d16c(&local_fc,auStack_13c,&local_1bc);
          local_fc = local_1bc;
          local_f8 = uStack_1b8;
          local_f4 = uStack_1b4;
          local_f0 = uStack_1b0;
          local_ec = local_1ac;
          local_e8 = uStack_1a8;
          local_e4 = uStack_1a4;
          local_e0 = uStack_1a0;
          local_dc = local_19c;
          local_d8 = uStack_198;
          local_d4 = uStack_194;
          local_d0 = uStack_190;
          local_c0 = uStack_180;
          local_3c = *(float *)(param_1 + 0x10);
          local_38 = *(float *)(param_1 + 0x14);
          local_34 = *(float *)(param_1 + 0x18);
          if (iVar3 != 0) {
            local_3c = *(float *)(param_1 + 0xb8);
            local_38 = *(float *)(param_1 + 0xbc);
            local_34 = *(float *)(param_1 + 0xc0);
          }
          local_34 = local_34 + *(float *)(param_1 + 0x98);
          local_cc = local_18c + local_3c;
          local_c8 = fStack_188 + local_38;
          local_c4 = fStack_184 + local_34;
          iVar4 = FUN_0002f5f0();
          if ((iVar4 != 0) && (*(int *)(param_1 + 0x90) == 2)) {
            FUN_00023658(*(undefined4 *)
                          (*(int *)(iVar7 + 0x284a6) + (uint)*(byte *)(param_1 + 0x3c) * 0x24 +
                          iVar3 * 4),iVar6);
          }
          FUN_00094538(*(undefined4 *)
                        (*(int *)(iVar8 + 0x284a2) + (uint)*(byte *)(param_1 + 0x3c) * 0x24 +
                        (iVar3 + 4) * 4),&local_fc);
          iVar4 = FUN_0002f5f0();
          if ((iVar4 != 0) && (*(int *)(param_1 + 0x90) == 2)) {
            FUN_00023658(*(undefined4 *)
                          (*(int *)(iVar8 + 0x284a2) + (uint)*(byte *)(param_1 + 0x3c) * 0x24 +
                          iVar3 * 4),iVar9);
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 2);
    }
  }
  return;
}



