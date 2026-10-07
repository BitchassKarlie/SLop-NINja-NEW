/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000bef20 FUN_000bef20 */

undefined4 FUN_000bef20(int param_1,int param_2,int *param_3,void *param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int local_50;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  
  iVar6 = *(int *)(param_2 + 0x308);
  iVar13 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x1c) +
                   *(int *)(param_1 + 0x1c) * 4) / 2;
  if (param_3 == (int *)0x0) {
    memset(param_4,0,iVar13 << 2);
    uVar5 = 0;
  }
  else {
    iVar16 = *(int *)(iVar6 + 0x340) * *param_3;
    iVar4 = *(int *)(param_2 + 0x2fc);
    if (iVar4 < 2) {
      local_50 = 0;
    }
    else {
      iVar17 = 1;
      local_50 = 0;
      iVar18 = DAT_000bf0a8 + 0xbef76;
      iVar7 = DAT_000bf0ac + 0xbef78;
      iVar19 = 0;
      do {
        while( true ) {
          iVar8 = *(int *)(param_2 + iVar17 * 4);
          uVar10 = param_3[iVar8];
          if (uVar10 != (uVar10 & 0x7fff)) break;
          iVar14 = *(int *)(iVar6 + 0x340) * uVar10;
          uVar10 = iVar14 - iVar16;
          local_50 = *(int *)(iVar6 + iVar8 * 4 + 0x344);
          iVar8 = local_50 - iVar19;
          iVar4 = __aeabi_idiv(uVar10,iVar8);
          if ((int)uVar10 < 0) {
            iVar20 = iVar4 + -1;
          }
          else {
            iVar20 = iVar4 + 1;
          }
          iVar9 = iVar13;
          if (local_50 <= iVar13) {
            iVar9 = local_50;
          }
          uVar1 = iVar8 * iVar4 >> 0x1f;
          if (iVar19 < iVar9) {
            lVar2 = (longlong)*(int *)((int)param_4 + iVar19 * 4) *
                    (longlong)*(int *)(iVar7 + iVar16 * 4);
            local_38 = (uint)lVar2;
            local_34 = (int)((ulonglong)lVar2 >> 0x20);
            *(uint *)((int)param_4 + iVar19 * 4) = local_38 >> 0xf | local_34 << 0x11;
          }
          iVar19 = iVar19 + 1;
          if (iVar19 < iVar9) {
            iVar15 = 0;
            puVar11 = (uint *)((int)param_4 + iVar19 * 4);
            do {
              iVar15 = iVar15 + (((uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f)) -
                                ((iVar8 * iVar4 ^ uVar1) - uVar1));
              iVar3 = iVar4;
              if (iVar8 <= iVar15) {
                iVar15 = iVar15 - iVar8;
                iVar3 = iVar20;
              }
              iVar16 = iVar16 + iVar3;
              iVar19 = iVar19 + 1;
              lVar2 = (longlong)*(int *)(iVar18 + iVar16 * 4) * (longlong)(int)*puVar11;
              local_30 = (uint)lVar2;
              local_2c = (int)((ulonglong)lVar2 >> 0x20);
              *puVar11 = local_30 >> 0xf | local_2c << 0x11;
              puVar11 = puVar11 + 1;
            } while (iVar19 != iVar9);
          }
          iVar17 = iVar17 + 1;
          iVar4 = *(int *)(param_2 + 0x2fc);
          iVar16 = iVar14;
          iVar19 = local_50;
          if (iVar4 <= iVar17) goto LAB_000bf06c;
        }
        iVar17 = iVar17 + 1;
      } while (iVar17 < iVar4);
    }
LAB_000bf06c:
    if (local_50 < iVar13) {
      piVar12 = (int *)((int)param_4 + local_50 * 4);
      do {
        local_50 = local_50 + 1;
        *piVar12 = iVar16 * *piVar12;
        piVar12 = piVar12 + 1;
      } while (local_50 != iVar13);
    }
    uVar5 = 1;
  }
  return uVar5;
}



