/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00061c10 FUN_00061c10 */

void FUN_00061c10(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int local_210;
  int local_20c;
  int local_208;
  undefined4 local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  undefined4 local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  int local_1d4;
  int local_1d0;
  int local_1cc;
  int local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  float local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  float local_1a4;
  float local_1a0;
  undefined4 local_19c;
  float local_198;
  float local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  int local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  int local_118;
  undefined auStack_114 [36];
  undefined auStack_f0 [36];
  undefined auStack_cc [36];
  undefined auStack_a8 [36];
  undefined auStack_84 [36];
  undefined auStack_60 [36];
  int local_3c;
  
  iVar4 = DAT_00061fc4;
  iVar11 = DAT_00061fc0 + 0x61c24;
  local_3c = **(int **)(iVar11 + DAT_00061fc4);
  fVar17 = *(float *)(param_1 + 0x70);
  iVar5 = FUN_0002c850();
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x74) = 2;
  }
  if ((*(int **)(param_1 + 0x88) == (int *)0x0) ||
     (iVar12 = *(int *)(param_1 + 0x8c), iVar6 = (**(code **)(**(int **)(param_1 + 0x88) + 0x34))(),
     iVar5 = DAT_00061fc8, iVar12 == iVar6)) {
    iVar6 = *(int *)(DAT_00061fdc + 0x61e26);
  }
  else {
    iVar6 = *(int *)(DAT_00061fc8 + 0x61cb6);
    if (iVar6 == 0) {
      uVar8 = (**(code **)(**(int **)(param_1 + 0x88) + 0x34))();
      FUN_00061b00(param_1,uVar8);
      iVar6 = *(int *)(iVar5 + 0x61cb6);
    }
  }
  *(int *)(DAT_00061fcc + 0x61cd2) = (iVar6 + 1) % 10;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x74);
  iVar5 = DAT_00062370;
  fVar14 = DAT_00061fe4;
  switch(*(undefined4 *)(param_1 + 0xa8)) {
  case 0:
    fVar16 = *(float *)(param_1 + 0x70) + (DAT_00061fe4 - *(float *)(param_1 + 0x70)) * DAT_00061fe8
    ;
    bVar1 = fVar16 < DAT_00061fec;
    bVar2 = fVar16 == DAT_00061fec;
    bVar3 = NAN(DAT_00061fec);
    *(float *)(param_1 + 0x70) = fVar16;
    if (bVar2 || bVar1 != (NAN(fVar16) || bVar3)) {
LAB_00061f40:
      iVar6 = *(int *)(param_1 + 0x88);
      fVar14 = fVar16;
      goto LAB_00061cde;
    }
    FUN_0002c8a4();
    uVar8 = DAT_00061ff0;
    iVar5 = *(int *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = DAT_00061ff0;
    *(float *)(param_1 + 0x70) = fVar14;
    *(undefined4 *)(param_1 + 0xa8) = 1;
    if (iVar5 != 0) {
      iVar6 = *(int *)(param_1 + 0x88);
      goto LAB_00061cde;
    }
    iVar6 = *(int *)(iVar11 + DAT_00062664);
    local_118 = iVar5;
    FUN_00017d64(&local_118,*(undefined4 *)(iVar6 + 0x180));
    local_13c = uVar8;
    local_1c0 = DAT_00062690 + 0x6253e;
    local_1b8 = DAT_00062694 + 0x6254c;
    local_144 = DAT_00062658;
    local_140 = DAT_0006265c;
    local_1bc = param_1;
    local_1b4 = iVar5;
    FUN_0003c0b0(auStack_60,&local_1c0);
    local_150 = *(undefined4 *)(DAT_00062698 + 0x62570);
    local_14c = *(undefined4 *)(DAT_00062698 + 0x62574);
    local_148 = *(undefined4 *)(DAT_00062698 + 0x62578);
    local_128 = DAT_0006269c + 0x62594;
    local_124 = *(undefined4 *)(iVar11 + DAT_00062678);
    FUN_0003c0b0(auStack_84,&local_128);
    pvVar10 = operator_new(0x148);
    iVar12 = DAT_000626a0 + 0x625cc;
    FUN_000550e8(pvVar10,&local_118,&local_144,auStack_60,**(undefined4 **)(iVar11 + DAT_0006267c),
                 &local_150,auStack_84);
    *(void **)(param_1 + 0x78) = pvVar10;
    FUN_0001d358(auStack_84);
    local_128 = iVar12;
    FUN_0001d358(auStack_60);
    local_1c0 = iVar12;
    FUN_00017d90(&local_118);
    (**(code **)(**(int **)(param_1 + 0x78) + 8))();
    *(undefined *)(*(int *)(param_1 + 0x78) + 0x124) = 1;
    FUN_00049d7c(*(undefined4 *)(iVar6 + 0x40),*(undefined4 *)(param_1 + 0x78),0);
    local_1d0 = DAT_000626a4 + 0x62624;
    local_1c8 = DAT_000626a8 + 0x62632;
    local_1cc = param_1;
    local_1c4 = iVar5;
    (**(code **)(DAT_000626a4 + 0x6262c))(&local_1d0,*(int *)(param_1 + 0x78) + 0x2c);
    local_1d0 = DAT_000626ac + 0x62646;
    FUN_000671a8(*(undefined4 *)(iVar6 + 0x16c),*(undefined4 *)(param_1 + 0x78));
    goto LAB_000624ae;
  case 1:
    fVar16 = *(float *)(param_1 + 0x7c);
    fVar14 = -param_2;
    if (fVar16 == 0.0 || fVar16 < 0.0 != NAN(fVar16)) {
      iVar6 = *(int *)(param_1 + 0x88);
      if (*(char *)(iVar6 + 0xc1) == '\0') {
        if ((((*(int *)(param_1 + 0x80) != 0) &&
             (iVar12 = *(int *)(*(int *)(param_1 + 0x80) + 0x120), iVar12 != 0)) &&
            (*(char *)(iVar12 + 0xb4) == '\0')) &&
           (fVar16 = *(float *)(iVar12 + 0x6c),
           fVar16 == DAT_0006233c || fVar16 < DAT_0006233c != (NAN(fVar16) || NAN(DAT_0006233c)))) {
          *(undefined *)(iVar12 + 0xb4) = 1;
          iVar6 = DAT_00062374;
          *(undefined *)(iVar5 + 0x62306) = 1;
          *(undefined *)(*(int *)(param_1 + 0x80) + 0x10f) = 0;
          uVar8 = *(undefined4 *)(iVar6 + 0x62310);
          uVar9 = *(undefined4 *)(iVar6 + 0x62314);
          iVar5 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
          *(undefined4 *)(iVar5 + 0xc4) = *(undefined4 *)(iVar6 + 0x6230c);
          *(undefined4 *)(iVar5 + 200) = uVar8;
          *(undefined4 *)(iVar5 + 0xcc) = uVar9;
          goto LAB_00062322;
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 0x8c);
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x278) != 0) {
            iVar6 = FUN_0007832c();
            iVar5 = *(int *)(param_1 + 0x8c);
            iVar12 = *(int *)(iVar5 + 0x278);
            if (((iVar12 != 0) && (iVar12 == *(int *)(iVar6 + *(int *)(iVar12 + 0x10) * 4))) ||
               (0 < *(int *)(iVar12 + 0xc))) {
              FUN_000671a8(*(undefined4 *)(*(int *)(iVar11 + DAT_00062340) + 0x16c),0);
              iVar5 = *(int *)(param_1 + 0x8c);
            }
          }
          if (iVar5 != 0) {
            iVar5 = FUN_0007832c();
            iVar6 = *(int *)(*(int *)(param_1 + 0x8c) + 0x278);
            if ((iVar6 != 0) && (iVar6 == *(int *)(iVar5 + *(int *)(iVar6 + 0x10) * 4))) {
              iVar6 = *(int *)(param_1 + 0x88);
              fVar14 = param_2;
              goto LAB_00061f6a;
            }
          }
        }
        uVar8 = DAT_00062328;
        iVar5 = *(int *)(param_1 + 0x80);
        if (iVar5 == 0) {
          puVar13 = (undefined *)(DAT_00062344 + 0x620f2);
          local_11c = iVar5;
          FUN_00017d64(&local_11c,*(undefined4 *)(DAT_00062344 + 0x6210a));
          local_154 = uVar8;
          local_1e0 = DAT_00062348 + 0x62122;
          local_15c = DAT_0006232c;
          local_1d8 = DAT_0006234c + 0x62132;
          local_158 = DAT_00062330;
          local_1dc = param_1;
          local_1d4 = iVar5;
          FUN_0003c0b0(auStack_a8,&local_1e0);
          uVar9 = FUN_00022674(DAT_00062350 + 0x6214a,0);
          local_168 = *(undefined4 *)(DAT_00062354 + 0x62154);
          local_164 = *(undefined4 *)(DAT_00062354 + 0x62158);
          local_160 = *(undefined4 *)(DAT_00062354 + 0x6215c);
          local_130 = DAT_00062358 + 0x6217a;
          local_12c = *(undefined4 *)(iVar11 + DAT_0006235c);
          FUN_0003c0b0(auStack_cc,&local_130);
          pvVar10 = operator_new(0x148);
          iVar6 = DAT_00062360 + 0x621b0;
          FUN_000550e8(pvVar10,&local_11c,&local_15c,auStack_a8,uVar9,&local_168,auStack_cc);
          *(void **)(param_1 + 0x80) = pvVar10;
          FUN_0001d358(auStack_cc);
          local_130 = iVar6;
          FUN_0001d358(auStack_a8);
          local_1e0 = iVar6;
          FUN_00017d90(&local_11c);
          FUN_00061b00(param_1,*(undefined4 *)(param_1 + 0x8c));
          (**(code **)(**(int **)(param_1 + 0x80) + 8))();
          iVar12 = *(int *)(iVar11 + DAT_00062340);
          FUN_00049d7c(*(undefined4 *)(iVar12 + 0x40),*(undefined4 *)(param_1 + 0x80),0);
          *(undefined *)(*(int *)(param_1 + 0x80) + 0x10f) = 0;
          iVar6 = DAT_00062364;
          *puVar13 = 0;
          local_1f0 = iVar6 + 0x62218;
          local_1e8 = DAT_00062368 + 0x62228;
          local_1ec = param_1;
          local_1e4 = iVar5;
          (**(code **)(iVar6 + 0x62220))(&local_1f0,*(int *)(param_1 + 0x80) + 0x2c);
          local_1f0 = DAT_0006236c + 0x62246;
          FUN_000671a8(*(undefined4 *)(iVar12 + 0x16c),*(undefined4 *)(param_1 + 0x80));
          fVar16 = DAT_00062334;
          iVar5 = *(int *)(param_1 + 0x80);
          *(float *)(iVar5 + 0x110) = *(float *)(iVar5 + 0x110) * DAT_00062334;
          *(float *)(iVar5 + 0x114) = *(float *)(iVar5 + 0x114) * fVar16;
          *(float *)(iVar5 + 0x118) = *(float *)(iVar5 + 0x118) * fVar16;
          iVar5 = *(int *)(*(int *)(param_1 + 0x80) + 0x120);
          *(float *)(iVar5 + 0x28) = *(float *)(iVar5 + 0x28) * fVar16;
          *(float *)(iVar5 + 0x2c) = *(float *)(iVar5 + 0x2c) * fVar16;
          *(float *)(iVar5 + 0x30) = *(float *)(iVar5 + 0x30) * fVar16;
          local_174 = uVar8;
          local_170 = DAT_00062338;
          local_16c = uVar8;
          FUN_00025114(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x120),0);
          iVar6 = *(int *)(param_1 + 0x88);
        }
        else {
LAB_00062322:
          iVar6 = *(int *)(param_1 + 0x88);
        }
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x88);
      *(float *)(param_1 + 0x7c) = fVar16 - param_2;
    }
