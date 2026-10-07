/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000329bc FUN_000329bc */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000329bc(void)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  uint local_b8;
  undefined4 local_48;
  undefined4 local_44;
  
  local_48 = 0;
  local_44 = 0;
  uVar9 = FUN_0001c940();
  iVar10 = FUN_0001bd8c(uVar9,0,&local_48);
  iVar8 = DAT_00032cec;
  fVar7 = DAT_00032ce4;
  fVar6 = DAT_00032ce0;
  uVar9 = DAT_00032cdc;
  fVar5 = DAT_00032cd8;
  fVar4 = DAT_00032cd4;
  fVar3 = DAT_00032cd0;
  iVar15 = DAT_00032ce8 + 0x329e6;
  while (iVar10 != 0) {
    while (*(char *)(iVar10 + 0xb4) != '\0') {
      uVar12 = FUN_0001c940();
      iVar10 = FUN_0001bdb8(uVar12,0,&local_48);
      if (iVar10 == 0) goto LAB_00032b62;
    }
    *(undefined *)(iVar10 + 0xb4) = 1;
    puVar13 = *(uint **)(iVar15 + iVar8);
    uVar11 = puVar13[2];
    lVar2 = (ulonglong)*puVar13 * (ulonglong)uVar11;
    local_b8 = (uint)lVar2;
    uVar17 = puVar13[4];
    uVar14 = local_b8 + uVar17;
    uVar16 = (int)((ulonglong)lVar2 >> 0x20) + uVar11 * puVar13[1] + *puVar13 * puVar13[3] +
             puVar13[5] + (uint)CARRY4(local_b8,uVar17);
    lVar2 = (ulonglong)uVar11 * (ulonglong)uVar14;
    local_b8 = (uint)lVar2;
    uVar11 = (int)((ulonglong)lVar2 >> 0x20) + uVar11 * uVar16 + uVar14 * puVar13[3] +
             puVar13[5] + (uint)CARRY4(local_b8,uVar17);
    *puVar13 = local_b8 + uVar17;
    puVar13[1] = uVar11;
    *(float *)(iVar10 + 0x1c) =
         ((float)(ulonglong)((uVar16 >> 0xd) - (uint)(uVar16 * 0x80000 < uVar16)) / fVar3) * fVar4 -
         fVar5;
    *(float *)(iVar10 + 0x20) =
         ((float)(ulonglong)((uVar11 >> 0xd) - (uint)(uVar11 * 0x80000 < uVar11)) / fVar3) * fVar5;
    *(undefined4 *)(iVar10 + 0x24) = uVar9;
    fVar19 = *(float *)(iVar10 + 0x1c);
    iVar1 = (uint)(*(float *)(iVar10 + 0x10) < 0.0) << 0x1f;
    if ((int)((uint)(fVar19 < 0.0) << 0x1f) < 0) {
      fVar19 = -fVar19;
    }
    fVar18 = *(float *)(iVar10 + 0x10);
    if (-1 < iVar1) {
      fVar18 = fVar7;
    }
    if (iVar1 < 0) {
      fVar18 = fVar6;
    }
    *(float *)(iVar10 + 0x1c) = fVar18 * fVar19;
    *(float *)(iVar10 + 0xc4) = *(float *)(iVar10 + 0x1c);
    *(undefined4 *)(iVar10 + 200) = *(undefined4 *)(iVar10 + 0x20);
    *(undefined4 *)(iVar10 + 0xcc) = *(undefined4 *)(iVar10 + 0x24);
    *(undefined *)(iVar10 + 0x114) = 1;
    uVar12 = FUN_0001c940();
    iVar10 = FUN_0001bdb8(uVar12,0,&local_48);
  }
LAB_00032b62:
  uVar9 = FUN_0001c940();
  iVar10 = FUN_0001bd8c(uVar9,1,&local_48);
  iVar8 = DAT_00032cec;
  uVar9 = DAT_00032cdc;
  fVar5 = DAT_00032cd8;
  fVar4 = DAT_00032cd4;
  fVar3 = DAT_00032cd0;
  do {
    if (iVar10 == 0) {
      return;
    }
    while (*(char *)(iVar10 + 0x78) != '\0') {
      *(undefined *)(iVar10 + 0x80) = 1;
      uVar12 = FUN_0001c940();
      iVar10 = FUN_0001bdb8(uVar12,1,&local_48);
      if (iVar10 == 0) {
        return;
      }
    }
    *(undefined *)(iVar10 + 0x78) = 1;
    puVar13 = *(uint **)(iVar15 + iVar8);
    uVar11 = puVar13[2];
    lVar2 = (ulonglong)*puVar13 * (ulonglong)uVar11;
    local_b8 = (uint)lVar2;
    uVar14 = local_b8 + puVar13[4];
    uVar16 = uVar11 * puVar13[1] + *puVar13 * puVar13[3] + (int)((ulonglong)lVar2 >> 0x20) +
             puVar13[5] + (uint)CARRY4(local_b8,puVar13[4]);
    lVar2 = (ulonglong)uVar11 * (ulonglong)uVar14;
    local_b8 = (uint)lVar2;
    uVar11 = uVar11 * uVar16 + uVar14 * puVar13[3] + (int)((ulonglong)lVar2 >> 0x20) +
             puVar13[5] + (uint)CARRY4(local_b8,puVar13[4]);
    *puVar13 = local_b8 + puVar13[4];
    puVar13[1] = uVar11;
    *(float *)(iVar10 + 0x1c) =
         ((float)(ulonglong)((uVar16 >> 0xd) - (uint)(uVar16 * 0x80000 < uVar16)) / fVar3) * fVar4 -
         fVar5;
    *(float *)(iVar10 + 0x20) =
         ((float)(ulonglong)((uVar11 >> 0xd) - (uint)(uVar11 * 0x80000 < uVar11)) / fVar3) * fVar5;
    *(undefined4 *)(iVar10 + 0x24) = uVar9;
    *(undefined *)(iVar10 + 0x80) = 1;
    uVar12 = FUN_0001c940();
    iVar10 = FUN_0001bdb8(uVar12,1,&local_48);
  } while( true );
}



