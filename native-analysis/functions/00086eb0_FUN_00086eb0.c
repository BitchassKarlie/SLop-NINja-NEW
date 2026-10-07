/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00086eb0 FUN_00086eb0 */

void FUN_00086eb0(int param_1,int param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint **ppuVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint **ppuVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint **ppuVar14;
  uint *puVar15;
  undefined4 **ppuVar16;
  int iVar17;
  int *piVar18;
  float *pfVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  int local_12c;
  uint local_120;
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
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  
  iVar6 = DAT_0008713c;
  iVar5 = DAT_0008712c;
  iVar4 = DAT_00087128;
  iVar3 = DAT_00087124;
  iVar2 = DAT_00087120;
  iVar17 = DAT_0008711c + 0x86ec2;
  if (0 < param_2) {
    ppuVar8 = (uint **)(DAT_00087130 + 0x86eec);
    ppuVar11 = (uint **)(DAT_00087134 + 0x86ef0);
    ppuVar14 = (uint **)(DAT_00087138 + 0x86ef2);
    pfVar19 = (float *)(DAT_0008713c + 0x86ef6);
    local_12c = 1;
    do {
      fVar21 = DAT_00087574;
      fVar29 = DAT_000870fc;
      if (param_3 == 0) {
        puVar15 = *ppuVar8;
        uVar23 = 300;
        lVar1 = (ulonglong)*puVar15 * (ulonglong)puVar15[2] +
                CONCAT44(puVar15[2] * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
        uVar9 = puVar15[5] + (int)((ulonglong)lVar1 >> 0x20);
        *puVar15 = (uint)lVar1;
        puVar15[1] = uVar9;
LAB_0008737c:
        iVar27 = (int)((float)((ulonglong)uVar23 * (ulonglong)uVar9 >> 0x20) + fVar21);
        fVar29 = DAT_00087578;
        fVar21 = DAT_0008757c;
        if (param_3 != 0) goto LAB_00086f80;
      }
      else {
        fVar21 = *(float *)(param_3 + 0x30);
        puVar15 = *ppuVar11;
        fVar22 = fVar21 * DAT_000870f8 + *(float *)(param_3 + 0x34) * DAT_000870fc;
        lVar1 = (ulonglong)*puVar15 * (ulonglong)puVar15[2];
        local_120 = (uint)lVar1;
        uVar9 = puVar15[5] +
                puVar15[2] * puVar15[1] + *puVar15 * puVar15[3] + (int)((ulonglong)lVar1 >> 0x20) +
                (uint)CARRY4(puVar15[4],local_120);
        *puVar15 = puVar15[4] + local_120;
        puVar15[1] = uVar9;
        uVar23 = (uint)(0.0 < fVar22) * (int)fVar22;
        fVar21 = fVar21 * fVar29;
        if (uVar23 - 1 < 0xfffffffe) goto LAB_0008737c;
        iVar27 = (int)(fVar21 + (float)(ulonglong)uVar9);
LAB_00086f80:
        fVar29 = DAT_00087578;
        fVar21 = DAT_0008757c;
        if (1 < *(int *)(param_3 + 0x38)) {
          fVar29 = DAT_00087100;
          fVar21 = DAT_00087104;
        }
      }
      fVar22 = DAT_0008710c;
      fVar28 = (float)(longlong)iVar27;
      puVar15 = *(uint **)(iVar3 + 0x86fa6);
      lVar1 = (ulonglong)*puVar15 * (ulonglong)puVar15[2];
      fVar24 = (float)(longlong)(int)((fVar28 / DAT_00087108) * fVar21);
      iVar27 = (int)(fVar24 + fVar29);
      uVar23 = (int)(fVar24 + fVar21) - iVar27;
      local_120 = (uint)lVar1;
      uVar9 = puVar15[5] +
              puVar15[2] * puVar15[1] + *puVar15 * puVar15[3] + (int)((ulonglong)lVar1 >> 0x20) +
              (uint)CARRY4(puVar15[4],local_120);
      *puVar15 = puVar15[4] + local_120;
      puVar15[1] = uVar9;
      if (uVar23 - 1 < 0xfffffffe) {
        uVar9 = (uint)((ulonglong)uVar23 * (ulonglong)uVar9 >> 0x20);
      }
      puVar15 = *(uint **)(iVar2 + 0x87014);
      uVar23 = (uVar9 + iVar27) * 0xb6 & 0xffff;
      lVar1 = (ulonglong)*puVar15 * (ulonglong)puVar15[2] +
              CONCAT44(puVar15[2] * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
      uVar9 = puVar15[5] + (int)((ulonglong)lVar1 >> 0x20);
      *puVar15 = (uint)lVar1;
      puVar15[1] = uVar9;
      fVar22 = fVar22 + ((float)(ulonglong)((uVar9 >> 0xd) - (uint)(uVar9 * 0x80000 < uVar9)) /
                        DAT_00087110) * DAT_00087114;
      fVar21 = (float)FUN_000927b8(uVar23,uVar9,uVar9 * 0x7ffff);
      fVar29 = DAT_0008758c;
      fVar21 = fVar21 * fVar22;
      if (param_3 == 0) {
        fVar24 = (float)FUN_000927c8(uVar23);
        fVar24 = fVar24 * fVar22 * DAT_00087588;
      }
      else {
        fVar21 = fVar21 * *(float *)(param_3 + 0x28);
        fVar24 = (float)FUN_000927c8(uVar23);
        fVar29 = *(float *)(param_3 + 0x60);
        fVar24 = fVar24 * fVar22 * DAT_00087118 * *(float *)(param_3 + 0x2c);
      }
      local_54 = *(undefined4 **)(iVar4 + 0x870c4);
      local_50 = *(undefined4 **)(iVar4 + 0x870c8);
      local_4c = *(undefined4 **)(iVar4 + 0x870cc);
      iVar27 = DAT_0008756c;
      if (param_3 != 0) {
        ppuVar16 = *(undefined4 ***)(param_3 + 0x38);
        puVar12 = (undefined4 *)((int)ppuVar16 + -1);
        switch((undefined4 *)((int)ppuVar16 + -1)) {
        case (undefined4 *)0x0:
          local_60 = (undefined4 *)-(float)*(undefined4 **)(iVar4 + 0x870c4);
          local_5c = (undefined4 *)-(float)*(undefined4 **)(iVar4 + 0x870c8);
          local_58 = (undefined4 *)-(float)*(undefined4 **)(iVar4 + 0x870cc);
          fVar24 = fVar24 * DAT_00087570;
          local_54 = local_60;
          local_50 = local_5c;
          local_4c = local_58;
          break;
        case (undefined4 *)0x3:
          puVar15 = *ppuVar14;
          lVar1 = (ulonglong)*puVar15 * (ulonglong)puVar15[2] +
                  CONCAT44(puVar15[2] * puVar15[1] + *puVar15 * puVar15[3],puVar15[4]);
          uVar9 = puVar15[5] + (int)((ulonglong)lVar1 >> 0x20);
          *puVar15 = (uint)lVar1;
          puVar15[1] = uVar9;
          if (CARRY4(uVar9,uVar9) == false) {
            ppuVar16 = (undefined4 **)0x2;
          }
          else {
            ppuVar16 = (undefined4 **)0x3;
          }
        case (undefined4 *)0x2:
          local_6c = DAT_00087158;
          local_68 = DAT_00087158;
          local_64 = DAT_00087158;
          local_54 = DAT_00087158;
          local_50 = DAT_00087158;
          local_4c = DAT_00087158;
          puVar12 = DAT_00087158;
        case (undefined4 *)0x1:
          bVar20 = ppuVar16 == (undefined4 **)0x2;
          if (bVar20) {
            puVar12 = &local_78;
          }
          if (bVar20) {
            ppuVar16 = &local_54;
          }
          fVar26 = fVar24 * DAT_0008714c;
          fVar24 = fVar21 + fVar22 * *(float *)(param_3 + 0x20) * DAT_00087150;
          if (bVar20) {
            local_78 = DAT_00087154;
            local_74 = DAT_00087158;
            local_70 = DAT_00087158;
            puVar10 = (undefined4 *)puVar12[1];
            puVar13 = (undefined4 *)puVar12[2];
            *ppuVar16 = (undefined4 *)*puVar12;
            ppuVar16[1] = puVar10;
            ppuVar16[2] = puVar13;
          }
          iVar27 = (int)((fVar28 * DAT_00087140) / DAT_00087144);
          fVar21 = fVar26;
          fVar28 = DAT_00087148;
        }
      }
      fVar28 = fVar28 * (float)local_54;
      fVar26 = (float)(longlong)iVar27 * (float)local_50;
      fVar21 = fVar21 * (float)local_54;
      fVar24 = fVar24 * (float)local_50;
      iVar27 = FUN_0002f5ec();
      fVar22 = DAT_00087564;
      if (iVar27 == 0) {
        uVar7 = FUN_0001c940();
        piVar18 = (int *)FUN_0001ca28(uVar7,1,1);
        fVar22 = DAT_0008758c;
        local_c0 = *(float *)(param_1 + 100);
        local_bc = local_c0 * *(float *)(iVar6 + 0x86efa);
        local_b8 = local_c0 * *(float *)(iVar6 + 0x86efe);
        local_c0 = *pfVar19 * local_c0;
        fVar25 = (float)(longlong)local_12c * DAT_00087590;
        piVar18[4] = (int)(float)(longlong)(int)fVar28;
        piVar18[5] = (int)(float)(longlong)(int)fVar26;
        piVar18[6] = (int)fVar25;
        piVar18[7] = (int)fVar21;
        piVar18[8] = (int)fVar24;
        piVar18[9] = (int)fVar22;
        (**(code **)(*piVar18 + 8))(piVar18,0,0,&local_c0);
        iVar27 = (uint)(fVar29 < 0.0) << 0x1f;
        piVar18[5] = (int)((float)piVar18[5] + (float)piVar18[0xb] * DAT_00087594);
        if (-1 < iVar27) {
          fVar29 = fVar29 + DAT_00087598;
        }
        if (iVar27 < 0) {
          fVar29 = DAT_00087598;
        }
        FUN_0001ccac(piVar18,fVar29);
        if (*(int *)(*(int *)(iVar17 + iVar5) + 4) == 2) {
          piVar18[0x19] = 1;
        }
      }
      else {
        local_84 = *(float *)(param_1 + 100);
        local_80 = *(float *)(DAT_00087584 + 0x87258) * DAT_00087564 * local_84;
        local_7c = *(float *)(DAT_00087584 + 0x8725c) * DAT_00087564 * local_84;
        local_84 = *(float *)(DAT_00087584 + 0x87254) * DAT_00087564 * local_84;
        iVar30 = (int)((float)(longlong)(int)fVar26 * DAT_00087564 - DAT_00087568);
        iVar27 = (int)-((float)(longlong)(int)fVar28 * DAT_00087564);
        fVar24 = fVar24 * DAT_00087564;
        fVar21 = -(fVar21 * DAT_00087564);
        if (param_4 < 2) {
          uVar7 = FUN_0001c940();
          fVar28 = DAT_0008758c;
          piVar18 = (int *)FUN_0001ca28(uVar7,1,1);
          local_90 = (float)(longlong)iVar30;
          local_8c = (float)(longlong)iVar27;
          local_88 = (float)(longlong)local_12c * DAT_00087590;
          piVar18[4] = (int)local_90;
          piVar18[5] = (int)local_8c;
          piVar18[6] = (int)local_88;
          local_94 = fVar28;
          piVar18[7] = (int)fVar24;
          piVar18[8] = (int)fVar21;
          piVar18[9] = (int)fVar28;
          local_9c = fVar24;
          local_98 = fVar21;
          (**(code **)(*piVar18 + 8))(piVar18,0,0,&local_84);
          fVar26 = DAT_00087594;
          fVar25 = (float)piVar18[0x24];
          piVar18[0x24] = (int)fVar28;
          piVar18[0x19] = 1;
          piVar18[0x23] = (int)(fVar25 * fVar22);
          piVar18[4] = (int)((float)piVar18[4] + (float)piVar18[0xb] * fVar26);
          fVar22 = DAT_00087598;
          if (-1 < (int)((uint)(fVar29 < fVar28) << 0x1f)) {
            fVar22 = fVar29 + DAT_00087598;
          }
          FUN_0001ccac(piVar18,fVar22);
        }
        else {
          piVar18 = (int *)0x0;
        }
        if (param_4 == 0 || param_4 == 2) {
          uVar7 = FUN_0001c940();
          piVar18 = (int *)FUN_0001ca28(uVar7,1,1);
          fVar28 = DAT_0008758c;
          local_a0 = (float)(longlong)local_12c * DAT_00087590;
          local_a8 = (float)(longlong)-iVar30;
          local_a4 = (float)(longlong)-iVar27;
          local_b0 = -fVar21;
          piVar18[4] = (int)local_a8;
          piVar18[5] = (int)local_a4;
          piVar18[6] = (int)local_a0;
          local_ac = fVar28;
          piVar18[7] = (int)-fVar24;
          piVar18[8] = (int)local_b0;
          piVar18[9] = (int)fVar28;
          local_b4 = -fVar24;
          (**(code **)(*piVar18 + 8))(piVar18,0,0,&local_84);
          fVar22 = DAT_00087580;
          fVar21 = (float)piVar18[0x24] * DAT_00087564;
          piVar18[0x24] = (int)fVar28;
          piVar18[0x19] = 2;
          piVar18[0x23] = (int)-fVar21;
          iVar27 = (uint)(fVar29 < fVar28) << 0x1f;
          piVar18[4] = (int)((float)piVar18[4] + (float)piVar18[0xb] * fVar22);
          if (-1 < iVar27) {
            fVar29 = fVar29 + DAT_00087598;
          }
          if (iVar27 < 0) {
            fVar29 = DAT_00087598;
          }
          FUN_0001ccac(piVar18,fVar29);
        }
        uVar9 = 1 - param_3;
        if (1 < param_3) {
          uVar9 = 0;
        }
        if (piVar18 == (int *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar9 & 1;
        }
        if ((uVar9 != 0) && (0 < (int)param_4)) {
          FUN_0001dcdc(piVar18,0);
        }
      }
      bVar20 = local_12c < param_2;
      local_12c = local_12c + 1;
    } while (bVar20);
  }
  return;
}



