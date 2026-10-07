/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 0004c104 FUN_0004c104 */

void FUN_0004c104(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  uint local_148;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  int local_f8;
  int *local_f4;
  int local_f0;
  undefined4 local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined local_88;
  undefined local_87;
  undefined local_86;
  undefined local_85;
  undefined local_84;
  undefined local_83;
  undefined local_82;
  undefined local_81;
  undefined auStack_80 [4];
  undefined4 local_7c;
  int local_78;
  undefined4 local_74 [8];
  undefined local_54;
  undefined4 local_50 [8];
  undefined local_30;
  int local_2c;
  
  iVar5 = DAT_0004c584;
  iVar4 = DAT_0004c580;
  iVar3 = DAT_0004c57c;
  iVar13 = DAT_0004c578 + 0x4c116;
  local_2c = **(int **)(iVar13 + DAT_0004c57c);
  piVar12 = (int *)**(int **)(param_1 + 0xb4);
  if (*(int **)(param_1 + 0xb4) != piVar12) {
    iVar9 = DAT_0004c580 + 0x4c144;
    iVar15 = DAT_0004c584 + 0x4c152;
    iVar10 = DAT_0004c588 + 0x4c15a;
    do {
      iVar14 = piVar12[4];
      if (iVar14 == 0) {
        iVar6 = FUN_0008f638(piVar12[3],*(undefined *)(piVar12 + 5),0);
        puVar7 = (undefined4 *)(param_1 + 0xbc);
        if (*(char *)(piVar12 + 5) == ' ') {
          puVar7 = (undefined4 *)(param_1 + 0xc0);
        }
        local_78 = iVar14;
        FUN_00017d64(&local_78,*puVar7);
        if (*(char *)(piVar12 + 5) == ':') {
          FUN_00017d64(&local_78,*(undefined4 *)(param_1 + 0xc4));
        }
        local_7c = 0;
        FUN_00017d64(&local_7c,local_78);
        local_9c = *(float *)(param_1 + 0xc) + (float)piVar12[7];
        local_98 = *(float *)(param_1 + 0x10) + (float)piVar12[8];
        local_f4 = piVar12 + 2;
        local_f0 = DAT_0004c58c + 0x4c242;
        local_30 = 1;
        local_ec = 0;
        local_50[0] = 0;
        local_a0 = *(float *)(param_1 + 8) + (float)piVar12[6];
        local_f8 = iVar9;
        (**(code **)(iVar4 + 0x4c14c))(&local_f8,local_50);
        local_ac = piVar12[9];
        local_90 = *(undefined4 *)(iVar13 + DAT_0004c590);
        local_a8 = piVar12[10];
        local_a4 = piVar12[0xb];
        local_74[0] = 0;
        local_54 = 1;
        local_94 = iVar15;
        (**(code **)(iVar5 + 0x4c15a))(&local_94,local_74);
        pvVar8 = operator_new(0x148);
        FUN_000550e8(pvVar8,&local_7c,&local_a0,local_50,0xffffffff,&local_ac,local_74);
        piVar12[4] = (int)pvVar8;
        FUN_0001d358(local_74);
        local_94 = iVar10;
        FUN_0001d358(local_50);
        local_f8 = iVar10;
        FUN_00017d90(&local_7c);
        uVar2 = DAT_0004c560;
        iVar14 = piVar12[4];
        *(undefined4 *)(iVar14 + 0x138) = DAT_0004c560;
        *(undefined4 *)(iVar14 + 0x13c) = uVar2;
        fVar18 = DAT_0004c564;
        *(undefined *)(piVar12[4] + 0x10d) = 0;
        *(float *)(piVar12[4] + 0x10) = fVar18;
        *(undefined4 *)(piVar12[4] + 0x28) = *(undefined4 *)(param_1 + 0x28);
        *(undefined *)(piVar12[4] + 0x26) = 1;
        iVar14 = piVar12[4];
        puVar11 = *(uint **)(iVar13 + DAT_0004c594);
        lVar1 = (ulonglong)*puVar11 * (ulonglong)puVar11[2];
        local_148 = (uint)lVar1;
        uVar16 = puVar11[5] +
                 puVar11[2] * puVar11[1] + *puVar11 * puVar11[3] + (int)((ulonglong)lVar1 >> 0x20) +
                 (uint)CARRY4(puVar11[4],local_148);
        *puVar11 = puVar11[4] + local_148;
        puVar11[1] = uVar16;
        fVar18 = ((float)(ulonglong)((uVar16 >> 0xd) - (uint)(uVar16 * 0x80000 < uVar16)) /
                 DAT_0004c568) * fVar18 - DAT_0004c56c;
        *(float *)(iVar14 + 0x20) = fVar18;
        bVar17 = *(int *)(param_1 + 0xbc) == local_78;
        iVar14 = local_78;
        if (bVar17) {
          iVar14 = piVar12[4];
          fVar18 = DAT_0004c570;
        }
        if (bVar17) {
          fVar18 = *(float *)(iVar14 + 0x20) / fVar18;
        }
        if (bVar17) {
          *(float *)(iVar14 + 0x20) = fVar18;
        }
        iVar14 = piVar12[4];
        *(undefined *)(iVar14 + 0x53) = 0x96;
        *(undefined *)(iVar14 + 0x52) = 0x8a;
        *(undefined *)(iVar14 + 0x51) = 0x37;
        *(undefined *)(iVar14 + 0x50) = 4;
        FUN_00049d7c(*(undefined4 *)(*(int *)(iVar13 + DAT_0004c598) + 0x40),piVar12[4],0);
        if (*(char *)(piVar12 + 5) == ':') {
          FUN_0002fa48(auStack_80,DAT_0004c59c + 0x4c4e6);
          local_b8 = DAT_0004c560;
          local_b4 = DAT_0004c560;
          local_b0 = DAT_0004c564;
          local_c4 = piVar12[9];
          local_c0 = piVar12[10];
          local_bc = piVar12[0xb];
          local_81 = 0xff;
          local_82 = 0xff;
          local_83 = 0xf4;
          local_84 = 0xd0;
          FUN_00053c44(piVar12[4],auStack_80,0,*(undefined4 *)(piVar12[4] + 0x20),DAT_0004c560,
                       &local_b8,&local_c4,&local_84,0);
          FUN_00017d90(auStack_80);
        }
        if ((iVar6 != 0) && (*(int *)(param_1 + 0xbc) == local_78)) {
          iVar14 = piVar12[3];
          local_108 = *(float *)(iVar6 + 4);
          local_104 = *(float *)(iVar6 + 8);
          local_100 = local_108 +
                      (*(float *)(iVar14 + 0x424) / (float)(longlong)*(int *)(iVar14 + 0x41c)) *
                      *(float *)(iVar6 + 0xc);
          local_fc = local_104 +
                     (*(float *)(iVar14 + 0x424) / (float)(longlong)*(int *)(iVar14 + 0x420)) *
                     *(float *)(iVar6 + 0x10);
          local_8c = 0;
          FUN_0004c0d8(&local_8c,
                       *(undefined4 *)
                        (*(int *)(piVar12[3] + 0x408) + (uint)*(byte *)(iVar6 + 0x20) * 8 + 4));
          local_85 = 0xff;
          local_c8 = DAT_0004c564;
          local_86 = 0xff;
          local_87 = 0xf4;
          local_88 = 0xd0;
          local_d0 = DAT_0004c560;
          local_cc = DAT_0004c560;
          local_dc = DAT_0004c560;
          local_d8 = DAT_0004c560;
          local_d4 = DAT_0004c574;
          FUN_00053c44(piVar12[4],&local_8c,&local_108,*(undefined4 *)(piVar12[4] + 0x20),
                       DAT_0004c560,&local_d0,&local_dc,&local_88,0);
          FUN_00017d90(&local_8c);
        }
        FUN_00017d90(&local_78);
      }
      else {
        local_e4 = *(float *)(param_1 + 0xc) + (float)piVar12[7];
        local_e0 = *(float *)(param_1 + 0x10) + (float)piVar12[8];
        local_e8 = *(float *)(param_1 + 8) + (float)piVar12[6];
        *(float *)(iVar14 + 8) = local_e8;
        *(float *)(iVar14 + 0xc) = local_e4;
        *(float *)(iVar14 + 0x10) = local_e0;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)*(int *)(param_1 + 0xb4));
  }
  if (local_2c != **(int **)(iVar13 + iVar3)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



