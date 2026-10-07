/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00067274 FUN_00067274 */

void FUN_00067274(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_64;
  int local_60;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  
  iVar3 = DAT_00067750;
  iVar13 = DAT_0006774c;
  iVar7 = DAT_00067748;
  fVar19 = DAT_00067730;
  fVar17 = DAT_0006772c;
  fVar18 = DAT_00067728;
  fVar15 = DAT_00067724;
  fVar2 = DAT_00067720;
  fVar1 = DAT_0006771c;
  iVar9 = DAT_00067450 + 0x67292;
  fVar23 = DAT_00067438;
  if (*(char *)(param_1 + 0x90) == '\0') {
    fVar23 = DAT_00067434;
  }
  fVar22 = *(float *)(param_1 + 0x70);
  if (fVar22 != 0.0 && fVar22 < 0.0 == NAN(fVar22)) {
    if (fVar22 == DAT_0006743c || fVar22 < DAT_0006743c != (NAN(fVar22) || NAN(DAT_0006743c))) {
      local_60 = DAT_00067454;
    }
    else {
      if ((int)((uint)(fVar22 < DAT_0006745c) << 0x1f) < 0) {
        iVar12 = 0;
        pfVar11 = (float *)(DAT_0006774c + 0x67486);
        local_60 = DAT_00067748;
        puVar10 = (undefined4 *)(DAT_00067750 + 0x6748e);
        do {
          fVar20 = (float)(longlong)iVar12 + (float)(longlong)((int)(fVar22 * fVar1) % 1000) / fVar2
          ;
          fVar16 = fVar17 + (fVar20 - fVar15) * fVar18;
          if (0.0 < fVar16) {
            if (fVar16 < fVar17 != (NAN(fVar16) || NAN(fVar17))) {
              local_64 = (int)fVar16;
              goto LAB_00067500;
            }
            local_64 = 0xff;
            if ((int)((uint)(fVar22 < fVar19) << 0x1f) < 0) goto LAB_0006750c;
LAB_000676d8:
            if (fVar22 != DAT_0006773c &&
                fVar22 < DAT_0006773c == (NAN(fVar22) || NAN(DAT_0006773c))) {
              local_64 = (int)((float)(longlong)local_64 *
                              (DAT_00067744 + (fVar22 - DAT_0006773c) * DAT_00067740));
            }
          }
          else {
            local_64 = 0;
LAB_00067500:
            if (-1 < (int)((uint)(fVar22 < fVar19) << 0x1f)) goto LAB_000676d8;
LAB_0006750c:
            local_64 = (int)((float)(longlong)local_64 * (fVar22 - DAT_00067734) * DAT_00067738);
          }
          iVar12 = iVar12 + 1;
          fVar24 = (fVar20 + fVar20) * (fVar20 + fVar20);
          FUN_000995e4(*(undefined4 *)(param_1 + 0x80));
          iVar14 = *(int *)(iVar9 + iVar7);
          *(undefined *)(iVar14 + 0x18d4) = 0;
          uVar4 = *(undefined4 *)(iVar3 + 0x67492);
          uVar5 = *(undefined4 *)(iVar3 + 0x67496);
          uVar6 = *(undefined4 *)(iVar3 + 0x6749a);
          *(undefined4 *)(iVar14 + 0x1094) = *puVar10;
          *(undefined4 *)(iVar14 + 0x1098) = uVar4;
          *(undefined4 *)(iVar14 + 0x109c) = uVar5;
          *(undefined4 *)(iVar14 + 0x10a0) = uVar6;
          uVar4 = *(undefined4 *)(iVar3 + 0x674a2);
          uVar5 = *(undefined4 *)(iVar3 + 0x674a6);
          uVar6 = *(undefined4 *)(iVar3 + 0x674aa);
          *(undefined4 *)(iVar14 + 0x10a4) = *(undefined4 *)(iVar3 + 0x6749e);
          *(undefined4 *)(iVar14 + 0x10a8) = uVar4;
          *(undefined4 *)(iVar14 + 0x10ac) = uVar5;
          *(undefined4 *)(iVar14 + 0x10b0) = uVar6;
          uVar4 = *(undefined4 *)(iVar3 + 0x674b2);
          uVar5 = *(undefined4 *)(iVar3 + 0x674b6);
          uVar6 = *(undefined4 *)(iVar3 + 0x674ba);
          *(undefined4 *)(iVar14 + 0x10b4) = *(undefined4 *)(iVar3 + 0x674ae);
          *(undefined4 *)(iVar14 + 0x10b8) = uVar4;
          *(undefined4 *)(iVar14 + 0x10bc) = uVar5;
          *(undefined4 *)(iVar14 + 0x10c0) = uVar6;
          uVar4 = *(undefined4 *)(iVar3 + 0x674c2);
          uVar5 = *(undefined4 *)(iVar3 + 0x674c6);
          uVar6 = *(undefined4 *)(iVar3 + 0x674ca);
          *(undefined4 *)(iVar14 + 0x10c4) = *(undefined4 *)(iVar3 + 0x674be);
          *(undefined4 *)(iVar14 + 0x10c8) = uVar4;
          *(undefined4 *)(iVar14 + 0x10cc) = uVar5;
          *(undefined4 *)(iVar14 + 0x10d0) = uVar6;
          uVar4 = *(undefined4 *)(iVar3 + 0x67492);
          uVar5 = *(undefined4 *)(iVar3 + 0x67496);
          uVar6 = *(undefined4 *)(iVar3 + 0x6749a);
          *(undefined4 *)(iVar14 + 0x1894) = *puVar10;
          *(undefined4 *)(iVar14 + 0x1898) = uVar4;
          *(undefined4 *)(iVar14 + 0x189c) = uVar5;
          *(undefined4 *)(iVar14 + 0x18a0) = uVar6;
          uVar4 = *(undefined4 *)(iVar3 + 0x674a2);
          uVar5 = *(undefined4 *)(iVar3 + 0x674a6);
          uVar6 = *(undefined4 *)(iVar3 + 0x674aa);
          *(undefined4 *)(iVar14 + 0x18a4) = *(undefined4 *)(iVar3 + 0x6749e);
          *(undefined4 *)(iVar14 + 0x18a8) = uVar4;
          *(undefined4 *)(iVar14 + 0x18ac) = uVar5;
          *(undefined4 *)(iVar14 + 0x18b0) = uVar6;
          uVar4 = *(undefined4 *)(iVar3 + 0x674b2);
          uVar5 = *(undefined4 *)(iVar3 + 0x674b6);
          uVar6 = *(undefined4 *)(iVar3 + 0x674ba);
          *(undefined4 *)(iVar14 + 0x18b4) = *(undefined4 *)(iVar3 + 0x674ae);
          *(undefined4 *)(iVar14 + 0x18b8) = uVar4;
          *(undefined4 *)(iVar14 + 0x18bc) = uVar5;
          *(undefined4 *)(iVar14 + 0x18c0) = uVar6;
          uVar4 = *(undefined4 *)(iVar3 + 0x674c2);
          uVar5 = *(undefined4 *)(iVar3 + 0x674c6);
          uVar6 = *(undefined4 *)(iVar3 + 0x674ca);
          *(undefined4 *)(iVar14 + 0x18c4) = *(undefined4 *)(iVar3 + 0x674be);
          *(undefined4 *)(iVar14 + 0x18c8) = uVar4;
          *(undefined4 *)(iVar14 + 0x18cc) = uVar5;
          *(undefined4 *)(iVar14 + 0x18d0) = uVar6;
          fVar20 = fVar24 * *pfVar11;
          iVar8 = *(int *)(iVar14 + 0x18d8);
          fVar21 = fVar24 * *(float *)(iVar13 + 0x6748a);
          fVar22 = *(float *)(iVar13 + 0x6748e);
          *(float *)(iVar14 + 0x1894) = fVar20 * *(float *)(iVar14 + 0x1894);
          *(float *)(iVar14 + 0x18a4) = fVar20 * *(float *)(iVar14 + 0x18a4);
          *(float *)(iVar14 + 0x18b4) = fVar20 * *(float *)(iVar14 + 0x18b4);
          fVar20 = fVar20 * *(float *)(iVar14 + 0x18c4);
          *(float *)(iVar14 + 0x18c4) = fVar20;
          *(float *)(iVar14 + 0x1898) = fVar21 * *(float *)(iVar14 + 0x1898);
          *(float *)(iVar14 + 0x18a8) = fVar21 * *(float *)(iVar14 + 0x18a8);
          fVar24 = fVar24 * fVar22;
          *(float *)(iVar14 + 0x18b8) = fVar21 * *(float *)(iVar14 + 0x18b8);
          fVar21 = fVar21 * *(float *)(iVar14 + 0x18c8);
          *(float *)(iVar14 + 0x18c8) = fVar21;
          *(float *)(iVar14 + 0x189c) = fVar24 * *(float *)(iVar14 + 0x189c);
          *(float *)(iVar14 + 0x18ac) = fVar24 * *(float *)(iVar14 + 0x18ac);
          *(float *)(iVar14 + 0x18bc) = fVar24 * *(float *)(iVar14 + 0x18bc);
          fVar24 = fVar24 * *(float *)(iVar14 + 0x18cc);
          *(int *)(iVar14 + 0x18d8) = iVar8 + 2;
          *(float *)(iVar14 + 0x18cc) = fVar24;
          fVar22 = *(float *)(param_1 + 0x78);
          fVar16 = *(float *)(param_1 + 0x7c);
          *(float *)(iVar14 + 0x18c4) = fVar20 + *(float *)(param_1 + 0x74);
          *(int *)(iVar14 + 0x18d8) = iVar8 + 3;
          *(float *)(iVar14 + 0x18c8) = fVar21 + fVar22;
          *(float *)(iVar14 + 0x18cc) = fVar24 + fVar16;
          FUN_0008d434(iVar14,1);
          local_4c = 0xff;
          local_4b = 0xff;
          local_4a = 0xff;
          local_49 = (undefined)local_64;
          FUN_000a344c(&local_4c,0,0x3f800000,0,0x3f800000);
          FUN_000995e0(*(undefined4 *)(param_1 + 0x80));
          if (iVar12 == 4) goto LAB_000672bc;
          fVar22 = *(float *)(param_1 + 0x70);
        } while( true );
      }
      local_60 = DAT_00067748;
    }
LAB_000672bc:
    FUN_000995e4(*(undefined4 *)(param_1 + 0x68));
    iVar7 = DAT_00067458;
    fVar1 = DAT_00067440;
    fVar18 = fVar23 * DAT_00067440;
    iVar13 = *(int *)(iVar9 + local_60);
    puVar10 = (undefined4 *)(DAT_00067458 + 0x672d8);
    *(undefined *)(iVar13 + 0x18d4) = 0;
    uVar4 = *(undefined4 *)(iVar7 + 0x672dc);
    uVar5 = *(undefined4 *)(iVar7 + 0x672e0);
    uVar6 = *(undefined4 *)(iVar7 + 0x672e4);
    *(undefined4 *)(iVar13 + 0x1094) = *puVar10;
    *(undefined4 *)(iVar13 + 0x1098) = uVar4;
    *(undefined4 *)(iVar13 + 0x109c) = uVar5;
    *(undefined4 *)(iVar13 + 0x10a0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x672ec);
    uVar5 = *(undefined4 *)(iVar7 + 0x672f0);
    uVar6 = *(undefined4 *)(iVar7 + 0x672f4);
    *(undefined4 *)(iVar13 + 0x10a4) = *(undefined4 *)(iVar7 + 0x672e8);
    *(undefined4 *)(iVar13 + 0x10a8) = uVar4;
    *(undefined4 *)(iVar13 + 0x10ac) = uVar5;
    *(undefined4 *)(iVar13 + 0x10b0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x672fc);
    uVar5 = *(undefined4 *)(iVar7 + 0x67300);
    uVar6 = *(undefined4 *)(iVar7 + 0x67304);
    *(undefined4 *)(iVar13 + 0x10b4) = *(undefined4 *)(iVar7 + 0x672f8);
    *(undefined4 *)(iVar13 + 0x10b8) = uVar4;
    *(undefined4 *)(iVar13 + 0x10bc) = uVar5;
    *(undefined4 *)(iVar13 + 0x10c0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x6730c);
    uVar5 = *(undefined4 *)(iVar7 + 0x67310);
    uVar6 = *(undefined4 *)(iVar7 + 0x67314);
    *(undefined4 *)(iVar13 + 0x10c4) = *(undefined4 *)(iVar7 + 0x67308);
    *(undefined4 *)(iVar13 + 0x10c8) = uVar4;
    *(undefined4 *)(iVar13 + 0x10cc) = uVar5;
    *(undefined4 *)(iVar13 + 0x10d0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x672dc);
    uVar5 = *(undefined4 *)(iVar7 + 0x672e0);
    uVar6 = *(undefined4 *)(iVar7 + 0x672e4);
    *(undefined4 *)(iVar13 + 0x1894) = *puVar10;
    *(undefined4 *)(iVar13 + 0x1898) = uVar4;
    *(undefined4 *)(iVar13 + 0x189c) = uVar5;
    *(undefined4 *)(iVar13 + 0x18a0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x672ec);
    uVar5 = *(undefined4 *)(iVar7 + 0x672f0);
    uVar6 = *(undefined4 *)(iVar7 + 0x672f4);
    *(undefined4 *)(iVar13 + 0x18a4) = *(undefined4 *)(iVar7 + 0x672e8);
    *(undefined4 *)(iVar13 + 0x18a8) = uVar4;
    *(undefined4 *)(iVar13 + 0x18ac) = uVar5;
    *(undefined4 *)(iVar13 + 0x18b0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x672fc);
    uVar5 = *(undefined4 *)(iVar7 + 0x67300);
    uVar6 = *(undefined4 *)(iVar7 + 0x67304);
    *(undefined4 *)(iVar13 + 0x18b4) = *(undefined4 *)(iVar7 + 0x672f8);
    *(undefined4 *)(iVar13 + 0x18b8) = uVar4;
    *(undefined4 *)(iVar13 + 0x18bc) = uVar5;
    *(undefined4 *)(iVar13 + 0x18c0) = uVar6;
    uVar4 = *(undefined4 *)(iVar7 + 0x6730c);
    uVar5 = *(undefined4 *)(iVar7 + 0x67310);
    uVar6 = *(undefined4 *)(iVar7 + 0x67314);
    *(undefined4 *)(iVar13 + 0x18c4) = *(undefined4 *)(iVar7 + 0x67308);
    *(undefined4 *)(iVar13 + 0x18c8) = uVar4;
    *(undefined4 *)(iVar13 + 0x18cc) = uVar5;
    *(undefined4 *)(iVar13 + 0x18d0) = uVar6;
    iVar7 = *(int *)(iVar13 + 0x18d8);
    *(float *)(iVar13 + 0x1894) = fVar18 * *(float *)(iVar13 + 0x1894);
    *(float *)(iVar13 + 0x18a4) = fVar18 * *(float *)(iVar13 + 0x18a4);
    *(float *)(iVar13 + 0x18b4) = fVar18 * *(float *)(iVar13 + 0x18b4);
    fVar18 = fVar18 * *(float *)(iVar13 + 0x18c4);
    *(float *)(iVar13 + 0x18c4) = fVar18;
    *(float *)(iVar13 + 0x1898) = *(float *)(iVar13 + 0x1898) * fVar1;
    *(float *)(iVar13 + 0x18a8) = *(float *)(iVar13 + 0x18a8) * fVar1;
    *(float *)(iVar13 + 0x18b8) = *(float *)(iVar13 + 0x18b8) * fVar1;
    fVar2 = DAT_00067444;
    fVar17 = *(float *)(iVar13 + 0x18c8) * fVar1;
    *(int *)(iVar13 + 0x18d8) = iVar7 + 2;
    *(float *)(iVar13 + 0x18c8) = fVar17;
    fVar19 = *(float *)(param_1 + 0x74);
    fVar15 = *(float *)(param_1 + 0x78) - DAT_00067448;
    fVar22 = *(float *)(param_1 + 0x7c);
    *(int *)(iVar13 + 0x18d8) = iVar7 + 3;
    *(float *)(iVar13 + 0x18c4) = fVar18 + (fVar19 - fVar23 * fVar2 * fVar1);
    *(float *)(iVar13 + 0x18c8) = fVar17 + fVar15;
    *(float *)(iVar13 + 0x18cc) = *(float *)(iVar13 + 0x18cc) + fVar22;
    FUN_0008d434(iVar13,1);
    local_50 = *(undefined *)(param_1 + 0x84);
    local_4f = *(undefined *)(param_1 + 0x85);
    local_4e = *(undefined *)(param_1 + 0x86);
    local_4d = *(undefined *)(param_1 + 0x87);
    fVar23 = (float)(longlong)*(int *)(param_1 + 0x88) * DAT_0006744c;
    FUN_000a344c(&local_50,fVar23,fVar23 + DAT_0006744c,0,DAT_00067434);
    FUN_000995e0(*(undefined4 *)(param_1 + 0x68));
  }
  return;
}



