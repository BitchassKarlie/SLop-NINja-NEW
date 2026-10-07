/* DECOMPILER REFERENCE ONLY; NOT RECOMPILABLE SOURCE. */
/* 00067e18 FUN_00067e18 */

void FUN_00067e18(int param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  float unaff_r10;
  int *piVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined local_54;
  undefined local_53;
  undefined local_52;
  char local_51;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  char local_49;
  
  fVar2 = DAT_000681cc;
  fVar29 = DAT_000681c8;
  iVar8 = DAT_000681d8 + 0x67e2a;
  fVar28 = *(float *)(param_1 + 0x1ac);
  if (*(int *)(param_1 + 0x68) != 0) {
    local_94 = *(float *)(param_1 + 0x14) * fVar28;
    iVar21 = *(int *)(iVar8 + DAT_000681dc);
    local_80 = fVar28 * *(float *)(param_1 + 0x18);
    local_6c = fVar28 * *(float *)(param_1 + 0x1c);
    local_58 = DAT_000681c8;
    local_90 = DAT_000681cc;
    local_8c = DAT_000681cc;
    local_88 = DAT_000681cc;
    local_84 = DAT_000681cc;
    local_7c = DAT_000681cc;
    local_78 = DAT_000681cc;
    local_74 = DAT_000681cc;
    local_70 = DAT_000681cc;
    local_68 = DAT_000681cc;
    local_64 = *(float *)(param_1 + 8) + DAT_000681cc;
    local_60 = *(float *)(param_1 + 0xc) + DAT_000681cc;
    local_5c = *(float *)(param_1 + 0x10) + DAT_000681cc;
    *(float *)(iVar21 + 0x1894) = local_94;
    *(float *)(iVar21 + 0x1898) = fVar2;
    *(float *)(iVar21 + 0x189c) = fVar2;
    *(float *)(iVar21 + 0x18a0) = fVar2;
    *(float *)(iVar21 + 0x18a4) = fVar2;
    *(float *)(iVar21 + 0x18a8) = local_80;
    *(float *)(iVar21 + 0x18ac) = fVar2;
    *(float *)(iVar21 + 0x18b0) = fVar2;
    *(float *)(iVar21 + 0x18b4) = fVar2;
    *(float *)(iVar21 + 0x18b8) = fVar2;
    *(float *)(iVar21 + 0x18bc) = local_6c;
    *(float *)(iVar21 + 0x18c0) = fVar2;
    *(float *)(iVar21 + 0x18c4) = local_64;
    *(float *)(iVar21 + 0x18c8) = local_60;
    *(float *)(iVar21 + 0x18cc) = local_5c;
    *(float *)(iVar21 + 0x18d0) = fVar29;
    *(int *)(iVar21 + 0x18d8) = *(int *)(iVar21 + 0x18d8) + 1;
    FUN_0008d434(iVar21,1);
    FUN_000995e4(*(undefined4 *)(param_1 + 0x68));
    puVar10 = *(undefined **)(iVar8 + DAT_000681e0);
    local_50 = *puVar10;
    local_4f = puVar10[1];
    local_4e = puVar10[2];
    local_4d = puVar10[3];
    FUN_000a35f4(&local_50);
    FUN_000995e0(*(undefined4 *)(param_1 + 0x68));
  }
  fVar29 = *(float *)(param_1 + 0x1e0);
  if (fVar29 == 0.0 || fVar29 < 0.0 != NAN(fVar29)) {
    unaff_r10 = 1.0;
  }
  if (fVar29 != 0.0 && fVar29 < 0.0 == NAN(fVar29)) {
    fVar29 = (float)FUN_00067c94(param_1,fVar29,fVar29 + DAT_000681f0,1,0);
    unaff_r10 = DAT_000681f4 - fVar29;
  }
  iVar21 = DAT_000681dc;
  fVar28 = DAT_000681d0;
  fVar2 = DAT_000681cc;
  fVar29 = DAT_000681c8;
  piVar12 = (int *)**(int **)(param_1 + 0x1a4);
  if (*(int **)(param_1 + 0x1a4) != piVar12) {
    puVar14 = (undefined8 *)(DAT_000681e4 + 0x67f4c);
    puVar9 = (undefined4 *)(DAT_000681e8 + 0x67f5a);
    puVar11 = (undefined4 *)(DAT_000681ec + 0x67f5e);
    do {
      uVar3 = FUN_00067c94(param_1,piVar12[0x2f],piVar12[0x30],1,0);
      puVar15 = (undefined8 *)(param_1 + 8);
      if (*(char *)(piVar12 + 5) == '\0') {
        puVar15 = puVar14;
      }
      fVar4 = (float)FUN_00049140(piVar12 + 9,uVar3);
      fVar5 = (float)FUN_00084144(piVar12 + 0xf,*(undefined4 *)(param_1 + 0x1dc));
      fVar22 = (float)piVar12[6];
      uVar1 = *puVar15;
      fVar32 = *(float *)(puVar15 + 1);
      fVar24 = fVar29 - fVar4 * fVar5;
      fVar30 = *(float *)(param_1 + 0x1ac);
      fVar25 = (float)piVar12[2];
      fVar5 = (float)piVar12[7];
      fVar26 = (float)piVar12[3];
      fVar23 = (float)piVar12[8];
      fVar27 = (float)piVar12[4];
      fVar4 = (float)FUN_00049140(piVar12 + 0x46,uVar3);
      fVar31 = *(float *)(param_1 + 0x1ac);
      local_d4 = (float)FUN_00084144(piVar12 + 0x4c,*(undefined4 *)(param_1 + 0x1dc));
      local_d4 = fVar4 * fVar31 * local_d4;
      local_c0 = local_d4 * (float)piVar12[0x44];
      local_98 = fVar29;
      local_ac = local_d4 * (float)piVar12[0x45];
      local_d4 = local_d4 * (float)piVar12[0x43];
      local_d0 = fVar2;
      local_cc = fVar2;
      local_c8 = fVar2;
      local_c4 = fVar2;
      local_bc = fVar2;
      local_b8 = fVar2;
      local_b4 = fVar2;
      local_b0 = fVar2;
      local_a8 = fVar2;
      local_a4 = fVar2;
      local_a0 = fVar2;
      local_9c = fVar2;
      FUN_0001d0e0(&local_d4,piVar12[0x32],piVar12[0x31]);
      fVar4 = (float)FUN_00084144(piVar12 + 0x34,*(undefined4 *)(param_1 + 0x1dc));
      if (fVar4 != 0.0) {
        uVar17 = (int)(fVar4 * fVar28) & 0xffff;
        uVar6 = FUN_000927b8(uVar17);
        uVar7 = FUN_000927c8(uVar17);
        FUN_0001d0e0(&local_d4,uVar6,uVar7);
      }
      local_a4 = local_a4 + (float)uVar1 + (fVar25 + fVar24 * fVar22) * fVar30;
      piVar19 = piVar12 + 0x19;
      iVar20 = *(int *)(iVar8 + iVar21);
      local_a0 = local_a0 + (float)((ulonglong)uVar1 >> 0x20) + (fVar26 + fVar24 * fVar5) * fVar30;
      piVar18 = piVar12 + 0x25;
      local_9c = local_9c + fVar32 + (fVar27 + fVar24 * fVar23) * fVar30;
      *(float *)(iVar20 + 0x1894) = local_d4;
      *(float *)(iVar20 + 0x1898) = local_d0;
      *(float *)(iVar20 + 0x189c) = local_cc;
      *(float *)(iVar20 + 0x18a0) = local_c8;
      *(float *)(iVar20 + 0x18a4) = local_c4;
      *(float *)(iVar20 + 0x18a8) = local_c0;
      *(float *)(iVar20 + 0x18ac) = local_bc;
      *(float *)(iVar20 + 0x18b0) = local_b8;
      *(float *)(iVar20 + 0x18b4) = local_b4;
      *(float *)(iVar20 + 0x18b8) = local_b0;
      *(float *)(iVar20 + 0x18bc) = local_ac;
      *(float *)(iVar20 + 0x18c0) = local_a8;
      *(float *)(iVar20 + 0x18c4) = local_a4;
      *(float *)(iVar20 + 0x18c8) = local_a0;
      *(float *)(iVar20 + 0x18cc) = local_9c;
      *(float *)(iVar20 + 0x18d0) = local_98;
      piVar16 = piVar12 + 0x1f;
      *(int *)(iVar20 + 0x18d8) = *(int *)(iVar20 + 0x18d8) + 1;
      FUN_0008d434(iVar20,1);
      fVar5 = (float)FUN_00049140(piVar19,uVar3);
      fVar22 = (float)FUN_00084144(piVar18,*(undefined4 *)(param_1 + 0x1dc));
      fVar23 = (float)FUN_00049140(piVar16,unaff_r10);
      fVar4 = DAT_000681d4;
      if (0.0 < fVar5 * fVar22 * fVar23 * DAT_000681d4) {
        fVar5 = (float)FUN_00049140(piVar19,uVar3);
        fVar22 = (float)FUN_00084144(piVar18,*(undefined4 *)(param_1 + 0x1dc));
        fVar23 = (float)FUN_00049140(piVar16,unaff_r10);
        fVar5 = fVar5 * fVar22 * fVar23 * fVar4;
        if (fVar5 < fVar4 != (NAN(fVar5) || NAN(fVar4))) {
          fVar5 = (float)FUN_00049140(piVar19,uVar3);
          fVar22 = (float)FUN_00084144(piVar18,*(undefined4 *)(param_1 + 0x1dc));
          fVar23 = (float)FUN_00049140(piVar16,unaff_r10);
          fVar4 = fVar5 * fVar22 * fVar23 * fVar4;
          local_49 = (0.0 < fVar4) * (char)(int)fVar4;
          goto LAB_0006814a;
        }
        local_49 = -1;
        if (0 < piVar12[0xe9]) goto LAB_00068166;
LAB_0006825c:
        local_4a = 0xff;
        local_4b = 0xff;
        local_4c = 0xff;
        if (piVar12[0x3e] != 0) {
          FUN_000995e4(piVar12[0x3e]);
          local_51 = local_49;
          local_54 = local_4c;
          local_53 = local_4b;
          local_52 = local_4a;
          FUN_000a344c(&local_54,piVar12[0x3f],piVar12[0x40],piVar12[0x41],piVar12[0x42]);
LAB_000681b2:
          FUN_000995e0(piVar12[0x3e]);
        }
      }
      else {
        local_49 = '\0';
LAB_0006814a:
        if (piVar12[0xe9] < 1) goto LAB_0006825c;
LAB_00068166:
        local_4a = 0xff;
        local_4b = 0xff;
        local_4c = 0xff;
        if (piVar12[0x3e] == 0) {
          FUN_000995e4(*puVar11);
        }
        else {
          FUN_000995e4(piVar12[0x3e]);
        }
        iVar20 = piVar12[0xe9];
        if (0 < iVar20) {
          iVar13 = 0;
          piVar16 = piVar12;
          do {
            iVar13 = iVar13 + 1;
            iVar20 = FUN_0009e880(&local_4c);
            piVar16[0x5f] = iVar20;
            piVar16 = piVar16 + 9;
            iVar20 = piVar12[0xe9];
          } while (iVar13 < iVar20);
        }
        FUN_000a3440(piVar12 + 0x59,iVar20,0);
        if (piVar12[0x3e] != 0) goto LAB_000681b2;
        FUN_000995e0(*puVar9);
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)*(int *)(param_1 + 0x1a4));
  }
  return;
}



