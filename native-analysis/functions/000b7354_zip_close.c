/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b7354 zip_close */

void zip_close(char **param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  void *__ptr;
  int iVar5;
  size_t sVar6;
  FILE *pFVar7;
  int iVar8;
  long lVar9;
  code **ppcVar10;
  size_t sVar11;
  long __off;
  __mode_t __mask;
  int iVar12;
  undefined4 *puVar13;
  char **ppcVar14;
  int *piVar15;
  char *pcVar16;
  char *pcVar17;
  int *piVar18;
  uint uVar19;
  size_t sVar20;
  int iVar21;
  code *pcVar22;
  int iVar23;
  int iVar24;
  code *pcVar25;
  int local_20c0;
  undefined auStack_2088 [4];
  ushort local_2084;
  short local_2082;
  undefined4 local_2080;
  undefined4 local_207c;
  int local_2078;
  undefined4 local_2074;
  char *local_2070;
  undefined2 local_206c;
  undefined auStack_204c [8];
  undefined4 local_2044;
  undefined4 local_2040;
  undefined4 local_203c;
  int local_2038;
  short local_2034;
  undefined4 uStack_2030;
  char acStack_202c [8192];
  int local_2c;
  
  iVar3 = DAT_000b7c04;
  iVar21 = DAT_000b7c00 + 0xb7368;
  local_2c = **(int **)(iVar21 + DAT_000b7c04);
  if (param_1 == (char **)0x0) {
LAB_000b7418:
    uVar4 = 0xffffffff;
    goto LAB_000b73d4;
  }
  if (param_1[9] == (char *)0xffffffff) {
    iVar23 = (int)param_1[6] - (int)param_1[5];
    if (iVar23 != 0) {
      iVar23 = 1;
    }
  }
  else {
    iVar23 = 1;
  }
  if ((int)param_1[10] < 1) {
    sVar20 = 0;
  }
  else {
    sVar20 = 0;
    piVar18 = (int *)param_1[0xc];
    pcVar16 = (char *)0x0;
    do {
      if (*piVar18 == 0) {
        if (piVar18[4] != -1) {
          iVar23 = 1;
        }
LAB_000b73a6:
        sVar20 = sVar20 + 1;
      }
      else {
        if (*piVar18 != 1) {
          iVar23 = 1;
          goto LAB_000b73a6;
        }
        iVar23 = 1;
      }
      pcVar16 = pcVar16 + 1;
      piVar18 = piVar18 + 5;
    } while (pcVar16 != param_1[10]);
  }
  if (iVar23 == 0) {
    _zip_free(param_1);
    uVar4 = 0;
    goto LAB_000b73d4;
  }
  if (sVar20 == 0) {
    if (((*param_1 == (char *)0x0) || (param_1[1] == (char *)0x0)) ||
       (iVar23 = remove(*param_1), iVar23 == 0)) {
      _zip_free(param_1);
      uVar4 = 0;
    }
    else {
      puVar13 = (undefined4 *)__errno();
      _zip_error_set(param_1 + 2,0x16,*puVar13);
      uVar4 = 0xffffffff;
    }
    goto LAB_000b73d4;
  }
  __ptr = malloc(sVar20 << 3);
  if (__ptr == (void *)0x0) goto LAB_000b7418;
  ppcVar14 = param_1 + 2;
  piVar18 = (int *)_zip_cdir_new(sVar20);
  if (piVar18 != (int *)0x0) {
    iVar23 = 0;
    iVar24 = 0;
    do {
      iVar24 = iVar24 + 1;
      iVar5 = *piVar18 + iVar23;
      iVar23 = iVar23 + 0x3c;
      _zip_dirent_init(iVar5);
    } while (iVar24 < (int)sVar20);
    iVar23 = zip_get_archive_flag(param_1,1,0);
    if (iVar23 == 0) {
      iVar23 = zip_get_archive_flag(param_1,1,8);
      if (iVar23 != 0) goto LAB_000b748e;
      if (param_1[9] == (char *)0xffffffff) {
        pcVar16 = param_1[7];
        if ((pcVar16 != (char *)0x0) && (*(int *)(pcVar16 + 0x10) != 0)) {
          iVar23 = _zip_memdup(*(int *)(pcVar16 + 0x10),*(undefined2 *)(pcVar16 + 0x14),ppcVar14);
          piVar18[4] = iVar23;
          if (iVar23 == 0) goto LAB_000b7b5e;
          *(undefined2 *)(piVar18 + 5) = *(undefined2 *)(param_1[7] + 0x14);
        }
        goto LAB_000b748e;
      }
      iVar23 = _zip_memdup(param_1[8],param_1[9],ppcVar14);
      piVar18[4] = iVar23;
      if (iVar23 != 0) {
        *(undefined2 *)(piVar18 + 5) = *(undefined2 *)(param_1 + 9);
        goto LAB_000b748e;
      }
    }
    else {
      iVar23 = _zip_memdup(DAT_000b7c08 + 0xb747a,0x16,ppcVar14);
      piVar18[4] = iVar23;
      if (iVar23 == 0) goto LAB_000b7b5e;
      *(undefined2 *)(piVar18 + 5) = 0x16;
LAB_000b748e:
      sVar6 = strlen(*param_1);
      pcVar16 = (char *)malloc(sVar6 + 8);
      if (pcVar16 == (char *)0x0) {
        _zip_error_set(ppcVar14,0xe,0);
      }
      else {
        sprintf(pcVar16,(char *)(DAT_000b7c0c + 0xb74ac),*param_1);
        iVar23 = _zip_mkstemp(pcVar16);
        if (iVar23 == -1) {
          puVar13 = (undefined4 *)__errno();
          _zip_error_set(ppcVar14,0xc,*puVar13);
          free(pcVar16);
        }
        else {
          pFVar7 = fdopen(iVar23,(char *)(DAT_000b7c10 + 0xb74c8));
          if (pFVar7 != (FILE *)0x0) {
            pcVar17 = param_1[10];
            if (0 < (int)pcVar17) {
              iVar24 = 0;
              iVar5 = 0;
              iVar23 = 0;
              do {
                if (*(int *)(param_1[0xc] + iVar24) != 1) {
                  *(int *)((int)__ptr + iVar5 * 8) = iVar23;
                  uVar4 = zip_get_name(param_1,iVar23,0);
                  iVar8 = iVar5 * 8;
                  iVar5 = iVar5 + 1;
                  *(undefined4 *)((int)__ptr + iVar8 + 4) = uVar4;
                  pcVar17 = param_1[10];
                }
                iVar23 = iVar23 + 1;
                iVar24 = iVar24 + 0x14;
              } while (iVar23 < (int)pcVar17);
            }
            iVar23 = zip_get_archive_flag(param_1,1,0);
            if (iVar23 != 0) {
              qsort(__ptr,sVar20,8,(__compar_fn_t)(DAT_000b7c14 + 0xb753c));
            }
            iVar23 = zip_get_archive_flag(param_1,1,0);
            if (iVar23 == 1) {
              iVar23 = zip_get_archive_flag(param_1,1,8);
              bVar2 = true;
              if (iVar23 != 0) goto LAB_000b7550;
            }
            else {
LAB_000b7550:
              bVar2 = false;
            }
            iVar23 = 0;
            pcVar17 = (char *)(DAT_000b7c18 + 0xb7578);
            local_20c0 = 0;
            do {
              iVar5 = *(int *)((int)__ptr + local_20c0 * 8);
              iVar24 = iVar5 * 0x14;
              bVar1 = bVar2;
              if (*(int *)(param_1[0xc] + iVar5 * 0x14) - 2U < 2) {
                bVar1 = true;
              }
              if (!bVar1) {
                iVar8 = iVar5 * 0x3c;
                iVar12 = fseek((FILE *)param_1[1],*(long *)(*(int *)param_1[7] + iVar8 + 0x38),0);
                if (iVar12 == 0) {
                  iVar12 = _zip_dirent_read(auStack_2088,param_1[1],0,0,1,ppcVar14);
                  if (iVar12 == 0) {
                    memcpy((void *)(*piVar18 + iVar23),(void *)(*(int *)param_1[7] + iVar8),0x3c);
                    if ((int)((uint)local_2084 << 0x1c) < 0) {
                      piVar15 = (int *)param_1[7];
                      local_2084 = local_2084 & 0xfff7;
                      local_207c = *(undefined4 *)(*piVar15 + iVar8 + 0xc);
                      local_2078 = *(int *)(*piVar15 + iVar8 + 0x10);
                      local_2074 = *(undefined4 *)(*piVar15 + iVar8 + 0x14);
                      *(ushort *)(*piVar18 + iVar23 + 4) =
                           *(ushort *)(*piVar18 + iVar23 + 4) & 0xfff7;
                    }
                    goto LAB_000b7932;
                  }
                  goto LAB_000b7970;
                }
                goto LAB_000b79d0;
              }
              _zip_dirent_init(auStack_2088);
              iVar8 = zip_get_archive_flag(param_1,1,0);
              if (iVar8 != 0) {
                _zip_dirent_torrent_normalize(auStack_2088);
              }
              memcpy((void *)(*piVar18 + iVar23),auStack_2088,0x3c);
              if (*(int *)(param_1[0xc] + iVar24 + 8) == 0) {
                if (*(int *)(param_1[0xc] + iVar5 * 0x14) == 3) {
                  local_2070 = strdup(pcVar17);
                  local_206c = 1;
                  *(char **)(*piVar18 + iVar23 + 0x18) = pcVar17;
                  *(undefined2 *)(*piVar18 + iVar23 + 0x1c) = 1;
                }
                else {
                  local_2070 = strdup(*(char **)(*(int *)param_1[7] + iVar5 * 0x3c + 0x18));
                  sVar6 = strlen(local_2070);
                  local_206c = (undefined2)sVar6;
                  *(undefined4 *)(*piVar18 + iVar23 + 0x18) =
                       *(undefined4 *)(*(int *)param_1[7] + iVar5 * 0x3c + 0x18);
                  *(undefined2 *)(*piVar18 + iVar23 + 0x1c) = local_206c;
                }
LAB_000b7932:
                if (*(int *)(param_1[0xc] + iVar24 + 8) != 0) goto LAB_000b75e4;
              }
              else {
LAB_000b75e4:
                free(local_2070);
                local_2070 = strdup(*(char **)(param_1[0xc] + iVar24 + 8));
                if (local_2070 == (char *)0x0) goto LAB_000b7970;
                sVar6 = strlen(local_2070);
                local_206c = (undefined2)sVar6;
                *(undefined4 *)(*piVar18 + iVar23 + 0x18) =
                     *(undefined4 *)(param_1[0xc] + iVar24 + 8);
                *(undefined2 *)(*piVar18 + iVar23 + 0x1c) = local_206c;
              }
              iVar8 = zip_get_archive_flag(param_1,1,0);
              if ((iVar8 == 0) && (*(int *)(param_1[0xc] + iVar24 + 0x10) != -1)) {
                *(undefined4 *)(*piVar18 + iVar23 + 0x28) =
                     *(undefined4 *)(param_1[0xc] + iVar24 + 0xc);
                *(undefined2 *)(*piVar18 + iVar23 + 0x2c) =
                     *(undefined2 *)(param_1[0xc] + iVar24 + 0x10);
              }
              iVar8 = *piVar18;
              lVar9 = ftell(pFVar7);
              *(long *)(iVar8 + iVar23 + 0x38) = lVar9;
              uVar19 = *(int *)(param_1[0xc] + iVar5 * 0x14) - 2;
              bVar1 = bVar2;
              if (uVar19 < 2) {
                bVar1 = true;
              }
              if (bVar1) {
                if (uVar19 < 2) {
                  ppcVar10 = *(code ***)(param_1[0xc] + iVar24 + 4);
                }
                else {
                  ppcVar10 = (code **)zip_source_zip(param_1,param_1,iVar5,0x10,0,0xffffffff);
                  if (ppcVar10 == (code **)0x0) goto LAB_000b7970;
                }
                pcVar22 = ppcVar10[1];
                pcVar25 = *ppcVar10;
                iVar24 = (*pcVar25)(pcVar22,auStack_204c,0x1c,3);
                if ((iVar24 < 0x1c) || (iVar24 = (*pcVar25)(pcVar22,0,0,0), iVar24 < 0)) {
LAB_000b79a0:
                  FUN_000b709c(ppcVar14,pcVar25,pcVar22);
                }
                else {
                  lVar9 = ftell(pFVar7);
                  iVar24 = _zip_dirent_write(auStack_2088,pFVar7,1,ppcVar14);
                  if (-1 < iVar24) {
                    if (local_2034 == 0) {
                      iVar24 = FUN_000b70c8(param_1,pcVar25,pcVar22,auStack_204c,pFVar7);
                      if (iVar24 < 0) goto LAB_000b7970;
                    }
                    else {
                      local_2038 = 0;
                      while( true ) {
                        sVar6 = (*pcVar25)(pcVar22,acStack_202c,0x2000,1);
                        if ((int)sVar6 < 1) break;
                        sVar11 = fwrite(acStack_202c,1,sVar6,pFVar7);
                        if (sVar6 != sVar11) {
                          puVar13 = (undefined4 *)__errno();
                          _zip_error_set(ppcVar14,6,*puVar13);
                          goto LAB_000b7970;
                        }
                        local_2038 = sVar6 + local_2038;
                      }
                      if (sVar6 != 0) goto LAB_000b79a0;
                    }
                    iVar24 = (*pcVar25)(pcVar22,0,0,2);
                    if (iVar24 < 0) goto LAB_000b79a0;
                    __off = ftell(pFVar7);
                    iVar24 = fseek(pFVar7,lVar9,0);
                    if (-1 < iVar24) {
                      local_2080 = local_2040;
                      local_2082 = local_2034;
                      local_207c = local_2044;
                      local_2074 = local_203c;
                      local_2078 = local_2038;
                      iVar24 = zip_get_archive_flag(param_1,1,0);
                      if (iVar24 != 0) {
                        _zip_dirent_torrent_normalize(auStack_2088);
                      }
                      iVar24 = _zip_dirent_write(auStack_2088,pFVar7,1,ppcVar14);
                      if (iVar24 < 0) goto LAB_000b7970;
                      iVar24 = fseek(pFVar7,__off,0);
                      if (-1 < iVar24) {
                        *(undefined4 *)(*piVar18 + iVar23 + 8) = local_2080;
                        *(short *)(*piVar18 + iVar23 + 6) = local_2082;
                        *(int *)(*piVar18 + iVar23 + 0x10) = local_2078;
                        *(undefined4 *)(*piVar18 + iVar23 + 0x14) = local_2074;
                        *(undefined4 *)(*piVar18 + iVar23 + 0xc) = local_207c;
                        goto LAB_000b77f8;
                      }
                    }
LAB_000b79d0:
                    puVar13 = (undefined4 *)__errno();
                    _zip_error_set(ppcVar14,4,*puVar13);
                  }
                }
LAB_000b7970:
                free(__ptr);
                goto LAB_000b7976;
              }
              iVar24 = _zip_dirent_write(auStack_2088,pFVar7,1,ppcVar14);
              if ((iVar24 < 0) ||
                 (iVar24 = FUN_000b7288(param_1[1],*(undefined4 *)(*piVar18 + iVar23 + 0x10),pFVar7,
                                        ppcVar14), iVar24 < 0)) goto LAB_000b7970;
LAB_000b77f8:
              iVar23 = iVar23 + 0x3c;
              _zip_dirent_finalize(auStack_2088);
              local_20c0 = local_20c0 + 1;
            } while (local_20c0 < (int)sVar20);
            free(__ptr);
            iVar23 = _zip_cdir_write(piVar18,pFVar7,ppcVar14);
            if (iVar23 < 0) {
LAB_000b7976:
              piVar18[1] = 0;
              _zip_cdir_free(piVar18);
              _zip_dirent_finalize(auStack_2088);
              fclose(pFVar7);
            }
            else {
              iVar23 = zip_get_archive_flag(param_1,1,0);
              if (iVar23 != 0) {
                lVar9 = ftell(pFVar7);
                iVar23 = _zip_filerange_crc(pFVar7,piVar18[3],piVar18[2],&uStack_2030,ppcVar14);
                if (-1 < iVar23) {
                  snprintf(acStack_202c,9,(char *)(DAT_000b7c1c + 0xb7b04),uStack_2030);
                  iVar23 = fseek(pFVar7,lVar9 + -8,0);
                  if (iVar23 < 0) {
                    puVar13 = (undefined4 *)__errno();
                    _zip_error_set(ppcVar14,4,*puVar13);
                  }
                  else {
                    sVar20 = fwrite(acStack_202c,8,1,pFVar7);
                    if (sVar20 == 1) goto LAB_000b7838;
                    puVar13 = (undefined4 *)__errno();
                    _zip_error_set(ppcVar14,6,*puVar13);
                  }
                }
                goto LAB_000b7976;
              }
LAB_000b7838:
              piVar18[1] = 0;
              _zip_cdir_free(piVar18);
              iVar23 = fclose(pFVar7);
              if (iVar23 == 0) {
                pFVar7 = (FILE *)param_1[1];
                if (pFVar7 != (FILE *)0x0) {
                  fclose(pFVar7);
                  param_1[1] = (char *)0x0;
                }
                iVar23 = rename(pcVar16,*param_1);
                if (iVar23 == 0) {
                  __mask = umask(0);
                  umask(__mask);
                  chmod(*param_1,~__mask & 0x1b6);
                  _zip_free(param_1);
                  free(pcVar16);
                  uVar4 = 0;
                  goto LAB_000b73d4;
                }
                puVar13 = (undefined4 *)__errno();
                _zip_error_set(ppcVar14,2,*puVar13);
                remove(pcVar16);
                free(pcVar16);
                if (pFVar7 != (FILE *)0x0) {
                  pFVar7 = fopen(*param_1,(char *)(DAT_000b7c20 + 0xb7be2));
                  param_1[1] = (char *)pFVar7;
                  uVar4 = 0xffffffff;
                  goto LAB_000b73d4;
                }
                goto LAB_000b7418;
              }
              puVar13 = (undefined4 *)__errno();
              _zip_error_set(ppcVar14,3,*puVar13);
            }
            remove(pcVar16);
            free(pcVar16);
            uVar4 = 0xffffffff;
            goto LAB_000b73d4;
          }
          puVar13 = (undefined4 *)__errno();
          _zip_error_set(ppcVar14,0xc,*puVar13);
          close(iVar23);
          remove(pcVar16);
          free(pcVar16);
        }
      }
    }
LAB_000b7b5e:
    _zip_cdir_free(piVar18);
  }
  free(__ptr);
  uVar4 = 0xffffffff;
LAB_000b73d4:
  if (local_2c == **(int **)(iVar21 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}



