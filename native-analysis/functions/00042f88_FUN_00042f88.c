/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00042f88 FUN_00042f88 */

void FUN_00042f88(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  int local_148;
  int local_144;
  int local_140;
  undefined4 local_13c;
  int local_138;
  undefined4 local_134;
  int local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  undefined4 local_118 [8];
  undefined local_f8;
  undefined4 local_f4 [8];
  undefined local_d4;
  undefined auStack_d0 [36];
  undefined auStack_ac [36];
  undefined auStack_88 [36];
  undefined auStack_64 [36];
  undefined auStack_40 [12];
  int local_34;
  
  iVar12 = DAT_000432c4;
  iVar3 = DAT_000432c0;
  iVar13 = DAT_000432bc + 0x42f9e;
  iVar14 = *(int *)(iVar13 + DAT_000432c4);
  local_34 = **(int **)(iVar13 + DAT_000432c0);
  fVar16 = *(float *)(param_1 + 0x70) + param_2 * DAT_000432a0;
  bVar1 = fVar16 < DAT_000432a0;
  bVar2 = NAN(DAT_000432a0);
  *(float *)(param_1 + 0x70) = fVar16;
  fVar15 = fVar16;
  if (bVar1 == (NAN(fVar16) || bVar2)) {
    fVar15 = DAT_000432a4;
  }
  if (bVar1 == (NAN(fVar16) || bVar2)) {
    *(float *)(param_1 + 0x70) = fVar15;
  }
  *(undefined4 *)(param_1 + 0x28) = 3;
  iVar5 = DAT_00043624;
  iVar11 = *(int *)(iVar14 + 4);
  if (iVar11 == 2) {
    iVar11 = *(int *)(param_1 + 0xf0);
    if (iVar11 == 0) {
      local_11c = iVar11;
      FUN_00017d64(&local_11c,*(undefined4 *)(DAT_00043624 + 0x433d4));
      local_160 = *(undefined4 *)(param_1 + 8);
      local_15c = *(undefined4 *)(param_1 + 0xc);
      local_1ac = DAT_00043628 + 0x433d8;
      local_158 = *(undefined4 *)(param_1 + 0x10);
      local_1a4 = DAT_0004362c + 0x433f0;
      local_1a8 = param_1;
      local_1a0 = iVar11;
      FUN_0003c0b0(auStack_64,&local_1ac);
      uVar8 = (**(code **)(**(int **)(iVar5 + 0x433d4) + 0x14))();
      uVar9 = (**(code **)(**(int **)(iVar5 + 0x433d4) + 0x18))();
      uVar6 = DAT_0004361c;
      local_128 = DAT_00043630 + 0x43436;
      local_14c = DAT_0004361c;
      local_124 = *(undefined4 *)(iVar13 + DAT_00043634);
      local_150 = (float)(ulonglong)uVar9;
      local_154 = (float)(ulonglong)uVar8;
      FUN_0003c0b0(auStack_88,&local_128);
      pvVar10 = operator_new(0x148);
      iVar11 = DAT_00043638 + 0x43484;
      FUN_000550e8(pvVar10,&local_11c,&local_160,auStack_64,0xffffffff,&local_154,auStack_88);
      *(void **)(param_1 + 0xf0) = pvVar10;
      FUN_0001d358(auStack_88);
      local_128 = iVar11;
      FUN_0001d358(auStack_64);
      local_1ac = iVar11;
      FUN_00017d90(&local_11c);
      *(undefined *)(*(int *)(param_1 + 0xf0) + 0x26) = 1;
      (**(code **)(**(int **)(param_1 + 0xf0) + 8))();
      *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x58) = DAT_00043620;
      *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x60) = uVar6;
      FUN_00049d7c(*(undefined4 *)(iVar14 + 0x40),*(undefined4 *)(param_1 + 0xf0),0);
    }
    iVar14 = DAT_0004363c;
    iVar11 = *(int *)(param_1 + 0xf4);
    if (iVar11 == 0) {
      local_120 = iVar11;
      FUN_00017d64(&local_120,*(undefined4 *)(DAT_0004363c + 0x43514));
      local_178 = *(undefined4 *)(param_1 + 8);
      local_1bc = DAT_00043640 + 0x43510;
      local_174 = *(undefined4 *)(param_1 + 0xc);
      local_170 = *(undefined4 *)(param_1 + 0x10);
      local_1b4 = DAT_00043644 + 0x4352c;
      local_1b8 = param_1;
      local_1b0 = iVar11;
      FUN_0003c0b0(auStack_ac,&local_1bc);
      uVar8 = (**(code **)(**(int **)(iVar14 + 0x43514) + 0x14))();
      uVar9 = (**(code **)(**(int **)(iVar14 + 0x43514) + 0x18))();
      local_130 = DAT_00043648 + 0x43574;
      local_12c = *(undefined4 *)(iVar13 + DAT_00043634);
      local_168 = (float)(ulonglong)uVar9;
      local_164 = DAT_0004361c;
      local_16c = (float)(ulonglong)uVar8;
      FUN_0003c0b0(auStack_d0,&local_130);
      pvVar10 = operator_new(0x148);
      iVar14 = DAT_0004364c + 0x435c6;
      FUN_000550e8(pvVar10,&local_120,&local_178,auStack_ac,0xffffffff,&local_16c,auStack_d0);
      *(void **)(param_1 + 0xf4) = pvVar10;
      FUN_0001d358(auStack_d0);
      local_130 = iVar14;
      FUN_0001d358(auStack_ac);
      local_1bc = iVar14;
      FUN_00017d90(&local_120);
      (**(code **)(**(int **)(param_1 + 0xf4) + 8))();
      *(undefined *)(*(int *)(param_1 + 0xf4) + 0x26) = 1;
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar13 + iVar12) + 0x40),*(undefined4 *)(param_1 + 0xf4)
                   ,0);
    }
    local_190 = DAT_000432ac;
    fVar15 = DAT_000432a4;
    local_18c = DAT_000432a0;
    local_180 = *(float *)(param_1 + 0xc) + DAT_000432a0;
    iVar14 = *(int *)(param_1 + 0xf0);
    local_17c = *(float *)(param_1 + 0x10) + DAT_000432a4;
    local_184 = *(float *)(param_1 + 8) + DAT_000432a8;
    *(float *)(iVar14 + 8) = local_184;
    *(float *)(iVar14 + 0xc) = local_180;
    *(float *)(iVar14 + 0x10) = local_17c;
    local_18c = *(float *)(param_1 + 0xc) + local_18c;
    iVar14 = *(int *)(param_1 + 0xf4);
    local_188 = *(float *)(param_1 + 0x10) + fVar15;
    local_190 = *(float *)(param_1 + 8) + local_190;
    *(float *)(iVar14 + 8) = local_190;
    *(float *)(iVar14 + 0xc) = local_18c;
    *(float *)(iVar14 + 0x10) = local_188;
    iVar14 = *(int *)(param_1 + 0xdc);
    if (iVar14 == 0) {
      piVar7 = (int *)operator_new(0x124);
      FUN_0004c9a4();
      *(int **)(param_1 + 0xdc) = piVar7;
      (**(code **)(*piVar7 + 8))(piVar7);
      (**(code **)(**(int **)(param_1 + 0xdc) + 0x4c))(*(int **)(param_1 + 0xdc),0x423c0000);
      (**(code **)(**(int **)(param_1 + 0xdc) + 0x48))(*(int **)(param_1 + 0xdc),0x43700000);
      (**(code **)(**(int **)(param_1 + 0xdc) + 0x44))(*(int **)(param_1 + 0xdc),0x430d0000);
      uVar4 = DAT_000432e8;
      uVar6 = DAT_000432e4;
      iVar14 = *(int *)(param_1 + 0xdc);
      local_194 = fVar15;
      local_19c = DAT_000432e0;
      local_198 = DAT_000432e4;
      *(undefined4 *)(iVar14 + 8) = DAT_000432e0;
      *(undefined4 *)(iVar14 + 0xc) = uVar6;
      *(float *)(iVar14 + 0x10) = fVar15;
      *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0xdc) = 0x423c0000;
      *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0xe4) = uVar4;
      *(undefined *)(*(int *)(param_1 + 0xdc) + 200) = 1;
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar13 + iVar12) + 0x40),*(undefined4 *)(param_1 + 0xdc)
                   ,0);
      iVar14 = *(int *)(param_1 + 0xdc);
      if (iVar14 != 0) goto LAB_0004308e;
    }
    else {
LAB_0004308e:
      *(undefined *)(iVar14 + 0x24) = 0;
    }
    if (*(int *)(param_1 + 0xe0) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xe0) + 0x24) = 0;
    }
    iVar11 = *(int *)(*(int *)(iVar13 + iVar12) + 4);
  }
  if (iVar11 == 3) {
    FUN_00017d64(param_1 + 0x68,*(undefined4 *)(DAT_000432c8 + 0x430c6));
    fVar15 = *(float *)(*(int *)(iVar13 + iVar12) + 0x10);
    if (fVar15 == DAT_000432b0 || fVar15 < DAT_000432b0 != (NAN(fVar15) || NAN(DAT_000432b0))) {
      iVar14 = *(int *)(param_1 + 0xc4);
      fVar15 = (float)(longlong)iVar14;
      fVar16 = *(float *)(param_1 + 200);
    }
    else {
      iVar14 = *(int *)(param_1 + 0xc4);
      fVar15 = (float)(longlong)iVar14;
      fVar16 = *(float *)(param_1 + 200);
      if ((int)((uint)(fVar16 < fVar15) << 0x1f) < 0) {
        fVar15 = fVar16 + param_2 * DAT_000432b4;
        *(float *)(param_1 + 200) = fVar15;
        if (((fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15)) &&
            ((int)((uint)(fVar16 - (float)(longlong)(int)fVar16 < DAT_000432b8) << 0x1f) < 0)) &&
           (iVar14 = (int)fVar15,
           fVar15 - (float)(longlong)iVar14 < DAT_000432b8 ==
           (NAN(fVar15 - (float)(longlong)iVar14) || NAN(DAT_000432b8)))) {
          if (iVar14 < 7) {
            iVar14 = iVar14 + 1;
          }
          else {
            iVar14 = 8;
          }
          FUN_0008f060(auStack_40,10,DAT_000432cc + 0x43150,iVar14);
          uVar6 = *(undefined4 *)(*(int *)(iVar13 + iVar12) + 0x18c);
          local_138 = DAT_000432d0 + 0x4316a;
          local_134 = *(undefined4 *)(iVar13 + DAT_000432d4);
          local_d4 = 1;
          local_f4[0] = 0;
          (**(code **)(DAT_000432d0 + 0x43172))(&local_138,local_f4);
          FUN_00073a7c(uVar6,auStack_40,0x3f800000,local_f4);
          FUN_0001d388(local_f4);
        }
        goto LAB_00042fe2;
      }
    }
    if ((fVar15 <= fVar16) &&
       (fVar15 = (float)(longlong)(iVar14 + 1),
       fVar15 != fVar16 && fVar15 < fVar16 == (NAN(fVar15) || NAN(fVar16)))) {
      fVar15 = param_2 + param_2 + fVar16;
      *(float *)(param_1 + 200) = fVar15;
      if (((*(int *)(param_1 + 0xd0) != 0) &&
          ((fVar15 != 0.0 && fVar15 < 0.0 == NAN(fVar15) &&
           ((int)((uint)(fVar16 - (float)(longlong)(int)fVar16 < DAT_000432b8) << 0x1f) < 0)))) &&
         (fVar15 - (float)(longlong)(int)fVar15 < DAT_000432b8 ==
          (NAN(fVar15 - (float)(longlong)(int)fVar15) || NAN(DAT_000432b8)))) {
        uVar6 = *(undefined4 *)(*(int *)(iVar13 + iVar12) + 0x18c);
        local_140 = DAT_000432d8 + 0x43266;
        local_13c = *(undefined4 *)(iVar13 + DAT_000432d4);
        local_f8 = 1;
        local_118[0] = 0;
        (**(code **)(DAT_000432d8 + 0x4326e))(&local_140,local_118);
        FUN_00073a7c(uVar6,DAT_000432dc + 0x43286,0x3f800000,local_118);
        FUN_0001d388(local_118);
      }
    }
  }
  else if (iVar11 == 2) {
    iVar12 = *(int *)(param_1 + 0xd8);
    if (iVar12 == 1) {
      FUN_0004022c(param_1,param_2);
    }
    else if (iVar12 == 0) {
      local_148 = iVar12;
      local_144 = iVar12;
      uVar6 = FUN_0007555c();
      iVar12 = FUN_00074390(uVar6,&local_148);
      if (iVar12 == 0) {
        uVar6 = FUN_0007555c();
        FUN_0007523c(uVar6,0);
      }
    }
  }
LAB_00042fe2:
  if (local_34 == **(int **)(iVar13 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



