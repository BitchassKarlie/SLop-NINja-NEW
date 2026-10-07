/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0005ff20 FUN_0005ff20 */

void FUN_0005ff20(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int **ppiVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int **ppiVar13;
  int iVar14;
  int *piVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_54;
  float local_50;
  float local_4c;
  
  iVar12 = *(int *)(param_1 + 0x68);
  iVar10 = DAT_000602fc + 0x5ff38;
  *(undefined *)(param_1 + 0xc1) = 0;
  if (iVar12 == -1) {
    fVar19 = *(float *)(param_1 + 8);
    uVar5 = FUN_0003038c(fVar19 + *(float *)(param_1 + 0xd8),fVar19 + *(float *)(param_1 + 0xe0),
                         fVar19 + *(float *)(param_1 + 0xe4),fVar19 + *(float *)(param_1 + 0xdc),
                         0xffffffff);
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    iVar12 = FUN_000302e0();
    if (iVar12 != 2) {
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
      iVar14 = *(int *)(param_1 + 0xb8);
      goto LAB_00060188;
    }
    uVar5 = FUN_0005fdc4(param_1,*(undefined4 *)(param_1 + 0x68));
    puVar9 = *(uint **)(iVar10 + DAT_000606fc);
    *(undefined4 *)(param_1 + 0xc4) = uVar5;
    *puVar9 = *puVar9 | 0x40;
    iVar12 = DAT_00060700;
    *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
    iVar12 = *(int *)(iVar10 + iVar12) + *(int *)(param_1 + 0x68) * 0xc;
    uVar5 = *(undefined4 *)(iVar12 + 0xa8);
    uVar6 = *(undefined4 *)(iVar12 + 0xac);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar12 + 0xa4);
    *(undefined4 *)(param_1 + 0x70) = uVar5;
    *(undefined4 *)(param_1 + 0x74) = uVar6;
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xcc);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xd4);
    iVar12 = *(int *)(param_1 + 0x68);
    if (iVar12 == -1) {
      iVar14 = -1;
      goto LAB_00060188;
    }
    iVar14 = -1;
  }
  else {
    iVar14 = *(int *)(param_1 + 0xb8);
  }
  fVar19 = *(float *)(param_1 + 8);
  iVar3 = FUN_0003038c(fVar19 + *(float *)(param_1 + 0xe8),fVar19 + *(float *)(param_1 + 0xf0),
                       fVar19 + *(float *)(param_1 + 0xf4),fVar19 + *(float *)(param_1 + 0xec),
                       iVar12);
  iVar12 = *(int *)(param_1 + 0x68);
  if (iVar3 != *(int *)(param_1 + 0x68)) {
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xc4) + 0x38))();
    }
    cVar7 = *(char *)(param_1 + 0xc0);
    if (cVar7 != '\0') {
      fVar19 = *(float *)(param_1 + 0x88);
      fVar21 = DAT_000602d4;
      if (-1 < (int)((uint)(fVar19 < 0.0) << 0x1f)) goto LAB_0005ffde;
      do {
        iVar12 = (uint)(fVar19 < DAT_000602dc) << 0x1f;
        if (-1 < iVar12) {
          cVar7 = '\0';
        }
        if (iVar12 < 0) {
          cVar7 = '\x01';
        }
        while( true ) {
          if (cVar7 == '\0') {
            if ((int)((uint)(fVar21 < 0.0) << 0x1f) < 0) {
              bVar1 = false;
              if ((int)((uint)(fVar21 < DAT_000602e4) << 0x1f) < 0) {
                bVar1 = true;
              }
            }
            else {
              bVar1 = fVar21 != DAT_0006032c &&
                      fVar21 < DAT_0006032c == (NAN(fVar21) || NAN(DAT_0006032c));
            }
            if (bVar1) {
              fVar19 = *(float *)(param_1 + 0xd0);
              fVar20 = fVar19 + fVar21;
              if ((fVar20 <= DAT_0006032c) &&
                 (fVar17 = (*(float *)(param_1 + 0x90) - *(float *)(param_1 + 0x9c)) + DAT_0006032c,
                 fVar20 < fVar17 == (NAN(fVar20) || NAN(fVar17)))) {
                fVar20 = *(float *)(param_1 + 0xc);
                ppiVar8 = *(int ***)(param_1 + 0xac);
                fVar17 = DAT_000606f4;
                if (ppiVar8 != *(int ***)(param_1 + 0xa8)) {
                  fVar23 = (fVar20 - fVar19) - fVar21;
                  ppiVar13 = *(int ***)(param_1 + 0xa8);
                  fVar19 = DAT_000602e8;
                  fVar24 = DAT_000602d4;
                  fVar17 = DAT_000602d4;
                  while( true ) {
                    fVar20 = fVar23 - fVar20;
                    iVar12 = (uint)(fVar20 < 0.0) << 0x1f;
                    if (-1 < iVar12) {
                      ppiVar8 = (int **)0x0;
                    }
                    if (iVar12 < 0) {
                      ppiVar8 = (int **)0x1;
                    }
                    fVar18 = fVar20;
                    if (ppiVar8 != (int **)0x0) {
                      fVar18 = -fVar20;
                    }
                    iVar12 = (uint)(fVar18 < fVar19) << 0x1f;
                    if (-1 < iVar12) {
                      fVar20 = fVar19;
                    }
                    fVar19 = fVar20;
                    if ((iVar12 < 0) && (fVar17 = fVar24, ppiVar8 != (int **)0x0)) {
                      fVar19 = -fVar20;
                    }
                    fVar18 = (float)(**(code **)(**ppiVar13 + 8))();
                    fVar20 = (float)(**(code **)(**ppiVar13 + 8))();
                    ppiVar8 = *(int ***)(param_1 + 0xac);
                    if (ppiVar13 + 1 == ppiVar8) break;
                    fVar23 = fVar23 - fVar20;
                    fVar20 = *(float *)(param_1 + 0xc);
                    fVar24 = fVar24 - fVar18;
                    ppiVar13 = ppiVar13 + 1;
                  }
                  fVar19 = *(float *)(param_1 + 0xd0);
                }
                fVar21 = (fVar17 - fVar19) / fVar21;
                if ((int)((uint)(fVar21 < 0.0) << 0x1f) < 0) {
                  fVar21 = -fVar21;
                }
                *(float *)(param_1 + 0xbc) = fVar21;
              }
            }
            goto LAB_000600de;
          }
          fVar19 = fVar19 * DAT_000602e0;
          fVar21 = fVar21 + fVar19;
          if ((int)((uint)(fVar19 < 0.0) << 0x1f) < 0) break;
LAB_0005ffde:
          if (fVar19 == DAT_000602d8 || fVar19 < DAT_000602d8 != (NAN(fVar19) || NAN(DAT_000602d8)))
          {
            cVar7 = '\0';
          }
          if (fVar19 != DAT_000602d8 && fVar19 < DAT_000602d8 == (NAN(fVar19) || NAN(DAT_000602d8)))
          {
            cVar7 = '\x01';
          }
        }
      } while( true );
    }
    if (*(int *)(param_1 + 0xc4) == 0) {
      *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
      fVar19 = DAT_00060338;
      if (*(int ***)(param_1 + 0xac) != *(int ***)(param_1 + 0xa8)) {
        fVar20 = -*(float *)(param_1 + 0xd0);
        iVar12 = 0;
        ppiVar8 = *(int ***)(param_1 + 0xa8);
        fVar21 = DAT_00060334;
        while( true ) {
          fVar17 = *(float *)(param_1 + 0x94);
          fVar24 = (fVar20 + *(float *)(param_1 + 0xc) + fVar17 * fVar19) -
                   *(float *)(param_1 + 0x70);
          if ((int)((uint)(fVar24 < 0.0) << 0x1f) < 0) {
            fVar24 = -fVar24;
          }
          if (fVar21 != fVar24 && fVar21 < fVar24 == (NAN(fVar21) || NAN(fVar24))) {
            fVar23 = fVar20 + *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0xd0);
            if (fVar23 > fVar17 || fVar17 == fVar23) {
              *(int *)(param_1 + 0xb8) = iVar12;
            }
            fVar21 = fVar24;
            if (fVar23 <= fVar17 && fVar17 != fVar23) {
              *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
            }
          }
          fVar17 = (float)(**(code **)(**ppiVar8 + 8))();
          if (ppiVar8 + 1 == *(int ***)(param_1 + 0xac)) break;
          fVar20 = fVar20 - fVar17;
          iVar12 = iVar12 + 1;
          ppiVar8 = ppiVar8 + 1;
        }
      }
      uVar5 = *(undefined4 *)(DAT_000606f8 + 0x60678);
      uVar6 = *(undefined4 *)(DAT_000606f8 + 0x6067c);
      *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(DAT_000606f8 + 0x60674);
      *(undefined4 *)(param_1 + 0x88) = uVar5;
      *(undefined4 *)(param_1 + 0x8c) = uVar6;
    }
