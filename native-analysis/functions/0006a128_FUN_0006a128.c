/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006a128 FUN_0006a128 */

void FUN_0006a128(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  uint uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  undefined4 local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  float local_170;
  undefined4 local_16c;
  undefined4 local_168;
  float local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144;
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  undefined4 local_128;
  int local_124;
  undefined4 local_120;
  int local_11c;
  undefined4 local_118;
  int local_114;
  undefined4 local_110;
  undefined4 local_10c [8];
  undefined local_ec;
  undefined4 local_e8 [8];
  undefined local_c8;
  undefined4 local_c4 [8];
  undefined local_a4;
  int local_a0 [8];
  undefined local_80;
  int local_7c [8];
  undefined local_5c;
  int local_58 [8];
  undefined local_38;
  int local_34;
  
  iVar4 = DAT_0006a484;
  iVar11 = DAT_0006a480 + 0x6a140;
  local_34 = **(int **)(iVar11 + DAT_0006a484);
  *(float *)(param_1 + 0x1ac) = DAT_0006a46c;
  fVar15 = *(float *)(param_1 + 0x1b8);
  iVar10 = DAT_0006a488;
  if ((*(float *)(param_1 + 0x1dc) < fVar15 == (NAN(*(float *)(param_1 + 0x1dc)) || NAN(fVar15))) &&
     (fVar15 < 0.0 == NAN(fVar15))) {
    iVar12 = *(int *)(param_1 + 0x70);
    if (iVar12 == 0) {
      local_138 = *(undefined4 *)(param_1 + 0x1c4);
      local_134 = *(undefined4 *)(param_1 + 0x1c8);
      local_130 = *(undefined4 *)(param_1 + 0x1cc);
      uVar5 = *(undefined4 *)(param_1 + 0x1c0);
      local_190 = DAT_0006a8a4 + 0x6a7a8;
      local_188 = DAT_0006a8a8 + 0x6a7d0;
      local_38 = 1;
      local_18c = param_1;
      local_184 = iVar12;
      local_58[0] = iVar12;
      (**(code **)(DAT_0006a8a4 + 0x6a7b0))(&local_190,local_58);
      uVar5 = FUN_00068ce8(&local_138,uVar5,local_58);
      *(undefined4 *)(param_1 + 0x70) = uVar5;
      FUN_0001d358(local_58);
      local_190 = DAT_0006a8ac + 0x6a802;
      local_1a0 = DAT_0006a8b0 + 0x6a810;
      local_198 = DAT_0006a8b4 + 0x6a818;
      local_19c = param_1;
      local_194 = iVar12;
      (**(code **)(DAT_0006a8b0 + 0x6a818))(&local_1a0,*(int *)(param_1 + 0x70) + 0x2c);
      iVar10 = DAT_0006a8bc;
      local_1a0 = DAT_0006a8b8 + 0x6a82a;
      iVar12 = *(int *)(iVar11 + DAT_0006a8bc);
      *(undefined *)(*(int *)(param_1 + 0x70) + 0x10c) = 1;
      FUN_000671a8(*(undefined4 *)(iVar12 + 0x16c),*(undefined4 *)(param_1 + 0x70));
      FUN_000670e8(*(undefined4 *)(iVar12 + 0x16c),*(undefined4 *)(param_1 + 0x70));
      FUN_000670e8(*(undefined4 *)(iVar12 + 0x16c),*(undefined4 *)(param_1 + 0x70));
      goto LAB_0006a16e;
    }
LAB_0006a176:
    fVar15 = DAT_0006a470;
    local_140 = *(float *)(param_1 + 0x1c8) + *(float *)(param_1 + 0xc);
    local_13c = *(float *)(param_1 + 0x1cc) + *(float *)(param_1 + 0x10);
    local_144 = *(float *)(param_1 + 0x1c4) + *(float *)(param_1 + 8);
    iVar9 = *(int *)(iVar11 + iVar10);
    *(float *)(iVar12 + 8) = local_144;
    *(float *)(iVar12 + 0xc) = local_140;
    *(float *)(iVar12 + 0x10) = local_13c;
    iVar12 = *(int *)(iVar9 + 0x16c);
    if ((int)((uint)(*(float *)(iVar12 + 0x70) < fVar15) << 0x1f) < 0) {
      *(float *)(iVar12 + 0x70) = fVar15;
    }
  }
  else {
LAB_0006a16e:
    iVar12 = *(int *)(param_1 + 0x70);
    if (iVar12 != 0) goto LAB_0006a176;
    FUN_000671a8(*(undefined4 *)(*(int *)(iVar11 + iVar10) + 0x16c),0);
  }
  iVar12 = *(int *)(param_1 + 0x74);
  if (iVar12 == 0) {
    fVar15 = *(float *)(param_1 + 0x1bc) - DAT_0006a854;
    if (*(float *)(param_1 + 0x1dc) < fVar15 == (NAN(*(float *)(param_1 + 0x1dc)) || NAN(fVar15))) {
      local_15c = *(undefined4 *)(DAT_0006a888 + 0x6a674);
      local_158 = *(undefined4 *)(DAT_0006a888 + 0x6a678);
      local_154 = *(undefined4 *)(DAT_0006a888 + 0x6a67c);
      local_1b0 = DAT_0006a88c + 0x6a6a0;
      local_1a8 = DAT_0006a890 + 0x6a6b2;
      local_5c = 1;
      local_1ac = param_1;
      local_1a4 = iVar12;
      local_7c[0] = iVar12;
      (**(code **)(DAT_0006a88c + 0x6a6a8))(&local_1b0,local_7c);
      local_150 = DAT_0006a858;
      local_114 = DAT_0006a894 + 0x6a6da;
      local_14c = DAT_0006a85c;
      local_148 = DAT_0006a860;
      local_110 = *(undefined4 *)(iVar11 + DAT_0006a898);
      local_80 = 1;
      local_a0[0] = iVar12;
      (**(code **)(DAT_0006a894 + 0x6a6e2))(&local_114);
      pvVar8 = operator_new(0x148);
      iVar12 = DAT_0006a8a0 + 0x6a72e;
      FUN_00054f78(pvVar8,DAT_0006a89c + 0x6a718,&local_15c,local_7c,0xffffffff,&local_150,local_a0)
      ;
      *(void **)(param_1 + 0x74) = pvVar8;
      FUN_0001d358(local_a0);
      local_114 = iVar12;
      FUN_0001d358(local_7c);
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x5c) = DAT_0006a864;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 100) = DAT_0006a868;
      local_1b0 = iVar12;
      (**(code **)(**(int **)(param_1 + 0x74) + 8))();
      *(undefined *)(*(int *)(param_1 + 0x74) + 0x124) = 1;
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar11 + iVar10) + 0x40),*(undefined4 *)(param_1 + 0x74)
                   ,0);
      iVar12 = *(int *)(param_1 + 0x74);
      if (iVar12 != 0) goto LAB_0006a1d6;
    }
  }
  else {
LAB_0006a1d6:
    fVar15 = DAT_0006a46c;
    uVar5 = FUN_00067c94(param_1,*(float *)(param_1 + 0x1bc) - DAT_0006a474,
                         *(float *)(param_1 + 0x1bc) + DAT_0006a474,1,0);
    fVar6 = (float)FUN_00083f1c(uVar5,fVar15);
    uVar5 = DAT_0006a4a4;
    local_168 = DAT_0006a4a8;
    local_164 = (fVar15 - fVar6) * DAT_0006a4ac - DAT_0006a4b0;
    local_160 = DAT_0006a4a4;
    *(undefined4 *)(iVar12 + 8) = DAT_0006a4a8;
    *(float *)(iVar12 + 0xc) = local_164;
    *(undefined4 *)(iVar12 + 0x10) = uVar5;
  }
  fVar6 = DAT_0006a49c;
  fVar15 = DAT_0006a46c;
  switch(*(undefined4 *)(param_1 + 0x9c)) {
  case 0:
    fVar15 = *(float *)(param_1 + 0x1dc);
    bVar1 = fVar15 == *(float *)(param_1 + 0x1d8);
    if (bVar1) {
      fVar15 = fVar15 + param_2;
    }
    if (bVar1) {
      *(float *)(param_1 + 0x1dc) = fVar15;
    }
    uVar5 = FUN_00067c94(param_1,0x3f19999a,0x3f4ccccd,1,0);
    uVar5 = FUN_00083f1c(uVar5,0x40000000);
    *(undefined4 *)(param_1 + 0x1ac) = uVar5;
    fVar15 = (float)FUN_00067c94(param_1,0,0x3f19999a,1,0);
    fVar6 = *(float *)(param_1 + 0x1dc);
    fVar14 = *(float *)(param_1 + 0x1bc);
    if (fVar6 != fVar14 && fVar6 < fVar14 == (NAN(fVar6) || NAN(fVar14))) {
      *(undefined4 *)(param_1 + 0x9c) = 1;
    }
    break;
  case 2:
    FUN_0001c940();
    uVar7 = FUN_0001bb58();
    if (uVar7 < 0x11) {
      *(undefined4 *)(param_1 + 0x9c) = 1;
    }
  case 1:
    fVar15 = DAT_0006a46c;
    if (*(float *)(param_1 + 0x1dc) == *(float *)(param_1 + 0x1d8)) {
      *(float *)(param_1 + 0x1dc) = param_2 + *(float *)(param_1 + 0x1dc);
    }
    break;
  case 3:
    FUN_000671a8(*(undefined4 *)(*(int *)(iVar11 + iVar10) + 0x16c),0);
    *(float *)(param_1 + 0x1d8) = *(float *)(param_1 + 0x1dc);
    uVar5 = DAT_0006a4a4;
    fVar15 = DAT_0006a4a0;
    iVar12 = *(int *)(param_1 + 0x74);
    *(float *)(param_1 + 0x1dc) = *(float *)(param_1 + 0x1dc) + param_2 + param_2;
    fVar15 = (float)FUN_00067c94(param_1,*(float *)(param_1 + 0x1e0),
                                 *(float *)(param_1 + 0x1e0) + fVar15,1,0);
    fVar14 = (float)FUN_00083f1c(fVar6 - fVar15,fVar6);
    fVar15 = DAT_0006a4b4;
    local_174 = DAT_0006a4a8;
    local_16c = uVar5;
    local_170 = (fVar6 - fVar14) * DAT_0006a4ac - DAT_0006a4b0;
    *(undefined4 *)(iVar12 + 8) = DAT_0006a4a8;
    *(float *)(iVar12 + 0xc) = local_170;
    *(undefined4 *)(iVar12 + 0x10) = uVar5;
    fVar14 = (float)FUN_00067c94(param_1,*(float *)(param_1 + 0x1e0),
                                 *(float *)(param_1 + 0x1e0) + fVar15,1,0);
    local_180 = uVar5;
    local_178 = uVar5;
    fVar14 = fVar14 * fVar14;
    local_17c = fVar14 * DAT_0006a4b8;
    bVar1 = fVar14 < DAT_0006a4bc;
    bVar2 = fVar14 != DAT_0006a4bc;
    bVar3 = NAN(DAT_0006a4bc);
    *(undefined4 *)(param_1 + 8) = uVar5;
    *(float *)(param_1 + 0xc) = local_17c;
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    fVar15 = fVar6 - fVar14;
    if (bVar2 && bVar1 == (NAN(fVar14) || bVar3)) {
      *(undefined *)(param_1 + 0x27) = 1;
    }
  }
  piVar13 = (int *)**(int **)(param_1 + 0x1a4);
  if (*(int **)(param_1 + 0x1a4) != piVar13) {
    do {
      FUN_0006a0f8(piVar13 + 2,*(undefined4 *)(param_1 + 0x1dc),*(undefined4 *)(param_1 + 0x1d8));
      piVar13 = (int *)*piVar13;
    } while (piVar13 != (int *)*(int *)(param_1 + 0x1a4));
  }
  fVar6 = *(float *)(param_1 + 0x1d0);
  if (fVar6 < 0.0 == NAN(fVar6)) {
    fVar14 = *(float *)(param_1 + 0x1dc);
    if (((int)((uint)(fVar6 < fVar14) << 0x1f) < 0) &&
       (fVar6 < *(float *)(param_1 + 0x1d8) == (NAN(fVar6) || NAN(*(float *)(param_1 + 0x1d8))))) {
      uVar5 = *(undefined4 *)(*(int *)(iVar11 + iVar10) + 0x18c);
      local_11c = DAT_0006a48c + 0x6a2f6;
      local_118 = *(undefined4 *)(iVar11 + DAT_0006a490);
      local_a4 = 1;
      local_c4[0] = 0;
      (**(code **)(DAT_0006a48c + 0x6a2fe))(&local_11c,local_c4);
      FUN_00073a7c(uVar5,DAT_0006a494 + 0x6a312,0x3f800000,local_c4);
      FUN_0001d388(local_c4);
      fVar6 = *(float *)(param_1 + 0x1d0);
      local_11c = DAT_0006a498 + 0x6a332;
      if (fVar6 < 0.0 != NAN(fVar6)) goto LAB_0006a358;
      fVar14 = *(float *)(param_1 + 0x1dc);
    }
    fVar6 = fVar6 + DAT_0006a478;
    if (((int)((uint)(fVar6 < fVar14) << 0x1f) < 0) &&
       (fVar6 < *(float *)(param_1 + 0x1d8) == (NAN(fVar6) || NAN(*(float *)(param_1 + 0x1d8))))) {
      uVar5 = *(undefined4 *)(*(int *)(iVar11 + iVar10) + 0x18c);
      local_124 = DAT_0006a87c + 0x6a618;
      local_120 = *(undefined4 *)(iVar11 + DAT_0006a870);
      local_c8 = 1;
      local_e8[0] = 0;
      (**(code **)(DAT_0006a87c + 0x6a620))(&local_124,local_e8);
      FUN_00073a7c(uVar5,DAT_0006a880 + 0x6a634,0x3f800000,local_e8);
      FUN_0001d388(local_e8);
      local_124 = DAT_0006a884 + 0x6a64c;
    }
  }
