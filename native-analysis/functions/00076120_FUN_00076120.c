/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00076120 FUN_00076120 */

int FUN_00076120(int *param_1,uint param_2,uint *param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  
  uVar10 = 0;
  *(undefined4 *)(DAT_00076408 + 0x7612e) = 0;
  if ((int)param_2 < 1) {
    bVar17 = true;
    uVar2 = uVar10;
  }
  else {
    bVar17 = true;
    iVar14 = 0;
    uVar15 = 0;
    puVar6 = (uint *)(DAT_0007640c + 0x7614a);
    uVar13 = 0;
    uVar16 = 0;
    iVar7 = DAT_00076410 + 0x76156;
LAB_000761ac:
    uVar2 = *(uint *)((int)param_1 + iVar14);
LAB_000761b2:
    uVar11 = uVar10;
    iVar9 = iVar7 + uVar11 * 8;
    uVar10 = uVar11 + 1;
    *(uint *)(iVar9 + 4) = uVar2;
    *(undefined4 *)(iVar9 + 8) = 1;
    if (uVar13 != 0) goto LAB_00076198;
    uVar15 = uVar15 + 1;
    uVar13 = 1;
    uVar16 = uVar2;
    if (uVar15 != param_2) {
      do {
        iVar14 = iVar14 + 4;
        if ((int)uVar10 < 1) goto LAB_000761ac;
        uVar5 = 0;
        bVar1 = false;
        uVar2 = *(uint *)((int)param_1 + iVar14);
        puVar8 = puVar6;
        do {
          while (*puVar8 == uVar2) {
            uVar4 = puVar8[1] + 1;
            puVar8[1] = uVar4;
            if ((int)uVar13 < (int)uVar4) {
              uVar16 = uVar2;
              uVar13 = uVar4;
            }
            if (uVar11 != uVar5) {
              bVar17 = false;
            }
            uVar5 = uVar5 + 1;
            bVar1 = true;
            puVar8 = puVar8 + 2;
            if (uVar5 == uVar10) goto LAB_00076196;
          }
          uVar5 = uVar5 + 1;
          puVar8 = puVar8 + 2;
        } while (uVar5 != uVar10);
LAB_00076196:
        if (!bVar1) goto LAB_000761b2;
LAB_00076198:
        uVar15 = uVar15 + 1;
        uVar2 = uVar16;
        if (uVar15 == param_2) break;
      } while( true );
    }
    *(uint *)(DAT_00076414 + 0x761e0) = uVar10;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  if (uVar10 == 1) {
    if ((*(uint *)(DAT_00076424 + 0x7630e) & 1) == 0) {
      iVar9 = DAT_00076424 + 0x7630e;
      iVar14 = __cxa_guard_acquire(iVar9);
      iVar7 = DAT_0007643c;
      if (iVar14 != 0) {
        uVar3 = FUN_00022674(DAT_00076438 + 0x7635c,0);
        *(undefined4 *)(iVar7 + 0x76362) = uVar3;
        uVar3 = FUN_00022674(DAT_00076440 + 0x7636a,0);
        *(undefined4 *)(iVar7 + 0x7636a) = uVar3;
        uVar3 = FUN_00022674(DAT_00076444 + 0x76376,0);
        *(undefined4 *)(iVar7 + 0x76372) = uVar3;
        uVar3 = FUN_00022674(DAT_00076448 + 0x76382,0);
        *(undefined4 *)(iVar7 + 0x7637a) = uVar3;
        uVar3 = FUN_00022674(DAT_0007644c + 0x7638e,0);
        *(undefined4 *)(iVar7 + 0x76382) = uVar3;
        uVar3 = FUN_00022674(DAT_00076450 + 0x7639a,0);
        *(undefined4 *)(iVar7 + 0x7638a) = uVar3;
        uVar3 = FUN_00022674(DAT_00076454 + 0x763a6,0);
        *(undefined4 *)(iVar7 + 0x76392) = uVar3;
        uVar3 = FUN_00022674(DAT_00076458 + 0x763b2,0);
        *(undefined4 *)(iVar7 + 0x7639a) = uVar3;
        uVar3 = FUN_00022674(DAT_0007645c + 0x763be,0);
        *(undefined4 *)(iVar7 + 0x763a2) = uVar3;
        uVar3 = FUN_00022674(DAT_00076460 + 0x763ca,0);
        *(undefined4 *)(iVar7 + 0x763aa) = uVar3;
        uVar3 = FUN_00022674(DAT_00076464 + 0x763d6,0);
        *(undefined4 *)(iVar7 + 0x763b2) = uVar3;
        uVar3 = FUN_00022674(DAT_00076468 + 0x763e2,0);
        *(undefined4 *)(iVar7 + 0x763ba) = uVar3;
        uVar3 = FUN_00022674(DAT_0007646c + 0x763ee,0);
        *(undefined4 *)(iVar7 + 0x763c2) = uVar3;
        uVar3 = FUN_00022674(DAT_00076470 + 0x763fa,0);
        *(undefined4 *)(iVar7 + 0x763ca) = uVar3;
        __cxa_guard_release(iVar9);
      }
    }
    iVar7 = 0;
    do {
      if (*(int *)(DAT_00076428 + 0x762c2 + iVar7 * 8) == *param_1) {
        return *(int *)(DAT_00076428 + 0x762c2 + iVar7 * 8 + 4);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x10);
    uVar10 = *(uint *)(DAT_0007642c + 0x762d6);
LAB_00076224:
    if ((int)uVar10 < 2) goto LAB_0007629a;
  }
  else {
    if (uVar10 != 2) {
      if ((uVar10 == 3 && param_2 == 5) &&
         ((*(int *)(DAT_0007641c + 0x76288) == 2 || (*(int *)(DAT_0007641c + 0x76290) == 2)))) {
        return 0x15;
      }
      if (param_2 == uVar10 && 4 < (int)param_2) {
        return 4;
      }
      goto LAB_00076224;
    }
    if (!bVar17) {
      if (0 < (int)param_2) {
        uVar2 = 0;
        iVar7 = 0;
        do {
          if ((int)(uVar2 << 0x1f) < 0) {
            bVar17 = *(int *)((int)param_1 + iVar7) == *(int *)(DAT_00076430 + 0x762f6);
          }
          else if (*(int *)((int)param_1 + iVar7) == *(int *)(DAT_00076430 + 0x762ee)) {
            bVar17 = true;
          }
          else {
            bVar17 = false;
          }
          if (!bVar17) goto LAB_0007630e;
          uVar2 = uVar2 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar2 != param_2);
      }
      return 0x18;
    }
LAB_0007630e:
    if ((param_2 == 5) &&
       ((*(int *)(DAT_00076434 + 0x76322) == 2 || (*(int *)(DAT_00076434 + 0x7632a) == 2)))) {
      return 0x14;
    }
  }
  iVar9 = 0;
  iVar7 = -1;
  iVar14 = DAT_00076418 + 0x76238;
  do {
    bVar17 = iVar7 == -1 && *(int *)(iVar14 + 4) == 3;
    iVar12 = iVar7;
    if (bVar17) {
      iVar12 = 0x16;
    }
    bVar1 = iVar7 < 0x17;
    iVar7 = iVar12;
    if (*(int *)(iVar14 + 4) == 4 && (bVar17 || bVar1)) {
      iVar7 = 0x17;
    }
    iVar9 = iVar9 + 1;
    iVar14 = iVar14 + 8;
  } while (iVar9 < (int)uVar10);
  if (iVar7 != -1) {
    return iVar7;
  }
LAB_0007629a:
  if (param_2 < 7) {
    iVar7 = *(int *)(DAT_00076420 + 0x762a8 + param_2 * 4);
  }
  else {
    iVar7 = 5;
  }
  return iVar7;
}