LAB_000600de:
    *(undefined *)(param_1 + 0xc0) = 0;
    *(undefined4 *)(param_1 + 0xc4) = 0;
    iVar12 = DAT_00060300;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
    **(uint **)(iVar10 + iVar12) = **(uint **)(iVar10 + iVar12) & 0xffffffbf;
    iVar3 = *(int *)(param_1 + 0x68);
    iVar12 = iVar3;
  }
  iVar2 = DAT_00060304;
  if (iVar3 != -1) {
    *(undefined4 *)(param_1 + 0xbc) = DAT_000602ec;
    fVar19 = *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x88) =
         (*(float *)(param_1 + 0xd0) -
         (*(float *)(param_1 + 0x7c) -
         (*(float *)(*(int *)(iVar10 + iVar2) + iVar12 * 0xc + 0xa8) - fVar19))) * DAT_00060338;
    if (*(int **)(param_1 + 0xc4) != (int *)0x0) {
      iVar12 = (**(code **)(**(int **)(param_1 + 0xc4) + 0x34))();
      if (iVar12 == 0) {
        *(undefined4 *)(param_1 + 0xc4) = 0;
      }
      iVar12 = *(int *)(param_1 + 0x68);
      fVar19 = *(float *)(param_1 + 0x70);
    }
    fVar19 = *(float *)(*(int *)(iVar10 + iVar2) + iVar12 * 0xc + 0xa8) - fVar19;
    if ((int)((uint)(fVar19 < 0.0) << 0x1f) < 0) {
      fVar19 = -fVar19;
    }
    if (fVar19 != DAT_000602f0 && fVar19 < DAT_000602f0 == (NAN(fVar19) || NAN(DAT_000602f0))) {
      if ((fVar19 != DAT_00060310 && fVar19 < DAT_00060310 == (NAN(fVar19) || NAN(DAT_00060310))) &&
         (*(int **)(param_1 + 0xc4) != (int *)0x0)) {
        (**(code **)(**(int **)(param_1 + 0xc4) + 0x30))();
        *(undefined4 *)(param_1 + 0xc4) = 0;
      }
      *(undefined *)(param_1 + 0xc0) = 1;
    }
  }
