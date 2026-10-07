/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00072de4 FUN_00072de4 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00072de4(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 extraout_r1;
  int *piVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  int **ppiVar13;
  int iVar14;
  int **ppiVar15;
  int iVar16;
  char *__s1;
  int iVar17;
  int iVar18;
  bool bVar19;
  int local_118;
  int *local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  char local_f4;
  int local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int local_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined auStack_c4 [4];
  int *local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  char acStack_ac [128];
  int local_2c;
  
  iVar1 = DAT_00073614;
  iVar14 = DAT_00073610 + 0x72df6;
  local_2c = **(int **)(iVar14 + DAT_00073614);
  if (*(int *)(param_1 + 0x14) == 1) {
    __s1 = (char *)(*(int *)(param_1 + 0x20) + 8);
    if ((__s1 == (char *)0x0) || (*(char *)(*(int *)(param_1 + 0x20) + 8) == '\0'))
    goto LAB_00072e1a;
    iVar11 = strcmp(__s1,(char *)(DAT_00073618 + 0x72e46));
    if (iVar11 == 0) {
      uVar2 = FUN_0009a4a0(param_1,DAT_00073648 + 0x72fa2);
      FUN_0006fda0(uVar2,param_2);
      FUN_0009a8bc(param_1,DAT_0007364c + 0x72fb8,param_2 + 0x34);
      FUN_0009a8bc(param_1,DAT_00073650 + 0x72fc8,param_2 + 0xf4);
      FUN_0009a8bc(param_1,DAT_00073658 + 0x72fda,*(int *)(iVar14 + DAT_00073654) + 400);
      pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_0007365c + 0x72fea);
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
        cVar10 = '\0';
      }
      else {
        uVar4 = strcmp(pcVar3,(char *)(DAT_00073680 + 0x731be));
        cVar10 = '\x01' - (char)uVar4;
        if (1 < uVar4) {
          cVar10 = '\0';
        }
      }
      iVar11 = DAT_00073660;
      *(char *)(param_2 + 0x22) = cVar10;
      pcVar3 = (char *)FUN_0009a4a0(param_1,iVar11 + 0x73006);
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
        cVar10 = '\0';
      }
      else {
        uVar4 = strcmp(pcVar3,(char *)(DAT_00073664 + 0x7301e));
        cVar10 = '\x01' - (char)uVar4;
        if (1 < uVar4) {
          cVar10 = '\0';
        }
      }
      iVar11 = DAT_00073668;
      iVar12 = 0;
      *(char *)(param_2 + 0x30) = cVar10;
      *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_2 + 0x34);
      do {
        uVar2 = FUN_0006c788(iVar12);
        FUN_0008f060(acStack_ac,0x19,iVar11 + 0x7303a,uVar2);
        iVar6 = iVar12 + 0xe;
        iVar12 = iVar12 + 1;
        FUN_0009a8bc(param_1,acStack_ac,param_2 + iVar6 * 4);
      } while (iVar12 != 4);
    }
    else {
      iVar11 = strcmp(__s1,(char *)(DAT_0007361c + 0x72e58));
      if (iVar11 == 0) {
        FUN_00072270(param_1,param_2,1);
      }
      else {
        iVar11 = strcmp(__s1,(char *)(DAT_00073620 + 0x72e6a));
        if (iVar11 == 0) {
          FUN_00072270(param_1,param_2,0);
        }
        else {
          iVar11 = strcmp(__s1,(char *)(DAT_00073624 + 0x72e7e));
          if (iVar11 == 0) {
            pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_00073684 + 0x731e4);
            if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
              iVar11 = 0;
            }
            else {
              iVar11 = atoi(pcVar3);
            }
            pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_00073688 + 0x731fa);
            if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
              iVar12 = 0;
            }
            else {
              uVar4 = strcmp(pcVar3,(char *)(DAT_0007368c + 0x7320e));
              iVar12 = 1 - uVar4;
              if (1 < uVar4) {
                iVar12 = 0;
              }
            }
            pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_00073690 + 0x73224);
            if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0' && 0 < iVar11)) {
              iVar16 = FUN_0008f414();
              iVar6 = DAT_00073694;
              if (iVar12 == 0) {
                if (-1 < *(int *)(DAT_00073694 + 0x73468) << 0x1f) {
                  iVar18 = DAT_00073694 + 0x73468;
                  iVar17 = __cxa_guard_acquire(iVar18,pcVar3);
                  if (iVar17 != 0) {
                    uVar2 = FUN_0008f414(DAT_00073714 + 0x735a8,pcVar3);
                    *(undefined4 *)(iVar6 + 0x7346c) = uVar2;
                    uVar2 = FUN_0008f414(DAT_00073718 + 0x735b6);
                    *(undefined4 *)(iVar6 + 0x73470) = uVar2;
                    uVar2 = FUN_0008f414(DAT_0007371c + 0x735c4);
                    *(undefined4 *)(iVar6 + 0x73474) = uVar2;
                    uVar2 = FUN_0008f414(DAT_00073720 + 0x735d2);
                    *(undefined4 *)(iVar6 + 0x73478) = uVar2;
                    uVar2 = FUN_0008f414(DAT_00073724 + 0x735e0);
                    *(undefined4 *)(iVar6 + 0x7347c) = uVar2;
                    uVar2 = FUN_0008f414(DAT_00073728 + 0x735ee);
                    *(undefined4 *)(iVar6 + 0x73480) = uVar2;
                    uVar2 = FUN_0008f414(DAT_0007372c + 0x735fc);
                    *(undefined4 *)(iVar6 + 0x73484) = uVar2;
                    __cxa_guard_release(iVar18);
                  }
                }
                if (iVar16 == *(int *)(DAT_00073698 + 0x7347e)) {
LAB_0007328a:
                  iVar12 = 1;
                }
                else {
                  iVar6 = DAT_00073698 + 0x7347e;
                  do {
                    if (iVar16 == *(int *)(iVar6 + 4)) goto LAB_0007328a;
                    iVar6 = iVar6 + 4;
                  } while (iVar6 != DAT_00073698 + 0x73496);
                }
              }
              FUN_00072d2c(param_2,pcVar3,iVar16,iVar11,iVar12,0);
            }
          }
          else {
            iVar11 = strcmp(__s1,(char *)(DAT_00073628 + 0x72e90));
            if (iVar11 == 0) {
              if ((3 < *(int *)(param_2 + 0x50)) ||
                 (iVar12 = *(int *)(param_2 + 0x1ac), iVar11 = FUN_0006e174(), iVar12 != iVar11))
              goto LAB_00072e1a;
              uVar2 = FUN_0009a4a0(param_1,DAT_0007362c + 0x72eb8);
              FUN_00084684(&local_d0,uVar2);
              local_10c = local_d0;
              uStack_108 = uStack_cc;
              uStack_104 = uStack_c8;
              uVar2 = FUN_0009a4a0(param_1,DAT_00073630 + 0x72ed8);
              FUN_00084684(&local_dc,uVar2);
              local_118 = local_dc;
              local_114 = piStack_d8;
              uStack_110 = uStack_d4;
              uVar2 = FUN_0009a4a0(param_1,DAT_00073634 + 0x72ef6);
              FUN_00084684(&local_e8,uVar2);
              local_100 = local_e8;
              uStack_fc = uStack_e4;
              uStack_f8 = uStack_e0;
              pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_00073638 + 0x72f14);
              if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                strtod(pcVar3,(char **)0x0);
                local_ec = (float)(double)CONCAT44(extraout_r1,pcVar3);
              }
              pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_0007363c + 0x72f38);
              if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
                local_f4 = '\0';
              }
              else {
                uVar4 = strcmp(pcVar3,(char *)(DAT_00073640 + 0x72f50));
                local_f4 = '\x01' - (char)uVar4;
                if (1 < uVar4) {
                  local_f4 = '\0';
                }
              }
              pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_00073644 + 0x72f68);
              if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                local_f0 = atoi(pcVar3);
              }
              iVar11 = *(int *)(param_2 + 0x28);
              piVar5 = (int *)FUN_00030ce0(param_2 + 0x24,&local_118);
              *piVar5 = iVar11;
              piVar5[1] = *(int *)(iVar11 + 4);
              *(int **)(iVar11 + 4) = piVar5;
              *(int **)piVar5[1] = piVar5;
              *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
            }
            else {
              iVar11 = strcmp(__s1,(char *)(DAT_0007367c + 0x73188));
              if (iVar11 == 0) {
                if ((3 < *(int *)(param_2 + 0x50)) ||
                   (iVar12 = *(int *)(param_2 + 0x1ac), iVar11 = FUN_0006e174(), iVar12 != iVar11))
                goto LAB_00072e1a;
                uVar2 = FUN_0007b72c();
                FUN_0007ce4c(uVar2,param_1,*(undefined4 *)(param_2 + 0x50));
              }
              else {
                iVar11 = strcmp(__s1,(char *)(DAT_0007369c + 0x732b4));
                if (iVar11 == 0) {
                  *(undefined *)(*(int *)(iVar14 + DAT_00073654) + 0x89) = 1;
                  ppiVar15 = *(int ***)(param_2 + 0x28);
                  ppiVar8 = (int **)*ppiVar15;
                  while (ppiVar15 != ppiVar8) {
                    if ((int **)*(int **)(param_2 + 0x28) == ppiVar8) {
                      do {
                    /* WARNING: Do nothing block with infinite loop */
                      } while( true );
                    }
                    ppiVar13 = (int **)*ppiVar8;
                    *ppiVar8[1] = (int)ppiVar13;
                    *(int **)((int)*ppiVar8 + 4) = ppiVar8[1];
                    operator_delete(ppiVar8);
                    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + -1;
                    ppiVar8 = ppiVar13;
                  }
                  pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_000736a4 + 0x73334);
                  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                    FUN_0008f414();
                    uVar2 = FUN_0006cb38();
                    *(undefined4 *)(param_2 + 0x50) = uVar2;
                  }
                  if ((3 < *(int *)(param_2 + 0x50)) ||
                     (iVar12 = *(int *)(param_2 + 0x1ac), iVar11 = FUN_0006e174(), iVar12 != iVar11)
                     ) goto LAB_00072e1a;
                  FUN_0009a8bc(param_1,DAT_000736a8 + 0x7336a,param_2 + 0x48);
                  FUN_0009a8bc(param_1,DAT_000736ac + 0x73378,param_2 + 0x4c);
                  pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_000736b0 + 0x73382);
                  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
                    cVar10 = '\0';
                  }
                  else {
                    uVar4 = strcmp(pcVar3,(char *)(DAT_000736b4 + 0x73398));
                    cVar10 = '\x01' - (char)uVar4;
                    if (1 < uVar4) {
                      cVar10 = '\0';
                    }
                  }
                  iVar11 = DAT_000736b8;
                  *(char *)(param_2 + 0x54) = cVar10;
                  FUN_0009a8bc(param_1,iVar11 + 0x733b2,param_2 + 0x5c);
                  FUN_0009a8bc(param_1,DAT_000736bc + 0x733c0,param_2 + 0x58);
                  FUN_0006fe84(param_1,DAT_000736c0 + 0x733ce,param_2 + 0xf0);
                  FUN_0006fe84(param_1,DAT_000736c4 + 0x733dc,param_2 + 0x130);
                  pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_000736c8 + 0x733e6);
                  *(undefined4 *)(param_2 + 0x60) = 0;
                  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                    bVar19 = true;
                    while( true ) {
                      if (bVar19) {
                        iVar12 = *(int *)(param_2 + 0x60);
                        iVar11 = atoi(pcVar3);
                        *(int *)(param_2 + iVar12 * 4 + 100) = iVar11;
                        *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
                      }
                      cVar10 = *pcVar3;
                      if ((pcVar3 == (char *)0xffffffff) || (pcVar3 = pcVar3 + 1, *pcVar3 == '\0'))
                      break;
                      bVar19 = cVar10 == ',';
                    }
                  }
                  pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_000736cc + 0x7342c);
                  *(undefined4 *)(param_2 + 0x1b0) = 0;
                  if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
                    bVar19 = true;
                    while( true ) {
                      if (bVar19) {
                        iVar12 = *(int *)(param_2 + 0x1b0);
                        iVar11 = atoi(pcVar3);
                        *(int *)(param_2 + iVar12 * 4 + 0x1b4) = iVar11;
                        *(int *)(param_2 + 0x1b0) = *(int *)(param_2 + 0x1b0) + 1;
                      }
                      cVar10 = *pcVar3;
                      if ((pcVar3 == (char *)0xffffffff) || (pcVar3 = pcVar3 + 1, *pcVar3 == '\0'))
                      break;
                      bVar19 = cVar10 == ',';
                    }
                  }
                  FUN_0009a8bc(param_1,DAT_000736d0 + 0x73480,param_2 + 0x104);
                  FUN_0009a8bc(param_1,DAT_000736d4 + 0x7348e,param_2 + 0x100);
                  FUN_0009a8bc(param_1,DAT_000736d8 + 0x7349c,param_2 + 0x108);
                  FUN_0009a8bc(param_1,DAT_000736dc + 0x734aa,param_2 + 0x10c);
                  pcVar3 = (char *)FUN_0009a4a0(param_1,DAT_000736e0 + 0x734b4);
                  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
                    cVar10 = '\0';
                  }
                  else {
                    uVar4 = strcmp(pcVar3,(char *)(DAT_000736e4 + 0x734c6));
                    cVar10 = '\x01' - (char)uVar4;
                    if (1 < uVar4) {
                      cVar10 = '\0';
                    }
                  }
                  iVar11 = DAT_000736e8;
                  *(char *)(param_2 + 0x110) = cVar10;
                  pcVar3 = (char *)FUN_0009a4a0(param_1,iVar11 + 0x734dc);
                  if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
                    cVar10 = '\0';
                  }
                  else {
                    uVar4 = strcmp(pcVar3,(char *)(DAT_000736ec + 0x734ee));
                    cVar10 = '\x01' - (char)uVar4;
                    if (1 < uVar4) {
                      cVar10 = '\0';
                    }
                  }
                  iVar11 = DAT_000736f0;
                  *(char *)(param_2 + 0x111) = cVar10;
                  FUN_0009a8bc(param_1,iVar11 + 0x73508,param_2 + 0xf8);
                  FUN_0006fe84(param_1,DAT_000736f4 + 0x73518,param_2 + 0xfc);
                  FUN_0006fe84(param_1,DAT_000736f8 + 0x73526,param_2 + 0x114);
                  FUN_0006fe84(param_1,DAT_000736fc + 0x73534,param_2 + 0x118);
                  FUN_0006fe84(param_1,DAT_00073700 + 0x73542,param_2 + 0x11c);
                  FUN_0006fe84(param_1,DAT_00073704 + 0x73550,param_2 + 0x120);
                  FUN_0006fe84(param_1,DAT_00073708 + 0x7355e,param_2 + 0xe4);
                  FUN_0006fe84(param_1,DAT_0007370c + 0x7356c,param_2 + 0xe8);
                  FUN_0006fe84(param_1,DAT_00073710 + 0x7357a,param_2 + 0xec);
                }
                else {
                  iVar11 = strcmp(__s1,(char *)(DAT_000736a0 + 0x732c0));
                  if (iVar11 == 0) {
                    if ((*(int *)(param_2 + 0x50) < 4) &&
                       (iVar12 = *(int *)(param_2 + 0x1ac), iVar11 = FUN_0006e174(),
                       iVar12 == iVar11)) {
                      FUN_000703d0(param_1,param_2);
                    }
                    goto LAB_00072e1a;
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar11 = 0;
    iVar12 = DAT_0007366c + 0x7307a;
    do {
      uVar2 = FUN_0006c788(iVar11);
      FUN_0008f060(acStack_ac,0x80,iVar12,uVar2);
      iVar6 = strcmp(__s1,acStack_ac);
      if (iVar6 == 0) {
        iVar6 = DAT_00073670 + 0x730ae;
        iVar12 = FUN_0009a5d8(param_1,iVar6);
        if (iVar12 == 0) goto LAB_00072e1a;
        iVar18 = param_2 + iVar11 * 0x10 + 0x16c;
        iVar16 = DAT_00073674 + 0x730de;
        iVar17 = DAT_00073678 + 0x730e6;
        goto LAB_000730fa;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 4);
  }
  for (iVar11 = *(int *)(param_1 + 0x18); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x28)) {
    FUN_00072de4(iVar11,param_2);
  }
  goto LAB_00072e1a;
LAB_000730fa:
  do {
    local_b0 = -1;
    local_b4 = -1;
    FUN_0009a8bc(iVar12,iVar16,&local_b0);
    FUN_0009a8bc(iVar12,iVar17,&local_b4);
    piVar5 = *(int **)(param_2 + iVar11 * 0x10 + 0x170);
    if (piVar5 == (int *)0x0) {
LAB_0007315c:
      local_bc = local_b0;
      local_b8 = 0;
      local_118 = iVar18;
      local_114 = piVar5;
      FUN_00071c04(auStack_c4,iVar18,iVar18,piVar5,&local_bc);
      piVar7 = local_c0;
    }
    else {
      piVar7 = (int *)0x0;
      do {
        if (*piVar5 < local_b0) {
          piVar9 = (int *)piVar5[4];
        }
        else {
          piVar9 = (int *)piVar5[3];
          piVar7 = piVar5;
        }
        piVar5 = piVar9;
      } while (piVar9 != (int *)0x0);
      piVar5 = piVar7;
      if ((piVar7 == (int *)0x0) || (local_b0 < *piVar7)) goto LAB_0007315c;
    }
    piVar7[1] = local_b4;
    iVar12 = FUN_0009a4f0(iVar12,iVar6);
  } while (iVar12 != 0);
LAB_00072e1a:
  if (local_2c == **(int **)(iVar14 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



