/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0006adc8 FUN_0006adc8 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0006adc8(int param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  float fVar25;
  uint local_4e0;
  float local_448;
  float fStack_444;
  float fStack_440;
  undefined local_43c;
  undefined4 local_42c;
  undefined4 local_428;
  float local_424;
  undefined4 local_420;
  float local_41c;
  undefined4 local_418;
  undefined4 local_3d4;
  undefined4 local_3d0;
  float local_3cc;
  undefined4 local_3c8;
  float local_3c4;
  undefined4 local_3c0;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_344;
  float fStack_340;
  float fStack_33c;
  undefined4 local_338;
  undefined4 local_334;
  float local_330;
  undefined4 local_32c;
  float local_328;
  undefined4 local_324;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2a4;
  float local_2a0;
  undefined4 local_ac;
  undefined local_a8 [40];
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  
  fVar3 = DAT_0006b0f8;
  iVar18 = DAT_0006b138 + 0x6ade6;
  FUN_00069964(&local_448);
  iVar15 = DAT_0006b144;
  iVar14 = DAT_0006b140;
  fVar12 = DAT_0006b128;
  fVar11 = DAT_0006b124;
  fVar10 = DAT_0006b120;
  fVar9 = DAT_0006b11c;
  fVar8 = DAT_0006b118;
  fVar7 = DAT_0006b114;
  fVar6 = DAT_0006b110;
  fVar5 = DAT_0006b10c;
  local_2c4 = DAT_0006b0fc;
  local_2a0 = DAT_0006b100;
  local_2c8 = DAT_0006b104;
  local_2a4 = DAT_0006b104;
  local_ac = 3;
  local_418 = DAT_0006b104;
  local_41c = DAT_0006b108;
  local_420 = DAT_0006b104;
  local_42c = *(undefined4 *)(iVar18 + DAT_0006b13c);
  local_424 = DAT_0006b108;
  local_428 = DAT_0006b104;
  local_324 = DAT_0006b104;
  local_328 = DAT_0006b108;
  local_32c = DAT_0006b104;
  local_330 = DAT_0006b108;
  local_334 = DAT_0006b104;
  local_3c0 = DAT_0006b104;
  local_3c4 = DAT_0006b108;
  local_3c8 = DAT_0006b104;
  local_3d4 = *(undefined4 *)(iVar18 + DAT_0006b148);
  local_3cc = DAT_0006b108;
  local_3d0 = DAT_0006b104;
  iVar23 = 0;
  local_43c = 0;
  local_338 = local_3d4;
  do {
    iVar23 = iVar23 + 1;
    puVar21 = *(uint **)(iVar18 + iVar14);
    uVar19 = puVar21[2];
    lVar1 = (ulonglong)*puVar21 * (ulonglong)uVar19;
    uVar24 = puVar21[4];
    local_4e0 = (uint)lVar1;
    uVar20 = uVar19 * puVar21[1] + *puVar21 * puVar21[3] + (int)((ulonglong)lVar1 >> 0x20) +
             puVar21[5] + (uint)CARRY4(local_4e0,uVar24);
    lVar1 = (ulonglong)uVar19 * (ulonglong)(local_4e0 + uVar24);
    uVar16 = (uint)lVar1;
    uVar19 = (int)((ulonglong)lVar1 >> 0x20) + uVar19 * uVar20 + (local_4e0 + uVar24) * puVar21[3] +
             puVar21[5] + (uint)CARRY4(uVar16,uVar24);
    *puVar21 = uVar16 + uVar24;
    puVar21[1] = uVar19;
    fVar25 = fVar6 + ((float)(ulonglong)((uVar19 >> 0xd) - (uint)(uVar19 * 0x80000 < uVar19)) /
                     fVar3) * fVar5;
    FUN_0006a8c0(&local_448,
                 (int)(((float)(ulonglong)((uVar20 >> 0xd) - (uint)(uVar20 * 0x80000 < uVar20)) /
                       fVar3) * fVar7 * fVar8) & 0xffff,0x42480000);
    fVar13 = DAT_0006b130;
    fVar4 = DAT_0006b108;
    local_394 = DAT_0006b100;
    uVar20 = puVar21[2];
    local_388 = local_388 * fVar9;
    uVar24 = puVar21[3];
    fStack_440 = fVar25 * local_384 * fVar10;
    local_448 = fVar25 * local_38c * fVar10;
    fStack_444 = fVar25 * local_388 * fVar10;
    lVar1 = (ulonglong)*puVar21 * (ulonglong)uVar20;
    local_4e0 = (uint)lVar1;
    uVar16 = puVar21[4] + local_4e0;
    uVar19 = puVar21[5] +
             uVar20 * puVar21[1] + *puVar21 * uVar24 + (int)((ulonglong)lVar1 >> 0x20) +
             (uint)CARRY4(puVar21[4],local_4e0);
    fStack_340 = fVar12 + ((float)(ulonglong)((uVar19 >> 0xd) - (uint)(uVar19 * 0x80000 < uVar19)) /
                          fVar3) * fVar11;
    local_344 = fStack_340 * DAT_0006b12c;
    fStack_33c = fStack_340 * DAT_0006b108;
    fStack_340 = fStack_340 * DAT_0006b134;
    uVar2 = (ulonglong)uVar20 * (ulonglong)uVar16 +
            CONCAT44(uVar20 * uVar19 + uVar16 * uVar24,puVar21[4]);
    uVar16 = puVar21[5] + (int)(uVar2 >> 0x20);
    lVar1 = (ulonglong)uVar20 * (uVar2 & 0xffffffff) +
            CONCAT44(uVar20 * uVar16 + (int)uVar2 * uVar24,puVar21[4]);
    uVar19 = puVar21[5] + (int)((ulonglong)lVar1 >> 0x20);
    *puVar21 = (uint)lVar1;
    puVar21[1] = uVar19;
    local_80 = *(undefined4 *)(iVar18 + iVar15);
    fVar25 = (local_394 +
             ((float)(ulonglong)((uVar16 >> 0xd) - (uint)(uVar16 * 0x80000 < uVar16)) / fVar3) *
             local_394) * fVar13;
    local_394 = local_394 +
                ((float)(ulonglong)((uVar19 >> 0xd) - (uint)(uVar19 * 0x80000 < uVar19)) / fVar3) *
                fVar13;
    local_390 = local_394 + fVar25 * DAT_0006b14c;
    local_7c = fVar6;
    local_74 = DAT_0006b150;
    local_78 = fVar4;
    local_70 = fVar4;
    local_6c = DAT_0006b150;
    local_68 = local_344;
    local_64 = fStack_340;
    local_60 = fStack_33c;
    local_5c = local_448;
    local_58 = fStack_444;
    local_54 = fStack_440;
    FUN_00083e50(local_a8,local_80,fVar6,fVar4,DAT_0006b150,fVar4,DAT_0006b150,local_394,fVar25,
                 fVar4);
    fVar13 = DAT_0006b154;
    local_39c = fVar4;
    uVar16 = puVar21[2];
    uVar2 = (ulonglong)*puVar21 * (ulonglong)uVar16 +
            CONCAT44(uVar16 * puVar21[1] + *puVar21 * puVar21[3],puVar21[4]);
    uVar19 = puVar21[5] + (int)(uVar2 >> 0x20);
    lVar1 = (ulonglong)uVar16 * (uVar2 & 0xffffffff) +
            CONCAT44(uVar16 * uVar19 + (int)uVar2 * puVar21[3],puVar21[4]);
    uVar16 = puVar21[5] + (int)((ulonglong)lVar1 >> 0x20);
    *puVar21 = (uint)lVar1;
    puVar21[1] = uVar16;
    iVar22 = *(int *)(param_1 + 0x1a4);
    local_398 = fVar6 + ((float)(ulonglong)((uVar19 >> 0xd) - (uint)(uVar19 * 0x80000 < uVar19)) /
                        fVar3) * fVar13;
    local_3a0 = fVar11 + ((float)(ulonglong)((uVar16 >> 0xd) - (uint)(uVar16 * 0x80000 < uVar16)) /
                         fVar3) * fVar13;
    piVar17 = (int *)FUN_0006ad38(param_1 + 0x1a0,&local_448,uVar16 * 0x7ffff);
    *piVar17 = iVar22;
    piVar17[1] = *(int *)(iVar22 + 4);
    *(int **)(iVar22 + 4) = piVar17;
    *(int **)piVar17[1] = piVar17;
    *(int *)(param_1 + 0x1a8) = *(int *)(param_1 + 0x1a8) + 1;
  } while (iVar23 != 0x1e);
  FUN_0006ad04(&local_448);
  return;
}