LAB_00061f6a:
    fVar14 = (float)(longlong)*(int *)(param_1 + 0xa4) + fVar14 * DAT_00061fbc;
    if (0.0 < fVar14) {
      if (fVar14 < DAT_00061ff4 == (NAN(fVar14) || NAN(DAT_00061ff4))) {
        iVar5 = 0x3ffc;
      }
      else {
        iVar5 = (int)fVar14;
      }
    }
    else {
      iVar5 = 0;
    }
    *(int *)(param_1 + 0xa4) = iVar5;
    fVar14 = *(float *)(param_1 + 0x70);
    goto LAB_00061cde;
  case 2:
    fVar16 = *(float *)(param_1 + 0x70) * DAT_00061f90;
    bVar1 = fVar16 < DAT_00061f94;
    *(float *)(param_1 + 0x70) = fVar16;
    if ((-1 < (int)((uint)bVar1 << 0x1f)) || (*(int **)(param_1 + 0x84) == (int *)0x0))
    goto LAB_00061f40;
    (**(code **)(**(int **)(param_1 + 0x84) + 0x10))();
    *(undefined *)(param_1 + 0x27) = 1;
    break;
  case 3:
    fVar16 = *(float *)(param_1 + 0x70) * DAT_00061fb4;
    bVar1 = fVar16 < DAT_00061f94;
    *(float *)(param_1 + 0x70) = fVar16;
    if (-1 < (int)((uint)bVar1 << 0x1f)) {
      if ((*(int *)(param_1 + 0x78) != 0) &&
         (iVar5 = *(int *)(*(int *)(param_1 + 0x78) + 0x120), iVar5 != 0)) {
        *(undefined *)(iVar5 + 0x80) = 1;
        iVar5 = *(int *)(*(int *)(param_1 + 0x78) + 0x120);
        fVar14 = (float)FUN_00061308();
        local_194 = (float)FUN_00061308();
        uVar8 = DAT_00061ff0;
        local_198 = fVar14 + DAT_00061fb8;
        local_194 = -local_194;
        local_190 = DAT_00061ff0;
        *(float *)(iVar5 + 0x1c) = local_198;
        *(float *)(iVar5 + 0x20) = local_194;
        *(undefined4 *)(iVar5 + 0x24) = uVar8;
        FUN_000671a8(*(undefined4 *)(*(int *)(iVar11 + DAT_00061fe0) + 0x16c),0);
        fVar14 = *(float *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x78) = 0;
        iVar6 = *(int *)(param_1 + 0x88);
        goto LAB_00061cde;
      }
      goto LAB_00061f40;
    }
    *(undefined4 *)(param_1 + 0xa8) = 4;
    iVar5 = DAT_00062664;
    uVar8 = DAT_00062654;
    *(undefined4 *)(param_1 + 0x70) = DAT_00062654;
    local_120 = 0;
    iVar5 = *(int *)(iVar11 + iVar5);
    FUN_00017d64(&local_120,*(undefined4 *)(iVar5 + 0x180));
    local_178 = uVar8;
    local_1f4 = 0;
    local_200 = DAT_00062668 + 0x623c2;
    local_180 = DAT_00062658;
    local_1f8 = DAT_0006266c + 0x623d0;
    local_17c = DAT_0006265c;
    local_1fc = param_1;
    FUN_0003c0b0(auStack_f0,&local_200);
    local_18c = *(undefined4 *)(DAT_00062670 + 0x623ec);
    local_188 = *(undefined4 *)(DAT_00062670 + 0x623f0);
    local_184 = *(undefined4 *)(DAT_00062670 + 0x623f4);
    local_138 = DAT_00062674 + 0x62414;
    local_134 = *(undefined4 *)(iVar11 + DAT_00062678);
    FUN_0003c0b0(auStack_114,&local_138);
    pvVar10 = operator_new(0x148);
    iVar6 = DAT_00062680 + 0x62440;
    FUN_000550e8(pvVar10,&local_120,&local_180,auStack_f0,**(undefined4 **)(iVar11 + DAT_0006267c),
                 &local_18c,auStack_114);
    *(void **)(param_1 + 0x78) = pvVar10;
    FUN_0001d358(auStack_114);
    local_138 = iVar6;
    FUN_0001d358(auStack_f0);
    local_200 = iVar6;
    FUN_00017d90(&local_120);
    (**(code **)(**(int **)(param_1 + 0x78) + 8))();
    local_210 = DAT_00062684 + 0x6248c;
    local_208 = DAT_00062688 + 0x62494;
    local_204 = 0;
    local_20c = param_1;
    (**(code **)(DAT_00062684 + 0x62494))(&local_210,*(int *)(param_1 + 0x78) + 0x2c);
    local_210 = DAT_0006268c + 0x624aa;
    FUN_00049d7c(*(undefined4 *)(iVar5 + 0x40),*(undefined4 *)(param_1 + 0x78),0);