LAB_0006a358:
  fVar6 = *(float *)(param_1 + 0x1d4);
  if (((fVar6 < 0.0 == NAN(fVar6)) &&
      ((int)((uint)(fVar6 < *(float *)(param_1 + 0x1dc)) << 0x1f) < 0)) &&
     (fVar6 < *(float *)(param_1 + 0x1d8) == (NAN(fVar6) || NAN(*(float *)(param_1 + 0x1d8))))) {
    uVar5 = *(undefined4 *)(*(int *)(iVar11 + iVar10) + 0x18c);
    local_12c = DAT_0006a86c + 0x6a5ce;
    local_128 = *(undefined4 *)(iVar11 + DAT_0006a870);
    local_ec = 1;
    local_10c[0] = 0;
    (**(code **)(DAT_0006a86c + 0x6a5d6))(&local_12c,local_10c);
    FUN_00073a7c(uVar5,DAT_0006a874 + 0x6a5ea,0x3f800000,local_10c);
    FUN_0001d388(local_10c);
    local_12c = DAT_0006a878 + 0x6a602;
  }
  fVar6 = DAT_0006a47c;
  iVar10 = *(int *)(iVar11 + iVar10);
  fVar14 = *(float *)(*(int *)(iVar10 + 0x40) + 0x18);
  *(float *)(*(int *)(iVar10 + 0x40) + 0x18) = fVar14 + (DAT_0006a47c - fVar14) * fVar15;
  fVar14 = *(float *)(*(int *)(iVar10 + 0x40) + 0x1c);
  *(float *)(*(int *)(iVar10 + 0x40) + 0x1c) = fVar14 + (fVar6 - fVar14) * fVar15;
  fVar14 = *(float *)(*(int *)(iVar10 + 0x40) + 0x20);
  fVar16 = DAT_0006a46c - fVar15;
  *(float *)(*(int *)(iVar10 + 0x40) + 0x20) = fVar14 + (fVar6 - fVar14) * fVar15;
  *(float *)(*(int *)(iVar10 + 0x40) + 0x24) = fVar16;
  piVar13 = *(int **)(iVar11 + iVar4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_1 + 0x1dc);
  if (local_34 == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



