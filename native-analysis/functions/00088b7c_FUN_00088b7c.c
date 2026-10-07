/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00088b7c FUN_00088b7c */

void FUN_00088b7c(int param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint *puVar5;
  int *piVar6;
  uint **ppuVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint uVar13;
  void *pvVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  uint local_58;
  uint local_48;
  int *piVar12;
  
  pvVar14 = *(void **)(param_1 + 0x24);
  iVar17 = DAT_00088e7c + 0x88b8e;
  if (pvVar14 != (void *)0x0) {
    FUN_00088848(pvVar14);
    operator_delete(pvVar14);
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  pvVar14 = operator_new(0x10);
  uVar3 = DAT_00088e70;
  *(undefined4 *)((int)pvVar14 + 4) = 0;
  *(undefined4 *)((int)pvVar14 + 0xc) = uVar3;
  *(undefined4 *)((int)pvVar14 + 8) = 0;
  uVar3 = FUN_000885c0();
  *(undefined4 *)((int)pvVar14 + 8) = 0;
  *(undefined4 *)((int)pvVar14 + 4) = uVar3;
  *(void **)(param_1 + 0x24) = pvVar14;
  pvVar14 = *(void **)(param_1 + 0x20);
  if (pvVar14 != (void *)0x0) {
    pvVar4 = *(void **)((int)pvVar14 + 4);
    *(void **)((int)pvVar14 + 8) = pvVar4;
    if (pvVar4 != (void *)0x0) {
      operator_delete(pvVar4);
    }
    operator_delete(pvVar14);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  iVar16 = DAT_00088e80;
  pvVar14 = operator_new(0x20);
  uVar3 = DAT_00088e70;
  iVar10 = *(int *)(iVar17 + iVar16);
  *(undefined4 *)((int)pvVar14 + 4) = 0;
  *(undefined4 *)((int)pvVar14 + 0x10) = uVar3;
  *(undefined4 *)((int)pvVar14 + 8) = 0;
  *(undefined4 *)((int)pvVar14 + 0xc) = 0;
  *(undefined4 *)((int)pvVar14 + 0x14) = 0;
  *(undefined4 *)((int)pvVar14 + 0x18) = 0;
  *(undefined4 *)((int)pvVar14 + 0x1c) = 0;
  *(void **)(param_1 + 0x20) = pvVar14;
  fVar2 = DAT_00088e74;
  iVar10 = param_1 + *(int *)(iVar10 + 4) * 0x10;
  piVar15 = *(int **)(iVar10 + 0xb0);
  piVar6 = *(int **)(iVar10 + 0xb4);
  if (piVar15 == piVar6) {
    uVar18 = 0;
  }
  else {
    uVar18 = 0;
    piVar11 = piVar15;
    do {
      piVar12 = piVar11 + 1;
      uVar18 = uVar18 + *(int *)(*piVar11 + 0x3c);
      piVar11 = piVar12;
    } while (piVar6 != piVar12);
    piVar15 = (int *)((int)piVar15 + ((int)piVar6 - (int)(piVar15 + 1) & 0xfffffffcU) + 4);
  }
  iVar10 = *(int *)(iVar17 + iVar16);
  ppuVar7 = (uint **)(DAT_00088e84 + 0x88c4e);
  fVar22 = DAT_00088e78;
  do {
    puVar5 = *ppuVar7;
    piVar6 = *(int **)(param_1 + *(int *)(iVar10 + 4) * 0x10 + 0xb0);
    uVar20 = puVar5[2];
    lVar1 = (ulonglong)*puVar5 * (ulonglong)uVar20;
    local_58 = (uint)lVar1;
    uVar19 = puVar5[4];
    uVar13 = uVar20 * puVar5[1] + *puVar5 * puVar5[3] + (int)((ulonglong)lVar1 >> 0x20) +
             puVar5[5] + (uint)CARRY4(local_58,uVar19);
    *puVar5 = local_58 + uVar19;
    puVar5[1] = uVar13;
    if (uVar18 - 1 < 0xfffffffe) {
      uVar13 = (uint)((ulonglong)uVar18 * (ulonglong)uVar13 >> 0x20);
    }
    iVar8 = *piVar6;
    if ((piVar6 != piVar15) && (0 < (int)uVar13)) {
      while( true ) {
        piVar6 = piVar6 + 1;
        if ((piVar6 == piVar15) || (uVar13 = uVar13 - *(int *)(iVar8 + 0x3c), (int)uVar13 < 1))
        break;
        iVar8 = *piVar6;
      }
    }
LAB_00088ce6:
    fVar21 = *(float *)(iVar8 + 0x28);
    if ((int)((uint)(fVar22 + fVar2 < fVar21) << 0x1f) < 0) {
      while( true ) {
        lVar1 = (ulonglong)*puVar5 * (ulonglong)uVar20;
        local_48 = (uint)lVar1;
        uVar13 = uVar20 * puVar5[1] + *puVar5 * puVar5[3] + (int)((ulonglong)lVar1 >> 0x20) +
                 puVar5[5] + (uint)CARRY4(local_48,uVar19);
        *puVar5 = local_48 + uVar19;
        puVar5[1] = uVar13;
        if (uVar18 - 1 < 0xfffffffe) {
          uVar13 = (uint)((ulonglong)uVar18 * (ulonglong)uVar13 >> 0x20);
        }
        piVar6 = *(int **)(param_1 + *(int *)(*(int *)(iVar17 + iVar16) + 4) * 0x10 + 0xb0);
        iVar8 = *piVar6;
        if ((piVar6 == piVar15) || ((int)uVar13 < 1)) break;
        piVar6 = piVar6 + 1;
        iVar9 = *(int *)(iVar8 + 0x3c);
        if (piVar6 == piVar15) break;
        do {
          uVar13 = uVar13 - iVar9;
          if ((int)uVar13 < 1) goto LAB_00088ce6;
          iVar8 = *piVar6;
          piVar6 = piVar6 + 1;
          iVar9 = *(int *)(iVar8 + 0x3c);
        } while (piVar6 != piVar15);
        fVar21 = *(float *)(iVar8 + 0x28);
        if (-1 < (int)((uint)(fVar22 + fVar2 < fVar21) << 0x1f)) goto LAB_00088d7c;
      }
      goto LAB_00088ce6;
    }
LAB_00088d7c:
    fVar22 = fVar22 - fVar21;
    FUN_00088640(*(undefined4 *)(param_1 + 0x24),iVar8,0);
    if (fVar22 == fVar2 || fVar22 < fVar2 != (NAN(fVar22) || NAN(fVar2))) {
      *(float *)(*(int *)(param_1 + 0x24) + 0xc) = DAT_00088e78;
      FUN_00088910(*(undefined4 *)(param_1 + 0x24),1);
      iVar16 = *(int *)(iVar17 + iVar16);
      iVar17 = *(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb0);
      FUN_00088640(*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)
                    (iVar17 + ((*(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb4) - iVar17 >> 2
                               ) + -2) * 4),1);
      iVar17 = *(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb0);
      FUN_00088640(*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)
                    (iVar17 + ((*(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb4) - iVar17 >> 2
                               ) + -2) * 4),1);
      iVar17 = *(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb0);
      FUN_00088640(*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)
                    (iVar17 + ((*(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb4) - iVar17 >> 2
                               ) + -2) * 4),1);
      iVar17 = *(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb0);
      FUN_00088640(*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)
                    (iVar17 + ((*(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb4) - iVar17 >> 2
                               ) + -2) * 4),1);
      FUN_00085234(*(undefined4 *)(param_1 + 0x24));
      iVar17 = *(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb0);
      FUN_00088640(*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)
                    (iVar17 + ((*(int *)(param_1 + *(int *)(iVar16 + 4) * 0x10 + 0xb4) - iVar17 >> 2
                               ) + -1) * 4),1);
      return;
    }
  } while( true );
}



