/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 000b88b0 zip_open */

void zip_open(char *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  FILE *__stream;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  int *__ptr;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  void *__s2;
  void *__s2_00;
  void *__s2_01;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  void *__s1;
  int iVar13;
  void *__s1_00;
  char *__s1_01;
  int *piVar14;
  int iVar15;
  char **local_d4;
  void *local_d0;
  stat sStack_a8;
  char *local_40;
  ulong local_3c;
  char acStack_38 [8];
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_000b8dec;
  iVar15 = DAT_000b8de8 + 0xb88c4;
  local_2c = **(int **)(iVar15 + DAT_000b8dec);
  if (param_1 == (char *)0x0) {
    FUN_000b86c0(param_3,0,0x12);
    iVar2 = 0;
    goto LAB_000b88fa;
  }
  iVar2 = stat(param_1,&sStack_a8);
  if (iVar2 != 0) {
    if ((param_2 & 1) == 0) {
      FUN_000b86c0(param_3,0,0xb);
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_000b86f4(param_1,param_3);
    }
    goto LAB_000b88fa;
  }
  if ((param_2 & 2) != 0) {
    FUN_000b86c0(param_3,0,10);
    iVar2 = 0;
    goto LAB_000b88fa;
  }
  __stream = fopen(param_1,(char *)(DAT_000b8df0 + 0xb8926));
  if (__stream == (FILE *)0x0) {
    FUN_000b86c0(param_3,0,0xb);
    iVar2 = 0;
    goto LAB_000b88fa;
  }
  fseek(__stream,0,2);
  lVar3 = ftell(__stream);
  if (lVar3 == 0) {
    iVar2 = FUN_000b86f4(param_1,param_3);
    if (iVar2 != 0) {
      *(FILE **)(iVar2 + 4) = __stream;
      goto LAB_000b88fa;
    }
LAB_000b8d66:
    fclose(__stream);
    goto LAB_000b88fa;
  }
  iVar2 = 0x10016;
  if (lVar3 < 0x10016) {
    iVar2 = lVar3;
  }
  iVar2 = fseek(__stream,-iVar2,2);
  if ((iVar2 == -1) && (piVar14 = (int *)__errno(), *piVar14 != 0x1b)) {
    FUN_000b86c0(param_3,0,4);
  }
  else {
    pvVar4 = malloc(0x10016);
    if (pvVar4 == (void *)0x0) {
      FUN_000b86c0(param_3,0,0xe);
    }
    else {
      clearerr(__stream);
      sVar5 = fread(pvVar4,1,0x10016,__stream);
      piVar14 = (int *)(*(ushort *)&__stream->_IO_read_base & 0x40);
      if ((*(ushort *)&__stream->_IO_read_base & 0x40) == 0) {
        _zip_error_set(&sStack_a8,0x13,piVar14);
        __s2_01 = (void *)(DAT_000b8df4 + 0xb89d0);
        __s2 = (void *)(DAT_000b8df4 + 0xb89d1);
        __s2_00 = (void *)(DAT_000b8df8 + 0xb89d6);
        uVar12 = 0xffffffff;
        local_d0 = pvVar4;
LAB_000b89de:
        iVar2 = (int)pvVar4 + ((sVar5 - 0x12) - (int)local_d0);
        if (3 < iVar2) {
          __s1_00 = (void *)((int)local_d0 + -1);
          do {
            __s1_00 = memchr((void *)((int)__s1_00 + 1),0x50,
                             (int)local_d0 + ((iVar2 + -3) - (int)(void *)((int)__s1_00 + 1)));
            if (__s1_00 == (void *)0x0) goto LAB_000b89e8;
            __s1 = (void *)((int)__s1_00 + 1);
            iVar13 = memcmp(__s1,__s2,3);
          } while (iVar13 != 0);
          iVar2 = (int)pvVar4 + ((sVar5 - 0x16) - (int)__s1_00);
          local_d0 = __s1;
          if ((iVar2 < 0) || (iVar13 = memcmp(__s1_00,__s2_01,4), iVar13 != 0)) {
            _zip_error_set(&sStack_a8,0x13,0);
          }
          else {
            iVar13 = memcmp((void *)((int)__s1_00 + 4),__s2_00,4);
            if (iVar13 == 0) {
              local_40 = (char *)((int)__s1_00 + 8);
              iVar13 = _zip_read2(&local_40);
              uVar9 = _zip_read2(&local_40);
              __ptr = (int *)_zip_cdir_new(uVar9,&sStack_a8);
              if (__ptr != (int *)0x0) {
                iVar6 = _zip_read4(&local_40);
                __ptr[2] = iVar6;
                iVar6 = _zip_read4(&local_40);
                __ptr[4] = 0;
                __ptr[3] = iVar6;
                iVar6 = _zip_read2(&local_40);
                *(short *)(__ptr + 5) = (short)iVar6;
                if ((iVar6 <= iVar2) && (iVar13 == __ptr[1])) {
                  uVar10 = param_2 & 4;
                  if ((uVar10 != 0) && (iVar2 != iVar6)) {
                    _zip_error_set(&sStack_a8,0x15,0);
                    free(__ptr);
                    goto LAB_000b89de;
                  }
                  if (iVar6 == 0) {
                    uVar11 = __ptr[2];
                    if (uVar11 < (uint)((int)__s1_00 - (int)pvVar4)) {
LAB_000b8b48:
                      local_40 = (char *)((int)__s1_00 - uVar11);
                      local_d4 = &local_40;
LAB_000b8b50:
                      local_3c = __ptr[2];
                      iVar6 = 0;
                      iVar13 = 0;
                      iVar2 = __ptr[1];
                      do {
                        if (local_3c != 0 && iVar2 == iVar13) {
                          _zip_cdir_grow(__ptr,iVar2 + 0x10000,&sStack_a8);
                        }
                        iVar2 = _zip_dirent_read(*__ptr + iVar6,__stream,local_d4,&local_3c,0,
                                                 &sStack_a8);
                        if (iVar2 < 0) {
                          __ptr[1] = iVar13;
                          _zip_cdir_free(__ptr);
                          goto LAB_000b89de;
                        }
                        iVar2 = __ptr[1];
                        iVar13 = iVar13 + 1;
                        iVar6 = iVar6 + 0x3c;
                      } while (iVar13 < iVar2);
                      if (piVar14 == (int *)0x0) {
                        piVar14 = __ptr;
                        uVar12 = uVar10;
                        if (uVar10 != 0) {
                          uVar12 = FUN_000b873c(__stream,__ptr,&sStack_a8);
                        }
                      }
                      else {
                        if ((int)uVar12 < 1) {
                          uVar12 = FUN_000b873c(__stream,piVar14,&sStack_a8);
                        }
                        uVar10 = FUN_000b873c(__stream,__ptr,&sStack_a8);
                        if ((int)uVar12 < (int)uVar10) {
                          _zip_cdir_free(piVar14);
                          piVar14 = __ptr;
                          uVar12 = uVar10;
                        }
                        else {
                          _zip_cdir_free(__ptr);
                        }
                      }
                      goto LAB_000b89de;
                    }
LAB_000b8c38:
                    clearerr(__stream);
                    fseek(__stream,__ptr[3],0);
                    local_d4 = (char **)(*(ushort *)&__stream->_IO_read_base & 0x40);
                    if ((*(ushort *)&__stream->_IO_read_base & 0x40) == 0) {
                      lVar3 = ftell(__stream);
                      if (lVar3 == __ptr[3]) goto LAB_000b8b50;
                      if ((*(ushort *)&__stream->_IO_read_base & 0x40) == 0) {
                        _zip_error_set(&sStack_a8,0x13);
                        goto LAB_000b8c76;
                      }
                    }
                    puVar7 = (undefined4 *)__errno();
                    _zip_error_set(&sStack_a8,4,*puVar7);
                  }
                  else {
                    iVar2 = _zip_memdup((int)__s1_00 + 0x16,iVar6,&sStack_a8);
                    __ptr[4] = iVar2;
                    if (iVar2 != 0) {
                      uVar11 = __ptr[2];
                      if (uVar11 < (uint)((int)__s1_00 - (int)pvVar4)) goto LAB_000b8b48;
                      goto LAB_000b8c38;
                    }
                  }
LAB_000b8c76:
                  free(__ptr);
                  goto LAB_000b89de;
                }
                _zip_error_set(&sStack_a8,0x13,0);
                free(__ptr);
              }
            }
            else {
              _zip_error_set(&sStack_a8,1,0);
            }
          }
          goto LAB_000b89de;
        }
LAB_000b89e8:
        free(pvVar4);
        if ((int)uVar12 < 0) {
          FUN_000b86c0(param_3,&sStack_a8,0);
          _zip_cdir_free(piVar14);
        }
        else if (piVar14 != (int *)0x0) {
          iVar2 = FUN_000b86f4(param_1,param_3);
          if (iVar2 == 0) {
            _zip_cdir_free(piVar14);
            goto LAB_000b8d66;
          }
          *(int **)(iVar2 + 0x1c) = piVar14;
          *(FILE **)(iVar2 + 4) = __stream;
          pvVar4 = malloc(piVar14[1] * 0x14);
          *(void **)(iVar2 + 0x30) = pvVar4;
          if (pvVar4 == (void *)0x0) {
            FUN_000b86c0(param_3,0,0xe);
            _zip_free(iVar2);
            iVar2 = 0;
            goto LAB_000b88fa;
          }
          if (0 < piVar14[1]) {
            iVar13 = 0;
            do {
              iVar13 = iVar13 + 1;
              _zip_entry_new(iVar2);
            } while (iVar13 < piVar14[1]);
          }
          if (((*(int *)(iVar2 + 4) == 0) || (iVar13 = *(int *)(iVar2 + 0x1c), iVar13 == 0)) ||
             (*(short *)(iVar13 + 0x14) != 0x16)) {
LAB_000b8a5a:
            uVar9 = *(undefined4 *)(iVar2 + 0x14);
          }
          else {
            __s1_01 = *(char **)(iVar13 + 0x10);
            iVar13 = strncmp(__s1_01,(char *)(DAT_000b8dfc + 0xb8ca0),0xe);
            if (iVar13 != 0) goto LAB_000b8a5a;
            memcpy(acStack_38,__s1_01 + 0xe,8);
            local_30 = 0;
            puVar7 = (undefined4 *)__errno();
            *puVar7 = 0;
            uVar8 = strtoul(acStack_38,&local_40,0x10);
            if ((uVar8 != 0xffffffff) || (piVar14 = (int *)__errno(), *piVar14 == 0)) {
              if (((local_40 == (char *)0x0) || (*local_40 == '\0')) &&
                 ((iVar13 = _zip_filerange_crc(*(undefined4 *)(iVar2 + 4),
                                               *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc),
                                               *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8),&local_3c
                                               ,0), -1 < iVar13 && (uVar8 == local_3c)))) {
                uVar12 = *(uint *)(iVar2 + 0x14) | 1;
                *(uint *)(iVar2 + 0x14) = uVar12;
                *(uint *)(iVar2 + 0x18) = uVar12;
                goto LAB_000b88fa;
              }
              goto LAB_000b8a5a;
            }
            uVar9 = *(undefined4 *)(iVar2 + 0x14);
          }
          *(undefined4 *)(iVar2 + 0x18) = uVar9;
          goto LAB_000b88fa;
        }
      }
      else {
        FUN_000b86c0(param_3,0,5);
        free(pvVar4);
      }
    }
  }
  iVar2 = 0;
  fclose(__stream);
LAB_000b88fa:
  if (local_2c != **(int **)(iVar15 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



