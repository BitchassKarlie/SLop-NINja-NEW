/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00038668 FUN_00038668 */

void FUN_00038668(int param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int **ppiVar13;
  int ****ppppiVar14;
  int *piVar15;
  int **ppiVar16;
  int iVar17;
  int *extraout_s12;
  int *piVar18;
  int *extraout_s13;
  int *piVar19;
  float fVar20;
  undefined4 *local_100;
  int local_e8;
  int **local_e4;
  int local_e0;
  int ****local_dc;
  int local_d8;
  int **local_d4;
  int local_d0;
  undefined4 local_cc;
  int *local_c8;
  int *local_c4;
  undefined4 local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *local_b0;
  int *local_ac;
  int *local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int ****local_98 [8];
  char local_78;
  undefined4 local_74 [8];
  undefined local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar4 = DAT_000389f0;
  iVar3 = DAT_000389ec;
  iVar2 = DAT_000389e8;
  iVar17 = DAT_000389e4 + 0x38678;
  local_2c = **(int **)(iVar17 + DAT_000389e8);
  ppiVar13 = *(int ***)(param_1 + 0x74);
  ppiVar16 = (int **)*ppiVar13;
  if (ppiVar13 != ppiVar16) {
    iVar7 = DAT_000389ec + 0x386a0;
    iVar8 = DAT_000389f4 + 0x386b0;
    iVar9 = DAT_000389f0 + 0x386ae;
    iVar10 = DAT_000389f8 + 0x386be;
    do {
      if (ppiVar16[3] == (int *)0x0) {
        ppiVar5 = ppiVar16 + 5;
        if (*(char *)(ppiVar16 + 0xd) != '\0') {
          ppiVar5 = (int **)ppiVar16[5];
        }
        if (ppiVar5 != (int **)0x0) {
          iVar6 = (*(code *)(*ppiVar5)[3])(ppiVar5,param_2);
          if (iVar6 != 0) {
            local_9c = 0;
            FUN_00017d64(&local_9c,ppiVar16[4]);
            local_b0 = ppiVar16[0x29];
            local_ac = ppiVar16[0x2a];
            local_a8 = ppiVar16[0x2b];
            local_30 = 1;
            local_50[0] = 0;
            ppiVar13 = ppiVar16 + 0x17;
            if (*(char *)(ppiVar16 + 0x1f) != '\0') {
              ppiVar13 = (int **)ppiVar16[0x17];
            }
            if (ppiVar13 != (int **)0x0) {
              (*(code *)(*ppiVar13)[2])(ppiVar13,local_50);
            }
            local_100 = local_50;
            local_bc = ppiVar16[0x2c];
            local_b8 = ppiVar16[0x2d];
            local_b4 = ppiVar16[0x2e];
            local_a0 = *(undefined4 *)(iVar17 + DAT_00038a0c);
            local_54 = 1;
            local_74[0] = 0;
            local_a4 = iVar7;
            (**(code **)(iVar3 + 0x386a8))(&local_a4,local_74);
            piVar11 = (int *)operator_new(0x148);
            FUN_000550e8(piVar11,&local_9c,&local_b0,local_100,ppiVar16[2],&local_bc,local_74);
            ppiVar16[3] = piVar11;
            FUN_0001d358(local_74);
            local_a4 = iVar8;
            FUN_0001d358(local_100);
            FUN_00017d90(&local_9c);
            piVar11 = ppiVar16[0x2e];
            if ((float)piVar11 != 0.0) {
              piVar15 = ppiVar16[3];
              piVar15[0x44] = (int)((float)piVar15[0x44] * (float)piVar11);
              piVar15[0x45] = (int)((float)piVar15[0x45] * (float)piVar11);
              piVar15[0x46] = (int)((float)piVar15[0x46] * (float)piVar11);
            }
            piVar11 = ppiVar16[3];
            piVar15 = ppiVar16[0x2f];
            piVar11[0x44] = (int)((float)piVar11[0x44] * (float)piVar15);
            piVar11[0x45] = (int)((float)piVar11[0x45] * (float)piVar15);
            piVar11[0x46] = (int)((float)piVar11[0x46] * (float)piVar15);
            local_cc = 0;
            local_d0 = DAT_00038a10 + 0x388e2;
            local_d8 = iVar9;
            local_d4 = ppiVar16 + 2;
            (**(code **)(iVar4 + 0x386b6))(&local_d8,ppiVar16[3] + 0xb);
            piVar11 = ppiVar16[3];
            iVar6 = piVar11[0x48];
            local_d8 = iVar10;
            if (iVar6 != 0) {
              piVar11 = ppiVar16[0x2f];
              *(float *)(iVar6 + 0x28) = *(float *)(iVar6 + 0x28) * (float)piVar11;
              *(float *)(iVar6 + 0x2c) = *(float *)(iVar6 + 0x2c) * (float)piVar11;
              *(float *)(iVar6 + 0x30) = *(float *)(iVar6 + 0x30) * (float)piVar11;
              piVar11 = ppiVar16[3];
              piVar15 = piVar11 + 0x48;
              if ((*(char *)(*piVar15 + 0x35) == '\0') && ((float)ppiVar16[0x32] != 0.0)) {
                local_c8 = ppiVar16[0x30];
                iVar6 = (uint)((float)local_c8 < 0.0) << 0x1f;
                local_c4 = ppiVar16[0x31];
                iVar12 = (uint)((float)local_c4 < 0.0) << 0x1f;
                piVar18 = extraout_s12;
                if (-1 < iVar6) {
                  piVar18 = local_c8;
                }
                if (iVar6 < 0) {
                  piVar18 = (int *)-(float)local_c8;
                }
                piVar19 = extraout_s13;
                if (-1 < iVar12) {
                  piVar19 = local_c4;
                }
                if (iVar12 < 0) {
                  piVar19 = (int *)-(float)local_c4;
                }
                local_c0 = DAT_000389e0;
                fVar20 = (float)piVar18 + (float)piVar19;
                if (fVar20 == 0.0 || fVar20 < 0.0 != NAN(fVar20)) {
                  piVar11 = (int *)0x0;
                }
                if (fVar20 != 0.0 && fVar20 < 0.0 == NAN(fVar20)) {
                  piVar11 = (int *)0x1;
                }
                FUN_00025114(*piVar15,piVar11,&local_c8);
                piVar11 = ppiVar16[3];
              }
            }
            iVar6 = *(int *)(iVar17 + DAT_00038a14);
            FUN_00049d7c(*(undefined4 *)(iVar6 + 0x40),piVar11,0);
            if (-1 < (int)ppiVar16[2]) {
              FUN_000671a8(*(undefined4 *)(iVar6 + 0x16c),ppiVar16[3]);
            }
            ppiVar13 = ppiVar16 + 0xe;
            if (*(char *)(ppiVar16 + 0x16) != '\0') {
              ppiVar13 = (int **)ppiVar16[0xe];
            }
            if (ppiVar13 != (int **)0x0) {
              (*(code *)(*ppiVar13)[3])(ppiVar13,ppiVar16[3],0xbf800000);
              ppiVar13 = *(int ***)(param_1 + 0x74);
              goto LAB_0003875c;
            }
          }
LAB_0003877e:
          ppiVar13 = *(int ***)(param_1 + 0x74);
        }
      }
      else {
        ppiVar5 = ppiVar16 + 0xe;
        if (*(char *)(ppiVar16 + 0x16) != '\0') {
          ppiVar5 = (int **)ppiVar16[0xe];
        }
        if (ppiVar5 != (int **)0x0) {
          iVar6 = (*(code *)(*ppiVar5)[3])(ppiVar5,ppiVar16[3],param_2);
          if (iVar6 == 0) goto LAB_0003877e;
          piVar11 = ppiVar16[3];
          if (piVar11[0x48] != 0) {
            bVar1 = *(byte *)(piVar11[0x48] + 0x35);
            ppppiVar14 = (int ****)(uint)bVar1;
            if (ppppiVar14 == (int ****)0x0) {
              *(undefined *)(piVar11 + 0x2d) = 1;
              *(byte *)((int)ppiVar16[3] + 0x10f) = bVar1;
              piVar11 = ppiVar16[3];
              iVar6 = *(int *)(DAT_000389fc + 0x3870a);
              iVar12 = *(int *)(DAT_000389fc + 0x3870e);
              piVar11[0x31] = *(int *)(DAT_000389fc + 0x38706);
              piVar11[0x32] = iVar6;
              piVar11[0x33] = iVar12;
              piVar11 = ppiVar16[3];
              local_e8 = DAT_00038a00 + 0x38722;
              local_e0 = DAT_00038a04 + 0x3872a;
              local_78 = '\x01';
              local_e4 = ppiVar16 + 2;
              local_dc = ppppiVar14;
              local_98[0] = ppppiVar14;
              (**(code **)(DAT_00038a00 + 0x3872a))(&local_e8,local_98);
              ppppiVar14 = (int ****)local_98;
              if (local_78 != '\0') {
                ppppiVar14 = local_98[0];
              }
              if (ppppiVar14 != (int ****)0x0) {
                (*(code *)(*ppppiVar14)[2])(ppppiVar14,piVar11 + 0x1f);
              }
              FUN_0001d358(local_98);
              local_e8 = DAT_00038a08 + 0x38760;
              ppiVar13 = *(int ***)(param_1 + 0x74);
              goto LAB_0003875c;
            }
          }
          *(undefined *)((int)piVar11 + 0x27) = 1;
          goto LAB_0003877e;
        }
      }
LAB_0003875c:
      ppiVar16 = (int **)*ppiVar16;
    } while (ppiVar16 != ppiVar13);
  }
  if (local_2c != **(int **)(iVar17 + iVar2)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



