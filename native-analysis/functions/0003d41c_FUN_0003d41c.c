/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0003d41c FUN_0003d41c */

void FUN_0003d41c(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_234;
  int local_230;
  int local_22c;
  int local_228;
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  float local_18c;
  float local_188;
  int local_184;
  undefined4 local_180;
  int local_17c;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  int local_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  undefined auStack_154 [36];
  undefined auStack_130 [36];
  undefined auStack_10c [36];
  undefined auStack_e8 [36];
  undefined auStack_c4 [36];
  undefined auStack_a0 [36];
  int local_7c [8];
  undefined local_5c;
  int local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar4 = DAT_0003d760;
  iVar11 = DAT_0003d75c + 0x3d430;
  local_34 = **(int **)(iVar11 + DAT_0003d760);
  if (*(int *)(DAT_0003d764 + 0x3d458) == 0) {
LAB_0003d722:
    iVar12 = *(int *)(param_1 + 0x9c);
    if (iVar12 != 0) goto LAB_0003d44c;
  }
  else {
    iVar12 = *(int *)(param_1 + 0x9c);
    if (iVar12 == 0) {
      local_158 = iVar12;
      FUN_00017d64(&local_158,*(undefined4 *)(DAT_0003d764 + 0x3d458));
      local_218 = DAT_0003d76c + 0x3d5f2;
      local_210 = DAT_0003d770 + 0x3d604;
      local_190 = DAT_0003d758;
      local_38 = 1;
      local_18c = DAT_0003d73c;
      local_188 = DAT_0003d738;
      local_214 = param_1;
      local_20c = iVar12;
      local_58[0] = iVar12;
      (**(code **)(DAT_0003d76c + 0x3d5fa))(&local_218,local_58);
      local_5c = 1;
      local_19c = *(undefined4 *)(DAT_0003d774 + 0x3d634);
      local_198 = *(undefined4 *)(DAT_0003d774 + 0x3d638);
      local_194 = *(undefined4 *)(DAT_0003d774 + 0x3d63c);
      local_16c = DAT_0003d778 + 0x3d65e;
      local_168 = *(undefined4 *)(iVar11 + DAT_0003d77c);
      local_7c[0] = iVar12;
      (**(code **)(DAT_0003d778 + 0x3d666))(&local_16c,local_7c);
      pvVar5 = operator_new(0x148);
      FUN_000550e8(pvVar5,&local_158,&local_190,local_58,0xffffffff,&local_19c,local_7c);
      iVar12 = DAT_0003d780;
      *(void **)(param_1 + 0x9c) = pvVar5;
      FUN_0001d358(local_7c);
      local_16c = iVar12 + 0x3d6ac;
      FUN_0001d358(local_58);
      local_218 = iVar12 + 0x3d6ac;
      FUN_00017d90(&local_158);
      uVar6 = (**(code **)(**(int **)(*(int *)(param_1 + 0x9c) + 0x68) + 0x14))();
      iVar12 = *(int *)(param_1 + 0x9c);
      uVar7 = (**(code **)(**(int **)(iVar12 + 0x68) + 0x18))();
      fVar16 = DAT_0003d748;
      local_1a4 = (float)(ulonglong)uVar7;
      local_1a0 = DAT_0003d748;
      *(float *)(iVar12 + 0x110) = (float)(ulonglong)uVar6;
      *(float *)(iVar12 + 0x114) = local_1a4;
      *(float *)(iVar12 + 0x118) = fVar16;
      local_1a8 = (float)(ulonglong)uVar6;
      (**(code **)(**(int **)(param_1 + 0x9c) + 8))();
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar11 + DAT_0003d768) + 0x40),
                   *(undefined4 *)(param_1 + 0x9c),0);
      goto LAB_0003d722;
    }
