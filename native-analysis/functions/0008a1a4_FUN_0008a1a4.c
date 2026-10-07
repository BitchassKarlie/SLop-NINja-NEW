/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0008a1a4 FUN_0008a1a4 */

void FUN_0008a1a4(int param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint **ppuVar12;
  int iVar13;
  undefined4 uVar14;
  void *__s1;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  size_t __n;
  int iVar24;
  int iVar25;
  uint *puVar26;
  uint uVar27;
  int iVar28;
  uint **ppuVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined4 *puVar33;
  int iVar34;
  uint **ppuVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  uint local_b8;
  int local_ac;
  uint local_a4;
  int local_9c;
  int local_88;
  
  fVar36 = DAT_0008a478;
  iVar19 = DAT_0008a480 + 0x8a1ba;
  *(float *)(param_1 + 0x78) = DAT_0008a478;
  *(float *)(param_1 + 100) = fVar36;
  *(float *)(param_1 + 0x68) = fVar36;
  *(float *)(param_1 + 0x6c) = fVar36;
  *(float *)(param_1 + 0x70) = fVar36;
  iVar8 = FUN_0002f5f0();
  iVar9 = DAT_0008a484;
  if (iVar8 == 0) {
    if (-1 < (int)((uint)(*(float *)(*(int *)(iVar19 + DAT_0008a484) + 0x10) < DAT_0008a478) << 0x1f
                  )) goto LAB_0008a1f8;
LAB_0008a30a:
    iVar8 = FUN_0002f5c0();
    if (iVar8 == 0) goto LAB_0008a1f8;
    uVar14 = FUN_0007b72c();
    FUN_0007c77c(uVar14,param_2);
    FUN_0007b72c();
    iVar8 = FUN_0007b72c();
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar8 + 0x58);
  }
  else {
    if (*(char *)(*(int *)(iVar19 + DAT_0008a484) + 0x19d) == '\0') {
      param_2 = DAT_0008a47c;
    }
    if ((int)((uint)(*(float *)(*(int *)(iVar19 + DAT_0008a484) + 0x10) < DAT_0008a478) << 0x1f) < 0
       ) goto LAB_0008a30a;
LAB_0008a1f8:
    FUN_0007b72c();
    FUN_00079374();
    *(float *)(param_1 + 0x78) = DAT_0008a478;
  }
  if ((*(char *)(*(int *)(iVar19 + iVar9) + 8) != '\0') && (0 < *(int *)(param_1 + 0x250))) {
    FUN_000863bc(param_1,param_2);
    return;
  }
  iVar8 = FUN_0002f5f0();
  if ((iVar8 != 0) && (*(char *)(*(int *)(iVar19 + iVar9) + 0x19d) == '\0')) {
    return;
  }
  iVar24 = *(int *)(*(int *)(iVar19 + iVar9) + 4);
  iVar8 = param_1 + iVar24 * 4;
  fVar37 = *(float *)(param_1 + 0x74) + param_2 * *(float *)(iVar8 + 0x7c);
  fVar36 = *(float *)(iVar8 + 0x8c);
  if ((fVar36 < fVar37) &&
     (fVar36 = *(float *)(param_1 + iVar24 * 4 + 0x9c),
     fVar37 < fVar36 != (NAN(fVar37) || NAN(fVar36)))) {
    fVar36 = fVar37;
  }
  *(float *)(param_1 + 0x74) = fVar36;
  iVar24 = *(int *)(iVar19 + iVar9);
  iVar8 = param_1 + *(int *)(iVar24 + 4) * 0x10;
  if ((uint)(*(int *)(iVar8 + 0xb4) - *(int *)(iVar8 + 0xb0)) >> 2 == 0) {
    return;
  }
  FUN_000863bc(param_1,param_2);
  if (*(char *)(iVar24 + 0x174) == '\0') {
    iVar8 = *(int *)(param_1 + 0x24c);
    if (iVar8 != 0) {
      if (0.0 < *(float *)(param_1 + 0x254)) {
        bVar2 = true;
        *(float *)(param_1 + 0x254) = *(float *)(param_1 + 0x254) - param_2;
        goto LAB_0008a2a8;
      }
      *(float *)(param_1 + 0x254) = DAT_0008a47c;
      iVar3 = DAT_0008a48c;
      iVar24 = DAT_0008a488;
      if (0 < *(int *)(iVar8 + 0xc)) {
        ppuVar29 = (uint **)(DAT_0008a490 + 0x8a39a);
        iVar31 = DAT_0008a490 + 0x8a6fe;
        iVar25 = *(int *)(iVar8 + 8);
        puVar33 = (undefined4 *)(DAT_0008a48c + 0x8a714);
        iVar10 = DAT_0008a488 + 0x8a82e;
        iVar8 = 0;
        local_88 = 0;
        do {
          fVar36 = *(float *)(param_1 + 0x78);
          if (fVar36 == DAT_0008a478 || fVar36 < DAT_0008a478 != (NAN(fVar36) || NAN(DAT_0008a478)))
          {
            fVar36 = DAT_0008a478;
          }
          *(float *)(iVar25 + iVar8 + 0x60) = *(float *)(iVar25 + iVar8 + 0x60) - fVar36 * param_2;
          iVar20 = *(int *)(param_1 + 0x24c);
          iVar25 = *(int *)(iVar20 + 8);
          iVar30 = iVar25 + iVar8;
          iVar15 = *(int *)(iVar30 + 0x54);
          iVar11 = *(int *)(*(int *)(iVar19 + iVar9) + 4);
          if (0 < iVar15) {
            local_9c = 0;
            ppuVar12 = (uint **)(DAT_0008a494 + 0x8a40e);
            do {
              uVar21 = *(uint *)(iVar30 + 0x14);
              if ((int)uVar21 < 1) {
                *(float *)(iVar30 + 0x60) = DAT_0008a884;
                *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24c) + 8) + iVar8 + 0x54) = 0;
              }
              else {
                puVar26 = *ppuVar12;
                lVar1 = (ulonglong)*puVar26 * (ulonglong)puVar26[2] +
                        CONCAT44(puVar26[2] * puVar26[1] + *puVar26 * puVar26[3],puVar26[4]);
                uVar16 = puVar26[5] + (int)((ulonglong)lVar1 >> 0x20);
                *puVar26 = (uint)lVar1;
                puVar26[1] = uVar16;
                iVar25 = *(int *)(param_1 + 0x24c);
                if (uVar21 - 1 < 0xfffffffe) {
                  uVar16 = (uint)((ulonglong)uVar16 * (ulonglong)uVar21 >> 0x20);
                }
                uVar21 = *(uint *)(*(int *)(iVar25 + 8) + iVar8 + 0x14);
                iVar20 = *(int *)(*(int *)(*(int *)(iVar25 + 8) + iVar8) + uVar16 * 4);
                if (((1 < (int)uVar21) && (iVar15 >> 1 <= local_9c)) && (iVar20 == -2)) {
                  ppuVar35 = (uint **)((int)&DAT_0008a478 + DAT_0008a498);
                  while( true ) {
                    puVar26 = *ppuVar35;
                    lVar1 = (ulonglong)*puVar26 * (ulonglong)puVar26[2] +
                            CONCAT44(puVar26[2] * puVar26[1] + *puVar26 * puVar26[3],puVar26[4]);
                    uVar16 = puVar26[5] + (int)((ulonglong)lVar1 >> 0x20);
                    *puVar26 = (uint)lVar1;
                    puVar26[1] = uVar16;
                    iVar25 = *(int *)(param_1 + 0x24c);
                    if (uVar21 - 1 < 0xfffffffe) {
                      uVar16 = (uint)((ulonglong)uVar21 * (ulonglong)uVar16 >> 0x20);
                    }
                    iVar20 = *(int *)(*(int *)(*(int *)(iVar25 + 8) + iVar8) + uVar16 * 4);
                    if (iVar20 != -2) break;
                    uVar21 = *(uint *)(*(int *)(iVar25 + 8) + iVar8 + 0x14);
                  }
                }
                if (iVar20 == -1) {
LAB_0008a4f0:
                  if (*(int *)(*(int *)(iVar19 + iVar9) + 4) == 2) {
                    fVar37 = *(float *)(*(int *)(*(int *)(iVar19 + iVar9) + 0x184) + 0x70);
                    fVar36 = (float)FUN_000667c4();
                    fVar36 = fVar36 - *(float *)(param_1 + 0x260);
                    if (fVar36 < fVar37 != (NAN(fVar36) || NAN(fVar37))) {
LAB_0008a96c:
                      iVar25 = *(int *)(param_1 + 0x24c);
                      goto LAB_0008a506;
                    }
                    if (*(char *)(param_1 + 0x25e) == '\0') {
                      *(undefined *)(param_1 + 0x25e) = 1;
                      local_ac = 1 - (uint)*(byte *)(param_1 + 0x25d);
                      if (1 < *(byte *)(param_1 + 0x25d)) {
                        local_ac = 0;
                      }
                      puVar26 = *(uint **)(DAT_0008aba0 + 0x8a8e8);
                      lVar1 = (ulonglong)*puVar26 * (ulonglong)puVar26[2] +
                              CONCAT44(puVar26[2] * puVar26[1] + *puVar26 * puVar26[3],puVar26[4]);
                      uVar21 = puVar26[5] + (int)((ulonglong)lVar1 >> 0x20);
                      *puVar26 = (uint)lVar1;
                      puVar26[1] = uVar21;
                      iVar25 = *(int *)(param_1 + 0x24c);
                      *(float *)(param_1 + 0x260) =
                           DAT_0008ab74 +
                           ((float)(ulonglong)((uVar21 >> 0xd) - (uint)(uVar21 * 0x80000 < uVar21))
                           / DAT_0008ab70) * DAT_0008ab78;
                    }
                    else {
                      if ((*(char *)(param_1 + 0x25e) != '\x01') ||
                         (*(char *)(param_1 + 0x25d) != '\x01')) goto LAB_0008a96c;
                      *(undefined *)(param_1 + 0x25e) = 2;
                      iVar25 = *(int *)(param_1 + 0x24c);
                      local_ac = 1;
                    }
                  }
                  else {
LAB_0008a506:
                    local_ac = 0;
                  }
                  uVar22 = *(uint *)(iVar25 + 0x74);
                  puVar26 = *(uint **)(DAT_0008a88c + 0x8a512);
                  lVar1 = (ulonglong)*puVar26 * (ulonglong)puVar26[2] +
                          CONCAT44(puVar26[2] * puVar26[1] + *puVar26 * puVar26[3],puVar26[4]);
                  uVar16 = puVar26[5] + (int)((ulonglong)lVar1 >> 0x20);
                  *puVar26 = (uint)lVar1;
                  puVar26[1] = uVar16;
                  fVar36 = DAT_0008a880;
                  uVar27 = uVar22 - 1;
                  uVar21 = uVar27;
                  if (uVar27 < 0xfffffffe) {
                    uVar21 = (uint)((ulonglong)uVar16 * (ulonglong)uVar22 >> 0x20);
                    uVar16 = local_a4;
                  }
                  local_a4 = uVar16;
                  if (uVar27 < 0xfffffffe) {
                    local_a4 = uVar21;
                  }
                  iVar17 = iVar11 * 0x10;
                  iVar25 = param_1 + iVar17;
                  iVar34 = param_1 + (iVar11 + 0x21) * 0x10;
                  iVar28 = *(int *)(iVar25 + 0x210);
                  if ((*(int *)(iVar34 + 4) - iVar28 >> 2) * -0x42108421 != 0) {
                    uVar16 = 0;
                    iVar32 = 0;
                    uVar21 = 0;
                    iVar23 = *(int *)(iVar28 + 4);
                    if (*(int *)(iVar28 + 8) < iVar23) goto LAB_0008a796;
LAB_0008a59a:
                    if (iVar23 < 0) goto LAB_0008a796;
                    iVar28 = *(int *)(iVar25 + 0x210);
                    piVar18 = (int *)(iVar28 + uVar21);
LAB_0008a5a6:
                    iVar23 = *piVar18;
                    if (iVar23 < 1) goto LAB_0008a764;
                    if (local_ac == 0) goto LAB_0008a764;
LAB_0008a5b6:
                    iVar13 = iVar23;
                    if (5 < *(byte *)(param_1 + 0x25d)) {
                      iVar13 = iVar23 >> 1;
                    }
                    iVar32 = iVar32 + iVar13;
                    if (((int)local_a4 < iVar32) || ((0 < iVar23 && (local_ac != 0)))) {
                      puVar26 = *(uint **)(DAT_0008a890 + 0x8a5d4);
                      uVar16 = piVar18[0x1b];
                      lVar1 = (ulonglong)*puVar26 * (ulonglong)puVar26[2];
                      local_b8 = (uint)lVar1;
                      uVar22 = puVar26[5] +
                               puVar26[2] * puVar26[1] + *puVar26 * puVar26[3] +
                               (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4(puVar26[4],local_b8);
                      *puVar26 = puVar26[4] + local_b8;
                      puVar26[1] = uVar22;
                      if (uVar16 - 1 < 0xfffffffe) {
                        uVar22 = (uint)((ulonglong)uVar22 * (ulonglong)uVar16 >> 0x20);
                      }
                      iVar25 = piVar18[uVar22 + 7];
                      local_a4 = uVar21;
                      if (((iVar25 < 0) || (**(int **)(iVar19 + DAT_0008a894) <= iVar25)) ||
                         (iVar28 = FUN_00021680(iVar25), *(int *)(iVar28 + 0x2e8) == 0))
                      goto LAB_0008a63c;
                      iVar28 = FUN_00021680(iVar25);
                      iVar28 = FUN_00022280(*(undefined4 *)(iVar28 + 0x2e8));
                      if (iVar28 == 0) {
                        if (((*(uint *)(iVar24 + 0x8a82e) & 1) == 0) &&
                           (iVar20 = __cxa_guard_acquire(iVar10), uVar5 = DAT_0008ab9c,
                           uVar4 = DAT_0008ab8c, uVar14 = DAT_0008ab7c, iVar20 != 0)) {
                          iVar20 = iVar24 + 0x8a75e;
                          do {
                            *(undefined4 *)(iVar20 + -0x60) = 0;
                            *(undefined4 *)(iVar20 + -0x50) = uVar5;
                            *(undefined4 *)(iVar20 + -0x5c) = 0;
                            *(undefined4 *)(iVar20 + -0x38) = uVar4;
                            *(undefined4 *)(iVar20 + -0x58) = 0;
                            *(undefined4 *)(iVar20 + -0x34) = uVar5;
                            *(undefined *)(iVar20 + -3) = 0;
                            *(undefined4 *)(iVar20 + -0x4c) = uVar14;
                            *(undefined4 *)(iVar20 + -0x48) = uVar4;
                            *(undefined4 *)(iVar20 + -0x44) = uVar14;
                            *(undefined4 *)(iVar20 + -0x1c) = uVar14;
                            *(undefined4 *)(iVar20 + -0x30) = 0;
                            *(undefined4 *)(iVar20 + -0x18) = uVar14;
                            *(undefined4 *)(iVar20 + -0x54) = 0;
                            *(undefined4 *)(iVar20 + -0x20) = uVar14;
                            *(undefined4 *)(iVar20 + -0x24) = uVar14;
                            *(undefined4 *)(iVar20 + -0x28) = uVar14;
                            *(undefined4 *)(iVar20 + -0x2c) = uVar14;
                            *(undefined4 *)(iVar20 + -0x14) = 0;
                            *(undefined4 *)(iVar20 + -8) = uVar14;
                            *(undefined4 *)(iVar20 + -0x68) = 0;
                            *(undefined4 *)(iVar20 + -0x40) = uVar5;
                            *(undefined4 *)(iVar20 + -0x3c) = uVar5;
                            *(undefined *)(iVar20 + -4) = 0;
                            iVar20 = iVar20 + 0x68;
                          } while (iVar20 != iVar24 + 0x8a896);
                          __cxa_guard_release(DAT_0008aba4 + 0x8afee);
                          __aeabi_atexit(0,DAT_0008abac + 0x8ab6a,
                                         *(undefined4 *)(iVar19 + DAT_0008aba8));
                        }
                        uVar4 = DAT_0008ab80;
                        uVar14 = DAT_0008ab7c;
                        if (*(char *)(iVar3 + 0x8a834) == '\0') {
                          *(undefined4 *)(iVar3 + 0x8a730) = 1;
                          uVar7 = DAT_0008ab8c;
                          uVar6 = DAT_0008ab88;
                          uVar5 = DAT_0008ab84;
                          *puVar33 = uVar14;
                          *(undefined4 *)(iVar3 + 0x8a718) = uVar4;
                          *(undefined4 *)(iVar3 + 0x8a71c) = uVar14;
                          *(undefined4 *)(iVar3 + 0x8a72c) = uVar6;
                          uVar4 = DAT_0008ab90;
                          *(undefined4 *)(iVar3 + 0x8a724) = uVar14;
                          *(undefined4 *)(iVar3 + 0x8a798) = 3;
                          *(undefined4 *)(iVar3 + 0x8a720) = DAT_0008ab94;
                          *(undefined4 *)(iVar3 + 0x8a800) = 2;
                          uVar14 = DAT_0008ab98;
                          *(undefined4 *)(iVar3 + 0x8a728) = uVar5;
                          *(undefined4 *)(iVar3 + 0x8a758) = uVar14;
                          *(undefined4 *)(iVar3 + 0x8a710) = uVar4;
                          *(undefined4 *)(iVar3 + 0x8a790) = uVar7;
                          *(undefined4 *)(iVar3 + 0x8a794) = uVar5;
                          *(undefined4 *)(iVar3 + 0x8a78c) = uVar4;
                          *(undefined4 *)(iVar3 + 0x8a7c0) = uVar14;
                          *(undefined4 *)(iVar3 + 0x8a7f8) = uVar7;
                          *(undefined4 *)(iVar3 + 0x8a7fc) = uVar5;
                          *(undefined4 *)(iVar3 + 0x8a7f4) = uVar4;
                          *(undefined4 *)(iVar3 + 0x8a828) = uVar14;
                          *(undefined *)(iVar3 + 0x8a834) = 1;
                        }
                        puVar26 = *ppuVar29;
                        lVar1 = (ulonglong)*puVar26 * (ulonglong)puVar26[2] +
                                CONCAT44(puVar26[2] * puVar26[1] + *puVar26 * puVar26[3],puVar26[4])
                        ;
                        uVar16 = puVar26[5] + (int)((ulonglong)lVar1 >> 0x20);
                        *puVar26 = (uint)lVar1;
                        puVar26[1] = uVar16;
                        iVar30 = ((uint)CARRY4(uVar16,uVar16) + (uint)CARRY4(uVar16 * 2,uVar16)) *
                                 0x68 + iVar31;
LAB_0008a63c:
                        iVar20 = *(int *)(param_1 + iVar17 + 0x210) + uVar21;
                        *(int *)(iVar20 + 8) = *(int *)(iVar20 + 8) + 1;
                        iVar20 = iVar25;
                        if ((0.0 < *(float *)(param_1 + 0x6c)) &&
                           (**(int **)(iVar19 + DAT_0008a898) < 1)) {
                          if ((int)((uint)(*(float *)(*(int *)(*(int *)(iVar19 + iVar9) + 0x50) +
                                                     0xf0) < DAT_0008a888) << 0x1f) < 0) {
                            iVar17 = FUN_00021680(iVar25);
                            iVar28 = ***(int ***)(iVar17 + 0x2e8);
                            iVar17 = FUN_0008f414(DAT_0008a89c + 0x8a724);
                            if (iVar28 != iVar17) goto LAB_0008a66e;
                          }
                          iVar25 = FUN_00021680(iVar25);
                          iVar25 = FUN_00022280(*(undefined4 *)(iVar25 + 0x2e8));
                          if (iVar25 == 0) {
                            *(char *)(param_1 + 0x25d) = *(char *)(param_1 + 0x25d) + '\x01';
                          }
                        }
                      }
                      goto LAB_0008a66e;
                    }
LAB_0008a764:
                    uVar16 = uVar16 + 1;
                    if ((uint)((*(int *)(iVar34 + 4) - iVar28 >> 2) * -0x42108421) <= uVar16)
                    goto LAB_0008a66e;
                    uVar21 = uVar16 * 0x7c;
                    iVar28 = iVar28 + uVar21;
                    iVar23 = *(int *)(iVar28 + 4);
                    if (iVar23 <= *(int *)(iVar28 + 8)) goto LAB_0008a59a;
LAB_0008a796:
                    fVar38 = *(float *)(iVar28 + 0x70);
                    uVar14 = FUN_0007b72c();
                    fVar37 = *(float *)(iVar30 + 0x60);
                    iVar28 = (uint)(fVar37 < 0.0) << 0x1f;
                    if (-1 < iVar28) {
                      fVar37 = fVar37 + fVar36;
                    }
                    if (iVar28 < 0) {
                      fVar37 = DAT_0008a880;
                    }
                    fVar37 = (float)FUN_000794e4(uVar14,fVar37);
                    if ((int)((uint)(fVar38 < fVar37) << 0x1f) < 0) {
                      if (*(int *)(param_1 + 0x250) < 0) goto LAB_0008a82a;
                      iVar28 = *(int *)(iVar25 + 0x210);
                      piVar18 = (int *)(iVar28 + uVar21);
                      if (*(int *)(param_1 + 0x250) < piVar18[0x1d]) goto LAB_0008a5a6;
                      iVar23 = *(int *)(iVar28 + uVar21);
                      goto LAB_0008a5b6;
                    }
                    iVar28 = *(int *)(iVar25 + 0x210);
                    piVar18 = (int *)(iVar28 + uVar21);
                    goto LAB_0008a5a6;
                  }
                }
                else {
                  iVar17 = *(int *)(*(int *)(iVar25 + 8) + iVar8 + 8) + uVar16 * 0x10;
                  __s1 = *(void **)(iVar17 + 4);
                  uVar21 = *(int *)(iVar17 + 0xc) - (int)__s1;
                  __n = uVar21;
                  if (5 < uVar21) {
                    __n = 6;
                  }
                  iVar17 = memcmp(__s1,(void *)(DAT_0008a8a0 + 0x8a7f8),__n);
                  if (((iVar17 == 0) && (5 < uVar21)) && (uVar21 == 6)) goto LAB_0008a4f0;
                }
LAB_0008a66e:
                if (iVar20 == -2) {
                  fVar36 = *(float *)(param_1 + 0x68);
                  local_9c = local_9c + 1;
                  if (fVar36 != 0.0 && fVar36 < 0.0 == NAN(fVar36)) {
                    FUN_00086eb0(param_1,1,iVar30,0);
                  }
                }
                else {
                  fVar36 = *(float *)(param_1 + 0x6c);
                  if (fVar36 != 0.0 && fVar36 < 0.0 == NAN(fVar36)) {
                    FUN_00087668(param_1,1,iVar20,iVar30,0);
                  }
                }
                *(undefined *)(param_1 + 0x25c) = 1;
                iVar25 = *(int *)(*(int *)(param_1 + 0x24c) + 8) + iVar8;
                *(int *)(iVar25 + 0x54) = *(int *)(iVar25 + 0x54) + -1;
              }
              iVar25 = *(int *)(*(int *)(param_1 + 0x24c) + 8) + iVar8;
              fVar36 = *(float *)(iVar25 + 0x4c) +
                       *(float *)(iVar25 + 0x50) * *(float *)(*(int *)(param_1 + 0x24c) + 0x34);
              if ((int)((uint)(fVar36 < 0.0) << 0x1f) < 0) {
                fVar36 = DAT_0008a884;
              }
              *(float *)(iVar25 + 0x60) = *(float *)(iVar25 + 0x60) + fVar36;
              iVar20 = *(int *)(param_1 + 0x24c);
              iVar25 = *(int *)(iVar20 + 8);
              iVar30 = iVar25 + iVar8;
            } while (0 < *(int *)(iVar30 + 0x54));
          }
          iVar8 = iVar8 + 0x68;
          local_88 = local_88 + 1;
        } while (local_88 < *(int *)(iVar20 + 0xc));
      }
    }
    bVar2 = false;
  }
  else {
    bVar2 = false;
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + param_2;
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) + param_2;
  }
LAB_0008a2a8:
  iVar9 = FUN_00085a70(param_1,0);
  if ((iVar9 == 0) && (!bVar2)) {
    if ((*(int *)(param_1 + 0x24c) != 0) &&
       (fVar36 = *(float *)(param_1 + 600), fVar36 != 0.0 && fVar36 < 0.0 == NAN(fVar36))) {
      fVar36 = fVar36 - param_2;
      *(float *)(param_1 + 600) = fVar36;
      if (fVar36 != 0.0 && fVar36 < 0.0 == NAN(fVar36)) {
        return;
      }
    }
    FUN_00089ba0(param_1,0);
  }
  return;
LAB_0008a82a:
  iVar28 = *(int *)(iVar25 + 0x210);
  piVar18 = (int *)(iVar28 + uVar21);
  iVar23 = *(int *)(iVar28 + uVar21);
  goto LAB_0008a5b6;
}



