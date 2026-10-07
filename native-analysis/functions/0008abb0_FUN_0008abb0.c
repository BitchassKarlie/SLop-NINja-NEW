/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008abb0 FUN_0008abb0 */

void FUN_0008abb0(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint **ppuVar7;
  uint **ppuVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  char *__format;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  undefined auStack_48 [4];
  int *local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int *local_34;
  
  iVar6 = DAT_0008ae68;
  uVar5 = DAT_0008ae60;
  uVar4 = DAT_0008ae5c;
  iVar20 = DAT_0008ae64 + 0x8abc4;
  param_1 = param_1 + *(int *)(*(int *)(iVar20 + DAT_0008ae68) + 4) * 0x10;
  piVar19 = *(int **)(param_1 + 0xb0);
  piVar21 = *(int **)(param_1 + 0xb4);
  if (piVar19 == piVar21) {
    return;
  }
  iVar18 = 0;
  ppuVar7 = (uint **)(DAT_0008ae6c + 0x8abea);
  __format = (char *)(DAT_0008ae74 + 0x8abf2);
  ppuVar8 = (uint **)(DAT_0008ae70 + 0x8abf4);
  do {
    *(undefined4 *)(*piVar19 + 0x34) = uVar4;
    *(undefined4 *)(*piVar19 + 0x40) = *(undefined4 *)(*piVar19 + 0x3c);
    *(undefined4 *)(*piVar19 + 0x48) = *(undefined4 *)(*piVar19 + 0x44);
    iVar9 = *piVar19;
    if (0 < *(int *)(iVar9 + 0x4c)) {
      iVar15 = *(int *)(iVar20 + iVar6);
      piVar16 = *(int **)(*(int *)(iVar15 + 0x50) + *(int *)(iVar15 + 4) * 0x10 + 0x170);
      if (piVar16 != (int *)0x0) {
        piVar12 = (int *)0x0;
        do {
          if (*piVar16 < iVar18) {
            piVar14 = (int *)piVar16[4];
          }
          else {
            piVar14 = (int *)piVar16[3];
            piVar12 = piVar16;
          }
          piVar16 = piVar14;
        } while (piVar14 != (int *)0x0);
        if ((piVar12 != (int *)0x0) && (*piVar12 <= iVar18)) {
          iVar15 = piVar12[1];
          if (0 < iVar15) {
            iVar9 = *(int *)(iVar9 + 0x50);
            if (iVar9 <= iVar15) {
              piVar12[1] = iVar9;
            }
            if (iVar15 < iVar9) {
              piVar12[1] = iVar15;
            }
            *(undefined4 *)(*piVar19 + 0x40) = 0;
            *(undefined4 *)(*piVar19 + 0x48) = uVar5;
          }
          goto joined_r0x0008ac7c;
        }
      }
      iVar9 = *(int *)(iVar9 + 0x4c) + *(int *)(iVar9 + 0x50);
      puVar17 = *ppuVar7;
      uVar1 = iVar9 / 2;
      uVar10 = (int)uVar1 / 2;
      uVar11 = puVar17[2];
      uVar2 = (ulonglong)*puVar17 * (ulonglong)uVar11 +
              CONCAT44(puVar17[3] * *puVar17 + uVar11 * puVar17[1],puVar17[4]);
      uVar13 = puVar17[5] + (int)(uVar2 >> 0x20);
      *puVar17 = (uint)uVar2;
      puVar17[1] = uVar13;
      uVar22 = uVar13;
      if (uVar10 - 1 < 0xfffffffe) {
        uVar22 = (uint)((ulonglong)uVar10 * (ulonglong)uVar13 >> 0x20);
      }
      if (uVar22 == 0) {
        lVar3 = (uVar2 & 0xffffffff) * (ulonglong)uVar11 +
                CONCAT44(uVar11 * uVar13 + (uint)uVar2 * puVar17[3],puVar17[4]);
        uVar22 = 1;
        uVar10 = puVar17[5] + (int)((ulonglong)lVar3 >> 0x20);
        *puVar17 = (uint)lVar3;
        puVar17[1] = uVar10;
LAB_0008ae44:
        uVar10 = (uint)((ulonglong)uVar10 * (ulonglong)uVar22 >> 0x20);
      }
      else {
        puVar17 = *ppuVar8;
        uVar11 = puVar17[2];
        uVar2 = (ulonglong)*puVar17 * (ulonglong)uVar11 +
                CONCAT44(puVar17[3] * *puVar17 + uVar11 * puVar17[1],puVar17[4]);
        uVar13 = puVar17[5] + (int)(uVar2 >> 0x20);
        uVar22 = uVar13;
        if (uVar10 - 1 < 0xfffffffe) {
          uVar22 = (uint)((ulonglong)uVar10 * (ulonglong)uVar13 >> 0x20);
        }
        lVar3 = (uVar2 & 0xffffffff) * (ulonglong)uVar11 +
                CONCAT44(uVar11 * uVar13 + (int)uVar2 * puVar17[3],puVar17[4]);
        uVar10 = puVar17[5] + (int)((ulonglong)lVar3 >> 0x20);
        *puVar17 = (uint)lVar3;
        puVar17[1] = uVar10;
        if (uVar22 - 1 < 0xfffffffe) goto LAB_0008ae44;
      }
      uVar22 = uVar1 & ~((int)uVar1 >> 0x20);
      if (iVar9 - (iVar9 >> 0x1f) < 0) {
        uVar22 = uVar1 + 3;
      }
      iVar15 = uVar10 + ((int)uVar22 >> 2);
      iVar9 = *(int *)(iVar20 + iVar6);
      iVar23 = *(int *)(iVar9 + 0x50);
      iVar9 = *(int *)(iVar9 + 4) * 0x10;
      piVar12 = *(int **)(iVar23 + iVar9 + 0x170);
      piVar16 = piVar12;
      if (piVar12 == (int *)0x0) {
LAB_0008adc6:
        local_38 = iVar23 + iVar9 + 0x16c;
        local_3c = 0;
        local_40 = iVar18;
        local_34 = piVar16;
        FUN_00071c04(auStack_48,local_38,local_38,piVar16,&local_40);
        piVar16 = local_44;
      }
      else {
        piVar16 = (int *)0x0;
        do {
          if (*piVar12 < iVar18) {
            piVar14 = (int *)piVar12[4];
          }
          else {
            piVar14 = (int *)piVar12[3];
            piVar16 = piVar12;
          }
          piVar12 = piVar14;
        } while (piVar14 != (int *)0x0);
        if ((piVar16 == (int *)0x0) || (iVar18 < *piVar16)) goto LAB_0008adc6;
      }
      piVar16[1] = iVar15;
      printf(__format,iVar15);
      *(undefined4 *)(*piVar19 + 0x40) = 0;
      *(undefined4 *)(*piVar19 + 0x48) = uVar5;
    }
joined_r0x0008ac7c:
    if (piVar21 == piVar19 + 1) {
      return;
    }
    iVar18 = iVar18 + 1;
    piVar19 = piVar19 + 1;
  } while( true );
}



