/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00051f80 FUN_00051f80 */

void FUN_00051f80(int *param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  void *pvVar11;
  int iVar12;
  undefined4 uVar13;
  float *pfVar14;
  undefined uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_3d8;
  int *local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  int *local_3c4;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int *local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int *local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  int *local_394;
  int local_390;
  int local_38c;
  int local_388;
  int *local_384;
  int local_380;
  int local_37c;
  int local_378;
  int *local_374;
  int local_370;
  int local_36c;
  int local_368;
  int *local_364;
  int local_360;
  int local_35c;
  int local_358;
  int *local_354;
  int local_350;
  int local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  float afStack_324 [3];
  undefined4 local_318;
  undefined4 local_314;
  int local_310;
  float afStack_30c [3];
  float afStack_300 [3];
  float afStack_2f4 [3];
  float local_2e8;
  float local_2e4;
  float local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  float local_2ac [3];
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  float local_288;
  float local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  float local_25c;
  undefined4 local_258;
  undefined4 local_254;
  float local_250;
  undefined4 local_24c;
  undefined4 local_248;
  float local_244;
  undefined4 local_240;
  undefined4 local_23c;
  float local_238;
  int local_234;
  undefined4 local_230;
  int local_22c;
  undefined4 local_228;
  int local_224;
  undefined4 local_220;
  int local_21c;
  undefined4 local_218;
  int local_214;
  undefined4 local_210;
  int local_20c;
  undefined4 local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  undefined auStack_1ec [36];
  undefined auStack_1c8 [36];
  undefined auStack_1a4 [36];
  undefined auStack_180 [36];
  undefined auStack_15c [36];
  undefined auStack_138 [36];
  undefined auStack_114 [36];
  undefined auStack_f0 [36];
  undefined auStack_cc [36];
  undefined auStack_a8 [36];
  undefined auStack_84 [36];
  undefined auStack_60 [36];
  int local_3c;
  
  iVar10 = DAT_00052358;
  iVar5 = DAT_00052354;
  iVar16 = DAT_00052350 + 0x51f9a;
  iVar17 = *(int *)(iVar16 + DAT_00052358);
  fVar24 = -*(float *)(iVar17 + 0x10);
  local_3c = **(int **)(iVar16 + DAT_00052354);
  iVar18 = param_1[0x32];
  if (iVar18 == 0) {
    local_1f0 = iVar18;
    FUN_00017d64(&local_1f0,param_1[0x37]);
    local_358 = DAT_00052b0c + 0x528d0;
    local_240 = DAT_00052af4;
    local_350 = DAT_00052b10 + 0x528e0;
    local_23c = DAT_00052af8;
    local_238 = DAT_00052ae0;
    local_354 = param_1;
    local_34c = iVar18;
    FUN_0003c0b0(auStack_60,&local_358);
    local_24c = DAT_00052afc;
    local_20c = DAT_00052b14 + 0x52916;
    local_248 = DAT_00052afc;
    local_244 = DAT_00052b00;
    local_208 = *(undefined4 *)(iVar16 + DAT_00052b18);
    FUN_0003c0b0(auStack_84,&local_20c);
    pvVar11 = operator_new(0x148);
    iVar18 = DAT_00052b1c + 0x52964;
    FUN_000550e8(pvVar11,&local_1f0,&local_240,auStack_60,0xffffffff,&local_24c,auStack_84);
    param_1[0x32] = (int)pvVar11;
    FUN_0001d358(auStack_84);
    local_20c = iVar18;
    FUN_0001d358(auStack_60);
    local_358 = iVar18;
    FUN_00017d90(&local_1f0);
    (**(code **)(*(int *)param_1[0x32] + 8))();
    FUN_00049d7c(*(undefined4 *)(iVar17 + 0x40),param_1[0x32],0);
    *(undefined4 *)(param_1[0x32] + 0x28) = 1;
    *(undefined *)(param_1[0x32] + 4) = 1;
  }
  iVar17 = param_1[0x33];
  if (iVar17 == 0) {
    local_1f4 = iVar17;
    FUN_00017d64(&local_1f4,param_1[0x35]);
    local_258 = DAT_00052b04;
    local_368 = DAT_00052b20 + 0x529e2;
    local_254 = DAT_00052af8;
    local_360 = DAT_00052b24 + 0x529f4;
    local_250 = DAT_00052ae0;
    local_364 = param_1;
    local_35c = iVar17;
    FUN_0003c0b0(auStack_a8,&local_368);
    local_214 = DAT_00052b28 + 0x52a1e;
    local_264 = DAT_00052afc;
    local_260 = DAT_00052afc;
    local_25c = DAT_00052b00;
    local_210 = *(undefined4 *)(iVar16 + DAT_00052b18);
    FUN_0003c0b0(auStack_cc,&local_214);
    pvVar11 = operator_new(0x148);
    iVar17 = DAT_00052b2c + 0x52a70;
    FUN_000550e8(pvVar11,&local_1f4,&local_258,auStack_a8,0xffffffff,&local_264,auStack_cc);
    param_1[0x33] = (int)pvVar11;
    FUN_0001d358(auStack_cc);
    local_214 = iVar17;
    FUN_0001d358(auStack_a8);
    local_368 = iVar17;
    FUN_00017d90(&local_1f4);
    (**(code **)(*(int *)param_1[0x33] + 8))();
    FUN_00049d7c(*(undefined4 *)(*(int *)(iVar16 + iVar10) + 0x40),param_1[0x33],0);
    *(undefined4 *)(param_1[0x33] + 0x28) = 1;
    *(undefined *)(param_1[0x33] + 4) = 1;
    iVar17 = param_1[0x33];
  }
  iVar18 = *(int *)(iVar16 + iVar10);
  FUN_00017d64(iVar17 + 0x68,param_1[(*(byte *)(iVar18 + 0x49) ^ 1) + 0x35]);
  FUN_00017d64(param_1[0x32] + 0x68,param_1[(*(byte *)(iVar18 + 0x48) ^ 1) + 0x37]);
  fVar22 = DAT_00052750;
  fVar6 = DAT_00052720;
  switch(param_1[0x47]) {
  case 0:
    iVar17 = FUN_0002f5ec();
    if (iVar17 == 0) {
      *(undefined4 *)(*(int *)(iVar16 + iVar10) + 4) = 0;
    }
    fVar22 = DAT_00052af0;
    fVar6 = DAT_00052aec;
    fVar23 = (float)param_1[0x48];
    if (fVar23 == 0.0 || fVar23 < 0.0 != NAN(fVar23)) {
      iVar17 = *(int *)(iVar16 + iVar10);
      fVar21 = *(float *)(iVar17 + 0x14);
      if (fVar21 != DAT_00052304 && fVar21 < DAT_00052304 == (NAN(fVar21) || NAN(DAT_00052304)))
      goto LAB_000527fa;
      *(undefined4 *)(iVar17 + 4) = 0;
      fVar6 = DAT_00052308;
      param_1[0x4a] = (int)((float)param_1[0x4a] + param_2);
      fVar22 = *(float *)(iVar17 + 0x10);
      iVar18 = (uint)(fVar22 < fVar6) << 0x1f;
      if (-1 < iVar18) {
        fVar21 = DAT_0005230c - fVar22;
        fVar6 = DAT_00052310;
      }
      if (iVar18 < 0) {
        fVar22 = DAT_0005230c;
      }
      if (-1 < iVar18) {
        fVar22 = fVar22 + fVar21 * fVar6;
      }
      *(float *)(iVar17 + 0x10) = fVar22;
    }
    else {
LAB_000527fa:
      iVar17 = *(int *)(iVar16 + iVar10);
      param_1[0x48] = (int)(fVar23 - param_2);
      fVar6 = *(float *)(iVar17 + 0x10) + (fVar6 - *(float *)(iVar17 + 0x10)) * fVar22;
      *(float *)(iVar17 + 0x10) = fVar6;
      if ((int)((uint)(fVar6 < 0.0) << 0x1f) < 0) {
        *(float *)(iVar17 + 0x10) = DAT_00052ae0;
      }
    }
    fVar6 = (float)param_1[0x4a];
    if ((fVar6 != DAT_00052314 && fVar6 < DAT_00052314 == (NAN(fVar6) || NAN(DAT_00052314))) &&
       (iVar17 = *(int *)(iVar16 + iVar10),
       (int)((uint)(*(float *)(iVar17 + 0x10) < 0.0) << 0x1f) < 0)) {
      iVar18 = param_1[0x2e];
      param_1[0x47] = 1;
      if (iVar18 == 0) {
        local_1f8 = iVar18;
        FUN_00017d64(&local_1f8,param_1[0x1f]);
        local_378 = DAT_000532a8 + 0x530d0;
        local_270 = DAT_0005326c;
        local_370 = DAT_000532ac + 0x530e2;
        local_26c = DAT_00053270;
        local_268 = DAT_00053260;
        local_374 = param_1;
        local_36c = iVar18;
        FUN_0003c0b0(auStack_f0,&local_378);
        local_27c = *(undefined4 *)(DAT_000532b0 + 0x5310a);
        local_278 = *(undefined4 *)(DAT_000532b0 + 0x5310e);
        local_274 = *(undefined4 *)(DAT_000532b0 + 0x53112);
        local_21c = DAT_000532b4 + 0x53130;
        local_218 = *(undefined4 *)(iVar16 + DAT_00053294);
        FUN_0003c0b0(auStack_114,&local_21c);
        pvVar11 = operator_new(0x148);
        iVar20 = DAT_000532b8 + 0x5316c;
        FUN_000550e8(pvVar11,&local_1f8,&local_270,auStack_f0,3,&local_27c,auStack_114);
        param_1[0x2e] = (int)pvVar11;
        FUN_0001d358(auStack_114);
        local_21c = iVar20;
        FUN_0001d358(auStack_f0);
        local_378 = iVar20;
        FUN_00017d90(&local_1f8);
        (**(code **)(*(int *)param_1[0x2e] + 8))();
        FUN_00049d7c(*(undefined4 *)(iVar17 + 0x40),param_1[0x2e],0);
        iVar20 = (**(code **)(**(int **)(param_1[0x2e] + 0x68) + 0x14))();
        iVar19 = param_1[0x2e];
        iVar12 = (**(code **)(**(int **)(iVar19 + 0x68) + 0x18))();
        uVar13 = DAT_00053278;
        uVar9 = DAT_00053274;
        local_284 = (float)(ulonglong)(iVar12 + 1);
        local_280 = DAT_00053274;
        *(float *)(iVar19 + 0x110) = (float)(ulonglong)(iVar20 + 1);
        *(float *)(iVar19 + 0x114) = local_284;
        *(undefined4 *)(iVar19 + 0x118) = uVar9;
        *(undefined4 *)(param_1[0x2e] + 0x128) = uVar13;
        uVar9 = DAT_0005327c;
        iVar12 = param_1[0x2e];
        *(undefined4 *)(iVar12 + 0x138) = DAT_0005327c;
        *(undefined4 *)(iVar12 + 0x13c) = uVar9;
        local_388 = DAT_000532bc + 0x53224;
        local_380 = DAT_000532c0 + 0x53232;
        local_384 = param_1;
        local_37c = iVar18;
        local_288 = (float)(ulonglong)(iVar20 + 1);
        (**(code **)(DAT_000532bc + 0x5322c))(&local_388,param_1[0x2e] + 0x2c);
        local_388 = DAT_000532c4 + 0x5324a;
        FUN_000671a8(*(undefined4 *)(iVar17 + 0x16c),param_1[0x2e]);
      }
      iVar17 = param_1[0x2f];
      if (iVar17 == 0) {
        local_1fc = iVar17;
        FUN_00017d64(&local_1fc,param_1[0x20]);
        local_398 = DAT_00053280 + 0x52f1c;
        local_294 = DAT_00053258;
        local_390 = DAT_00053284 + 0x52f2c;
        local_290 = DAT_0005325c;
        local_28c = DAT_00053260;
        local_394 = param_1;
        local_38c = iVar17;
        FUN_0003c0b0(auStack_138,&local_398);
        uVar9 = FUN_00022674(DAT_00053288 + 0x52f4e,0);
        local_2a0 = *(undefined4 *)(DAT_0005328c + 0x52f5a);
        local_29c = *(undefined4 *)(DAT_0005328c + 0x52f5e);
        local_298 = *(undefined4 *)(DAT_0005328c + 0x52f62);
        local_224 = DAT_00053290 + 0x52f80;
        local_220 = *(undefined4 *)(iVar16 + DAT_00053294);
        FUN_0003c0b0(auStack_15c,&local_224);
        pvVar11 = operator_new(0x148);
        iVar18 = DAT_00053298 + 0x52fbe;
        FUN_000550e8(pvVar11,&local_1fc,&local_294,auStack_138,uVar9,&local_2a0,auStack_15c);
        param_1[0x2f] = (int)pvVar11;
        FUN_0001d358(auStack_15c);
        local_224 = iVar18;
        FUN_0001d358(auStack_138);
        local_398 = iVar18;
        FUN_00017d90(&local_1fc);
        (**(code **)(*(int *)param_1[0x2f] + 8))();
        iVar18 = param_1[0x2f];
        FUN_0007832c();
        uVar9 = FUN_00077830();
        FUN_00053324(iVar18,uVar9);
        local_3a8 = DAT_0005329c + 0x53018;
        local_3a0 = DAT_000532a0 + 0x53024;
        local_3a4 = param_1;
        local_39c = iVar17;
        (**(code **)(DAT_0005329c + 340000))(&local_3a8,param_1[0x2f] + 0x2c);
        fVar6 = DAT_00053264;
        local_3a8 = DAT_000532a4 + 0x53042;
        iVar17 = *(int *)(param_1[0x2f] + 0x120);
        *(float *)(iVar17 + 0x28) = *(float *)(iVar17 + 0x28) * DAT_00053264;
        *(float *)(iVar17 + 0x2c) = *(float *)(iVar17 + 0x2c) * fVar6;
        *(float *)(iVar17 + 0x30) = *(float *)(iVar17 + 0x30) * fVar6;
        fVar6 = DAT_00053268;
        iVar17 = param_1[0x2f];
        *(float *)(iVar17 + 0x110) = *(float *)(iVar17 + 0x110) * DAT_00053268;
        *(float *)(iVar17 + 0x114) = *(float *)(iVar17 + 0x114) * fVar6;
        *(float *)(iVar17 + 0x118) = *(float *)(iVar17 + 0x118) * fVar6;
        FUN_00049d7c(*(undefined4 *)(*(int *)(iVar16 + iVar10) + 0x40),param_1[0x2f],0);
      }
      FUN_00051d14(param_1);
    }
    break;
  case 1:
    iVar17 = param_1[0x2f];
    if (iVar17 != 0) {
      FUN_0007832c();
      uVar9 = FUN_00077830();
      FUN_00053324(iVar17,uVar9);
    }
    iVar17 = param_1[0x30];
    if (iVar17 == 0) {
      local_200 = iVar17;
      FUN_00017d64(&local_200,param_1[0x23]);
      local_3b8 = DAT_00052eb0 + 0x52c48;
      local_2b8 = DAT_00052e90;
      local_3b0 = DAT_00052eb4 + 0x52c5a;
      local_2b4 = DAT_00052e94;
      local_2b0 = DAT_00052e98;
      local_3b4 = param_1;
      local_3ac = iVar17;
      FUN_0003c0b0(auStack_180,&local_3b8);
      local_2c4 = *(undefined4 *)(DAT_00052eb8 + 0x52c7e);
      local_2c0 = *(undefined4 *)(DAT_00052eb8 + 0x52c82);
      local_2bc = *(undefined4 *)(DAT_00052eb8 + 0x52c86);
      local_22c = DAT_00052ebc + 0x52ca4;
      local_228 = *(undefined4 *)(iVar16 + DAT_00052ec0);
      FUN_0003c0b0(auStack_1a4,&local_22c);
      pvVar11 = operator_new(0x148);
      iVar18 = DAT_00052ec8 + 0x52ce2;
      FUN_000550e8(pvVar11,&local_200,&local_2b8,auStack_180,
                   **(undefined4 **)(iVar16 + DAT_00052ec4),&local_2c4,auStack_1a4);
      param_1[0x30] = (int)pvVar11;
      FUN_0001d358(auStack_1a4);
      local_22c = iVar18;
      FUN_0001d358(auStack_180);
      local_3b8 = iVar18;
      FUN_00017d90(&local_200);
      *(undefined *)(param_1[0x30] + 0x124) = 1;
      (**(code **)(*(int *)param_1[0x30] + 8))();
      local_3c8 = DAT_00052ecc + 0x52d32;
      local_3c0 = DAT_00052ed0 + 0x52d40;
      local_3c4 = param_1;
      local_3bc = iVar17;
      (**(code **)(DAT_00052ecc + 0x52d3a))(&local_3c8,param_1[0x30] + 0x2c);
      local_3c8 = DAT_00052ed4 + 0x52d56;
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar16 + iVar10) + 0x40),param_1[0x30],0);
    }
    FUN_000a3a68();
    iVar18 = FUN_000a5318();
    iVar17 = DAT_00052764;
    if (iVar18 != 0) {
      if (*(char *)(DAT_00052764 + 0x52ad4) == '\0') {
        FUN_000a3a68();
        FUN_000a3758();
        *(undefined *)(iVar17 + 0x52ad4) = 1;
      }
      FUN_000a3a68();
      iVar17 = FUN_000a375c();
      if (iVar17 != 0) {
        iVar17 = param_1[0x2d];
        *(undefined *)(param_1 + 0x2c) = 1;
        if (iVar17 == 0) {
          local_204 = iVar17;
          FUN_00017d64(&local_204,param_1[0x25]);
          local_2d0 = DAT_00052e9c;
          local_3d8 = DAT_00052ed8 + 0x52d92;
          local_2cc = DAT_00052ea0;
          local_3d0 = DAT_00052edc + 0x52da6;
          local_2c8 = DAT_00052e98;
          local_3d4 = param_1;
          local_3cc = iVar17;
          FUN_0003c0b0(auStack_1c8,&local_3d8);
          local_2dc = *(undefined4 *)(DAT_00052ee0 + 0x52dc6);
          local_2d8 = *(undefined4 *)(DAT_00052ee0 + 0x52dca);
          local_2d4 = *(undefined4 *)(DAT_00052ee0 + 0x52dce);
          local_234 = DAT_00052ee4 + 0x52dec;
          local_230 = *(undefined4 *)(iVar16 + DAT_00052ec0);
          FUN_0003c0b0(auStack_1ec,&local_234);
          pvVar11 = operator_new(0x148);
          iVar17 = DAT_00052ee8 + 0x52e2a;
          FUN_000550e8(pvVar11,&local_204,&local_2d0,auStack_1c8,0xffffffff,&local_2dc,auStack_1ec);
          param_1[0x2d] = (int)pvVar11;
          FUN_0001d358(auStack_1ec);
          local_234 = iVar17;
          FUN_0001d358(auStack_1c8);
          local_3d8 = iVar17;
          FUN_00017d90(&local_204);
          (**(code **)(*(int *)param_1[0x2d] + 8))();
          uVar9 = DAT_00052ea4;
          *(undefined *)(param_1[0x2d] + 0x10e) = 0;
          iVar17 = param_1[0x2d];
          *(undefined4 *)(iVar17 + 0x138) = uVar9;
          *(undefined4 *)(iVar17 + 0x13c) = DAT_00052ea8;
          FUN_00049d7c(*(undefined4 *)(*(int *)(iVar16 + iVar10) + 0x40),param_1[0x2d],0);
          param_1[0x2a] = DAT_00052eac;
        }
        FUN_000a3a68();
        iVar17 = FUN_000a3754();
        if (iVar17 != 0) {
          fVar22 = (float)param_1[0x2a] - param_2;
          param_1[0x2a] = (int)fVar22;
          fVar6 = fVar22;
          if (fVar22 <= 0.0) {
            fVar6 = DAT_00052718;
          }
          if (fVar22 <= 0.0) {
            param_1[0x2a] = (int)fVar6;
          }
        }
      }
    }
    fVar6 = DAT_0005272c;
    fVar23 = DAT_00052724;
    fVar22 = DAT_00052720;
    local_2e8 = DAT_00052720;
    local_2e4 = ((float)param_1[6] + DAT_0005271c + fVar24 * (float)param_1[6] * DAT_00052728) *
                DAT_0005272c;
    param_1[2] = (int)DAT_00052720;
    param_1[3] = (int)local_2e4;
    param_1[4] = (int)fVar22;
    fVar22 = *(float *)(*(int *)(iVar16 + iVar10) + 0x10);
    iVar17 = (uint)(fVar22 < fVar23) << 0x1f;
    if (-1 < iVar17) {
      fVar6 = DAT_00052730 - fVar22;
      fVar23 = DAT_00052734;
    }
    if (iVar17 < 0) {
      fVar22 = DAT_00052730;
    }
    if (-1 < iVar17) {
      fVar22 = fVar22 + fVar6 * fVar23;
    }
    *(float *)(*(int *)(iVar16 + iVar10) + 0x10) = fVar22;
    local_2e0 = local_2e8;
    break;
  case 2:
    if (fVar24 != DAT_00052738 && fVar24 < DAT_00052738 == (NAN(fVar24) || NAN(DAT_00052738))) {
      iVar17 = *(int *)(iVar16 + iVar10);
      *(undefined4 *)(iVar17 + 0x2c) = *(undefined4 *)(iVar17 + 0x24);
      uVar9 = FUN_00086780();
      FUN_0008b280(uVar9,1);
      *(undefined *)(iVar17 + 8) = 1;
    }
    fVar6 = DAT_00052740;
    fVar22 = *(float *)(*(int *)(iVar16 + iVar10) + 0x10) * DAT_0005273c;
    *(float *)(*(int *)(iVar16 + iVar10) + 0x10) = fVar22;
    if ((int)((uint)(fVar22 < 0.0) << 0x1f) < 0) {
      fVar22 = -fVar22;
    }
    if ((int)((uint)(fVar22 < fVar6) << 0x1f) < 0) {
      iVar17 = *(int *)(iVar16 + iVar10);
      *(float *)(iVar17 + 0x10) = DAT_00052720;
      *(undefined *)(iVar17 + 8) = 0;
      param_1[0x47] = 0x11;
    }
    fVar6 = (float)param_1[6];
    pfVar14 = local_2ac;
    goto LAB_00052662;
  case 3:
  case 4:
    uVar9 = FUN_0001c940();
    iVar17 = FUN_0001bb84(uVar9,0);
    if (iVar17 == 0) {
      FUN_0004f910(param_1);
      fVar24 = (float)param_1[0x4a] * DAT_00052b30;
      param_1[0x4a] = (int)fVar24;
      if ((fVar24 != 0.0) && ((int)((uint)(fVar24 < DAT_00052b34) << 0x1f) < 0)) {
        param_1[0x4a] = DAT_00052b40;
        piVar7 = (int *)operator_new(0xa0);
        FUN_0003d35c();
        (**(code **)(*piVar7 + 8))(piVar7);
        FUN_00049d7c(*(undefined4 *)(*(int *)(iVar16 + iVar10) + 0x40),piVar7,0);
        goto LAB_00052658;
      }
    }
    else {
LAB_00052658:
      fVar24 = (float)param_1[0x4a];
    }
    pfVar14 = afStack_2f4;
    fVar6 = (float)param_1[6];
    goto LAB_00052662;
  case 8:
    fVar6 = (float)param_1[0x4a];
    if (fVar6 == DAT_00052738 || fVar6 < DAT_00052738 != (NAN(fVar6) || NAN(DAT_00052738))) {
      fVar24 = fVar6 + (DAT_00052b00 - fVar6) * DAT_00052af0;
      param_1[0x4a] = (int)fVar24;
    }
    else {
      fVar6 = param_2 + fVar6;
      bVar1 = fVar6 < DAT_00052718;
      bVar2 = fVar6 != DAT_00052718;
      bVar3 = NAN(DAT_00052718);
      param_1[0x4a] = (int)fVar6;
      fVar24 = DAT_00052760;
      if (bVar2 && bVar1 == (NAN(fVar6) || bVar3)) {
        param_1[0x4a] = DAT_0005275c;
        param_1[0x47] = 0;
        param_1[0x48] = (int)DAT_00052720;
        fVar24 = DAT_00052760;
      }
    }
    fVar6 = (float)param_1[6];
    pfVar14 = afStack_30c;
    goto LAB_00052662;
  case 9:
  case 10:
    iVar17 = param_1[0x2e];
    if (iVar17 != 0) {
      iVar17 = 1;
    }
    if (param_1[0x2f] != 0) {
      iVar17 = iVar17 + 1;
    }
    if (param_1[0x30] != 0) {
      iVar17 = iVar17 + 1;
    }
    if (param_1[0x31] != 0) {
      iVar17 = iVar17 + 1;
    }
    if (param_1[0x34] != 0) {
      iVar17 = iVar17 + 1;
    }
    uVar9 = FUN_0001c940();
    uVar8 = FUN_0001bb84(uVar9,0);
    if (uVar8 <= iVar17 - 1U) {
      iVar17 = *(int *)(iVar16 + iVar10);
      *(undefined *)(iVar17 + 0x194) = 0;
      uVar9 = FUN_000a3a68();
      if (param_1[0x47] == 10) {
        uVar13 = 3;
      }
      else {
        uVar13 = 0;
      }
      iVar18 = FUN_000a44e0(uVar9,uVar13);
      if (iVar18 == 0) {
        uVar9 = FUN_000a3a68();
        iVar18 = FUN_00094c90(uVar9,1);
        if (iVar18 != 0) {
          *(undefined *)(iVar17 + 0x19c) = 1;
          FUN_000a3a68();
          FUN_00094c8c();
        }
      }
      if (param_1[0x47] == 10) {
        param_1[0x30] = 0;
        iVar17 = 0x14;
      }
      else {
        param_1[0x34] = 0;
        iVar17 = 0x13;
      }
      param_1[0x47] = iVar17;
    }
    break;
  case 0xb:
    uVar9 = FUN_000a3a68();
    iVar17 = FUN_000951b0(uVar9,param_2);
    if (iVar17 == 0) {
      param_1[0x48] = (int)DAT_00052720;
      param_1[0x47] = 1;
      param_1[0x4a] = DAT_00052748;
    }
    break;
  case 0xe:
  case 0xf:
    fVar6 = (float)param_1[0x4a];
    fVar24 = fVar6 * DAT_0005274c;
    bVar1 = fVar6 < DAT_00052750;
    bVar2 = fVar6 != DAT_00052750;
    bVar3 = NAN(DAT_00052750);
    param_1[0x4a] = (int)fVar24;
    if ((bVar2 && bVar1 == (NAN(fVar6) || bVar3)) && (fVar24 <= fVar22)) {
      FUN_0004f910(param_1);
      piVar7 = (int *)operator_new(0xc4);
      FUN_00044bb0(piVar7,0);
      (**(code **)(*piVar7 + 8))(piVar7);
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar16 + iVar10) + 0x40),piVar7,0);
      fVar24 = (float)param_1[0x4a];
    }
    fVar6 = (float)param_1[6];
    pfVar14 = afStack_300;
    goto LAB_00052662;
  case 0x10:
    uVar9 = FUN_0001c940();
    iVar17 = FUN_0001bb84(uVar9,0);
    fVar6 = DAT_00052754;
    if (iVar17 == 0) {
      fVar24 = (float)param_1[0x4a] * DAT_0005274c;
      param_1[0x4a] = (int)fVar24;
      if (fVar24 <= fVar6) {
        param_1[0x4a] = (int)DAT_00052720;
        uVar9 = FUN_000a3a68();
        FUN_00094c94(uVar9,0,0xffffffff,2,2);
        param_1[0x47] = 0;
        goto LAB_000525ba;
      }
    }
    else {
LAB_000525ba:
      fVar24 = (float)param_1[0x4a];
    }
    fVar6 = (float)param_1[6];
    pfVar14 = afStack_324;