LAB_000624ae:
    fVar14 = DAT_00062660;
    iVar5 = *(int *)(param_1 + 0x78);
    *(float *)(iVar5 + 0x110) = *(float *)(iVar5 + 0x110) * DAT_00062660;
    *(float *)(iVar5 + 0x114) = *(float *)(iVar5 + 0x114) * fVar14;
    *(float *)(iVar5 + 0x118) = *(float *)(iVar5 + 0x118) * fVar14;
    iVar5 = *(int *)(*(int *)(param_1 + 0x78) + 0x120);
    *(float *)(iVar5 + 0x28) = *(float *)(iVar5 + 0x28) * fVar14;
    *(float *)(iVar5 + 0x2c) = *(float *)(iVar5 + 0x2c) * fVar14;
    *(float *)(iVar5 + 0x30) = *(float *)(iVar5 + 0x30) * fVar14;
    break;
  case 4:
    fVar14 = *(float *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = 3;
    iVar6 = *(int *)(param_1 + 0x88);
    goto LAB_00061cde;
  case 5:
  case 6:
    if ((*(int *)(param_1 + 0x78) != 0) &&
       (iVar5 = *(int *)(*(int *)(param_1 + 0x78) + 0x120), iVar5 != 0)) {
      *(undefined *)(iVar5 + 0x80) = 1;
      iVar5 = *(int *)(*(int *)(param_1 + 0x78) + 0x120);
      fVar14 = (float)FUN_00061308();
      local_1a0 = (float)FUN_00061308();
      uVar8 = DAT_00061ff0;
      local_1a4 = fVar14 + DAT_00061fb8;
      local_1a0 = -local_1a0;
      local_19c = DAT_00061ff0;
      *(float *)(iVar5 + 0x1c) = local_1a4;
      *(float *)(iVar5 + 0x20) = local_1a0;
      *(undefined4 *)(iVar5 + 0x24) = uVar8;
      FUN_000671a8(*(undefined4 *)(*(int *)(iVar11 + DAT_00061fe0) + 0x16c),0);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    uVar8 = FUN_0001c940();
    iVar5 = FUN_0001bb84(uVar8,1);
    if (iVar5 == 0) {
      uVar8 = FUN_0001c940();
      iVar5 = FUN_0001bb84(uVar8,0);
      if (iVar5 == 0) {
        iVar5 = *(int *)(param_1 + 0x8c);
        if ((((iVar5 != 0) && (*(int *)(iVar5 + 0x278) != 0)) &&
            (iVar6 = *(int *)(*(int *)(iVar5 + 0x278) + 0x10), iVar6 < 3)) &&
           (iVar5 != *(int *)(param_1 + (iVar6 + 0x24) * 4))) {
          uVar8 = FUN_0007832c();
          iVar5 = *(int *)(param_1 + (iVar6 + 0x24) * 4);
          if (iVar5 != 0) {
            iVar5 = *(int *)(iVar5 + 0x278);
          }
          FUN_00077d38(uVar8,iVar6,iVar5);
        }
        fVar16 = *(float *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0xa8) = 0;
        goto LAB_00061f40;
      }
    }
  }
  iVar6 = *(int *)(param_1 + 0x88);
  fVar14 = *(float *)(param_1 + 0x70);
LAB_00061cde:
  uVar9 = DAT_00061ff0;
  uVar8 = DAT_00061fa4;
  if (iVar6 != 0) {
    local_1b0 = (DAT_00061fe4 - fVar14) * DAT_00061f98 * DAT_00061fa0 - DAT_00061f9c;
    local_1ac = DAT_00061fa4;
    local_1a8 = DAT_00061ff0;
    *(float *)(iVar6 + 8) = local_1b0;
    *(undefined4 *)(iVar6 + 0xc) = uVar8;
    *(undefined4 *)(iVar6 + 0x10) = uVar9;
    *(undefined4 *)(DAT_00061fd0 + 0x61d28) = *(undefined4 *)(*(int *)(param_1 + 0x88) + 0xd0);
    fVar14 = *(float *)(param_1 + 0x70);
  }
  fVar16 = DAT_00061fb0;
  if ((int)((uint)(fVar14 < fVar17) << 0x1f) < 0) {
    piVar7 = *(int **)(iVar11 + DAT_00061fd4);
    iVar5 = **(int **)(iVar11 + DAT_00061fd8);
    fVar14 = (DAT_00061fe4 - fVar14) - (DAT_00061fe4 - fVar17);
    fVar17 = fVar14 * DAT_00061fa8 * DAT_00061fac;
    fVar14 = fVar14 * DAT_00061f98 * DAT_00061fac;
    if (0 < *piVar7) {
      iVar6 = 0;
      while( true ) {
        if ((*(char *)(iVar5 + 0x75) != '\0') && (-1 < *(int *)(iVar5 + 0x70))) {
          fVar15 = *(float *)(iVar5 + 0x38);
          bVar1 = fVar15 < fVar16;
          bVar2 = fVar15 == fVar16;
          bVar3 = NAN(fVar15);
          if (!bVar2 && bVar1 == (bVar3 || NAN(fVar16))) {
            fVar15 = fVar17 + fVar15;
          }
          if (bVar2 || bVar1 != (bVar3 || NAN(fVar16))) {
            fVar15 = fVar15 - fVar14;
          }
          *(float *)(iVar5 + 0x38) = fVar15;
        }
        iVar6 = iVar6 + 1;
        if (*piVar7 <= iVar6) break;
        iVar5 = iVar5 + 0x78;
      }
    }
  }
  if (local_3c != **(int **)(iVar11 + iVar4)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



