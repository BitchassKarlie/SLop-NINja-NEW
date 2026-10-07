/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00047810 FUN_00047810 */

void FUN_00047810(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined uVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  int local_2b4;
  float local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  float local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  float local_290;
  int local_28c;
  int local_288;
  int local_284;
  float local_280;
  int local_27c;
  int local_278;
  int local_274;
  float local_270;
  int local_26c;
  int local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined4 local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  undefined4 local_230;
  float local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  undefined4 local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  undefined4 local_1f4;
  float local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  float local_174;
  float local_170;
  float local_16c;
  float afStack_168 [3];
  float local_15c [3];
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  int local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined4 local_110;
  undefined auStack_10c [36];
  undefined auStack_e8 [36];
  undefined auStack_c4 [36];
  undefined auStack_a0 [36];
  undefined auStack_7c [36];
  undefined auStack_58 [36];
  int local_34;
  
  iVar4 = DAT_00047b30;
  iVar13 = DAT_00047b2c + 0x47828;
  local_34 = **(int **)(iVar13 + DAT_00047b30);
  iVar18 = (int)((float)(longlong)*(int *)((int)param_1 + 0xa8) + param_2 * DAT_00047b08);
  *(int *)((int)param_1 + 0xa8) = iVar18;
  iVar11 = iVar18;
  if (999 < iVar18) {
    iVar11 = iVar18 + -1000;
  }
  if (999 < iVar18) {
    *(int *)((int)param_1 + 0xa8) = iVar11;
  }
  fVar17 = param_1;
  if (*(char *)(DAT_00047b34 + 0x4785e) != '\0') {
    *(char *)(DAT_00047b34 + 0x4785e) = '\0';
    FUN_000a3a68();
    fVar17 = (float)FUN_00094b68();
  }
  *(undefined4 *)((int)param_1 + 0x28) = 3;
  iVar11 = DAT_00047fa0;
  switch(*(undefined4 *)((int)param_1 + 0x74)) {
  case 0:
    if (*(char *)((int)param_1 + 0x118) == '\0') {
      if (*(int *)(*(int *)(iVar13 + DAT_00047fa0) + 4) == 2) {
        uVar6 = FUN_0001c940();
        fVar17 = (float)FUN_0001bb84(uVar6,0);
        if (fVar17 == 0.0) {
          uVar6 = FUN_0001c940();
          fVar17 = (float)FUN_0001bb84(uVar6,1);
          if (fVar17 == 0.0) goto LAB_00047cbe;
        }
      }
      else {
LAB_00047cbe:
        *(undefined *)(*(int *)(iVar13 + iVar11) + 0x39) = 1;
      }
    }
    fVar19 = DAT_00047f70;
    param_2 = param_2 + *(float *)((int)param_1 + 0x78);
    *(undefined4 *)((int)param_1 + 0x28) = 0;
    *(float *)((int)param_1 + 0x78) = param_2;
    if ((int)((uint)(param_2 < fVar19) << 0x1f) < 0) {
      fVar19 = (param_2 / fVar19) * DAT_00047f74;
      bVar1 = fVar19 < DAT_00047f74;
      bVar2 = fVar19 == DAT_00047f74;
      bVar3 = NAN(fVar19) || NAN(DAT_00047f74);
      if (bVar2 || bVar1 != bVar3) {
        fVar19 = (float)((uint)(0.0 < fVar19) * (int)fVar19);
      }
      if (!bVar2 && bVar1 == bVar3) {
        fVar17 = 2.8054e-41;
      }
      if (bVar2 || bVar1 != bVar3) {
        fVar17 = fVar19;
      }
      if (bVar2 || bVar1 != bVar3) {
        fVar17 = (float)((uint)fVar17 & 0xffff);
      }
      local_144 = (float)FUN_000927b8(fVar17);
      local_140 = local_144 * *(float *)((int)param_1 + 0x80);
      local_13c = local_144 * *(float *)((int)param_1 + 0x84);
      local_144 = local_144 * *(float *)((int)param_1 + 0x7c);
      local_110 = FUN_000927b8(0x4e34);
      FUN_00019f04(&local_150,&local_144,&local_110);
      pfVar9 = local_15c;
      local_14c = local_14c + local_14c;
      local_148 = local_148 + local_148;
    }
    else {
      pfVar9 = afStack_168;
      local_14c = *(float *)((int)param_1 + 0x80) + *(float *)((int)param_1 + 0x80);
      local_148 = *(float *)((int)param_1 + 0x84) + *(float *)((int)param_1 + 0x84);
      local_150 = *(float *)((int)param_1 + 0x7c);
    }
    fVar17 = DAT_00047f78;
    pfVar9[1] = local_14c;
    pfVar9[2] = local_148;
    *pfVar9 = local_150 + local_150;
    fVar19 = pfVar9[1];
    fVar10 = pfVar9[2];
    *(float *)((int)param_1 + 0x14) = *pfVar9;
    *(float *)((int)param_1 + 0x18) = fVar19;
    *(float *)((int)param_1 + 0x1c) = fVar10;
    uVar6 = DAT_0004818c;
    fVar19 = *(float *)((int)param_1 + 0x78);
    if (fVar19 != fVar17 && fVar19 < fVar17 == (NAN(fVar19) || NAN(fVar17))) {
      if (*(int *)(*(int *)(iVar13 + DAT_00047fa0) + 4) == 2) {
        *(undefined4 *)((int)param_1 + 0x74) = 1;
        *(undefined4 *)((int)param_1 + 0x78) = uVar6;
      }
      else {
        FUN_00047678(param_1);
      }
    }
    fVar17 = DAT_00047f7c;
    local_174 = DAT_00047f7c;
    *(float *)((int)param_1 + 8) = DAT_00047f7c;
    *(float *)((int)param_1 + 0xc) = fVar17;
    *(float *)((int)param_1 + 0x10) = fVar17;
    local_170 = local_174;
    local_16c = local_174;
    break;
  case 1:
    uVar6 = FUN_0001c940();
    iVar11 = FUN_0001bb84(uVar6,0);
    if (iVar11 == 0) {
      uVar6 = FUN_0001c940();
      iVar18 = FUN_0001bb84(uVar6,1);
      iVar11 = DAT_00047fa0;
      if (iVar18 == 0) {
        iVar18 = *(int *)((int)param_1 + 0xc0);
        if (iVar18 == 0) {
          pvVar7 = operator_new(0xc0);
          FUN_00039c88();
          *(void **)((int)param_1 + 0xc0) = pvVar7;
          uVar8 = DAT_0004881c;
          uVar6 = DAT_00048818;
          local_180 = DAT_00048818;
          local_17c = DAT_0004881c;
          local_178 = DAT_00048818;
          *(undefined4 *)((int)pvVar7 + 8) = DAT_00048818;
          *(undefined4 *)((int)pvVar7 + 0xc) = uVar8;
          *(undefined4 *)((int)pvVar7 + 0x10) = uVar6;
          local_274 = DAT_00048830 + 0x48676;
          local_26c = DAT_00048834 + 0x48680;
          local_270 = param_1;
          local_268 = iVar18;
          (**(code **)(DAT_00048830 + 0x4867e))(&local_274,*(int *)((int)param_1 + 0xc0) + 0x2c);
          iVar11 = DAT_0004883c;
          local_274 = DAT_00048838 + 0x48694;
          FUN_00049d7c(*(undefined4 *)(*(int *)(iVar13 + DAT_0004883c) + 0x40),
                       *(undefined4 *)((int)param_1 + 0xc0),0);
          uVar6 = FUN_0007555c();
          FUN_0007523c(uVar6,*(undefined4 *)((int)param_1 + 0xc0));
        }
        else {
          fVar17 = *(float *)((int)param_1 + 0xc);
          fVar19 = *(float *)(iVar18 + 0xc) + *(float *)(iVar18 + 0xb8) + DAT_00047f88;
          if (fVar17 == fVar19 || fVar17 < fVar19 != (NAN(fVar17) || NAN(fVar19))) {
            fVar17 = fVar19;
          }
          local_18c = fVar17 / DAT_00047f8c;
          *(float *)((int)param_1 + 0xc) = fVar17;
          local_18c = local_18c + DAT_00047f90;
          local_188 = local_18c *
                      (*(float *)((int)param_1 + 0x80) + *(float *)((int)param_1 + 0x80));
          local_184 = local_18c *
                      (*(float *)((int)param_1 + 0x84) + *(float *)((int)param_1 + 0x84));
          local_18c = local_18c *
                      (*(float *)((int)param_1 + 0x7c) + *(float *)((int)param_1 + 0x7c));
          *(float *)((int)param_1 + 0x14) = local_18c;
          *(float *)((int)param_1 + 0x18) = local_188;
          *(float *)((int)param_1 + 0x1c) = local_184;
        }
        iVar11 = *(int *)(iVar13 + iVar11);
        *(float *)((int)param_1 + 0x78) = *(float *)((int)param_1 + 0x78) + param_2;
        *(undefined *)(iVar11 + 0x39) = 1;
        *(undefined4 *)(*(int *)((int)param_1 + 0xc0) + 0xb0) = *(undefined4 *)((int)param_1 + 0x78)
        ;
      }
    }
    break;
  case 6:
    iVar11 = DAT_00048190;
LAB_00047fa6:
    if (*(int *)((int)param_1 + 0xb8) == 0) {
      pvVar7 = operator_new(0x1ec);
      FUN_0003fe48();
      local_19c = DAT_00048550;
      local_1a0 = *(float *)((int)param_1 + 0xb0) + DAT_00048558;
      *(void **)((int)param_1 + 0xb8) = pvVar7;
      local_19c = *(float *)((int)param_1 + 0xb4) + local_19c;
      local_1a4 = *(float *)((int)param_1 + 0xac) + DAT_0004855c;
      *(float *)((int)pvVar7 + 8) = local_1a4;
      *(float *)((int)pvVar7 + 0xc) = local_1a0;
      *(float *)((int)pvVar7 + 0x10) = local_19c;
      *(undefined4 *)(*(int *)((int)param_1 + 0xb8) + 0x78) = *(undefined4 *)((int)param_1 + 0x124);
      *(undefined4 *)(*(int *)((int)param_1 + 0xb8) + 0x7c) = *(undefined4 *)((int)param_1 + 0x128);
      (**(code **)(**(int **)((int)param_1 + 0xb8) + 8))();
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar13 + iVar11) + 0x40),
                   *(undefined4 *)((int)param_1 + 0xb8));
    }
    fVar17 = DAT_00048198;
    iVar18 = *(int *)(iVar13 + iVar11);
    if ((int)((uint)(*(float *)(iVar18 + 0x10) < DAT_00048170) << 0x1f) < 0) {
      *(undefined4 *)((int)param_1 + 0x10c) = 0;
      fVar17 = *(float *)(iVar18 + 0x10) + (fVar17 - *(float *)(iVar18 + 0x10)) * DAT_00048174;
      bVar1 = fVar17 < DAT_00048178;
      *(float *)(iVar18 + 0x10) = fVar17;
      if ((int)((uint)bVar1 << 0x1f) < 0) {
        *(undefined *)(iVar18 + 0x39) = 1;
      }
      fVar19 = fVar17;
      if (fVar17 < DAT_00048170 == (NAN(fVar17) || NAN(DAT_00048170))) {
        iVar18 = *(int *)(iVar13 + iVar11);
        fVar19 = DAT_00048198;
      }
      if (fVar17 < DAT_00048170 == (NAN(fVar17) || NAN(DAT_00048170))) {
        *(float *)(iVar18 + 0x10) = fVar19;
      }
      iVar18 = *(int *)((int)param_1 + 0x10c);
      *(float *)((int)param_1 + 0x130) = fVar19;
LAB_00048012:
      if (iVar18 == 10) {
        *(undefined4 *)((int)param_1 + 0x10c) = 0xb;
        if (*(char *)((int)param_1 + 0x118) == '\0') {
          iVar15 = FUN_0002f60c(0);
          *(undefined *)((int)param_1 + 0x118) = 1;
          *(undefined *)(*(int *)(*(int *)(iVar13 + iVar11) + 0x50) + 0x111) = 0;
          iVar18 = DAT_00048580;
          if (-1 < *(int *)(DAT_00048580 + 0x4844c) << 0x1f) {
            iVar16 = DAT_00048580 + 0x4844c;
            iVar12 = __cxa_guard_acquire(iVar16);
            if (iVar12 != 0) {
              uVar6 = FUN_0008f414(DAT_0004882c + 0x48610);
              *(undefined4 *)(iVar18 + 0x48450) = uVar6;
              __cxa_guard_release(iVar16);
            }
          }
          iVar18 = DAT_00048584;
          if (-1 < *(int *)(DAT_00048584 + 0x48466) << 0x1f) {
            iVar16 = DAT_00048584 + 0x48466;
            iVar12 = __cxa_guard_acquire(iVar16);
            if (iVar12 != 0) {
              uVar6 = FUN_0008f414(DAT_00048828 + 0x485ec);
              *(undefined4 *)(iVar18 + 0x4846a) = uVar6;
              __cxa_guard_release(iVar16);
            }
          }
          iVar18 = DAT_00048588;
          iVar12 = *(int *)(iVar13 + iVar11);
          FUN_00072d2c(*(undefined4 *)(iVar12 + 0x50),DAT_0004858c + 0x483d8,
                       *(undefined4 *)(DAT_00048588 + 0x4847c),1,1,1);
          FUN_00072d2c(*(undefined4 *)(iVar12 + 0x50),DAT_00048590 + 0x483f2,
                       *(undefined4 *)(iVar18 + 0x48484),iVar15,1,1);
          FUN_0006ff68(*(undefined4 *)(iVar12 + 0x50));
          uVar6 = FUN_00017e38();
          FUN_000191c8(uVar6,iVar15);
          uVar6 = FUN_00017e38();
          FUN_00019328(uVar6,*(undefined4 *)(iVar12 + 0x178));
          uVar6 = FUN_00017e38();
          FUN_0002f508();
          FUN_00018f64(uVar6,iVar15);
          if (*(int *)(iVar12 + 4) != 2) {
            uVar6 = FUN_00076a80();
            iVar18 = FUN_000773bc(uVar6,*(undefined4 *)(iVar12 + 4));
            if (iVar18 != 0) {
              FUN_000771b0();
            }
          }
          if ((((*(int *)((int)param_1 + 0xb8) != 0) &&
               (*(int *)(*(int *)(iVar13 + iVar11) + 4) == 3)) &&
              (iVar18 = *(int *)(*(int *)((int)param_1 + 0xb8) + 0xd4), -1 < iVar18)) &&
             (iVar18 < 0x19)) {
            uVar6 = FUN_00017e38();
            uVar8 = *(undefined4 *)(*(int *)((int)param_1 + 0xb8) + 0xc4);
            FUN_00076110(*(undefined4 *)(*(int *)((int)param_1 + 0xb8) + 0xd4));
            FUN_0008f414();
            FUN_00019158(uVar6,uVar8);
          }
          iVar18 = FUN_0002f508();
          if (iVar18 / 2 < iVar15) {
            iVar18 = *(int *)(*(int *)(iVar13 + iVar11) + 0x50);
            uVar5 = FUN_0002f528(iVar15);
            *(undefined *)(iVar18 + 0x110) = uVar5;
          }
          iVar18 = FUN_00017b68(0xffffffff);
          if (iVar18 == 0) {
LAB_000485c2:
            if (*(int *)(*(int *)(iVar13 + iVar11) + 4) == 2) {
              FUN_0007555c();
              FUN_00074d1c();
            }
          }
          else {
            uVar6 = FUN_000a3a68();
            FUN_000a4ca4(uVar6,iVar18,iVar15,iVar15 >> 0x1f,0,0);
            if (*(int *)(*(int *)(iVar13 + iVar11) + 4) == 2) {
              uVar6 = FUN_000a3a68();
              iVar18 = FUN_00046648();
              FUN_000a4ca4(uVar6,DAT_00048824 + 0x485ac,iVar15,iVar18 + (iVar15 >> 0x1f),0,0);
              goto LAB_000485c2;
            }
          }
          iVar18 = *(int *)(iVar13 + iVar11);
          FUN_0006fc30(*(undefined4 *)(iVar18 + 0x50));
          FUN_0006ff24(*(undefined4 *)(iVar18 + 0x50));
          FUN_000313d0(0);
        }
        iVar15 = *(int *)(iVar13 + iVar11);
        *(float *)(iVar15 + 0x10) = DAT_00048198;
        iVar18 = *(int *)((int)param_1 + 0x94);
        *(undefined4 *)((int)param_1 + 0x74) = 6;
        if (iVar18 == 0) {
          local_114 = iVar18;
          FUN_00017d64(&local_114,*(undefined4 *)(DAT_00048840 + 0x48776));
          local_284 = DAT_00048844 + 0x48710;
          local_1ac = DAT_00048820;
          local_1b0 = DAT_00048818;
          local_1a8 = DAT_00048818;
          local_27c = DAT_00048848 + 0x4872e;
          local_280 = param_1;
          local_278 = iVar18;
          FUN_0003c0b0(auStack_58,&local_284);
          local_1bc = *(undefined4 *)(DAT_0004884c + 0x48744);
          local_1b8 = *(undefined4 *)(DAT_0004884c + 0x48748);
          local_1b4 = *(undefined4 *)(DAT_0004884c + 0x4874c);
          local_128 = DAT_00048850 + 0x4876a;
          local_124 = *(undefined4 *)(iVar13 + DAT_00048854);
          FUN_0003c0b0(auStack_7c,&local_128);
          pvVar7 = operator_new(0x148);
          FUN_000550e8(pvVar7,&local_114,&local_1b0,auStack_58,0,&local_1bc,auStack_7c);
          *(void **)((int)param_1 + 0x94) = pvVar7;
          FUN_0001d358(auStack_7c);
          iVar12 = DAT_00048858 + 0x487ba;
          local_128 = iVar12;
          FUN_0001d358(auStack_58);
          local_284 = iVar12;
          FUN_00017d90(&local_114);
          (**(code **)(**(int **)((int)param_1 + 0x94) + 8))();
          local_294 = DAT_0004885c + 0x487e8;
          local_28c = DAT_00048860 + 0x487f6;
          local_290 = param_1;
          local_288 = iVar18;
          (**(code **)(DAT_0004885c + 0x487f0))(&local_294,*(int *)((int)param_1 + 0x94) + 0x2c);
          local_294 = DAT_00048864 + 0x48810;
          FUN_00049d7c(*(undefined4 *)(iVar15 + 0x40),*(undefined4 *)((int)param_1 + 0x94));
        }
        iVar18 = *(int *)((int)param_1 + 0xa0);
        if (iVar18 == 0) {
          local_118 = iVar18;
          FUN_00017d64(&local_118,*(undefined4 *)(DAT_000489d8 + 0x4891a));
          local_1c8 = DAT_000489cc;
          local_2a4 = DAT_000489dc + 0x488a6;
          local_1c4 = DAT_000489d0;
          local_1c0 = DAT_000489d4;
          local_29c = DAT_000489e0 + 0x488c4;
          local_2a0 = param_1;
          local_298 = iVar18;
          FUN_0003c0b0(auStack_a0,&local_2a4);
          local_1d4 = *(undefined4 *)(DAT_000489e4 + 0x488d8);
          local_1d0 = *(undefined4 *)(DAT_000489e4 + 0x488dc);
          local_1cc = *(undefined4 *)(DAT_000489e4 + 0x488e0);
          local_130 = DAT_000489e8 + 0x488fc;
          local_12c = *(undefined4 *)(iVar13 + DAT_000489ec);
          FUN_0003c0b0(auStack_c4,&local_130);
          pvVar7 = operator_new(0x148);
          iVar18 = DAT_000489f4 + 0x4892c;
          FUN_000550e8(pvVar7,&local_118,&local_1c8,auStack_a0,
                       **(undefined4 **)(iVar13 + DAT_000489f0),&local_1d4,auStack_c4);
          *(void **)((int)param_1 + 0xa0) = pvVar7;
          FUN_0001d358(auStack_c4);
          local_130 = iVar18;
          FUN_0001d358(auStack_a0);
          local_2a4 = iVar18;
          FUN_00017d90(&local_118);
          iVar18 = *(int *)((int)param_1 + 0x94);
          if (iVar18 != 0) {
            iVar15 = *(int *)((int)param_1 + 0xa0);
            uVar6 = *(undefined4 *)(iVar18 + 0x114);
            uVar8 = *(undefined4 *)(iVar18 + 0x118);
            *(undefined4 *)(iVar15 + 0x110) = *(undefined4 *)(iVar18 + 0x110);
            *(undefined4 *)(iVar15 + 0x114) = uVar6;
            *(undefined4 *)(iVar15 + 0x118) = uVar8;
          }
          (**(code **)(**(int **)((int)param_1 + 0xa0) + 8))();
          iVar18 = *(int *)(iVar13 + iVar11);
          *(undefined *)(*(int *)((int)param_1 + 0xa0) + 0x124) = 1;
          FUN_00049d7c(*(undefined4 *)(iVar18 + 0x40),*(undefined4 *)((int)param_1 + 0xa0));
          if (*(int *)((int)param_1 + 0x94) == 0) {
            FUN_000671a8(*(undefined4 *)(iVar18 + 0x16c),*(undefined4 *)((int)param_1 + 0xa0));
          }
          else {
            FUN_000671a8(*(undefined4 *)(iVar18 + 0x16c));
          }
        }
        iVar18 = *(int *)((int)param_1 + 0x9c);
        if (iVar18 == 0) {
          FUN_000a3a68();
          iVar15 = FUN_00094c30();
          local_11c = iVar18;
          FUN_00017d64(&local_11c,*(undefined4 *)(DAT_00048560 + (uint)(iVar15 == 2) * 4 + 0x4828a))
          ;
          local_120 = iVar18;
          FUN_00017d64(&local_120,local_11c);
          local_1e0 = DAT_00048548;
          local_2b4 = DAT_00048564 + 0x4823a;
          local_1dc = DAT_0004854c;
          local_2ac = DAT_00048568 + 0x4824c;
          local_1d8 = DAT_00048550;
          local_2b0 = param_1;
          local_2a8 = iVar18;
          FUN_0003c0b0(auStack_e8,&local_2b4);
          FUN_000a3a68();
          iVar18 = FUN_00094c30();
          if (iVar18 == 1) {
            uVar6 = FUN_00022674(DAT_000489f8 + 0x489b4,0);
          }
          else {
            uVar6 = FUN_00022674(DAT_0004856c + 0x48276,0);
          }
          local_1ec = *(undefined4 *)(DAT_00048570 + 0x4828a);
          local_1e8 = *(undefined4 *)(DAT_00048570 + 0x4828e);
          local_1e4 = *(undefined4 *)(DAT_00048570 + 0x48292);
          local_138 = DAT_00048574 + 0x482b0;
          local_134 = *(undefined4 *)(iVar13 + DAT_00048578);
          FUN_0003c0b0(auStack_10c,&local_138);
          pvVar7 = operator_new(0x148);
          iVar18 = DAT_0004857c + 0x482e8;
          FUN_000550e8(pvVar7,&local_120,&local_1e0,auStack_e8,uVar6,&local_1ec,auStack_10c);
          *(void **)((int)param_1 + 0x9c) = pvVar7;
          FUN_0001d358(auStack_10c);
          local_138 = iVar18;
          FUN_0001d358(auStack_e8);
          local_2b4 = iVar18;
          FUN_00017d90(&local_120);
          (**(code **)(**(int **)((int)param_1 + 0x9c) + 8))();
          *(undefined *)(*(int *)((int)param_1 + 0x9c) + 0x10f) = 0;
          FUN_00049d7c(*(undefined4 *)(*(int *)(iVar13 + iVar11) + 0x40),
                       *(undefined4 *)((int)param_1 + 0x9c),0);
          local_1f8 = DAT_00048550;
          local_1f4 = DAT_00048554;
          local_1f0 = DAT_00048550;
          FUN_00025114(*(undefined4 *)(*(int *)((int)param_1 + 0x9c) + 0x120),0);
          FUN_00017d90(&local_11c);
        }
      }
    }
    else {
      fVar17 = *(float *)((int)param_1 + 0x130);
      iVar18 = (uint)(fVar17 < DAT_00048198) << 0x1f;
      if (iVar18 < 0) {
        fVar17 = fVar17 + (DAT_00048198 - fVar17) * DAT_00048174;
      }
      if (iVar18 < 0) {
        *(float *)((int)param_1 + 0x130) = fVar17;
      }
      if (*(int *)((int)param_1 + 0x10c) < 0xb) {
        iVar18 = *(int *)((int)param_1 + 0x10c) + 1;
        *(int *)((int)param_1 + 0x10c) = iVar18;
        goto LAB_00048012;
      }
    }
    fVar19 = DAT_00048188;
    fVar17 = DAT_00048184;
    if ((int)((uint)(*(float *)((int)param_1 + 0xc) < DAT_0004817c) << 0x1f) < 0) {
      iVar11 = *(int *)(iVar13 + iVar11);
      local_204 = DAT_00048180 - *(float *)(iVar11 + 0x10);
      local_200 = local_204 * *(float *)((int)param_1 + 0x80);
      local_1fc = local_204 * *(float *)((int)param_1 + 0x84);
      local_204 = local_204 * *(float *)((int)param_1 + 0x7c);
      local_210 = DAT_00048188;
      *(float *)((int)param_1 + 0x14) = local_204;
      *(float *)((int)param_1 + 0x18) = local_200;
      *(float *)((int)param_1 + 0x1c) = local_1fc;
      local_20c = fVar19 + *(float *)(iVar11 + 0x10) * fVar17;
      *(float *)((int)param_1 + 8) = fVar19;
      *(float *)((int)param_1 + 0xc) = local_20c;
      *(float *)((int)param_1 + 0x10) = fVar19;
      local_208 = local_210;
    }
    break;
  case 7:
    uVar6 = FUN_0001c940();
    iVar18 = FUN_0001bb84(uVar6,0);
    iVar11 = DAT_00048190;
    if ((iVar18 != 0) && (*(int *)((int)param_1 + 0x98) == 0)) {
      *(float *)(*(int *)(iVar13 + DAT_00048190) + 0x10) = DAT_00048198;
      goto LAB_00047fa6;
    }
    iVar11 = *(int *)(iVar13 + DAT_00047fa0);
    *(undefined4 *)(iVar11 + 0x2c) = *(undefined4 *)(iVar11 + 0x24);
    uVar6 = FUN_00086780();
    FUN_0008b280(uVar6,0);
    *(undefined *)(iVar11 + 8) = 1;
    *(undefined4 *)((int)param_1 + 0x74) = 8;
    break;
  case 8:
    iVar11 = *(int *)(iVar13 + DAT_00047fa0);
    fVar17 = *(float *)(iVar11 + 0x10) * DAT_00047f94;
    *(float *)(iVar11 + 0x10) = fVar17;
    *(float *)((int)param_1 + 0x130) = fVar17;
    if ((int)((uint)(*(float *)(iVar11 + 0x10) < DAT_00047f98) << 0x1f) < 0) {
      uVar6 = FUN_00086780();
      FUN_0008b280(uVar6,0);
      fVar17 = DAT_00048550;
      *(float *)(iVar11 + 0x10) = DAT_00048550;
      *(float *)((int)param_1 + 0x130) = fVar17;
      *(undefined *)(iVar11 + 8) = 0;
      FUN_00086780();
      FUN_00087ec8();
      *(undefined *)((int)param_1 + 0x27) = 1;
    }
    fVar17 = DAT_00047f7c;
    if ((int)((uint)(*(float *)((int)param_1 + 0xc) < DAT_00047f7c) << 0x1f) < 0) {
      local_194 = DAT_00047f9c + (DAT_00047f90 - *(float *)((int)param_1 + 0x130)) * DAT_00047f9c;
      *(float *)((int)param_1 + 8) = DAT_00047f7c;
      *(float *)((int)param_1 + 0xc) = local_194;
      *(float *)((int)param_1 + 0x10) = fVar17;
      local_198 = fVar17;
      local_190 = fVar17;
    }
    break;
  case 9:
    uVar6 = FUN_0001c940();
    iVar11 = FUN_0001bb84(uVar6,0);
    if (iVar11 == 0) {
      FUN_00031874();
      *(undefined4 *)((int)param_1 + 0x74) = 0xb;
    }
    break;
  case 10:
    uVar14 = *(uint *)((int)param_1 + 0x94);
    if (uVar14 != 0) {
      uVar14 = 1;
    }
    if (*(int *)((int)param_1 + 0x9c) != 0) {
      uVar14 = uVar14 + 1;
    }
    if (*(int *)((int)param_1 + 0xa0) != 0) {
      uVar14 = uVar14 + 1;
    }
    if (*(int *)((int)param_1 + 0x8c) != 0) {
      uVar14 = uVar14 + 1;
    }
    if (*(int *)((int)param_1 + 0x90) != 0) {
      uVar14 = uVar14 + 1;
    }
    uVar6 = FUN_0001c940();
    iVar11 = FUN_0001bb84(uVar6,0);
    uVar6 = FUN_0001c940();
    iVar18 = FUN_0001bb84(uVar6,1);
    if (((uint)(iVar11 + iVar18) < uVar14) || (*(int *)((int)param_1 + 0x98) != 0)) {
      *(undefined *)(*(int *)(iVar13 + DAT_00047b38) + 0x194) = 0;
      uVar6 = FUN_000a3a68();
      FUN_000a44e0(uVar6,2);
      fVar17 = DAT_00047b68;
      *(undefined4 *)((int)param_1 + 0x9c) = 0;
      *(float *)((int)param_1 + 0x78) = fVar17;
      *(undefined4 *)((int)param_1 + 0x74) = 0xe;
    }
    break;
  case 0xb:
    if ((int)((uint)(*(float *)(*(int *)(iVar13 + DAT_00047fa0) + 0x10) < 0.0) << 0x1f) < 0) {
      *(undefined *)((int)param_1 + 0x27) = 1;
    }
    break;
  case 0xe:
    fVar19 = *(float *)((int)param_1 + 0x78) + param_2 * DAT_00047f80;
    iVar11 = *(int *)(iVar13 + DAT_00047fa0);
    bVar1 = fVar19 < DAT_00047f80;
    bVar2 = NAN(DAT_00047f80);
    *(float *)((int)param_1 + 0x78) = fVar19;
    fVar17 = fVar19;
    if (bVar1 == (NAN(fVar19) || bVar2)) {
      fVar17 = DAT_00047f7c;
    }
    if (bVar1 == (NAN(fVar19) || bVar2)) {
      *(float *)((int)param_1 + 0x78) = fVar17;
    }
    if (*(char *)(iVar11 + 0x194) != '\0') {
      *(undefined *)(iVar11 + 0x194) = 0;
      *(undefined4 *)((int)param_1 + 0x74) = 6;
      if (*(int *)((int)param_1 + 0x98) == 0) {
        *(undefined4 *)((int)param_1 + 0x10c) = 0;
      }
      *(undefined4 *)((int)param_1 + 0x78) = DAT_00047f84;
    }
  }
  if (*(int *)((int)param_1 + 0x90) != 0) {
    *(float *)(*(int *)((int)param_1 + 0x90) + 8) =
         (DAT_00047b70 - *(float *)((int)param_1 + 0x130)) * DAT_00047b74 - DAT_00047b0c;
  }
  if (*(int *)((int)param_1 + 0x8c) == 0) goto LAB_0004799e;
  FUN_000a3a68();
  iVar11 = FUN_000a5318();
  if (iVar11 == 0) {
    FUN_000a3a68();
    iVar11 = FUN_000a5274();
    if (iVar11 == 0) goto LAB_00047936;
    *(float *)(*(int *)((int)param_1 + 0x8c) + 8) =
         (DAT_00047b70 - *(float *)((int)param_1 + 0x130)) * DAT_00047b74 - DAT_00047b78;
    *(undefined *)(*(int *)((int)param_1 + 0x8c) + 0x11d) = 0;
    uVar6 = *(undefined4 *)((int)param_1 + 0x8c);
LAB_00047c64:
    uVar8 = 0;
  }
  else {
LAB_00047936:
    *(float *)(*(int *)((int)param_1 + 0x8c) + 8) =
         (DAT_00047b70 - *(float *)((int)param_1 + 0x130)) * DAT_00047b74 - DAT_00047b78;
    if ((*(char *)((int)param_1 + 0xc9) == '\0') && (*(char *)((int)param_1 + 200) == '\0')) {
      *(undefined *)(*(int *)((int)param_1 + 0x8c) + 0x11d) = 1;
      uVar6 = *(undefined4 *)((int)param_1 + 0x8c);
    }
    else {
      *(undefined *)(*(int *)((int)param_1 + 0x8c) + 0x11d) = 0;
      uVar6 = *(undefined4 *)((int)param_1 + 0x8c);
    }
    if (*(char *)((int)param_1 + 0xc9) == '\0') goto LAB_00047c64;
    uVar8 = 1;
  }
  FUN_00053384(uVar6,uVar8);
  if ((*(char *)((int)param_1 + 200) == '\0') || (*(char *)((int)param_1 + 0xc9) != '\0')) {
    FUN_00017d64(*(int *)((int)param_1 + 0x8c) + 0x68,*(undefined4 *)(DAT_00047b3c + 0x47a04));
  }
  else {
    FUN_00017d64(*(int *)((int)param_1 + 0x8c) + 0x68,*(undefined4 *)(DAT_00048194 + 0x48128));
  }