LAB_00052662:
    *pfVar14 = DAT_00052720;
    pfVar14[2] = DAT_00052720;
    pfVar14[1] = (fVar6 + DAT_0005271c + fVar24 * fVar6 * DAT_00052728) * DAT_0005272c;
    fVar6 = pfVar14[1];
    fVar22 = pfVar14[2];
    param_1[2] = (int)*pfVar14;
    param_1[3] = (int)fVar6;
    param_1[4] = (int)fVar22;
    break;
  case 0x11:
    iVar17 = *(int *)(iVar16 + iVar10);
    fVar24 = DAT_00052ae0;
    if ((int)((uint)(*(float *)(iVar17 + 0x10) < DAT_00052720) << 0x1f) < 0) {
      fVar22 = *(float *)(iVar17 + 0x10) * DAT_0005273c;
      bVar1 = fVar22 < DAT_00052758;
      bVar2 = fVar22 != DAT_00052758;
      bVar3 = NAN(DAT_00052758);
      *(float *)(iVar17 + 0x10) = fVar22;
      fVar24 = DAT_00052ae0;
      if (bVar2 && bVar1 == (NAN(fVar22) || bVar3)) {
        *(float *)(iVar17 + 0x10) = fVar6;
        *(undefined *)(iVar17 + 8) = 0;
        fVar24 = fVar6;
      }
    }
    break;
  case 0x13:
  case 0x14:
    fVar22 = (float)param_1[0x46] + param_2 * DAT_00052744;
    iVar17 = *(int *)(iVar16 + iVar10);
    bVar1 = fVar22 < DAT_00052744;
    bVar2 = NAN(DAT_00052744);
    param_1[0x46] = (int)fVar22;
    fVar6 = fVar22;
    if (bVar1 == (NAN(fVar22) || bVar2)) {
      fVar6 = DAT_00052720;
    }
    if (bVar1 == (NAN(fVar22) || bVar2)) {
      param_1[0x46] = (int)fVar6;
    }
    fVar6 = DAT_00052720;
    if (*(char *)(iVar17 + 0x194) != '\0') {
      *(undefined *)(iVar17 + 0x194) = 0;
      param_1[0x48] = (int)fVar6;
      param_1[0x47] = 0;
      param_1[0x4a] = DAT_00052748;
    }
    break;
  case 0x15:
    FUN_000671a8(*(undefined4 *)(*(int *)(iVar16 + iVar10) + 0x16c),0);
    uVar9 = FUN_0001c940();
    iVar18 = FUN_0001bb84(uVar9,0);
    iVar17 = DAT_00052b08;
    if (iVar18 == 0) {
      param_1[0x30] = 0;
      param_1[0x34] = 0;
      fVar6 = DAT_00052ae0;
      iVar17 = *(int *)(*(int *)(iVar16 + iVar17) + 8);
      if (iVar17 == 2) {
        local_318 = DAT_00052b38;
        local_314 = DAT_00052b3c;
        local_310 = DAT_00052b40;
        FUN_000333d4();
        param_1[0x47] = 0x16;
      }
      else if (iVar17 == 3) {
        param_1[0x47] = 0;
        param_1[0x48] = (int)fVar6;
        param_1[0x4a] = DAT_00052ae4;
      }
    }
    break;
  case 0x16:
    FUN_000671a8(*(undefined4 *)(*(int *)(iVar16 + iVar10) + 0x16c),0);
    iVar17 = FUN_00030094();
    if (iVar17 != 0) {
      FUN_00099108(*(undefined4 *)(iVar16 + DAT_00052b08));
    }
  }
  if (*(char *)(DAT_0005235c + 0x520ee) != '\0') {
    *(undefined *)(DAT_0005235c + 0x520ee) = 0;
  }
  (**(code **)(*param_1 + 0x34))(param_1,param_2,fVar24);
  cVar4 = *(char *)(param_1 + 0x2c);
  fVar22 = (float)param_1[0x2b];
  fVar6 = DAT_0005234c;
  if (cVar4 == '\0') {
    fVar6 = DAT_00052318;
  }
  fVar23 = DAT_0005231c;
  if (0.0 < fVar22 + param_2 * fVar6) {
    fVar6 = DAT_00052318;
    if (cVar4 != '\0') {
      fVar6 = DAT_0005234c;
    }
    fVar6 = param_2 * fVar6 + fVar22;
    fVar23 = DAT_00052320;
    if (fVar6 < DAT_00052320 != (NAN(fVar6) || NAN(DAT_00052320))) {
      if (cVar4 == '\0') {
        fVar23 = param_2 * DAT_00052318 + fVar22;
      }
      else {
        fVar23 = param_2 * DAT_0005234c + fVar22;
      }
    }
  }
  iVar17 = param_1[0x2d];
  param_1[0x2b] = (int)fVar23;
  if (iVar17 != 0) {
    fVar6 = (float)FUN_00083f0c(DAT_00052320 - fVar23,DAT_00052320);
    local_330 = fVar6 * DAT_0005231c - DAT_00052324;
    local_32c = fVar6 * DAT_00052328 - DAT_0005232c;
    local_328 = fVar6 * DAT_0005231c + DAT_0005231c;
    *(float *)(iVar17 + 8) = local_330;
    *(float *)(iVar17 + 0xc) = local_32c;
    *(float *)(iVar17 + 0x10) = local_328;
    if ((float)param_1[0x2b] <= 0.0) {
      *(undefined *)(param_1[0x2d] + 0x27) = 1;
      param_1[0x2d] = 0;
    }
  }
  uVar9 = DAT_00052330;
  if ((param_1[0x32] != 0) && (param_1[0x33] != 0)) {
    bVar1 = fVar24 < 0.0;
    bVar2 = fVar24 == 0.0;
    bVar3 = NAN(fVar24);
    *(undefined4 *)(param_1[0x32] + 0xc) = DAT_00052330;
    *(undefined4 *)(param_1[0x33] + 0xc) = uVar9;
    iVar17 = param_1[0x32];
    if (!bVar2 && bVar1 == bVar3) {
      uVar9 = DAT_00052334;
    }
    if (bVar2 || bVar1 != bVar3) {
      uVar9 = DAT_00052338;
    }
    if (!bVar2 && bVar1 == bVar3) {
      *(undefined4 *)(iVar17 + 8) = uVar9;
    }
    if (bVar2 || bVar1 != bVar3) {
      *(undefined4 *)(iVar17 + 8) = uVar9;
    }
    if (!bVar2 && bVar1 == bVar3) {
      uVar9 = DAT_0005233c;
    }
    if (bVar2 || bVar1 != bVar3) {
      uVar9 = DAT_00052340;
    }
    if (!bVar2 && bVar1 == bVar3) {
      iVar17 = param_1[0x33];
    }
    if (bVar2 || bVar1 != bVar3) {
      iVar17 = param_1[0x33];
    }
    *(undefined4 *)(iVar17 + 8) = uVar9;
    fVar6 = (float)FUN_000301d0();
    uVar15 = (undefined)iVar17;
    if (0.0 < fVar6 + fVar24) {
      fVar6 = (float)FUN_000301d0();
      if (fVar6 + fVar24 < DAT_00052320 == (NAN(fVar6 + fVar24) || NAN(DAT_00052320))) {
        uVar15 = 1;
        fVar6 = DAT_00052320;
      }
      else {
        fVar6 = (float)FUN_000301d0();
        fVar6 = fVar6 + fVar24;
        if (fVar6 == DAT_00052ae8 || fVar6 < DAT_00052ae8 != (NAN(fVar6) || NAN(DAT_00052ae8))) {
          uVar15 = 0;
        }
        if (fVar6 != DAT_00052ae8 && fVar6 < DAT_00052ae8 == (NAN(fVar6) || NAN(DAT_00052ae8))) {
          uVar15 = 1;
        }
      }
    }
    else {
      uVar15 = 0;
      fVar6 = DAT_0005231c;
    }
    fVar24 = DAT_00052344 - fVar6 * DAT_00052344;
    *(undefined *)(param_1[0x32] + 0x24) = uVar15;
    *(undefined *)(param_1[0x33] + 0x24) = uVar15;
    *(float *)(param_1[0x32] + 0xc) = *(float *)(param_1[0x32] + 0xc) + fVar24;
    *(float *)(param_1[0x33] + 0xc) = *(float *)(param_1[0x33] + 0xc) + fVar24;
    iVar17 = FUN_0002f5f4();
    if (((iVar17 != 0) &&
        (fVar24 = *(float *)(*(int *)(iVar16 + iVar10) + 0x10),
        fVar24 != DAT_00052348 && fVar24 < DAT_00052348 == (NAN(fVar24) || NAN(DAT_00052348)))) &&
       (iVar10 = FUN_00030218(), iVar10 == 1)) {
      iVar10 = param_1[0x32];
      local_338 = -*(float *)(iVar10 + 0xc);
      local_334 = -*(float *)(iVar10 + 0x10);
      local_33c = -*(float *)(iVar10 + 8);
      *(float *)(iVar10 + 8) = local_33c;
      *(float *)(iVar10 + 0xc) = local_338;
      *(float *)(iVar10 + 0x10) = local_334;
      iVar10 = param_1[0x33];
      local_344 = -*(float *)(iVar10 + 0xc);
      local_340 = -*(float *)(iVar10 + 0x10);
      local_348 = -*(float *)(iVar10 + 8);
      *(float *)(iVar10 + 8) = local_348;
      *(float *)(iVar10 + 0xc) = local_344;
      *(float *)(iVar10 + 0x10) = local_340;
    }
  }
  if (local_3c == **(int **)(iVar16 + iVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



