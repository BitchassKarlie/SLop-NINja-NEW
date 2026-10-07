/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00087668 FUN_00087668 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00087668(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  uint **ppuVar10;
  uint uVar11;
  float fVar12;
  undefined4 uVar13;
  int *piVar14;
  uint **ppuVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 *puVar21;
  uint **ppuVar22;
  uint uVar23;
  float in_s11;
  float extraout_s11;
  float extraout_s11_00;
  float extraout_s11_01;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int local_13c;
  uint local_138;
  uint uStack_134;
  undefined4 *local_108;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  iVar8 = DAT_00087978;
  iVar7 = DAT_0008796c;
  iVar6 = DAT_00087964;
  iVar5 = DAT_00087960;
  iVar4 = DAT_0008795c;
  if (0 < param_2) {
    ppuVar22 = (uint **)(DAT_00087970 + 0x876a6);
    ppuVar10 = (uint **)(DAT_00087968 + 0x876ac);
    ppuVar15 = (uint **)(DAT_00087974 + 0x876ae);
    pfVar18 = (float *)(DAT_00087978 + 0x876b0);
    local_13c = 0;
    puVar21 = &local_a4;
    do {
      fVar26 = DAT_00087d0c;
      fVar32 = DAT_00087cf8;
      if (param_4 == (undefined4 *)0x0) {
        puVar20 = *ppuVar22;
        uVar23 = puVar20[3];
        uVar19 = puVar20[2];
        local_138 = puVar20[4];
        uStack_134 = puVar20[5];
        uVar27 = 300;
        lVar1 = (ulonglong)*puVar20 * (ulonglong)uVar19 +
                CONCAT44(uVar19 * puVar20[1] + *puVar20 * uVar23,local_138);
        uVar11 = (uint)lVar1;
        uVar16 = uStack_134 + (int)((ulonglong)lVar1 >> 0x20);
        *puVar20 = uVar11;
        puVar20[1] = uVar16;
        local_108 = param_4;
LAB_00087c1c:
        iVar30 = (int)((float)((ulonglong)uVar27 * (ulonglong)uVar16 >> 0x20) + fVar26);
        fVar26 = DAT_00087d14;
        fVar12 = DAT_00087d10;
        if (param_4 != (undefined4 *)0x0) goto LAB_0008774a;
      }
      else {
        fVar32 = (float)param_4[0x18];
        puVar20 = *ppuVar10;
        fVar26 = (float)param_4[0xc] * DAT_0008792c + (float)param_4[0xd] * DAT_00087930;
        iVar30 = (uint)(fVar32 < 0.0) << 0x1f;
        if (-1 < iVar30) {
          puVar21 = (undefined4 *)0x0;
        }
        if (iVar30 < 0) {
          puVar21 = (undefined4 *)0x1;
        }
        uVar27 = (uint)(0.0 < fVar26) * (int)fVar26;
        uVar23 = puVar20[3];
        uVar19 = puVar20[2];
        fVar26 = (float)param_4[0xc] * DAT_00087930;
        local_138 = puVar20[4];
        uStack_134 = puVar20[5];
        lVar1 = (ulonglong)*puVar20 * (ulonglong)uVar19 +
                CONCAT44(uVar19 * puVar20[1] + *puVar20 * uVar23,local_138);
        uVar11 = (uint)lVar1;
        uVar16 = uStack_134 + (int)((ulonglong)lVar1 >> 0x20);
        *puVar20 = uVar11;
        puVar20[1] = uVar16;
        local_108 = puVar21;
        if (uVar27 - 1 < 0xfffffffe) goto LAB_00087c1c;
        iVar30 = (int)(fVar26 + (float)(ulonglong)uVar16);
LAB_0008774a:
        fVar26 = DAT_00087d14;
        fVar12 = DAT_00087d10;
        if (1 < (int)param_4[0xe]) {
          fVar26 = DAT_00087938;
          fVar12 = DAT_00087934;
        }
      }
      fVar29 = DAT_0008793c;
      fVar31 = (float)(longlong)iVar30;
      fVar28 = fVar31 / DAT_0008792c;
      uVar3 = (ulonglong)uVar19 * (ulonglong)uVar11 +
              CONCAT44(uVar19 * uVar16 + uVar23 * uVar11,local_138);
      uVar16 = uStack_134 + (int)(uVar3 >> 0x20);
      *puVar20 = (uint)uVar3;
      puVar20[1] = uVar16;
      lVar1 = (ulonglong)uVar19 * (uVar3 & 0xffffffff);
      uVar11 = (uint)lVar1;
      iVar17 = (int)((ulonglong)lVar1 >> 0x20) + uVar19 * uVar16 + uVar23 * (uint)uVar3;
      fVar24 = (float)(ulonglong)((uVar16 >> 0xd) - (uint)(uVar16 * 0x80000 < uVar16)) /
               DAT_00087940 - DAT_00087944;
      iVar30 = (uint)(fVar24 < 0.0) << 0x1f;
      if (iVar30 < 0) {
        fVar24 = fVar24 + DAT_00087944;
      }
      if (-1 < iVar30) {
        fVar24 = DAT_00087944 - fVar24;
      }
      if (iVar30 < 0) {
        in_s11 = fVar24 * fVar24;
        fVar24 = DAT_00087948;
      }
      if (-1 < iVar30) {
        in_s11 = fVar24 * fVar24;
        fVar24 = DAT_00087948;
      }
      fVar25 = DAT_00087944;
      if (iVar30 < 0) {
        fVar25 = DAT_00087944 + in_s11 * fVar24;
        fVar24 = DAT_0008794c;
      }
      if (-1 < iVar30) {
        fVar25 = fVar25 + in_s11 * fVar24;
        fVar24 = DAT_00087950;
      }
      uStack_134 = uStack_134 + iVar17 + (uint)CARRY4(local_138,uVar11);
      *puVar20 = local_138 + uVar11;
      puVar20[1] = uStack_134;
      uVar11 = (int)((float)(longlong)(int)(fVar28 * fVar12) + fVar26 * fVar25 * fVar24) * 0xb6 &
               0xffff;
      fVar29 = fVar29 + ((float)(ulonglong)
                                ((uStack_134 >> 0xd) - (uint)(uStack_134 * 0x80000 < uStack_134)) /
                        DAT_00087940) * DAT_00087954;
      fVar12 = (float)FUN_000927b8(uVar11,iVar17,uStack_134 * 0x7ffff);
      fVar26 = DAT_00087d28;
      fVar12 = fVar12 * fVar29;
      if (param_4 == (undefined4 *)0x0) {
        fVar24 = (float)FUN_000927c8(uVar11);
        fVar24 = fVar24 * fVar29 * DAT_00087d2c;
      }
      else {
        fVar12 = fVar12 * (float)param_4[10];
        fVar24 = (float)FUN_000927c8(uVar11);
        fVar26 = (float)param_4[6];
        fVar24 = fVar24 * fVar29 * DAT_00087958 * (float)param_4[0xb];
      }
      iVar30 = param_3;
      if ((param_3 == -1) && (uVar11 = *(uint *)(param_1 + (param_5 + 0xba) * 4), 0 < (int)uVar11))
      {
        puVar20 = *ppuVar15;
        lVar1 = (ulonglong)*puVar20 * (ulonglong)puVar20[2] +
                CONCAT44(puVar20[2] * puVar20[1] + *puVar20 * puVar20[3],puVar20[4]);
        uVar16 = puVar20[5] + (int)((ulonglong)lVar1 >> 0x20);
        *puVar20 = (uint)lVar1;
        puVar20[1] = uVar16;
        if (uVar11 - 1 < 0xfffffffe) {
          uVar16 = (uint)((ulonglong)uVar11 * (ulonglong)uVar16 >> 0x20);
        }
        iVar30 = *(int *)(param_1 + (uVar16 + param_5 * 0x20) * 4 + 0x264);
      }
      local_5c = *(float *)(iVar6 + 0x878d0);
      local_58 = *(float *)(iVar6 + 0x878d4);
      local_54 = *(float *)(iVar6 + 0x878d8);
      local_68 = -*(float *)(iVar4 + 0x878ec);
      uVar2 = *(undefined8 *)(iVar4 + 0x878f0);
      local_64 = -(float)uVar2;
      local_60 = -(float)((ulonglong)uVar2 >> 0x20);
      puVar21 = param_4;
      iVar17 = DAT_00087d24;
      if (param_4 != (undefined4 *)0x0) {
        puVar21 = (undefined4 *)param_4[0xe];
        switch(puVar21) {
        case (undefined4 *)0x1:
          local_74 = -local_5c;
          local_70 = -local_58;
          local_6c = -local_54;
          fVar24 = fVar24 * DAT_00087d08;
          local_68 = *(float *)(DAT_00087d1c + 0x87bc4);
          local_64 = *(float *)(DAT_00087d1c + 0x87bc8);
          local_60 = *(float *)(DAT_00087d1c + 0x87bcc);
          local_5c = local_74;
          local_58 = local_70;
          local_54 = local_6c;
          break;
        case (undefined4 *)0x4:
          puVar20 = *(uint **)(DAT_00087d18 + 0x87982);
          lVar1 = (ulonglong)*puVar20 * (ulonglong)puVar20[2] +
                  CONCAT44(puVar20[2] * puVar20[1] + *puVar20 * puVar20[3],puVar20[4]);
          uVar11 = puVar20[5] + (int)((ulonglong)lVar1 >> 0x20);
          *puVar20 = (uint)lVar1;
          puVar20[1] = uVar11;
          if (CARRY4(uVar11,uVar11) == false) {
            puVar21 = (undefined4 *)0x2;
          }
          else {
            puVar21 = (undefined4 *)0x3;
          }
        case (undefined4 *)0x3:
          local_80 = DAT_00087ce0;
          local_7c = DAT_00087ce0;
          local_78 = DAT_00087ce0;
          local_5c = DAT_00087ce0;
          local_58 = DAT_00087ce0;
          local_54 = DAT_00087ce0;
          local_68 = *(float *)(iVar7 + 0x879e0);
          local_64 = *(float *)(iVar7 + 0x879e4);
          local_60 = *(float *)(iVar7 + 0x879e8);
        case (undefined4 *)0x2:
          fVar28 = fVar24 * DAT_00087cec;
          fVar24 = fVar12 + fVar29 * (float)param_4[8] * DAT_00087cf0;
          iVar17 = (int)((fVar31 * DAT_00087ce4) / DAT_00087ce8);
          fVar12 = fVar28;
          fVar31 = DAT_00087cf4;
          if (puVar21 == (undefined4 *)0x2) {
            local_8c = DAT_00087d20;
            local_88 = DAT_00087d28;
            local_5c = DAT_00087d20;
            local_58 = DAT_00087d28;
            local_54 = DAT_00087d28;
            local_94 = -*(float *)(iVar8 + 0x876b4);
            local_90 = -*(float *)(iVar8 + 0x876b8);
            local_98 = -*pfVar18;
            local_84 = local_88;
            local_68 = local_98;
            local_64 = local_94;
            local_60 = local_90;
          }
        }
      }
      fVar9 = local_60;
      fVar25 = local_64;
      fVar28 = local_68;
      fVar24 = fVar24 * local_58;
      fVar33 = (float)(longlong)iVar17 * local_58;
      fVar31 = fVar31 * local_5c;
      fVar12 = fVar12 * local_5c;
      uVar13 = FUN_0001c940();
      piVar14 = (int *)FUN_0001ca28(uVar13,0,1);
      fVar29 = DAT_00087cf8;
      local_a4 = *(undefined4 *)(iVar5 + 0x87a5a);
      local_a0 = *(undefined4 *)(iVar5 + 0x87a5e);
      local_9c = *(undefined4 *)(iVar5 + 0x87a62);
      piVar14[4] = (int)(float)(longlong)(int)fVar31;
      piVar14[5] = (int)(float)(longlong)(int)fVar33;
      piVar14[6] = (int)fVar29;
      piVar14[7] = (int)fVar12;
      piVar14[8] = (int)fVar24;
      piVar14[9] = (int)fVar29;
      (**(code **)(*piVar14 + 8))(piVar14,0,iVar30,&local_a4);
      piVar14[0x25] = (int)fVar26;
      if (param_4 != (undefined4 *)0x0) {
        fVar29 = -(float)piVar14[0x28];
        fVar26 = (float)param_4[8];
        fVar12 = (float)param_4[9];
        fVar24 = fVar29 * (float)param_4[7];
        piVar14[0x27] = (int)fVar24;
        piVar14[0x28] = (int)(fVar29 * fVar26);
        piVar14[0x29] = (int)(fVar29 * fVar12);
        if (puVar21 == (undefined4 *)0x2) {
          piVar14[0x27] = (int)((float)piVar14[0x27] + DAT_00087cfc);
        }
        else {
          if (puVar21 == (undefined4 *)0x3) {
            fVar24 = (float)piVar14[0x27] - DAT_00087cfc;
          }
          if (puVar21 == (undefined4 *)0x3) {
            piVar14[0x27] = (int)fVar24;
          }
        }
      }
      fVar26 = DAT_00087d00;
      fVar12 = (float)piVar14[0xb];
      piVar14[4] = (int)((float)piVar14[4] + fVar12 * fVar28 * DAT_00087d00);
      piVar14[5] = (int)((float)piVar14[5] + fVar12 * fVar25 * fVar26);
      piVar14[6] = (int)((float)piVar14[6] + fVar12 * fVar9 * fVar26);
      if (local_108 == (undefined4 *)0x0) {
        FUN_000225d0(piVar14,fVar32 + DAT_00087d04);
        iVar30 = FUN_0002f5f0();
        in_s11 = extraout_s11_00;
      }
      else {
        FUN_000225d0(piVar14,DAT_00087d04);
        iVar30 = FUN_0002f5f0();
        in_s11 = extraout_s11;
      }
      if (iVar30 != 0) {
        FUN_00021350(piVar14,0,0);
        FUN_0002282c(piVar14,0);
        in_s11 = extraout_s11_01;
      }
      local_13c = local_13c + 1;
    } while (local_13c != param_2);
  }
  return;
}



