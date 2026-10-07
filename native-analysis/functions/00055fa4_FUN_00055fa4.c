/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00055fa4 FUN_00055fa4 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00055fa4(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int *piVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint local_e8;
  int local_d0;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined2 local_a4;
  undefined local_a2;
  undefined4 local_70 [8];
  undefined local_50;
  int local_4c;
  
  iVar9 = DAT_00056334;
  iVar8 = DAT_00056330;
  iVar17 = DAT_0005632c + 0x55fba;
  local_4c = **(int **)(iVar17 + DAT_00056330);
  bVar3 = *(byte *)(*(int *)(iVar17 + DAT_00056334) + 0x18);
  if ((*(char *)(param_1 + 0x71) == '\0') && (*(byte *)(param_1 + 0x70) < bVar3)) {
    *(undefined *)(param_1 + 0x53) = 0xff;
    *(undefined2 *)(param_1 + 0x72) = 0x1e;
    *(undefined *)(param_1 + 0x71) = 1;
  }
  iVar15 = DAT_00056338;
  if (*(char *)(param_1 + 0x78) != '\0') {
    iVar18 = *(int *)(DAT_00056338 + 0x55fee);
    *(int *)(DAT_00056338 + 0x55ffa) = *(int *)(DAT_00056338 + 0x55ffa) + 1;
    iVar10 = DAT_00056340;
    fVar7 = DAT_0005631c;
    fVar6 = DAT_00056318;
    fVar25 = DAT_00056314;
    fVar28 = *(float *)(DAT_0005633c + 0x56000);
    fVar29 = *(float *)(DAT_0005633c + 0x56004);
    local_b8 = fVar28;
    local_b4 = fVar29;
    if (0 < *(int *)(iVar15 + 0x55ff6)) {
      fVar22 = *(float *)(param_1 + 8);
      iVar19 = 0;
      fVar21 = *(float *)(param_1 + 0xc);
      fVar11 = fVar22;
      do {
        fVar23 = fVar22;
        if (*(char *)(iVar18 + 0x24) == '\0') {
LAB_00056050:
          if (*(int *)(iVar15 + 0x55ff6) <= iVar19 + 1) goto LAB_00056100;
        }
        else {
          if (iVar18 == param_1) {
            fVar23 = *(float *)(iVar18 + 8);
            goto LAB_00056050;
          }
          fVar27 = *(float *)(iVar18 + 0xc) - fVar21;
          fVar26 = *(float *)(iVar18 + 8) - fVar11;
          fVar24 = fVar27 * fVar27 + fVar26 * fVar26;
          fVar23 = fVar11;
          local_c0 = fVar26;
          local_bc = fVar27;
          if (-1 < (int)((uint)(fVar24 < fVar25) << 0x1f)) goto LAB_00056050;
          if (fVar24 == 0.0 || fVar24 < 0.0 != NAN(fVar24)) {
            puVar16 = *(uint **)(iVar17 + iVar10);
            lVar4 = (ulonglong)*puVar16 * (ulonglong)puVar16[2];
            local_e8 = (uint)lVar4;
            uVar13 = puVar16[5] +
                     puVar16[2] * puVar16[1] + *puVar16 * puVar16[3] +
                     (int)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(puVar16[4],local_e8);
            *puVar16 = puVar16[4] + local_e8;
            puVar16[1] = uVar13;
            uVar5 = (undefined2)((ulonglong)uVar13 * 0xff3a >> 0x20);
            fVar26 = (float)FUN_000927b8(uVar5,uVar13,(int)((ulonglong)uVar13 * 0xff3a));
            fVar27 = (float)FUN_000927c8(uVar5);
            fVar11 = DAT_00056328;
            local_c8 = fVar26;
            local_c4 = fVar27;
            local_c0 = fVar26;
            local_bc = fVar27;
          }
          else {
            fVar11 = (float)FUN_00092d98(fVar24);
          }
          fVar22 = *(float *)(param_1 + 8);
          fVar21 = *(float *)(param_1 + 0xc);
          fVar28 = fVar28 - param_2 * (fVar6 - fVar11) * (fVar26 / fVar11) * fVar7;
          fVar29 = fVar29 - param_2 * (fVar6 - fVar11) * (fVar27 / fVar11) * fVar7;
          fVar23 = fVar22;
          if (*(int *)(iVar15 + 0x55ff6) <= iVar19 + 1) goto LAB_00056100;
        }
        iVar19 = iVar19 + 1;
        iVar18 = iVar18 + 0x88;
        fVar11 = fVar23;
      } while( true );
    }
    fVar21 = *(float *)(param_1 + 0xc);
    fVar23 = *(float *)(param_1 + 8);
LAB_00056100:
    pfVar14 = (float *)(DAT_00056344 + 0x5610e);
    *(float *)(param_1 + 8) = fVar23 + fVar28;
    *(float *)(param_1 + 0xc) = fVar21 + fVar29;
    param_2 = param_2 * *(float *)(param_1 + 0x84) * *pfVar14;
  }
  fVar25 = *(float *)(param_1 + 0x74);
  if (fVar25 == 0.0 || fVar25 < 0.0 != NAN(fVar25)) {
    if ((*(char *)(param_1 + 0x71) != '\0') && (bVar3 <= *(byte *)(param_1 + 0x70))) {
      *(undefined *)(param_1 + 0x53) = 0xff;
      *(undefined2 *)(param_1 + 0x72) = 0x1e;
      *(undefined *)(param_1 + 0x71) = 0;
    }
  }
  else if (*(char *)(*(int *)(iVar17 + iVar9) + 2) == '\0') {
    param_2 = fVar25 - param_2;
    *(undefined4 *)(param_1 + 0x10) = DAT_00056320;
    fVar6 = DAT_00056324;
    bVar1 = fVar25 < DAT_00056324;
    bVar2 = NAN(DAT_00056324);
    *(float *)(param_1 + 0x74) = param_2;
    if ((((bVar1 == (NAN(fVar25) || bVar2)) && ((int)((uint)(param_2 < fVar6) << 0x1f) < 0)) &&
        (*(char *)(param_1 + 0x78) != '\0')) && (*(char *)(param_1 + 0x80) != '\0')) {
      if (*(char *)(param_1 + 0x79) == '\0') {
        local_b0 = *(undefined4 *)(DAT_00056358 + 0x56300);
        uStack_ac = *(undefined4 *)(DAT_00056358 + 0x56304);
        uStack_a8 = *(undefined4 *)(DAT_00056358 + 0x56308);
        local_a4 = (undefined2)*(undefined4 *)(DAT_00056358 + 0x5630c);
        local_a2 = (undefined)((uint)*(undefined4 *)(DAT_00056358 + 0x5630c) >> 0x10);
      }
      else {
        iVar15 = *(int *)(param_1 + 0x7c);
        if (iVar15 < 4) {
          iVar15 = 1;
        }
        else if (iVar15 < 10) {
          iVar15 = iVar15 + -2;
        }
        else {
          iVar15 = 8;
        }
        FUN_0008f060(&local_b0,0x40,DAT_00056348 + 0x56196,iVar15);
      }
      uVar20 = *(undefined4 *)(*(int *)(iVar17 + iVar9) + 0x18c);
      local_d0 = DAT_0005634c + 0x561bc;
      local_cc = *(undefined4 *)(iVar17 + DAT_00056350);
      local_50 = 1;
      local_70[0] = 0;
      (**(code **)(DAT_0005634c + 0x561c4))(&local_d0,local_70);
      FUN_00073a7c(uVar20,&local_b0,0x3e800000,local_70);
      FUN_0001d388(local_70);
      param_2 = *(float *)(param_1 + 0x74);
      local_d0 = DAT_00056354 + 0x561f2;
    }
    if (param_2 <= 0.0) {
      piVar12 = (int *)(param_1 + 0x2c);
      if (*(char *)(param_1 + 0x4c) != '\0') {
        piVar12 = *(int **)(param_1 + 0x2c);
      }
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 0xc))(piVar12,param_1);
      }
      *(undefined *)(param_1 + 0x24) = 0;
    }
  }
  if (local_4c == **(int **)(iVar17 + iVar8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



