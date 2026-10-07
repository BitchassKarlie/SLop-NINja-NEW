/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00020034 FUN_00020034 */

void FUN_00020034(int param_1,int param_2,float *param_3,int param_4,ushort param_5,
                 undefined8 *param_6,float param_7,float param_8,int param_9,int param_10,
                 int **param_11,undefined param_12)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  float fVar13;
  int **ppiVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  uint local_e0;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80 [8];
  undefined local_60;
  int local_5c;
  
  iVar7 = DAT_00020388;
  iVar17 = DAT_00020384 + 0x20046;
  local_5c = **(int **)(iVar17 + DAT_00020388);
  uVar21 = (uint)param_5;
  if (param_1 < 1) goto LAB_00020316;
  iVar8 = __aeabi_idiv(param_1,param_2);
  fVar23 = (float)(longlong)(iVar8 + 1) * param_7;
  if (fVar23 != param_8 && fVar23 < param_8 == (NAN(fVar23) || NAN(param_8))) {
    param_7 = param_8 / (float)(longlong)(iVar8 + 1);
  }
  if (param_6 == (undefined8 *)0x0) {
    uVar26 = CONCAT44(DAT_0002037c,DAT_00020380);
    uVar27 = DAT_00020378;
    if (param_9 != 0) goto LAB_000200ba;
LAB_00020340:
    uVar9 = FUN_0008f414(DAT_00020390 + 0x20348);
  }
  else {
    uVar26 = *param_6;
    uVar27 = *(undefined4 *)(param_6 + 1);
    if (param_9 == 0) goto LAB_00020340;
LAB_000200ba:
    uVar9 = FUN_0008f414(param_9);
  }
  if (param_10 == 0) {
    param_10 = DAT_00020394 + 0x2035e;
  }
  uVar18 = uVar21 - 1;
  uVar10 = FUN_0008f414(param_10);
  iVar8 = DAT_0002038c;
  fVar6 = DAT_00020374;
  fVar5 = DAT_00020370;
  fVar4 = DAT_0002036c;
  fVar3 = DAT_00020368;
  fVar23 = DAT_00020364;
  local_c8 = 0;
  uVar20 = uVar18;
  local_d0 = param_2;
  local_cc = param_1;
  while( true ) {
    uVar11 = FUN_0001c940();
    uVar11 = FUN_0001ca28(uVar11,2,1);
    puVar16 = *(uint **)(iVar17 + iVar8);
    lVar1 = (ulonglong)*puVar16 * (ulonglong)puVar16[2];
    iVar15 = puVar16[2] * puVar16[1] + *puVar16 * puVar16[3];
    lVar2 = CONCAT44(puVar16,iVar15);
    uVar12 = iVar15 + (int)((ulonglong)lVar1 >> 0x20);
    local_e0 = (uint)lVar1;
    uVar22 = puVar16[5] + uVar12 + CARRY4(puVar16[4],local_e0);
    *puVar16 = puVar16[4] + local_e0;
    puVar16[1] = uVar22;
    uVar19 = uVar22;
    if (uVar18 < 0xfffffffe) {
      uVar12 = uVar21;
      uVar19 = uVar20;
    }
    fVar24 = *param_3;
    if (uVar18 < 0xfffffffe) {
      lVar2 = (ulonglong)uVar12 * (ulonglong)uVar22;
    }
    if (uVar18 < 0xfffffffe) {
      uVar19 = (uint)((ulonglong)lVar2 >> 0x20);
    }
    uVar20 = (uVar19 - ((int)uVar21 >> 1)) + param_4 & 0xffff;
    fVar13 = (float)FUN_000927b8(uVar20,uVar12,(int)lVar2);
    fVar25 = param_3[1];
    fVar24 = fVar24 + fVar13 * fVar23;
    fVar13 = (float)FUN_000927c8(uVar20);
    iVar15 = 1;
    fVar25 = fVar25 + fVar13 * fVar23;
    while ((((((int)((uint)(fVar24 < fVar3) << 0x1f) < 0 ||
              (fVar24 != fVar4 && fVar24 < fVar4 == (NAN(fVar24) || NAN(fVar4)))) ||
             ((int)((uint)(fVar25 < fVar5) << 0x1f) < 0)) ||
            (fVar25 != fVar6 && fVar25 < fVar6 == (NAN(fVar25) || NAN(fVar6)))) && (iVar15 != 10)))
    {
      puVar16 = *(uint **)(iVar17 + iVar8);
      iVar15 = iVar15 + 1;
      lVar1 = (ulonglong)*puVar16 * (ulonglong)puVar16[2];
      local_e0 = (uint)lVar1;
      uVar20 = puVar16[5] +
               puVar16[2] * puVar16[1] + *puVar16 * puVar16[3] + (int)((ulonglong)lVar1 >> 0x20) +
               (uint)CARRY4(puVar16[4],local_e0);
      *puVar16 = puVar16[4] + local_e0;
      puVar16[1] = uVar20;
      if (uVar18 < 0xfffffffe) {
        uVar20 = (uint)((ulonglong)uVar21 * (ulonglong)uVar20 >> 0x20);
      }
      fVar24 = *param_3;
      uVar20 = (uVar20 - ((int)uVar21 >> 1)) + param_4 & 0xffff;
      fVar13 = (float)FUN_000927b8(uVar20);
      fVar25 = param_3[1];
      fVar24 = fVar24 + fVar13 * fVar23;
      fVar13 = (float)FUN_000927c8(uVar20);
      fVar25 = fVar25 + fVar13 * fVar23;
    }
    local_8c = *param_3;
    local_88 = param_3[1];
    local_84 = param_3[2];
    local_60 = 1;
    local_98 = (undefined4)uVar26;
    local_94 = (undefined4)((ulonglong)uVar26 >> 0x20);
    local_80[0] = 0;
    iVar15 = param_2;
    if (local_cc <= param_2) {
      iVar15 = local_cc;
    }
    ppiVar14 = param_11;
    if (*(char *)(param_11 + 8) != '\0') {
      ppiVar14 = (int **)*param_11;
    }
    local_90 = uVar27;
    if (ppiVar14 != (int **)0x0) {
      (**(code **)((int)*ppiVar14 + 8))(ppiVar14,local_80);
    }
    FUN_0001f4b8(uVar11,&local_8c,&local_98,uVar20,iVar15,uVar9,uVar10,local_80,
                 (float)(longlong)local_c8 * param_7,param_12);
    FUN_0001f694(local_80);
    local_d0 = local_d0 + param_2;
    local_cc = local_cc - param_2;
    if (param_1 <= local_d0 - param_2) break;
    local_c8 = local_c8 + 1;
  }
LAB_00020316:
  if (local_5c != **(int **)(iVar17 + iVar7)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