LAB_0004799e:
  fVar19 = DAT_00047b68;
  uVar8 = DAT_00047b54;
  uVar6 = DAT_00047b1c;
  fVar17 = DAT_00047b18;
  if ((*(char *)((int)param_1 + 300) == '\0') &&
     (iVar11 = *(int *)((int)param_1 + 0xb8), iVar11 != 0)) {
    local_21c = DAT_00047b14 + (DAT_00047b70 - *(float *)((int)param_1 + 0x130)) * DAT_00047b10;
    local_218 = DAT_00047b1c;
    local_214 = DAT_00047b68;
    *(float *)(iVar11 + 8) = local_21c;
    *(undefined4 *)(iVar11 + 0xc) = uVar6;
    *(float *)(iVar11 + 0x10) = fVar19;
    iVar11 = *(int *)((int)param_1 + 0xb8);
    local_224 = *(float *)(iVar11 + 0xc) + *(float *)(DAT_00047b40 + 0x479fe) * fVar17;
    local_220 = *(float *)(iVar11 + 0x10) + *(float *)(DAT_00047b40 + 0x47a02) * fVar17;
    local_228 = *(float *)(iVar11 + 8) + *(float *)(DAT_00047b40 + 0x479fa) * fVar17;
    *(float *)((int)param_1 + 0xac) = local_228;
    *(float *)((int)param_1 + 0xb0) = local_224;
    *(float *)((int)param_1 + 0xb4) = local_220;
  }
  else {
    local_234 = DAT_00047b4c + *(float *)((int)param_1 + 0x130) * DAT_00047b50;
    local_230 = DAT_00047b54;
    local_22c = DAT_00047b68;
    *(float *)((int)param_1 + 0xac) = local_234;
    *(undefined4 *)((int)param_1 + 0xb0) = uVar8;
    *(float *)((int)param_1 + 0xb4) = fVar19;
    iVar11 = *(int *)((int)param_1 + 0xb8);
    if (iVar11 != 0) {
      local_23c = *(float *)((int)param_1 + 0xb0) + DAT_00047b58;
      local_238 = *(float *)((int)param_1 + 0xb4) + fVar19;
      local_240 = *(float *)((int)param_1 + 0xac) + DAT_00047b5c;
      *(float *)(iVar11 + 8) = local_240;
      *(float *)(iVar11 + 0xc) = local_23c;
      *(float *)(iVar11 + 0x10) = local_238;
    }
    uVar6 = DAT_00047b6c;
    iVar11 = *(int *)((int)param_1 + 0xbc);
    if (iVar11 != 0) {
      local_248 = DAT_00047b64 + (DAT_00047b70 - *(float *)((int)param_1 + 0x130)) * DAT_00047b60;
      local_24c = DAT_00047b68;
      local_244 = DAT_00047b6c;
      *(float *)(iVar11 + 8) = DAT_00047b68;
      *(float *)(iVar11 + 0xc) = local_248;
      *(undefined4 *)(iVar11 + 0x10) = uVar6;
    }
  }
  iVar11 = *(int *)((int)param_1 + 0x98);
  if (iVar11 != 0) {
    fVar17 = DAT_00047b70 - *(float *)((int)param_1 + 0x130);
    local_254 = fVar17 * *(float *)(DAT_00047b44 + 0x47a54) * DAT_00047b20 - DAT_00047b24;
    local_250 = DAT_00047b68 + fVar17 * *(float *)(DAT_00047b44 + 0x47a58) * DAT_00047b20;
    local_258 = DAT_00047b0c + fVar17 * *(float *)(DAT_00047b44 + 0x47a50) * DAT_00047b20;
    *(float *)(iVar11 + 8) = local_258;
    *(float *)(iVar11 + 0xc) = local_254;
    *(float *)(iVar11 + 0x10) = local_250;
  }
  iVar11 = *(int *)((int)param_1 + 0xa4);
  if (iVar11 != 0) {
    fVar17 = DAT_00047b70 - *(float *)((int)param_1 + 0x130);
    local_260 = fVar17 * *(float *)(DAT_00047b48 + 0x47ab4) * DAT_00047b20 - DAT_00047b28;
    local_25c = DAT_00047b68 + fVar17 * *(float *)(DAT_00047b48 + 0x47ab8) * DAT_00047b20;
    local_264 = DAT_00047b0c + fVar17 * *(float *)(DAT_00047b48 + 0x47ab0) * DAT_00047b20;
    *(float *)(iVar11 + 8) = local_264;
    *(float *)(iVar11 + 0xc) = local_260;
    *(float *)(iVar11 + 0x10) = local_25c;
  }
  if (local_34 != **(int **)(iVar13 + iVar4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



