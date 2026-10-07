/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005be04 FUN_0005be04 */

void FUN_0005be04(int param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  float local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84 [8];
  undefined local_64;
  undefined4 local_60 [8];
  undefined local_40;
  int local_3c;
  
  iVar5 = DAT_0005c064;
  iVar22 = DAT_0005c060 + 0x5be20;
  local_3c = **(int **)(iVar22 + DAT_0005c064);
  fVar24 = (float)(longlong)(int)(uint)*(ushort *)(param_1 + 0x98) +
           param_2 * DAT_0005c034 * DAT_0005c038;
  *(ushort *)(param_1 + 0x98) = (ushort)(0.0 < fVar24) * (short)(int)fVar24;
  fVar6 = (float)FUN_000927b8();
  fVar24 = DAT_0005c03c;
  if (-1 < (int)((uint)(fVar6 < 0.0) << 0x1f)) {
    fVar24 = (float)FUN_000927b8(*(undefined2 *)(param_1 + 0x98));
    fVar24 = DAT_0005c03c + fVar24 * DAT_0005c058;
  }
  pfVar16 = *(float **)(param_1 + 0x84);
  *(float *)(param_1 + 0x9c) = fVar24;
  fVar4 = DAT_0005c048;
  fVar3 = DAT_0005c044;
  fVar6 = DAT_0005c040;
  fVar24 = DAT_0005c03c;
  iVar14 = *(int *)(param_1 + 0x90);
  if (*(float **)(param_1 + 0x88) != pfVar16) {
    iVar19 = 0;
    iVar21 = *(int *)(iVar22 + DAT_0005c068);
    iVar11 = iVar14;
    while( true ) {
      fVar23 = fVar24;
      if (iVar19 == iVar11) {
        fVar23 = fVar6;
      }
      local_a0 = pfVar16[2] + (fVar23 - pfVar16[2]) * fVar3;
      pfVar16[2] = local_a0;
      local_a4 = pfVar16[1] + *(float *)(param_1 + 0xc);
      local_a0 = local_a0 + *(float *)(param_1 + 0x10);
      local_a8 = *pfVar16 + *(float *)(param_1 + 8);
      local_9c = local_a8;
      local_98 = local_a4;
      fStack_94 = local_a0;
      if (*(char *)(iVar21 + 0xa2) != '\0') {
        fVar23 = local_a8 - fVar4;
        fVar25 = *(float *)(iVar21 + 0x94);
        if ((fVar25 != fVar23 && fVar25 < fVar23 == (NAN(fVar25) || NAN(fVar23))) &&
           ((int)((uint)(fVar25 < local_a8 + fVar4) << 0x1f) < 0)) {
          fVar23 = local_a4 - fVar4;
          fVar25 = *(float *)(iVar21 + 0x98);
          if ((fVar25 != fVar23 && fVar25 < fVar23 == (NAN(fVar25) || NAN(fVar23))) &&
             ((int)((uint)(fVar25 < local_a4 + fVar4) << 0x1f) < 0)) {
            *(int *)(param_1 + 0x90) = iVar19;
            FUN_0005b658(param_1);
          }
        }
      }
      pfVar16 = pfVar16 + 3;
      if (pfVar16 == *(float **)(param_1 + 0x88)) break;
      iVar19 = iVar19 + 1;
      iVar11 = *(int *)(param_1 + 0x90);
    }
  }
  iVar11 = DAT_0005c2cc;
  fVar24 = DAT_0005c054;
  iVar19 = *(int *)(param_1 + 0x128);
  if (iVar19 == 0) {
    if (*(char *)(param_1 + 300) == '\0') {
      if ((*(uint *)(DAT_0005c2cc + 0x5c096) & 1) == 0) {
        iVar21 = DAT_0005c2cc + 0x5c096;
        iVar19 = __cxa_guard_acquire(iVar21);
        iVar14 = DAT_0005c304;
        if (iVar19 != 0) {
          uVar10 = FUN_00022674(DAT_0005c300 + 0x5c290,0);
          *(undefined4 *)(iVar11 + 0x5c09a) = uVar10;
          uVar10 = FUN_00022674(iVar14 + 0x5c296,0);
          *(undefined4 *)(iVar11 + 0x5c09e) = uVar10;
          uVar10 = FUN_00022674(iVar14 + 0x5c296,0);
          *(undefined4 *)(iVar11 + 0x5c0a2) = uVar10;
          __cxa_guard_release(iVar21);
        }
      }
      fVar24 = DAT_0005c2b8;
      local_88 = 0;
      iVar14 = DAT_0005c2d0 + 0x5c09c;
      FUN_00017d64(&local_88,*(undefined4 *)(iVar14 + *(int *)(param_1 + 0x130) * 4 + 0xc));
      local_bc = *(float *)(param_1 + 0xc) + DAT_0005c2bc;
      local_40 = 1;
      local_e8 = DAT_0005c2d4 + 0x5c0da;
      local_e0 = DAT_0005c2d8 + 0x5c0e0;
      local_dc = 0;
      local_60[0] = 0;
      local_c0 = *(float *)(param_1 + 8) + DAT_0005c2c0;
      local_b8 = *(float *)(param_1 + 0x10) + fVar24;
      local_e4 = param_1;
      (**(code **)(DAT_0005c2d4 + 0x5c0e2))(&local_e8,local_60);
      local_64 = 1;
      local_cc = *(undefined4 *)(DAT_0005c2dc + 0x5c108);
      local_c8 = *(undefined4 *)(DAT_0005c2dc + 0x5c10c);
      local_c4 = *(undefined4 *)(DAT_0005c2dc + 0x5c110);
      local_84[0] = 0;
      local_90 = DAT_0005c2e0 + 0x5c130;
      local_8c = *(undefined4 *)(iVar22 + DAT_0005c2e4);
      (**(code **)(DAT_0005c2e0 + 0x5c138))(&local_90,local_84);
      pvVar7 = operator_new(0x148);
      FUN_000550e8(pvVar7,&local_88,&local_c0,local_60,
                   *(undefined4 *)(iVar14 + *(int *)(param_1 + 0x130) * 4 + 0x1c),&local_cc,local_84
                  );
      iVar14 = DAT_0005c2e8;
      *(void **)(param_1 + 0x128) = pvVar7;
      FUN_0001d358(local_84);
      local_90 = iVar14 + 0x5c17e;
      FUN_0001d358(local_60);
      local_e8 = iVar14 + 0x5c17e;
      FUN_00017d90(&local_88);
      (**(code **)(**(int **)(param_1 + 0x128) + 8))();
      local_f8 = DAT_0005c2ec + 0x5c1a8;
      local_ec = 0;
      local_f0 = DAT_0005c2f0 + 0x5c1b0;
      local_f4 = param_1;
      (**(code **)(DAT_0005c2ec + 0x5c1b0))(&local_f8,*(int *)(param_1 + 0x128) + 0x2c);
      local_f8 = DAT_0005c2f4 + 0x5c1c4;
      *(undefined *)(*(int *)(param_1 + 0x128) + 0x10f) = 0;
      *(float *)(*(int *)(param_1 + 0x128) + 0x10) = fVar24;
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar22 + DAT_0005c2f8) + 0x40),
                   *(undefined4 *)(param_1 + 0x128),0);
      fVar6 = DAT_0005c2c4;
      puVar15 = *(uint **)(iVar22 + DAT_0005c2fc);
      uVar17 = *puVar15;
      uVar13 = puVar15[2];
      uVar20 = puVar15[4];
      lVar1 = (ulonglong)uVar17 * (ulonglong)uVar13;
      uVar18 = (uint)lVar1;
      uVar8 = uVar18 + uVar20;
      lVar2 = (ulonglong)uVar13 * (ulonglong)uVar8;
      uVar9 = (uint)lVar2;
      *puVar15 = uVar9 + uVar20;
      puVar15[1] = uVar13 * (uVar13 * puVar15[1] + uVar17 * puVar15[3] +
                             (int)((ulonglong)lVar1 >> 0x20) +
                            puVar15[5] + (uint)CARRY4(uVar18,uVar20)) + uVar8 * puVar15[3] +
                   (int)((ulonglong)lVar2 >> 0x20) + puVar15[5] + (uint)CARRY4(uVar9,uVar20);
      iVar14 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
      *(float *)(iVar14 + 0x28) = *(float *)(iVar14 + 0x28) * fVar6;
      *(float *)(iVar14 + 0x2c) = *(float *)(iVar14 + 0x2c) * fVar6;
      *(float *)(iVar14 + 0x30) = *(float *)(iVar14 + 0x30) * fVar6;
      local_d8 = fVar24;
      local_d4 = DAT_0005c2c8;
      local_d0 = fVar24;
      FUN_00025114(*(undefined4 *)(*(int *)(param_1 + 0x128) + 0x120),0,&local_d8);
    }
  }
  else {
    local_b0 = *(float *)(param_1 + 0xc) + DAT_0005c04c;
    local_ac = *(float *)(param_1 + 0x10) + DAT_0005c054;
    local_b4 = *(float *)(param_1 + 8) + DAT_0005c050;
    *(float *)(iVar19 + 8) = local_b4;
    *(float *)(iVar19 + 0xc) = local_b0;
    *(float *)(iVar19 + 0x10) = local_ac;
    *(float *)(*(int *)(param_1 + 0x128) + 0x10) = fVar24;
    if ((((*(int *)(param_1 + 0x90) != iVar14) && (*(char *)(param_1 + 300) == '\0')) &&
        (iVar14 = *(int *)(*(int *)(param_1 + 0x128) + 0x120), iVar14 != 0)) &&
       ((*(char *)(iVar14 + 0xb4) == '\0' &&
        (fVar24 = *(float *)(iVar14 + 0x6c),
        fVar24 == DAT_0005c05c || fVar24 < DAT_0005c05c != (NAN(fVar24) || NAN(DAT_0005c05c)))))) {
      *(undefined *)(iVar14 + 0xb4) = 1;
      *(undefined *)(*(int *)(param_1 + 0x128) + 0x10f) = 0;
      uVar10 = *(undefined4 *)(DAT_0005c06c + 0x5c028);
      uVar12 = *(undefined4 *)(DAT_0005c06c + 0x5c02c);
      iVar14 = *(int *)(*(int *)(param_1 + 0x128) + 0x120);
      *(undefined4 *)(iVar14 + 0xc4) = *(undefined4 *)(DAT_0005c06c + 0x5c024);
      *(undefined4 *)(iVar14 + 200) = uVar10;
      *(undefined4 *)(iVar14 + 0xcc) = uVar12;
      *(undefined *)(param_1 + 300) = 1;
    }
  }
  if (local_3c == **(int **)(iVar22 + iVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