LAB_0003d44c:
    local_1b4 = *(float *)(param_1 + 0x88) * DAT_0003d734 - DAT_0003d730;
    local_1b0 = *(float *)(param_1 + 0x88) * DAT_0003d738;
    local_1ac = local_1b0 + DAT_0003d738;
    local_1b0 = local_1b0 + DAT_0003d73c;
    *(float *)(iVar12 + 8) = local_1b4;
    *(float *)(iVar12 + 0xc) = local_1b0;
    *(float *)(iVar12 + 0x10) = local_1ac;
  }
  iVar12 = *(int *)(param_1 + 0x8c);
  switch(iVar12) {
  case 0:
    fVar16 = *(float *)(param_1 + 0x88) + (DAT_0003d748 - *(float *)(param_1 + 0x88)) * DAT_0003d74c
    ;
    bVar1 = fVar16 < DAT_0003d750;
    bVar2 = fVar16 != DAT_0003d750;
    bVar3 = NAN(DAT_0003d750);
    *(float *)(param_1 + 0x88) = fVar16;
    if (bVar2 && bVar1 == (NAN(fVar16) || bVar3)) {
      iVar12 = *(int *)(param_1 + 0x90);
      if (iVar12 == 0) {
        iVar9 = *(int *)(iVar11 + DAT_0003dcd4);
        local_15c = iVar12;
        FUN_00017d64(&local_15c,*(undefined4 *)(iVar9 + 0x180));
        local_1c0 = DAT_0003dcc4;
        local_228 = DAT_0003dcd8 + 0x3db5a;
        local_1bc = DAT_0003dcc8;
        local_220 = DAT_0003dcdc + 0x3db6c;
        local_1b8 = DAT_0003dccc;
        local_224 = param_1;
        local_21c = iVar12;
        FUN_0003c0b0(auStack_a0,&local_228);
        local_1cc = *(undefined4 *)(DAT_0003dce0 + 0x3db88);
        local_1c8 = *(undefined4 *)(DAT_0003dce0 + 0x3db8c);
        local_1c4 = *(undefined4 *)(DAT_0003dce0 + 0x3db90);
        local_174 = DAT_0003dce4 + 0x3dbac;
        local_170 = *(undefined4 *)(iVar11 + DAT_0003dce8);
        FUN_0003c0b0(auStack_c4,&local_174);
        pvVar5 = operator_new(0x148);
        iVar12 = DAT_0003dcf0 + 0x3dbea;
        FUN_000550e8(pvVar5,&local_15c,&local_1c0,auStack_a0,
                     **(undefined4 **)(iVar11 + DAT_0003dcec),&local_1cc,auStack_c4);
        *(void **)(param_1 + 0x90) = pvVar5;
        FUN_0001d358(auStack_c4);
        local_174 = iVar12;
        FUN_0001d358(auStack_a0);
        local_228 = iVar12;
        FUN_00017d90(&local_15c);
        (**(code **)(**(int **)(param_1 + 0x90) + 8))();
        *(undefined *)(*(int *)(param_1 + 0x90) + 0x124) = 1;
        FUN_00049d7c(*(undefined4 *)(iVar9 + 0x40),*(undefined4 *)(param_1 + 0x90),0);
        FUN_000671a8(*(undefined4 *)(iVar9 + 0x16c),*(undefined4 *)(param_1 + 0x90));
        fVar16 = DAT_0003dcd0;
        iVar12 = *(int *)(param_1 + 0x90);
        *(float *)(iVar12 + 0x110) = *(float *)(iVar12 + 0x110) * DAT_0003dcd0;
        *(float *)(iVar12 + 0x114) = *(float *)(iVar12 + 0x114) * fVar16;
        *(float *)(iVar12 + 0x118) = *(float *)(iVar12 + 0x118) * fVar16;
        iVar12 = *(int *)(*(int *)(param_1 + 0x90) + 0x120);
        *(float *)(iVar12 + 0x28) = *(float *)(iVar12 + 0x28) * fVar16;
        *(float *)(iVar12 + 0x2c) = *(float *)(iVar12 + 0x2c) * fVar16;
        *(float *)(iVar12 + 0x30) = *(float *)(iVar12 + 0x30) * fVar16;
      }
      iVar12 = *(int *)(param_1 + 0x94);
      if (iVar12 == 0) {
        local_160 = iVar12;
        FUN_00017d64(&local_160,*(undefined4 *)(DAT_0003daf8 + 0x3d916));
        local_1d8 = DAT_0003dac0;
        local_238 = DAT_0003dafc + 0x3d932;
        local_1d4 = DAT_0003dac4;
        local_230 = DAT_0003db00 + 0x3d944;
        local_1d0 = DAT_0003dabc;
        local_234 = param_1;
        local_22c = iVar12;
        FUN_0003c0b0(auStack_e8,&local_238);
        uVar8 = FUN_00022674(DAT_0003db04 + 0x3d960,0);
        local_1e4 = *(undefined4 *)(DAT_0003db08 + 0x3d96a);
        local_1e0 = *(undefined4 *)(DAT_0003db08 + 0x3d96e);
        local_1dc = *(undefined4 *)(DAT_0003db08 + 0x3d972);
        local_17c = DAT_0003db0c + 0x3d98e;
        local_178 = *(undefined4 *)(iVar11 + DAT_0003daec);
        FUN_0003c0b0(auStack_10c,&local_17c);
        pvVar5 = operator_new(0x148);
        iVar12 = DAT_0003db10 + 0x3d9ce;
        FUN_000550e8(pvVar5,&local_160,&local_1d8,auStack_e8,uVar8,&local_1e4,auStack_10c);
        *(void **)(param_1 + 0x94) = pvVar5;
        FUN_0001d358(auStack_10c);
        local_17c = iVar12;
        FUN_0001d358(auStack_e8);
        local_238 = iVar12;
        FUN_00017d90(&local_160);
        iVar12 = (**(code **)(**(int **)(*(int *)(param_1 + 0x94) + 0x68) + 0x14))();
        iVar14 = *(int *)(param_1 + 0x94);
        iVar9 = (**(code **)(**(int **)(iVar14 + 0x68) + 0x18))();
        uVar13 = DAT_0003dacc;
        uVar8 = DAT_0003dac8;
        local_1ec = (float)(ulonglong)(iVar9 + 1);
        local_1e8 = DAT_0003dac8;
        *(float *)(iVar14 + 0x110) = (float)(ulonglong)(iVar12 + 1);
        *(float *)(iVar14 + 0x114) = local_1ec;
        *(undefined4 *)(iVar14 + 0x118) = uVar8;
        *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x128) = uVar13;
        fVar16 = DAT_0003dad0;
        iVar9 = *(int *)(param_1 + 0x94);
        *(float *)(iVar9 + 300) = *(float *)(iVar9 + 300) * DAT_0003dad0;
        *(float *)(iVar9 + 0x130) = *(float *)(iVar9 + 0x130) * fVar16;
        *(float *)(iVar9 + 0x134) = *(float *)(iVar9 + 0x134) * fVar16;
        local_1f0 = (float)(ulonglong)(iVar12 + 1);
        (**(code **)(**(int **)(param_1 + 0x94) + 8))();
        iVar12 = *(int *)(iVar11 + DAT_0003daf4);
        FUN_00049d7c(*(undefined4 *)(iVar12 + 0x40),*(undefined4 *)(param_1 + 0x94),0);
        FUN_000671a8(*(undefined4 *)(iVar12 + 0x16c),*(undefined4 *)(param_1 + 0x94));
        uVar13 = *(undefined4 *)(param_1 + 0x94);
        FUN_0007832c();
        uVar8 = FUN_00077830();
        FUN_00053324(uVar13,uVar8);
      }
      iVar12 = *(int *)(param_1 + 0x98);
      if (iVar12 == 0) {
        local_164 = iVar12;
        FUN_00017d64(&local_164,*(undefined4 *)(DAT_0003dad4 + 0x3d7ac));
        local_1fc = DAT_0003dab4;
        local_248 = DAT_0003dad8 + 0x3d7c4;
        local_1f8 = DAT_0003dab8;
        local_240 = DAT_0003dadc + 0x3d7d6;
        local_1f4 = DAT_0003dabc;
        local_244 = param_1;
        local_23c = iVar12;
        FUN_0003c0b0(auStack_130,&local_248);
        uVar8 = FUN_00022674(DAT_0003dae0 + 0x3d7f2,0);
        local_208 = *(undefined4 *)(DAT_0003dae4 + 0x3d7fc);
        local_204 = *(undefined4 *)(DAT_0003dae4 + 0x3d800);
        local_200 = *(undefined4 *)(DAT_0003dae4 + 0x3d804);
        local_184 = DAT_0003dae8 + 0x3d820;
        local_180 = *(undefined4 *)(iVar11 + DAT_0003daec);
        FUN_0003c0b0(auStack_154,&local_184);
        pvVar5 = operator_new(0x148);
        iVar12 = DAT_0003daf0 + 0x3d85e;
        FUN_000550e8(pvVar5,&local_164,&local_1fc,auStack_130,uVar8,&local_208,auStack_154);
        *(void **)(param_1 + 0x98) = pvVar5;
        FUN_0001d358(auStack_154);
        local_184 = iVar12;
        FUN_0001d358(auStack_130);
        local_248 = iVar12;
        FUN_00017d90(&local_164);
        (**(code **)(**(int **)(param_1 + 0x98) + 8))();
        FUN_00049d7c(*(undefined4 *)(*(int *)(iVar11 + DAT_0003daf4) + 0x40),
                     *(undefined4 *)(param_1 + 0x98),0);
        fVar16 = *(float *)(param_1 + 0x88);
      }
      else {
        fVar16 = *(float *)(param_1 + 0x88);
      }
    }
    if (fVar16 != DAT_0003d754 && fVar16 < DAT_0003d754 == (NAN(fVar16) || NAN(DAT_0003d754))) {
      *(float *)(param_1 + 0x88) = DAT_0003d748;
      *(undefined4 *)(param_1 + 0x8c) = 1;
    }
    break;
  case 1:
    iVar12 = *(int *)(param_1 + 0x94);
    if (iVar12 != 0) {
      FUN_0007832c();
      uVar8 = FUN_00077830();
      FUN_00053324(iVar12,uVar8);
    }
    break;
  case 2:
  case 3:
  case 4:
    fVar15 = *(float *)(param_1 + 0x88) * DAT_0003d740;
    *(float *)(param_1 + 0x88) = fVar15;
    fVar16 = DAT_0003d738;
    if ((fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15)) && (fVar15 <= DAT_0003d744)) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(float *)(param_1 + 0x88) = fVar16;
      *(undefined4 *)(param_1 + 0x98) = 0;
      if (iVar12 == 3) {
        piVar10 = (int *)operator_new(0x90);
        FUN_00036b0c(piVar10,param_1);
        (**(code **)(*piVar10 + 8))(piVar10);
        FUN_00049d7c(*(undefined4 *)(*(int *)(iVar11 + DAT_0003daf4) + 0x40),piVar10,0);
      }
      else if (iVar12 == 2) {
        piVar10 = (int *)operator_new(0xac);
        FUN_00062d90(piVar10,param_1);
        FUN_00049d7c(*(undefined4 *)(*(int *)(iVar11 + DAT_0003dcd4) + 0x40),piVar10,0);
        (**(code **)(*piVar10 + 8))(piVar10);
      }
      else {
        if (iVar12 == 4) {
          uVar8 = FUN_0001c940();
          iVar12 = FUN_0001bb84(uVar8,0);
          if (iVar12 == 0) {
            uVar8 = FUN_000a3a68();
            FUN_000a44e0(uVar8,3);
            *(undefined4 *)(param_1 + 0x8c) = 0;
            break;
          }
        }
        *(float *)(param_1 + 0x88) = DAT_0003d744;
      }
    }
    break;
  case 6:
    fVar16 = *(float *)(param_1 + 0x88) * DAT_0003d740;
    bVar1 = fVar16 < DAT_0003d744;
    *(float *)(param_1 + 0x88) = fVar16;
    if ((int)((uint)bVar1 << 0x1f) < 0) {
      *(undefined4 *)(*(int *)(*(int *)(iVar11 + DAT_0003d768) + 0x164) + 0x11c) = 8;
      *(undefined *)(param_1 + 0x27) = 1;
    }
  }
  if (local_34 == **(int **)(iVar11 + iVar4)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