LAB_00060188:
  fVar19 = DAT_000602e0;
  fVar21 = *(float *)(param_1 + 0x84) * DAT_000602e0;
  fVar24 = *(float *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0xb4) = 0;
  fVar25 = *(float *)(param_1 + 8);
  fVar26 = *(float *)(param_1 + 0x10);
  fVar20 = *(float *)(param_1 + 0x88) * fVar19;
  *(float *)(param_1 + 0x84) = fVar21;
  fVar19 = *(float *)(param_1 + 0x8c) * fVar19;
  *(float *)(param_1 + 0x88) = fVar20;
  fVar17 = *(float *)(param_1 + 0xd0) + fVar20 * fVar24;
  *(float *)(param_1 + 0x8c) = fVar19;
  fVar23 = *(float *)(param_1 + 0xcc) + fVar21 * fVar24;
  *(float *)(param_1 + 0xd0) = fVar17;
  fVar18 = *(float *)(param_1 + 0xd4) + fVar19 * fVar24;
  *(float *)(param_1 + 0xcc) = fVar23;
  fVar24 = *(float *)(param_1 + 0xc);
  *(float *)(param_1 + 0xd4) = fVar18;
  fVar19 = DAT_00060320;
  fVar21 = DAT_000602f4;
  fVar20 = DAT_000602f8;
  if (*(char *)(param_1 + 200) != '\0') {
    fVar21 = fVar24 - *(float *)(param_1 + 0x94);
    fVar20 = fVar24;
  }
  ppiVar8 = *(int ***)(param_1 + 0xa8);
  if (*(int ***)(param_1 + 0xac) == ppiVar8) {
    piVar15 = (int *)0x0;
    fVar27 = DAT_00060330;
  }
  else {
    piVar15 = (int *)0x0;
    iVar10 = 0;
    fVar24 = fVar24 - fVar17;
    fVar27 = DAT_000602d4;
    fVar17 = DAT_000602e8;
    while( true ) {
      piVar11 = *ppiVar8;
      fVar4 = (float)(**(code **)(*piVar11 + 8))(piVar11);
      iVar12 = *(int *)(param_1 + 0xb8);
      fVar4 = fVar4 * fVar19;
      if (iVar12 < 0) {
        fVar22 = fVar24 - *(float *)(param_1 + 0xc);
        iVar3 = (uint)(fVar22 < 0.0) << 0x1f;
        if (-1 < iVar3) {
          iVar12 = 0;
        }
        if (iVar3 < 0) {
          iVar12 = 1;
        }
        fVar16 = fVar22;
        if (iVar12 != 0) {
          fVar16 = -fVar22;
        }
        if ((int)((uint)(fVar16 < fVar17) << 0x1f) < 0) {
          if (iVar12 != 0) {
            fVar22 = -fVar22;
          }
          *(int *)(param_1 + 0xb4) = iVar10;
          fVar27 = fVar24 - (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xd0));
          fVar17 = fVar22;
        }
      }
      else if (iVar10 == iVar12) {
        fVar17 = fVar24 - *(float *)(param_1 + 0xc);
        *(int *)(param_1 + 0xb4) = iVar10;
        fVar27 = fVar24 - (*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0xd0));
        piVar15 = piVar11;
        if ((int)((uint)(fVar17 < 0.0) << 0x1f) < 0) {
          fVar17 = -fVar17;
        }
      }
      fVar22 = fVar24 - fVar4;
      fVar24 = fVar22 - fVar4;
      if ((fVar24 == fVar20 || fVar24 < fVar20 != (NAN(fVar24) || NAN(fVar20))) &&
         (-1 < (int)((uint)(fVar4 + fVar22 < fVar21) << 0x1f))) {
        (**(code **)(*piVar11 + 0x24))(piVar11,1);
      }
      else {
        (**(code **)(*piVar11 + 0x24))(piVar11,0);
      }
      ppiVar8 = ppiVar8 + 1;
      local_54 = fVar25 - fVar23;
      local_50 = fVar22;
      local_4c = fVar26 - fVar18;
      (**(code **)(*piVar11 + 0x18))(piVar11,&local_54);
      if (ppiVar8 == *(int ***)(param_1 + 0xac)) break;
      iVar10 = iVar10 + 1;
    }
    fVar17 = *(float *)(param_1 + 0xd0);
  }
  fVar27 = fVar27 - fVar17;
  if (*(char *)(param_1 + 0xc0) == '\0') {
    if ((int)((uint)(fVar27 < 0.0) << 0x1f) < 0) {
      bVar1 = false;
      if (fVar27 != DAT_00060308 && fVar27 < DAT_00060308 == (NAN(fVar27) || NAN(DAT_00060308))) {
        bVar1 = true;
      }
    }
    else {
      bVar1 = (int)((uint)(fVar27 < DAT_00060314) << 0x1f) < 0;
    }
    if (bVar1) {
      fVar19 = *(float *)(param_1 + 0x88);
      if ((int)((uint)(fVar19 < 0.0) << 0x1f) < 0) {
        if (fVar19 == DAT_00060338 || fVar19 < DAT_00060338 != (NAN(fVar19) || NAN(DAT_00060338))) {
          bVar1 = false;
        }
        if (fVar19 != DAT_00060338 && fVar19 < DAT_00060338 == (NAN(fVar19) || NAN(DAT_00060338))) {
          bVar1 = true;
        }
      }
      else {
        iVar10 = (uint)(fVar19 < DAT_00060320) << 0x1f;
        if (-1 < iVar10) {
          bVar1 = false;
        }
        if (iVar10 < 0) {
          bVar1 = true;
        }
      }
      if ((bVar1) && (*(undefined *)(param_1 + 0xc1) = 1, piVar15 != (int *)0x0 && iVar14 == -1)) {
        piVar11 = piVar15 + 0xc;
        if (*(char *)(piVar15 + 0x14) != '\0') {
          piVar11 = (int *)piVar15[0xc];
        }
        if (piVar11 != (int *)0x0) {
          (**(code **)(*piVar11 + 0xc))(piVar11,piVar15);
          fVar17 = *(float *)(param_1 + 0xd0);
        }
      }
    }
  }
  if ((fVar17 == 0.0 || fVar17 < 0.0 != NAN(fVar17)) || (-1 < *(int *)(param_1 + 0xb8))) {
    fVar19 = *(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x9c);
    if ((-1 < (int)((uint)(fVar17 < fVar19) << 0x1f)) || (-1 < *(int *)(param_1 + 0xb8))) {
      if (*(int *)(param_1 + 0x68) != -1) {
        return;
      }
      fVar19 = *(float *)(param_1 + 0x88);
      if ((int)((uint)(fVar19 < 0.0) << 0x1f) < 0) {
        if (fVar19 < DAT_00060318 == (NAN(fVar19) || NAN(DAT_00060318))) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = fVar19 <= DAT_0006031c;
      }
      if (!bVar1) {
        return;
      }
      *(float *)(param_1 + 0xd0) = fVar17 + fVar27 * DAT_0006031c;
      return;
    }
    *(float *)(param_1 + 0xd0) = fVar17 + (fVar19 - fVar17) * DAT_0006030c;
  }
  else {
    *(float *)(param_1 + 0xd0) = fVar17 * DAT_00060324;
  }
  fVar19 = DAT_00060328;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) * DAT_00060328;
  *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) * fVar19;
  *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) * fVar19;
  return;
}



