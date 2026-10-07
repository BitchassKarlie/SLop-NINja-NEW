/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004022c FUN_0004022c */

/* WARNING: Type propagation algorithm not settling */

void FUN_0004022c(int param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  void *pvVar7;
  int *******pppppppiVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int **ppiVar15;
  int **ppiVar16;
  bool bVar17;
  float fVar18;
  int local_160;
  int local_14c;
  int local_148;
  int local_144;
  undefined4 local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  float local_108;
  float local_104;
  float local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int *local_e8;
  int *******local_e4 [8];
  char local_c4;
  int *******local_c0 [8];
  char local_a0;
  undefined auStack_9c [36];
  undefined auStack_78 [36];
  undefined2 local_54 [16];
  int local_34;
  
  iVar3 = DAT_00040548;
  iVar13 = DAT_00040544 + 0x4023e;
  iVar14 = param_1 + 0x68;
  local_34 = **(int **)(iVar13 + DAT_00040548);
  FUN_000a3a68();
  iVar4 = FUN_00094c30();
  FUN_00017d64(iVar14,*(undefined4 *)(DAT_0004054c + 0x40280));
  iVar10 = *(int *)(param_1 + 0xdc);
  if (iVar10 != 0) {
    local_104 = *(float *)(param_1 + 0xc) +
                *(float *)(DAT_00040550 + 0x4027c) * DAT_00040530 * DAT_00040534;
    local_100 = *(float *)(param_1 + 0x10) +
                *(float *)(DAT_00040550 + 0x40280) * DAT_00040530 * DAT_00040534;
    local_108 = *(float *)(param_1 + 8) +
                *(float *)(DAT_00040550 + 0x40278) * DAT_00040530 * DAT_00040534;
    *(float *)(iVar10 + 8) = local_108;
    *(float *)(iVar10 + 0xc) = local_104;
    *(float *)(iVar10 + 0x10) = local_100;
  }
  iVar10 = DAT_00040890;
  uVar11 = *(uint *)(param_1 + 0xec);
  if (uVar11 < 2) {
    iVar9 = *(int *)(param_1 + 0xe0);
    if (iVar9 != 0) {
LAB_000404a4:
      local_128 = DAT_0004053c;
      *(undefined *)(iVar9 + 0x24) = 1;
      local_128 = *(float *)(param_1 + 0xc) - local_128;
      iVar10 = *(int *)(param_1 + 0xe0);
      local_124 = *(undefined4 *)(param_1 + 0x10);
      local_12c = *(float *)(param_1 + 8) - DAT_00040540;
      *(float *)(iVar10 + 8) = local_12c;
      *(float *)(iVar10 + 0xc) = local_128;
      *(undefined4 *)(iVar10 + 0x10) = local_124;
      uVar11 = *(uint *)(param_1 + 0xec);
      goto LAB_000402c2;
    }
    if (*(char *)(*(int *)(iVar13 + DAT_00040890) + 0x19c) != '\0') goto LAB_000402c2;
    if (iVar4 == 1) {
      if (uVar11 == 0) {
        puVar12 = (undefined4 *)(DAT_000409e8 + 0x409be);
      }
      else {
        puVar12 = (undefined4 *)(DAT_000409ec + 0x40a08);
      }
LAB_0004072c:
      local_e8 = (int *)0x0;
      FUN_00017d64(&local_e8,*puVar12);
      local_ec = 0;
      FUN_00017d64(&local_ec,local_e8);
      local_120 = *(undefined4 *)(DAT_0004089c + 0x40764);
      local_11c = *(undefined4 *)(DAT_0004089c + 0x40768);
      local_118 = *(undefined4 *)(DAT_0004089c + 0x4076c);
      local_130 = 0;
      local_13c = DAT_000408a0 + 0x4078c;
      local_134 = DAT_000408a4 + 0x40792;
      local_138 = param_1;
      FUN_0003c0b0(auStack_78,&local_13c);
      uVar11 = (**(code **)(*local_e8 + 0x14))();
      uVar6 = (**(code **)(*local_e8 + 0x18))();
      local_f4 = DAT_000408a8 + 0x407c6;
      local_f0 = *(undefined4 *)(iVar13 + DAT_000408ac);
      local_110 = (float)(ulonglong)uVar6;
      local_10c = DAT_00040888;
      local_114 = (float)(ulonglong)uVar11;
      FUN_0003c0b0(auStack_9c,&local_f4);
      pvVar7 = operator_new(0x148);
      FUN_000550e8(pvVar7,&local_ec,&local_120,auStack_78,0xffffffff,&local_114,auStack_9c);
      *(void **)(param_1 + 0xe0) = pvVar7;
      FUN_0001d358(auStack_9c);
      iVar9 = DAT_000408b0 + 0x40822;
      local_f4 = iVar9;
      FUN_0001d358(auStack_78);
      local_13c = iVar9;
      FUN_00017d90(&local_ec);
      (**(code **)(**(int **)(param_1 + 0xe0) + 8))();
      FUN_00049d7c(*(undefined4 *)(*(int *)(iVar13 + iVar10) + 0x40),*(undefined4 *)(param_1 + 0xe0)
                   ,0);
      FUN_00017d90(&local_e8);
      iVar9 = *(int *)(param_1 + 0xe0);
      if (iVar9 == 0) {
        uVar11 = *(uint *)(param_1 + 0xec);
        goto LAB_000402c2;
      }
      goto LAB_000404a4;
    }
    if (uVar11 != 0) {
      puVar12 = (undefined4 *)(DAT_00040898 + 0x40770);
      goto LAB_0004072c;
    }
    bVar17 = false;
  }
  else {
LAB_000402c2:
    bVar17 = iVar4 == 1;
    if (uVar11 != 1 && bVar17) {
      FUN_000a3a68();
      iVar10 = FUN_000a5318();
      if (iVar10 == 0) {
        *(undefined4 *)(param_1 + 0xec) = 1;
        FUN_00017d64(iVar14,*(undefined4 *)(DAT_00040568 + 0x404bc));
      }
      uVar11 = *(uint *)(param_1 + 0xec);
    }
  }
  iVar9 = DAT_00040570;
  iVar10 = DAT_00040554;
  switch(uVar11) {
  case 0:
    FUN_00017d64(iVar14,*(undefined4 *)((int)&DAT_00040538 + DAT_00040570 + 2));
    iVar4 = *(int *)(param_1 + 0xe0);
    if (iVar4 == 0) goto LAB_00040462;
    if (bVar17) {
      FUN_00017d64(iVar4 + 0x68,*(undefined4 *)((int)&DAT_00040548 + iVar9 + 2));
      iVar4 = *(int *)(param_1 + 0xe0);
      local_fc = DAT_000409dc + 0x408d2;
      local_f8 = DAT_000409e0 + 0x408d6;
      FUN_0003c0b0(local_c0,&local_fc);
      pppppppiVar8 = (int *******)local_c0;
      if (local_a0 != '\0') {
        pppppppiVar8 = local_c0[0];
      }
      if (pppppppiVar8 != (int *******)0x0) {
        (*(code *)(*pppppppiVar8)[2])(pppppppiVar8,iVar4 + 0x7c);
      }
      FUN_0001d358(local_c0);
      local_fc = DAT_000409e4 + 0x40904;
    }
    else {
      FUN_00017d64(iVar4 + 0x68,0);
    }
    break;
  case 1:
    FUN_00017d64(iVar14,*(undefined4 *)(DAT_00040554 + 0x4032a));
    if (*(int *)(param_1 + 0xe0) != 0) {
      if (bVar17) {
        FUN_000a3a68();
        iVar14 = FUN_000a5274();
        if (iVar14 == 0) {
          FUN_00017d64(*(int *)(param_1 + 0xe0) + 0x68,*(undefined4 *)(iVar10 + 0x40336));
        }
        else {
          FUN_00017d64(*(int *)(param_1 + 0xe0) + 0x68,0);
        }
      }
      else {
        iVar14 = FUN_0006e1b4();
        if (iVar14 == 0) {
          FUN_00017d64(*(int *)(param_1 + 0xe0) + 0x68,*(undefined4 *)(iVar10 + 0x40342));
        }
        else {
          FUN_00017d64(*(int *)(param_1 + 0xe0) + 0x68,0);
        }
      }
      iVar10 = *(int *)(param_1 + 0xe0);
      local_14c = DAT_00040558 + 0x40344;
      local_e4[0] = (int *******)0x0;
      local_140 = 0;
      local_144 = DAT_0004055c + 0x40350;
      local_c4 = '\x01';
      local_148 = param_1;
      (**(code **)(DAT_00040558 + 0x4034c))(&local_14c,local_e4);
      pppppppiVar8 = (int *******)local_e4;
      if (local_c4 != '\0') {
        pppppppiVar8 = local_e4[0];
      }
      if (pppppppiVar8 != (int *******)0x0) {
        (*(code *)(*pppppppiVar8)[2])(pppppppiVar8,iVar10 + 0x7c);
      }
      FUN_0001d358(local_e4);
      local_14c = DAT_00040560 + 0x40388;
    }
    if (bVar17) {
      FUN_000a3a68();
      iVar4 = FUN_000a5318();
    }
    else {
      if (iVar4 != 2) break;
      iVar4 = FUN_0006e1b4();
    }
    if (iVar4 != 0) {
      if (*(char *)(param_1 + 0xcc) != '\0') {
        FUN_000a3a68();
        iVar4 = FUN_00094ca0();
        if (iVar4 == 0) break;
        *(undefined *)(param_1 + 0xcc) = 0;
      }
      iVar4 = DAT_00040564;
      *(undefined4 *)(param_1 + 0xe8) = DAT_00040538;
      *(undefined4 *)(param_1 + 0xec) = 2;
      uVar5 = FUN_00076a80();
      iVar10 = FUN_000773bc(uVar5,*(undefined4 *)(*(int *)(iVar13 + iVar4) + 4),3);
      FUN_000a3a68();
      iVar14 = FUN_00094c30();
      if (iVar10 != 0) {
        if (iVar14 == 1) {
          FUN_000a3a68();
          iVar14 = FUN_000a5890();
          if (iVar14 != 0) {
            iVar14 = FUN_0002f60c(0);
            FUN_000a3a68();
            uVar5 = FUN_000a5890();
            FUN_00076fc8(iVar10,uVar5,iVar14,iVar14 >> 0x1f,1,0);
            goto LAB_00040430;
          }
        }
        else if ((iVar14 == 2) && (iVar14 = FUN_0006e1b4(), iVar14 != 0)) {
          iVar14 = FUN_0002f60c(0);
          uVar5 = FUN_000a3a68();
          FUN_00094f90(uVar5,0,local_54,0x1f);
          if ((char)local_54[0] == '\0') {
            local_54[0] = 0x20;
          }
          FUN_00076fc8(iVar10,local_54,iVar14,iVar14 >> 0x1f,1,0);
LAB_00040430:
          if (*(int *)(param_1 + 0xdc) != 0) {
            FUN_00049d14(*(undefined4 *)(*(int *)(iVar13 + iVar4) + 0x40));
            if (*(int **)(param_1 + 0xdc) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0xdc) + 4))();
              *(undefined4 *)(param_1 + 0xdc) = 0;
            }
          }
        }
      }
    }
    break;
  case 2:
    if (bVar17) {
      FUN_000a3a68();
      iVar4 = FUN_000a5318();
joined_r0x0004090a:
      if (iVar4 == 0) {
        *(undefined4 *)(param_1 + 0xec) = 1;
        break;
      }
    }
    else if (iVar4 == 2) {
      iVar4 = FUN_0006e1b4();
      goto joined_r0x0004090a;
    }
    FUN_00017d64(iVar14,*(undefined4 *)(DAT_0004088c + 0x405b8));
    if (*(int *)(param_1 + 0xdc) != 0) {
      uVar5 = FUN_00076a80();
      iVar4 = FUN_00076898(uVar5,*(undefined4 *)(*(int *)(iVar13 + DAT_00040890) + 4),3);
      param_2 = param_2 + *(float *)(param_1 + 0xe8);
      bVar17 = param_2 < DAT_00040880;
      bVar1 = param_2 == DAT_00040880;
      bVar2 = NAN(DAT_00040880);
      *(float *)(param_1 + 0xe8) = param_2;
      if (bVar1 || bVar17 != (NAN(param_2) || bVar2)) {
        if ((iVar4 != 0) && (*(char *)(iVar4 + 0xe) != '\0')) {
          if (*(char *)(iVar4 + 0xc) != '\0') goto LAB_000406fe;
          if (*(uint *)(iVar4 + 8) < 2) {
            *(undefined4 *)(param_1 + 0xec) = 0;
            break;
          }
          ppiVar16 = (int **)**(int ***)(iVar4 + 4);
          if ((*(int ***)(iVar4 + 4) == ppiVar16) ||
             (ppiVar15 = ppiVar16 + 2, ppiVar15 == (int **)0x0)) {
            iVar10 = 0;
            local_160 = 0;
LAB_000409a0:
            (**(code **)(**(int **)(param_1 + 0xdc) + 0x44))
                      (*(int **)(param_1 + 0xdc),(float)(longlong)iVar10 * DAT_000409d4);
          }
          else {
            iVar10 = 0;
            local_160 = iVar10;
            do {
              pvVar7 = operator_new(0x28c);
              FUN_0003e4b0(pvVar7,ppiVar15,ppiVar15[0x11],ppiVar15[0x12],ppiVar15[0x13],ppiVar15 + 8
                          );
              FUN_0005febc(*(undefined4 *)(param_1 + 0xdc),pvVar7);
              iVar9 = FUN_00076b8c(ppiVar15);
              if (iVar9 != 0) {
                *(undefined *)((int)pvVar7 + 0x60) = 1;
                local_160 = iVar10;
              }
              ppiVar16 = (int **)*ppiVar16;
              iVar10 = iVar10 + 1;
            } while ((ppiVar16 != *(int ***)(iVar4 + 4)) &&
                    (ppiVar15 = ppiVar16 + 2, ppiVar15 != (int **)0x0));
            if (iVar10 < 3) goto LAB_000409a0;
          }
          iVar4 = *(int *)(param_1 + 0xdc);
          local_160 = local_160 + -1;
          fVar18 = DAT_000409d8;
          if (0 < local_160) {
            iVar10 = *(int *)(iVar4 + 0xac) - *(int *)(iVar4 + 0xa8) >> 2;
            if (local_160 < iVar10 + -1) {
              fVar18 = (float)(longlong)-local_160 * DAT_000409d4;
            }
            else {
              fVar18 = (float)(longlong)(1 - iVar10) * DAT_00040884;
            }
          }
          *(float *)(iVar4 + 0xd0) = fVar18;
          *(undefined4 *)(param_1 + 0xec) = 3;
          iVar4 = *(int *)(param_1 + 0xe4) + 1;
          *(int *)(param_1 + 0xe4) = iVar4;
          if (1 < iVar4) {
            *(undefined *)(*(int *)(param_1 + 0xdc) + 0xc2) = 0;
          }
          FUN_00017d64(iVar14,*(undefined4 *)(DAT_00040894 + 0x40700));
        }
      }
      else {
LAB_000406fe:
        *(undefined4 *)(param_1 + 0xec) = 4;
      }
    }
    break;
  case 3:
    if (*(int *)(param_1 + 0xdc) != 0) {
      *(undefined *)(*(int *)(param_1 + 0xdc) + 0x24) = 1;
    }
    break;
  case 4:
    FUN_00017d64(iVar14,*(undefined4 *)(DAT_0004056c + 0x4051a));
    if (*(int *)(param_1 + 0xe0) == 0) goto LAB_00040462;
    FUN_00017d64(*(int *)(param_1 + 0xe0) + 0x68,0);
  }
  iVar4 = *(int *)(param_1 + 0xe0);
  if (iVar4 != 0) {
    iVar10 = *(int *)(iVar4 + 0x68);
    if (iVar10 != 0) {
      iVar10 = 1;
    }
    *(char *)(iVar4 + 0x24) = (char)iVar10;
  }
LAB_00040462:
  if (local_34 == **(int **)(iVar13 + iVar3)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



