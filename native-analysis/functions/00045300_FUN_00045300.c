/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00045300 FUN_00045300 */

void FUN_00045300(int param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int ******ppppppiVar11;
  int *piVar12;
  int *piVar13;
  float fVar14;
  float fVar15;
  undefined *local_18c;
  int local_17c;
  int local_178;
  int local_174;
  int ******local_170;
  int local_16c;
  int local_168;
  int local_164;
  int ******local_160;
  int local_15c;
  int local_158;
  int local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined4 local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  int ******local_e8 [8];
  char local_c8;
  undefined auStack_c4 [36];
  undefined auStack_a0 [36];
  undefined auStack_7c [36];
  undefined auStack_58 [36];
  int local_34;
  
  iVar2 = DAT_00045664;
  iVar10 = DAT_00045660 + 0x45316;
  local_34 = **(int **)(iVar10 + DAT_00045664);
  iVar3 = FUN_0006e1b4();
  iVar9 = DAT_00045668;
  if ((iVar3 == 0) && (*(char *)(*(int *)(*(int *)(iVar10 + DAT_00045668) + 0x50) + 0x30) == '\0'))
  {
    cVar6 = *(char *)(*(int *)(iVar10 + DAT_00045668) + 0x19c);
  }
  else {
    cVar6 = *(char *)(*(int *)(iVar10 + DAT_00045668) + 0x19c);
    if (cVar6 == '\0') {
      fVar15 = param_2 / DAT_00045640 + *(float *)(param_1 + 0xbc);
      if ((int)((uint)(fVar15 < DAT_00045644) << 0x1f) < 0) {
        *(float *)(param_1 + 0xbc) = fVar15;
        if (fVar15 == 0.0 || fVar15 < 0.0 != NAN(fVar15)) goto LAB_0004537e;
      }
      else {
        *(float *)(param_1 + 0xbc) = DAT_00045644;
      }
      if (*(int *)(param_1 + 0xc0) == 0) {
        if (iVar3 == 0) {
          piVar13 = &local_f0;
          local_f0 = iVar3;
          FUN_00017d64(piVar13,*(undefined4 *)(DAT_00045804 + 0x45702));
          local_124 = DAT_000457f0;
          local_120 = DAT_000457f4;
          local_11c = DAT_000457f0;
          if (*(char *)(param_1 + 0xb4) == '\0') {
            local_124 = *(float *)(DAT_0004582c + 0x457e0);
            local_120 = *(float *)(DAT_0004582c + 0x457e4);
            local_11c = *(float *)(DAT_0004582c + 0x457e8);
          }
          local_124 = local_124 + DAT_000457f8;
          piVar12 = &local_15c;
          local_18c = auStack_a0;
          local_15c = DAT_00045808 + 0x456f4;
          local_150 = 0;
          local_154 = DAT_0004580c + 0x45702;
          local_120 = local_120 - DAT_000457fc;
          local_11c = local_11c + DAT_000457f0;
          local_158 = param_1;
          FUN_0003c0b0(local_18c,piVar12);
          uVar5 = FUN_00022674(DAT_00045810 + 0x45734,0);
          local_130 = *(undefined4 *)(DAT_00045814 + 0x4573e);
          local_12c = *(undefined4 *)(DAT_00045814 + 0x45742);
          local_128 = *(undefined4 *)(DAT_00045814 + 0x45746);
          local_100 = DAT_00045818 + 0x45764;
          local_fc = *(undefined4 *)(iVar10 + DAT_0004581c);
          FUN_0003c0b0(auStack_c4,&local_100);
          piVar4 = (int *)operator_new(0x148);
          FUN_000550e8(piVar4,piVar13,&local_124,local_18c,uVar5,&local_130,auStack_c4);
          iVar3 = DAT_00045820;
          FUN_0001d358(auStack_c4);
          iVar3 = iVar3 + 0x457aa;
          local_100 = iVar3;
        }
        else {
          piVar13 = &local_ec;
          local_ec = *(int *)(param_1 + 0xc0);
          FUN_00017d64(piVar13,*(undefined4 *)(DAT_00045670 + 0x45446));
          local_10c = DAT_00045648;
          local_108 = DAT_0004564c;
          local_104 = DAT_00045648;
          if (*(char *)(param_1 + 0xb4) == '\0') {
            local_10c = *(float *)(DAT_00045828 + 0x457ce);
            local_108 = *(float *)(DAT_00045828 + 0x457d2);
            local_104 = *(float *)(DAT_00045828 + 0x457d6);
          }
          local_10c = local_10c + DAT_00045650;
          piVar12 = &local_14c;
          local_18c = auStack_58;
          local_14c = DAT_00045674 + 0x45436;
          local_140 = 0;
          local_144 = DAT_00045678 + 0x45444;
          local_108 = local_108 - DAT_00045654;
          local_104 = local_104 + DAT_00045648;
          local_148 = param_1;
          FUN_0003c0b0(local_18c,piVar12);
          uVar5 = FUN_00022674(DAT_0004567c + 0x45476,0);
          local_118 = *(undefined4 *)(DAT_00045680 + 0x45480);
          local_114 = *(undefined4 *)(DAT_00045680 + 0x45484);
          local_110 = *(undefined4 *)(DAT_00045680 + 0x45488);
          local_f8 = DAT_00045684 + 0x454a4;
          local_f4 = *(undefined4 *)(iVar10 + DAT_00045688);
          FUN_0003c0b0(auStack_7c,&local_f8);
          piVar4 = (int *)operator_new(0x148);
          FUN_000550e8(piVar4,piVar13,&local_10c,local_18c,uVar5,&local_118,auStack_7c);
          iVar3 = DAT_0004568c;
          FUN_0001d358(auStack_7c);
          iVar3 = iVar3 + 0x454e8;
          local_f8 = iVar3;
        }
        FUN_0001d358(local_18c);
        *piVar12 = iVar3;
        FUN_00017d90(piVar13);
        (**(code **)(*piVar4 + 8))(piVar4);
        fVar14 = DAT_00045800;
        fVar15 = DAT_00045658;
        if (*(char *)(param_1 + 0xb4) == '\0') {
          iVar3 = *(int *)((int)&DAT_00045814 + DAT_00045824);
          iVar8 = *(int *)((int)&DAT_00045818 + DAT_00045824);
          piVar4[0x44] = *(int *)((int)&DAT_00045810 + DAT_00045824);
          piVar4[0x45] = iVar3;
          piVar4[0x46] = iVar8;
          iVar3 = piVar4[0x48];
          fVar15 = *(float *)(iVar3 + 0x28);
        }
        else {
          iVar3 = piVar4[0x48];
          piVar4[0x44] = (int)((float)piVar4[0x44] * DAT_00045658);
          piVar4[0x45] = (int)((float)piVar4[0x45] * fVar15);
          piVar4[0x46] = (int)((float)piVar4[0x46] * fVar15);
          fVar15 = *(float *)(iVar3 + 0x28);
          fVar14 = DAT_0004565c;
        }
        *(float *)(iVar3 + 0x28) = fVar15 * fVar14;
        *(float *)(iVar3 + 0x2c) = *(float *)(iVar3 + 0x2c) * fVar14;
        *(float *)(iVar3 + 0x30) = *(float *)(iVar3 + 0x30) * fVar14;
        FUN_00049d7c(*(undefined4 *)(*(int *)(iVar10 + iVar9) + 0x40),piVar4,0);
        local_13c = DAT_00045648;
        local_138 = DAT_00045644;
        local_134 = DAT_00045648;
        FUN_00025114(piVar4[0x48],1);
        *(int **)(param_1 + 0xc0) = piVar4;
      }
      goto LAB_0004537e;
    }
  }
  param_2 = param_2 / DAT_00045638;
  *(char *)(DAT_0004566c + 0x45356) = cVar6;
  fVar15 = DAT_0004563c;
  param_2 = param_2 + *(float *)(param_1 + 0xbc);
  if (param_2 == DAT_0004563c || param_2 < DAT_0004563c != (NAN(param_2) || NAN(DAT_0004563c))) {
    param_2 = DAT_0004563c;
  }
  *(float *)(param_1 + 0xbc) = param_2;
  if ((*(int *)(param_1 + 0xc0) != 0) &&
     (iVar9 = *(int *)(*(int *)(param_1 + 0xc0) + 0x120), iVar9 != 0)) {
    bVar1 = *(byte *)(iVar9 + 0xb4);
    ppppppiVar11 = (int ******)(uint)bVar1;
    if ((ppppppiVar11 == (int ******)0x0) &&
       (fVar14 = *(float *)(iVar9 + 0x6c),
       fVar14 == fVar15 || fVar14 < fVar15 != (NAN(fVar14) || NAN(fVar15)))) {
      *(undefined *)(iVar9 + 0xb4) = 1;
      iVar9 = DAT_00045690;
      *(byte *)(*(int *)(param_1 + 0xc0) + 0x10f) = bVar1;
      uVar5 = *(undefined4 *)(iVar9 + 0x455b2);
      uVar7 = *(undefined4 *)(iVar9 + 0x455b6);
      iVar3 = *(int *)(*(int *)(param_1 + 0xc0) + 0x120);
      *(undefined4 *)(iVar3 + 0xc4) = *(undefined4 *)(iVar9 + 0x455ae);
      *(undefined4 *)(iVar3 + 200) = uVar5;
      *(undefined4 *)(iVar3 + 0xcc) = uVar7;
      local_16c = DAT_00045694 + 0x455d0;
      local_164 = DAT_00045698 + 0x455de;
      local_168 = param_1;
      local_160 = ppppppiVar11;
      (**(code **)(DAT_00045694 + 0x455d8))(&local_16c,*(int *)(param_1 + 0xc0) + 0x2c);
      local_16c = DAT_0004569c + 0x455f4;
      iVar9 = *(int *)(param_1 + 0xc0);
      local_17c = DAT_000456a0 + 0x45602;
      local_174 = DAT_000456a4 + 0x45610;
      local_c8 = '\x01';
      local_178 = param_1;
      local_170 = ppppppiVar11;
      local_e8[0] = ppppppiVar11;
      (**(code **)(DAT_000456a0 + 0x4560a))(&local_17c,local_e8);
      ppppppiVar11 = (int ******)local_e8;
      if (local_c8 != '\0') {
        ppppppiVar11 = local_e8[0];
      }
      if (ppppppiVar11 != (int ******)0x0) {
        (*(code *)(*ppppppiVar11)[2])(ppppppiVar11,iVar9 + 0x7c);
      }
      FUN_0001d358(local_e8);
    }
  }
LAB_0004537e:
  if (local_34 == **(int **)(iVar10 + iVar2)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(1);
}



